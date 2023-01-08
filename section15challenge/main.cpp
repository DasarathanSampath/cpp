#include <iostream>
#include <vector>

#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"

int main()
{
    std::cout.precision(2);
    std::cout << std::fixed;

    std::cout << "It is from main()." << std::endl;

    std::vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Dasa"});
    accounts.push_back(Account {"Kamalini", 10000});
    accounts.push_back(Account {"Bharathi", 5000});
    accounts.push_back(Account {"Pranave", 20000});
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    display(accounts);

    std::vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {});
    sav_accounts.push_back(Savings_Account {"Minooli"});
    sav_accounts.push_back(Savings_Account {"Sampath", 3000});
    sav_accounts.push_back(Savings_Account {"Bagirathan", 2000, 5.0});
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 4000);
    display(sav_accounts);

    return 0;
}