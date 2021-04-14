

set(LIBRARY_01 FuncPtrParam)
add_library(${LIBRARY_01} STATIC)
target_include_directories(${LIBRARY_01} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_sources(${LIBRARY_01} PUBLIC ${LIBRARY_01}.cpp ${PROJECT_SOURCE_DIR}/include/${LIBRARY_01}.hpp)


set(LIBRARY_02 StringLib)
add_library(${LIBRARY_02} STATIC)
target_include_directories(${LIBRARY_02} PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_sources(${LIBRARY_02} PUBLIC ${LIBRARY_02}.cpp ${PROJECT_SOURCE_DIR}/include/${LIBRARY_02}.hpp)

add_executable(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}/include ${PROJECT_SOURCE_DIR}/include)
target_sources(${PROJECT_NAME} PUBLIC Main.cpp ${PROJECT_SOURCE_DIR}/include/Main.hpp)
target_link_directories(${PROJECT_NAME} PUBLIC $${PROJECT_BINARY_DIR}/lib/static)
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBRARY_02})