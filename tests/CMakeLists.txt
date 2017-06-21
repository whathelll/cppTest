# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(${PROJECT_SOURCE_DIR}/src)

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()


# Create a variable called test_SOURCES containing all .cpp files:
set(counter_SOURCES testGoogleTest.cpp)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(runTest ${counter_SOURCES})
target_link_libraries(runTest gtest_main SRC)

add_test(NAME runTest COMMAND runTest)
