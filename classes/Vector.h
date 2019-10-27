//
// Created by maffey on 21.10.2019.
//

#ifndef SANDBOX_VECTOR_H
#define SANDBOX_VECTOR_H


class Vector {
private:
    //static int object_id;
    int point_a[2]{};
    int point_b[2]{};
public:
    Vector(int point_a[2], int point_b[2]);

    virtual ~Vector();

    int add(Vector vector);

    int subtract(Vector vector);

    int multiply(Vector vector);

    // static int get_count();

    void show();

};


#endif //SANDBOX_VECTOR_H
