#include "../../include/Entities/LivingEntity.h"

///
/// Getters
///

int LivingEntity::getHealth() {
    return health;
}

///
/// Setters
///

void LivingEntity::setHealth(int healthIn) {
    health = healthIn;
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

LivingEntity::LivingEntity() : LivingEntity(0) {}

LivingEntity::LivingEntity(int healthIn) : LivingEntity(0, 0, healthIn) {}

LivingEntity::LivingEntity(int xIn, int yIn, int healthIn) : Entity::Entity(xIn, yIn) {
    setHealth(healthIn);
}

