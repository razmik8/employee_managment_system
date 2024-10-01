#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
class Employee
{
public:
    virtual void displayInfo() = 0;

    Employee(double baseSalary, double finalSalary, std::string name) : m_baseSalary(baseSalary), m_finalSalary(finalSalary), m_name(name), m_id(id++){};
    Employee(const Employee&) = delete;
    Employee(Employee&&)noexcept = delete;
    Employee& operator=(const Employee&) = delete;
    Employee& operator=(Employee&&)noexcept = delete;
    virtual ~Employee();
private:
    double m_baseSalary;
    double m_finalSalary;
    static int id;
    int m_id;
    std::string m_name;
};
int Employee::id = 1;
#endif