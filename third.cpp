//
// Created by matiu on 16.10.2019.
//

#include <iostream>
#include "Bank.h"
#include "Smartphone.h"


// MAIN FUNCTION
int main() {

    /*
    Bank account{};
    account.correct_pin = 1301;
    account.balance = 1000;
    account.withdraw(500);
    account.deposit(100);
    account.get_balance();
    account.change_pin();
     */

    Smartphone phone{};
    phone.calculator();
    phone.calendar();
    phone.contacts();
    phone.email();
    phone.message();

    return 0;
}
