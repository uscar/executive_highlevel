//
//  Vector3.hpp
//  TrajectoryCalculation
//
//  Created by Rui Zeng on 11/16/16.
//  Copyright © 2016 Rui Zeng. All rights reserved.
//

#ifndef Vector3_hpp
#define Vector3_hpp

#include <stdio.h>

class Vector3
{
public:
    float x,y,z;
    Vector3(float x_, float y_, float z_);
    Vector3 operator+(const Vector3& rhs);
    Vector3 operator-(const Vector3& rhs);
    Vector3 operator=(const Vector3& rhs);
    bool operator==(const Vector3& rhs);
    Vector3 operator*(float scale);
    Vector3(const Vector3& rhs);
    
};

class Trajectory
{
public:
    Trajectory(const Vector3& A_, const Vector3& B_, const Vector3& C_)
    : A(A_), B(B_), C(C_)
    {}
    
    Vector3 GetPoint(float t_)
    {
        float t = t_;
        t = t - (long)t;
        return Vector3(A.x * t + B.x * t * t + C.x * t * t * t,
                       A.y * t + B.y * t * t + C.y * t * t * t,
                       A.z * t + B.z * t * t + C.z * t * t * t);
    }
    

private:
    Vector3 A, B, C; //Coefficient to decribe the cruve from 0 to 1;
};

#endif /* Vector3_hpp */
