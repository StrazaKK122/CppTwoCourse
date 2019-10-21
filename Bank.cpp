//
// Created by matiu on 16.10.2019.
//

#include "Bank.h"

#include <iostream>

void Bank::withdraw(float money) {
    cout << "Wyplacanie pieniedzy...\n";
    Bank::balance -= money;
    cout << "Wyplaciles " << money << "$ ze swojego konta.\n";
}

void Bank::deposit(float money) {
    cout << "Wplacanie pieniedzy...\n";
    Bank::balance += money;
    cout << "Wplaciles " << money << "$ do swojego konta.\n";
}

void Bank::get_balance() {
    cout << "Twoj stan konta to: " << Bank::balance << "$.\n";
}