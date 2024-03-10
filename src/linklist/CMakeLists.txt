file(GLOB_RECURSE SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(linklist SHARED ${SOURCE})
