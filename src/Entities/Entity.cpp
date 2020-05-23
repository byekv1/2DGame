#include "../../include/Entities/Entity.h"
#include <stdio.h>

///
/// Getters
///

int Entity::getX() const {
    return x;
}

int Entity::getY() const {
    return y;
}

///
/// Setters
///

void Entity::setX(const int &xIn) {
    x = xIn;
}

void Entity::setX(const int *xInPtr) {
    if (xInPtr) x = *xInPtr;
    else Log::write("Null xInPtr passed in Entity::setX(const int *).", Log::Warning);
}

void Entity::setY(const int &yIn) {
    y = yIn;
}

void Entity::setY(const int *yInPtr) {
    if (yInPtr) y = *yInPtr; 
    else Log::write("Null xInPtr passed in Entity::setX(const int *).", Log::Warning);
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

Entity::Entity() : x(0), y(0) {}

Entity::Entity(const int &xIn, const int &yIn) : x(xIn), y(yIn) {}
