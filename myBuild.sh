cmake . -B ./build -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release

cmake --build build

cd build
ctest --output-on-failure
cd ..