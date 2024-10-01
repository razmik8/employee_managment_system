#ifndef ACCOUNTANT_MAN_H
#define ACCOUNTANT_MAN_H
#include "accountant.h"
#include "isalary.h"
class AccountantManager : public Employee , public ISalary
{
public:
    int CalculateSalary(const Employee*) override;
    void displayInfo() override;

    AccountantManager() = delete;
    AccountantManager(int, std::vector<Accountant*>);
    AccountantManager(const AccountantManager&) = delete;
    AccountantManager(AccountantManager&&)noexcept = delete;
    AccountantManager& operator=(const AccountantManager&) = delete;
    AccountantManager& operator=(AccountantManager&&)noexcept = delete;
    ~AccountantManager();
private:
    int AccountantCount;
    std::vector<Accountant*> vec_accountant;
};
#endif