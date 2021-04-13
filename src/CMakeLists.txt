

set(LIBRARY_NAME FuncPtrParam)
add_library(${LIBRARY_NAME} STATIC)
target_include_directories(${LIBRARY_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_sources(${LIBRARY_NAME} PUBLIC FuncPtrParam.cpp ${PROJECT_SOURCE_DIR}/include/FuncPtrParam.hpp)



add_executable(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}/include ${PROJECT_SOURCE_DIR}/include)
target_sources(${PROJECT_NAME} PUBLIC Main.cpp ${PROJECT_SOURCE_DIR}/include/Main.hpp)
target_link_directories(${PROJECT_NAME} PUBLIC $${PROJECT_BINARY_DIR}/lib/static)
target_link_libraries(${PROJECT_NAME} PUBLIC FuncPtrParam)