/************************************************************************************
 *
 * Project class
 * This class holds the information about everything project related.
 *
 ************************************************************************************/

 #ifndef AUTHORIUM_PROJECT_H
 #define AUTHORIUM_PROJECT_H

#include <string>
#include <string_view>

namespace Authorium::core
{
    class Project
    {
    public:
        [[nodiscard]] std::string getProjectName() const noexcept;
        void setProjectName(std::string_view value);


    private:
       std::string projectName_;
    };
}

 #endif // AUTHORIUM_PROJECT_H

