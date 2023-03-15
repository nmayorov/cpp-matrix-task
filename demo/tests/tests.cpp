#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "hello_world.h"

TEST_CASE("Test SayHelloToWorld") {
    CHECK(SayHelloToWorld() == "Hello, World!");
}
