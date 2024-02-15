cmake_minimum_required(VERSION 3.1)

project(uectl)

find_package(cpprestsdk REQUIRED)
find_package(Boost REQUIRED)

add_executable(${PROJECT_NAME} "uectl.cpp")
target_link_libraries(${PROJECT_NAME} ue_client Boost::headers boost_program_options cpprestsdk::cpprest)