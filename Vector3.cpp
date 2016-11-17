//
//  Vector3.cpp
//  TrajectoryCalculation
//
//  Created by Rui Zeng on 11/16/16.
//  Copyright © 2016 Rui Zeng. All rights reserved.
//

#include "Vector3.hpp"

Vector3::Vector3(float x_, float y_, float z_)
: x(x_), y(y_), z(z_)
{}

Vector3 Vector3::operator+(const Vector3& rhs)
{
    return Vector3(x+rhs.x, y+rhs.y, z+rhs.z);
}

Vector3 Vector3::operator-(const Vector3& rhs)
{
    return Vector3(x-rhs.x, y-rhs.y, z-rhs.z);
}

bool Vector3::operator==(const Vector3& rhs)
{
    return (x == rhs.x && y==rhs.y && z==rhs.z);
}

Vector3 Vector3::operator*(float scale)
{
    return Vector3(x*scale, y*scale, z*scale);
}

Vector3::Vector3(const Vector3& rhs)
{
    x = rhs.x;
    y = rhs.y;
    z = rhs.z;
}

Vector3 Vector3::operator=(const Vector3& rhs)
{
    return Vector3(rhs.x, rhs.y, rhs.z);
}

