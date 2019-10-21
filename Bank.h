//
// Created by matiu on 16.10.2019.
//

#ifndef SANDBOX_BANK_H
#define SANDBOX_BANK_H

#include <iostream>

using namespace std;

class Bank {

private:
    string login; // Possibly obsolete
    int correct_pin;
    float balance;

public:
    bool is_blocked; // Returns true if there were too many unsuccessful attempts at logging in.

    void withdraw(float money);
    void deposit(float money);
    void get_balance();

};


#endif //SANDBOX_BANK_H
