cmake_minimum_required(VERSION 3.12)
project(Test_Task)

set(CMAKE_CXX_STANDARD 11)

add_executable(Test_Task src/main.cpp src/cpp/XMLParser.cpp src/headers/XMLParser.h src/headers/XML.h src/cpp/XMLWriter.cpp src/headers/XMLWriter.h src/headers/string_methods.h src/cpp/string_methods.cpp)

find_package(Threads REQUIRED)
if(THREADS_HAVE_PTHREAD_ARG)
    target_compile_options(Test_Task PUBLIC "-pthread")
endif()
if(CMAKE_THREAD_LIBS_INIT)
    target_link_libraries(Test_Task "${CMAKE_THREAD_LIBS_INIT}")
endif()

include_directories(/usr/include/cxxtest)

find_package(CxxTest)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unit_tests ../test/src/runtest.cpp
            ../test/src/runtest.cpp
            ../test/src/headers/TestXMLParser.h
            ../test/src/headers/TestStringMethods.h
            ../test/src//headers/TestXMLWriter.h)
    target_link_libraries(unit_tests test/src/cpp/TestXMLParser.cpp test/src/cpp/TestStringMethods.cpp test/src/cpp/TestXMLWriter.cpp ${CXX_LIBRARIES}) # as needed
endif()

add_executable(Unit_Tests ../test/src/runtest.cpp test/src/cpp/TestXMLParser.cpp test/src/headers/TestXMLParser.h src/headers/XMLParser.h src/cpp/XMLParser.cpp src/headers/string_methods.h src/cpp/string_methods.cpp src/headers/Interval.h test/src/cpp/TestStringMethods.cpp test/src/headers/TestStringMethods.h test/src/cpp/TestXMLWriter.cpp test/src/headers/TestXMLWriter.h src/headers/XMLWriter.h src/cpp/XMLWriter.cpp)
