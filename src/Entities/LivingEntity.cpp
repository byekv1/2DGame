#include "../../include/Entities/LivingEntity.h"

///
/// Getters
///

int LivingEntity::getHealth() const {
    return health;
}

///
/// Setters
///

void LivingEntity::setHealth(const int healthIn) {
    health = healthIn;
}

void LivingEntity::setHealth(const int *healthInPtr) {
    if (healthInPtr) health = *healthInPtr;
    else Log::write("Null healthInPtr passed in Entity::setX(const int *).", Log::Warning);
}

///
/// String Representation
///

std::string LivingEntity::toString() {
    //
    //  Expected Output of sprintf:
    //      buffer = "[LivingEntity: {health:##########}; ]"
    //

    char buffer[38];
    sprintf(
        buffer, "[LivingEntity: {health:%d}; ]", health
    );
    return std::string(buffer) + "::" + Entity::toString();
}

///
/// Constructors
///

LivingEntity::LivingEntity() : health(0), Entity::Entity(0,0) {}

LivingEntity::LivingEntity(int healthIn) : health(healthIn), Entity::Entity(0,0) {}

LivingEntity::LivingEntity(int xIn, int yIn, int healthIn) : health(0), Entity::Entity(xIn, yIn) {}

