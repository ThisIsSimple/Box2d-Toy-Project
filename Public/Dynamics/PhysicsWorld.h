//
// Created by 전윤민 on 21. 4. 19..
//

#ifndef CAVEPHYSICS_PHYSICSWORLD_H
#define CAVEPHYSICS_PHYSICSWORLD_H

#include <iostream>

namespace cave {
    class PhysicsWorld {
    public:
        PhysicsWorld(float x, float y) {
            b2Vec2 gravity(x, y);
//            b2World world(gravity);
            std::cout << x << " " << y << std::endl;
        }
    };
}

#endif //CAVEPHYSICS_PHYSICSWORLD_H
