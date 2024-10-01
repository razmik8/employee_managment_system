#ifndef SALES_MAN_H
#define SALES_MAN_H
#include "salesperson.h"
#include "isalary.h"
class SalesManager : public Employee , public ISalary
{
public:
    int CalculateSalary(const Employee*) override;
    void displayInfo() override;

    SalesManager() = delete;
    SalesManager(int, std::vector<SalesPerson*>);
    SalesManager(const SalesManager&) = delete;
    SalesManager(SalesManager&&)noexcept = delete;
    SalesManager& operator=(const SalesManager&) = delete;
    SalesManager& operator=(SalesManager&&)noexcept = delete;
    ~SalesManager();
private:
    int developerCount;
    std::vector<SalesPerson*> vec_salesperson;
};
#endif