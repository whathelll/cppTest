# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Create a variable called counter_SOURCES containing all .cpp files:
set(counter_SOURCES Counter.cpp Counter.h main.cpp)

# For a large number of source files you can create it in a simpler way
# using file() function:
# file(GLOB counter_SOURCES *.cpp)

# Create an executable file called counter from sources:
add_executable(counter ${counter_SOURCES})

add_library(SRC Counter.cpp)
