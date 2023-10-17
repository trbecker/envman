cmake_minimum_required (VERSION 3.2)

project(envman)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pg -g3" )

include_directories(${EXTERNAL_INSTALL_LOCATION}/include)
link_directories(${EXTERNAL_INSTALL_LOCATION}/lib)

include_directories(model)
include_directories(api)
include_directories(impl)

file(GLOB SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/api/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/impl/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/model/*.cpp
)

set(PUBLIC_INCUDE_DIR )

add_library(${PROJECT_NAME} STATIC ${SRCS})
target_link_libraries(${PROJECT_NAME} pistache pthread)
install(TARGETS ${PROJECT_NAME}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

file(GLOB API_H ${CMAKE_CURRENT_SOURCE_DIR}/api/*.h)
file(GLOB MODEL_H ${CMAKE_CURRENT_SOURCE_DIR}/model/*.h)

install(FILES ${API_H} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/envman/api)
install(FILES ${MODEL_H} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/envman/model)
