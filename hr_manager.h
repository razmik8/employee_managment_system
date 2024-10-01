#ifndef HR_MAN_H
#define HR_MAN_H
#include "hrrepresentative.h"
#include "isalary.h"
class HRManager : public Employee , public ISalary
{
public:
    int CalculateSalary(const Employee*) override;
    void displayInfo() override;

    HRManager() = delete;
    HRManager(int, std::vector<HRManager*>);
    HRManager(const HRManager&) = delete;
    HRManager(HRManager&&)noexcept = delete;
    HRManager& operator=(const HRManager&) = delete;
    HRManager& operator=(HRManager&&)noexcept = delete;
    ~HRManager();
private:
    int developerCount;
    std::vector<HRManager*> vec_hrmanager;
};
#endif