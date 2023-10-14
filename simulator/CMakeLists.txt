cmake_minimum_required (VERSION 3.2)

project(e2sim_envman)

find_package(cpprestsdk REQUIRED)
find_package(Boost REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pg -g3" )

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ue_api/model)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ue_api/api)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ue_api)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/nodeb_api/include)

file(GLOB_RECURSE SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/ue_api/api/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ue_api/model/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/nodeb_api/src/*.cpp
)

file(GLOB_RECURSE ENVMAN_PUBLIC_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/ue_api/api/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ue_api/model/*.h
)

message(GLOBAL_HEADERS="${ENVMAN_PUBLIC_HEADERS}")

add_library(${PROJECT_NAME} STATIC ${SRCS} )

set_target_properties(${PROJECT_NAME}
	PROPERTIES PUBLIC_HEADER "${ENVMAN_PUBLIC_HEADERS}")

target_link_libraries(${PROJECT_NAME} pistache pthread)
install(TARGETS ${PROJECT_NAME}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/nodeb_api/include/CppRestOpenAPIClient
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
