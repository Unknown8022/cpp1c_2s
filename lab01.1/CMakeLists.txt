project ("lab01.1")

include_directories("include")

file(GLOB SRC "src/*.cpp" "src/*.cxx")

add_executable (${PROJECT_NAME} ${SRC})

