#include <iostream>

#include "Account_Util.h"

//Utility for Account

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n==Accounts========================" << std::endl;
    for(const auto &acc: accounts){
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=======Accounts Deposit===========" << std::endl;
    for (auto &acc: accounts){
        if(acc.deposit(amount)){
            std::cout << "Deposit " << amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failes Deposit of " << amount << " to " << acc << std::endl;
        }
             
    }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n==Accounts Withdraw==============" << std::endl;
    for (auto &acc: accounts){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed withdrawl of " << amount << " from " << acc << std::endl;
        }
    }
}

//Unitlity for Savings_Account

void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "\n==Savings_Accounts========================" << std::endl;
    for(const auto &acc: accounts){
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n=======Savings_Accounts Deposit===========" << std::endl;
    for (auto &acc: accounts){
        if(acc.deposit(amount)){
            std::cout << "Deposit " << amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failes Deposit of " << amount << " to " << acc << std::endl;
        }
             
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n==Savings_Accounts Withdraw==============" << std::endl;
    for (auto &acc: accounts){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed withdrawl of " << amount << " from " << acc << std::endl;
        }
    }
}