#include "../../include/Entities/Entity.h"
#include <stdio.h>

///
/// Getters
///

int Entity::getX() {
    return x;
}

int Entity::getY() {
    return y;
}

///
/// Setters
///

void Entity::setX(int xIn) {
    x = xIn;
}

void Entity::setY(int yIn) {
    y = yIn;
}

///
/// String Representation
///

std::string Entity::toString() {
    //
    //  Expected Output of sprintf:
    //      buffer = "[Entity: {x:##########}; {y:##########};" ]
    //

    char buffer[41];
    sprintf(
        buffer, "[Entity: {x:%d}; {y:%d}; ]", x, y
        );
    return std::string(buffer); 
}

///
/// Constructors
///

Entity::Entity() : Entity(0,0) {}

Entity::Entity(int xIn, int yIn) {
    setX(xIn);
    setY(yIn);
}
