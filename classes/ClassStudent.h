//
// Created by maffey on 07.11.2019.
//

#ifndef SANDBOX_CLASSSTUDENT_H
#define SANDBOX_CLASSSTUDENT_H


#include "SchoolStudent.h"

class ClassStudent : public SchoolStudent {
protected:
    int classNumber{};
public:
    void setClassNumber(int classNumber);

    void show();
};


#endif //SANDBOX_CLASSSTUDENT_H
