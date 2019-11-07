//
// Created by maffey on 07.11.2019.
//

#include "ClassStudent.h"

void ClassStudent::setClassNumber(int classNumber) {
    ClassStudent::classNumber = classNumber;
}

void ClassStudent::show() {
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "PESEL: " << pesel << endl;
    cout << "School: " << schoolName << endl;
    cout << "Class: " << classNumber << endl;

}
