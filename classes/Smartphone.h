//
// Created by maffey on 21.10.2019.
//

#ifndef SANDBOX_SMARTPHONE_H
#define SANDBOX_SMARTPHONE_H

#include <iostream>

using namespace std;

class Smartphone {
private:
    static void email_content(const string &email, const string &topic, const string &message);

    static void message_content(int contactNumber, const string &msg);

    static void contacts_list();

public:
    static void email();

    static void calculator();

    static void calendar();

    static void contacts();

    static void message();

};


#endif //SANDBOX_SMARTPHONE_H
