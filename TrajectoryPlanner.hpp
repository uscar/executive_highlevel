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
//#include "Vector3.hpp"
#include "Math.h"

class TrajectoryPlanner
{
public:
    TrajectoryPlanner(){}
    Trajectory CalculatePath(const Vector3& startPoint, const Vector3& startPointDerivative,
                             const Vector3& endPoint, const Vector3& endPointDerivative)
    {        
        return Trajectory(startPoint,
                          startPointDerivative,
                          endPoint * 3.0f - endPointDerivative - startPointDerivative * 2.0f,
                          endPointDerivative + startPointDerivative - endPoint * 2.0f);
    }
private:
    
};

#endif /* TrajectoryPlanner_hpp */
