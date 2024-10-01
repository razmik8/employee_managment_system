#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "employee.h"
class Developer : public Employee
{
public:
    void addProject();
    void displayInfo() override;

    Developer(double baseSalary, double finalSalary, std::string name, int projects): Employee(baseSalary, finalSalary, name), m_projects(projects){};
    Developer(const Developer&) = delete;
    Developer(Developer&&)noexcept = delete;
    Developer& operator=(const Developer&) = delete;
    Developer& operator=(Developer&&)noexcept = delete;
    ~Developer();
private:
    int m_projects;
};
#endif