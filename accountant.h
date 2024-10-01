#ifndef ACCOUNTANT
#define ACCOUNTANT
#include "employee.h"
class Accountant : public Employee
{
public:
    void addReports();
    void displayInfo() override;

    Accountant(double baseSalary, double finalSalary, std::string name, int finance): Employee(baseSalary, finalSalary, name), m_financeReports(finance){};
    Accountant(const Accountant&) = delete;
    Accountant(Accountant&&)noexcept = delete;
    Accountant& operator=(const Accountant&) = delete;
    Accountant& operator=(Accountant&&)noexcept = delete;
    ~Accountant();
private:
    int m_financeReports;
};
#endif