#include "AuthoriumCore/Project.h"
#include <catch.hpp>
#include <iostream>
#include <filesystem>

using Authorium::core;

TEST_CASE("Set and get ProjectName", "[Project][getset]")
{
    Authorium::core::Project p;
    p.setProjectName("MyProject");
    auto name = p.getProjectName();
    CHECK_THAT(name, Catch::Equals("MyProject"));
}

TEST_CASE("Create a new Project", "[Project]")
{
	Project p = createNewProject("NewProject.aproj", "MyNewProject");
	CHECK_THAT(p.getProjectName(), Catch::Equals("MyNewProject"));
	
	SECTION("Check project exists on filesystem")
	{
		bool projectExists = std::filesystem::exists("NewProject.aproj");
		CHECK(projectExists);
	}

	// Delete temporary project
	std::filesystem::remove("NewProject.aproj");
}


