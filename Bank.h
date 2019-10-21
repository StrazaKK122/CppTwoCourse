//
// Created by matiu on 16.10.2019.
//

// Based of: https://repl.it/@Maffey/Zadania-Lista-XI

#ifndef SANDBOX_BANK_H
#define SANDBOX_BANK_H

#include <iostream>

using namespace std;

class Bank {
private:
    bool bank_login();

public:
    int correct_pin;
    float balance;

    void withdraw(float money);
    void deposit(float money);
    void get_balance();

    void change_pin();


};


#endif //SANDBOX_BANK_H
