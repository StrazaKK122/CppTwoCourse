//
// Created by maffey on 31.10.2019.
//

#ifndef SANDBOX_CUBOID_H
#define SANDBOX_CUBOID_H


class Cuboid {
private:
    float length;
    float width;
    float height;
public:
    Cuboid(float length, float width, float height);

    float calculateVolume();

    friend float calculateArea(Cuboid cuboid);
};


#endif //SANDBOX_CUBOID_H
