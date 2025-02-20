set(TEST_SRC test_ikea.c)

add_executable(unit_tests ${TEST_SRC})

target_include_directories(unit_tests PRIVATE ${CRITERION_INCLUDE_DIRS})
target_link_libraries(unit_tests PRIVATE ikea ${CRITERION_LIBRARIES})

set_target_properties(unit_tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../../)

add_test(NAME unit_tests COMMAND unit_tests)
