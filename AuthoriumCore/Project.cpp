#include "Project.h"

namespace Authorium::core
{

std::string Project::getProjectName() const noexcept
{
    return projectName_;
}

void Project::setProjectName(std::string_view value)
{
    projectName_ = value;
}


}
