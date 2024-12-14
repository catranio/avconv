cmake_minimum_required(VERSION 3.25)
project(avconv)
set(PROJECT_NAMESPACE IPS)

add_compile_options(-stdlib=libc++)
add_link_options(-lc++ -lc++abi)

include(FetchContent)
FetchContent_Declare(IpsCMakeModules
        GIT_REPOSITORY https://github.com/catranio/IpsCMakeModules.git)
FetchContent_MakeAvailable(IpsCMakeModules)

# dependencies
#ips_fetch(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt.git GIT_TAG 11.0.2)

ips_init(${PROJECT_NAME} CXX 23)

ips_add_target(${PROJECT_NAMESPACE}::${PROJECT_NAME} EXECUTABLE
        HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*
        SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/source/*
)

#target_compile_options(${PROJECT_NAME} PRIVATE -fsanitize=address,undefined,leak)
#target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=address,undefined,leak)

target_compile_options(${PROJECT_NAME} PRIVATE -fsanitize=thread)
target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=thread)

if (NOT DISABLED_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif ()
