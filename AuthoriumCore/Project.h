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
#include <vector>

namespace Authorium::core
{
    class Project
    {
    public:
        [[nodiscard]] std::string getProjectName() const noexcept;
        void setProjectName(std::string_view value);

		[[nodiscard]] std::vector<std::string> getAuthors() const noexcept;
		void addAuthor(const std::string& author);

    private:
       std::string projectName_;
	   std::vector<std::string> authors_;
    };

Project createNewProject(std::string_view path, const std::string& name);
Project loadProject(std::string_view path);
void saveProject(std::string_view path);
}


 #endif // AUTHORIUM_PROJECT_H

