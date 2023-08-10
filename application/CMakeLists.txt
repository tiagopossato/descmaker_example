cmake_minimum_required(VERSION 3.5.0)
#set(CMAKE_C_COMPILER "C:\\MinGW\\bin\\gcc")
#set(CMAKE_CXX_COMPILER  "C:\\MinGW\\bin\\g++")

project(Supervisor C)

# add the library
add_subdirectory(lib)
list(APPEND ADDITIONAL_LIBS Supervisor)

set(SOURCE_FILES src/main.c)
list(APPEND SOURCE_FILES src/supervisors/events.c)
list(APPEND SOURCE_FILES src/supervisors/handle_event.c)
list(APPEND SOURCE_FILES src/supervisors/sup.c)

add_executable(supervisor ${SOURCE_FILES})

message("${ADDITIONAL_LIBS}")

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBMODBUS REQUIRED libmodbus)

include_directories(${LIBMODBUS_INCLUDE_DIRS})
target_link_libraries(supervisor PRIVATE ${LIBMODBUS_LIBRARIES} ${ADDITIONAL_LIBS})


