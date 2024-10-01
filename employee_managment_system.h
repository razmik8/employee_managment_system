#ifndef EMPLOYEE_MANAGMENT_SYSTEM_H
#define EMPLOYEE_MANAGMENT_SYSTEM_H
#include "accountant_manager.h"
#include "developer_manager.h"
#include "hr_manager.h"
#include "sales_manager.h"
class EmployeeManagmentSystem
{
public:
    
private:
    std::shared_ptr <AccountantManager> ptr_acc_man;
    std::shared_ptr <DeveloperManager> ptr_dev_man;
    std::shared_ptr <HRManager> ptr_hr_man;
    std::shared_ptr <SalesManager> ptr_sal_man;
};
#endif