//
// Created by maffey on 07.11.2019.
//

#ifndef SANDBOX_SCHOOLSTUDENT_H
#define SANDBOX_SCHOOLSTUDENT_H

#include "Student.h"

using namespace std;

class SchoolStudent : public Student {
protected:
    string schoolName;

public:
    void setSchool(string schoolName);

};


#endif //SANDBOX_SCHOOLSTUDENT_H
