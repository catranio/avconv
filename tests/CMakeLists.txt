ips_fetch(doctest GIT_REPOSITORY https://github.com/doctest/doctest.git GIT_TAG dev)
list(APPEND CMAKE_MODULE_PATH ${doctest_SOURCE_DIR}/scripts/cmake)

ips_add_target(${PROJECT_NAME}.tests EXECUTABLE
        HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*
        SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*
        DEPENDS doctest::doctest)

include(CTest)
include(doctest)
doctest_discover_tests(${PROJECT_NAME}.tests)
