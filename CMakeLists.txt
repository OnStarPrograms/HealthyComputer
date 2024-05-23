cmake_minimum_required(VERSION 3.5.0)
project(HealthyComputer VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(SFML_DIR "C:/Libraries/SFML-2.6.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(include)
file(GLOB SOURCE "src/*.cpp")

add_executable(HealthyComputer ${SOURCE})
target_link_libraries(HealthyComputer sfml-graphics sfml-audio)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)