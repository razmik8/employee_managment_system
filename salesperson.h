#ifndef SALESPERSON_H
#define SALESPERSON_H
#include "employee.h"
class SalesPerson : public Employee
{
public:
    void addSales();
    void displayInfo() override;

    SalesPerson(double baseSalary, double finalSalary, std::string name, int totalSales): Employee(baseSalary, finalSalary, name), m_totalSales(totalSales){};
    SalesPerson(const SalesPerson&) = delete;
    SalesPerson(SalesPerson&&)noexcept = delete;
    SalesPerson& operator=(const SalesPerson&) = delete;
    SalesPerson& operator=(SalesPerson&&)noexcept = delete;
    ~SalesPerson();
private:
    int m_totalSales;
};
#endif