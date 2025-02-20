add_executable(test_ikea test_ikea.c)

target_include_directories(test_ikea PRIVATE ${CRITERION_INCLUDE_DIRS})
target_link_libraries(test_ikea PRIVATE ikea ${CRITERION_LIBRARIES})

add_test(NAME test_ikea COMMAND test_ikea)
