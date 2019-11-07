//
// Created by maffey on 07.11.2019.
//

#include <iostream>
#include "classes/ClassStudent.h"

using namespace std;

int main() {
    ClassStudent student;
    student.setName("Jan");
    student.setSurname("Kowalski");
    student.setPesel(001204564332);
    student.setSchool("WWSIS");
    student.setClassNumber(2);
    student.show();

    return 0;
}

