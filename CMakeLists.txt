cmake_minimum_required(VERSION 3.24)

project(ive-got-the-power)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(nativePower_test tests/nativePower_test.cpp src/power.cpp)
add_executable(unoptimizedPower_test tests/unoptimizedPower_test.cpp src/power.cpp)
add_executable(optimizedPower_test tests/optimizedPower_test.cpp src/power.cpp)
add_executable(main main.cpp src/power.cpp)

target_link_libraries(nativePower_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(unoptimizedPower_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(optimizedPower_test PRIVATE Catch2::Catch2WithMain)
