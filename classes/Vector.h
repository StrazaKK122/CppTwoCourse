//
// Created by maffey on 21.10.2019.
//

#ifndef SANDBOX_VECTOR_H
#define SANDBOX_VECTOR_H


class Vector {
private:
    int point_a[2]{};
    int point_b[2]{};
public:
    static int object_id;

    Vector(int point_a[2], int point_b[2]);

    virtual ~Vector();

    void add(Vector vector);

    void subtract(Vector vector);

    void multiply(Vector vector);

    // static int get_count();

    void show();

};


#endif //SANDBOX_VECTOR_H
