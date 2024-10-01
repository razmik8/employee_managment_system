#ifndef DEVELOPER_MAN_H
#define DEVELOPER_MAN_H
#include "developer.h"
#include "isalary.h"
class DeveloperManager : public Employee , public ISalary
{
public:
    int CalculateSalary(const Employee*) override;
    void displayInfo() override;

    DeveloperManager() = delete;
    DeveloperManager(int, std::vector<Developer*>);
    DeveloperManager(const DeveloperManager&) = delete;
    DeveloperManager(DeveloperManager&&)noexcept = delete;
    DeveloperManager& operator=(const DeveloperManager&) = delete;
    DeveloperManager& operator=(DeveloperManager&&)noexcept = delete;
    ~DeveloperManager();
private:
    int developerCount;
    std::vector<Developer*> vec_developer;
};
#endif