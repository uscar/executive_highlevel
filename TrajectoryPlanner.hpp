//
//  TrajectoryPlanner.hpp
//  TrajectoryCalculation
//
//  Created by Rui Zeng on 11/16/16.
//  Copyright © 2016 Rui Zeng. All rights reserved.
//

#ifndef TrajectoryPlanner_hpp
#define TrajectoryPlanner_hpp

#include <stdio.h>
#include "Vector3.hpp"

class TrajectoryPlanner
{
public:
    TrajectoryPlanner(){}
    Trajectory CalculatePath(const Vector3& startPoint, const Vector3& startPointDerivative,
                             const Vector3& endPoint, const Vector3& endPointDerivative)
    {
        Vector3 x0(startPoint);
        Vector3 x2(endPoint);
        Vector3 x0p(startPointDerivative);
        Vector3 x2p(endPointDerivative);
        
        return Trajectory(x0p, x2 * 3.0f - x2p - x0p * 2.0f, x2p + x0p - x2 * 2.0f);
    }
private:
    
};

#endif /* TrajectoryPlanner_hpp */
