//
// Created by 전윤민 on 21. 4. 19..
//

#ifndef CAVEPHYSICS_PHYSICSBODY_H
#define CAVEPHYSICS_PHYSICSBODY_H

#include "../../Physics.h"

namespace cave {
    class PhysicsBody {
    public:
        PhysicsBody();

        ~PhysicsBody();

        void SetBody(const b2Body &body);
    };
}

#endif //CAVEPHYSICS_PHYSICSBODY_H
