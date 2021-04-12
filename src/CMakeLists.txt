

add_executable(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}/include)
target_sources(${PROJECT_NAME} PUBLIC main.cpp)