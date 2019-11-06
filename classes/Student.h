//
// Created by maffey on 06.11.2019.
//

#ifndef SANDBOX_STUDENT_H
#define SANDBOX_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    string name;
    string surname;
    int pesel;
public:
    void setName(const string &name);

    void setSurname(const string &surname);

    void setPesel(int pesel);
};


#endif //SANDBOX_STUDENT_H
