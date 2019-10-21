//
// Created by maffey on 16.10.2019.
//

// Based on: https://repl.it/@Maffey/Zadania-Lista-XI

#include <iostream>
#include "classes/Bank.h"
#include "classes/Smartphone.h"


// MAIN FUNCTION
int main() {


    Bank account{};
    account.correct_pin = 1301;
    account.balance = 1000;
    account.withdraw(500);
    account.deposit(100);
    account.get_balance();
    account.change_pin();

    Smartphone phone{};
    phone.calculator();
    phone.calendar();
    phone.contacts();
    phone.email();
    phone.message();

    return 0;
}
