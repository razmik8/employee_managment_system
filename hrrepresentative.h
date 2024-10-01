#ifndef HRREPRESENTATIVE_H
#define HRREPRESENTATIVE_H
#include "employee.h"
class HRRepresentative : public Employee
{
public:
    void addEmployee();
    void displayInfo() override;

    HRRepresentative(double baseSalary, double finalSalary, std::string name, int EmployeesManaged): Employee(baseSalary, finalSalary, name), m_EmployeesManaged(EmployeesManaged){};
    HRRepresentative(const HRRepresentative&) = delete;
    HRRepresentative(HRRepresentative&&)noexcept = delete;
    HRRepresentative& operator=(const HRRepresentative&) = delete;
    HRRepresentative& operator=(HRRepresentative&&)noexcept = delete;
    ~HRRepresentative();
private:
    int m_EmployeesManaged;
};
#endif