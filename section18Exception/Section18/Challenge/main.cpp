#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    try {
        std::unique_ptr<Account> dasa_account = std::make_unique<Savings_Account>("Dasa", 1000);
        std::cout << *dasa_account << std::endl;
    }
    catch (const IllegalBalanceException &ex) {
        std::cerr << "Could not create account for negative balance" << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

