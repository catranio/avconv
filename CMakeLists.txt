cmake_minimum_required(VERSION 3.25)
project(__project_name__)
set(PROJECT_NAMESPACE IPS)

include(FetchContent)
FetchContent_Declare(IpsCMakeModules
        GIT_REPOSITORY https://github.com/catranio/IpsCMakeModules.git)
FetchContent_MakeAvailable(IpsCMakeModules)

ips_init(${PROJECT_NAME} CXX 20)

ips_add_target(${PROJECT_NAMESPACE}::${PROJECT_NAME} EXECUTABLE
        HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*
        SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*
)

if (NOT DISABLED_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif ()
