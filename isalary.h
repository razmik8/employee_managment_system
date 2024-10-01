#ifndef ISALARY_H
#define ISALARY_H
#include <employee.h>
class ISalary
{
public:
    virtual int CalculateSalary(const Employee*) = 0;
};
#endif