project(common_p2)

# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_COMPILER g++)
# set(CMAKE_CXX_FLAGS "-std=c++2a -Wall -Wextra -Werror -Wpedantic")
# set(CMAKE_VERBOSE_MAKEFILE on)

set(sources logging.cpp)

include_directories(${PROJECT_SOURCE_DIR})

add_library(libcommon_p2 STATIC ${sources})