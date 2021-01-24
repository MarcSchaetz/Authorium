#include <catch.hpp>
#include "AuthoriumCore/Project.h"

TEST_CASE("Set and get ProjectName", "[Project][getset]")
{
    Authorium::core::Project p;
    p.setProjectName("MyProject");
    auto name = p.getProjectName();
    CHECK_THAT(name, Catch::Equals("MyProject"));
}