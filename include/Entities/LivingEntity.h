#pragma once
#include "Entity.h"

///
/// Forward Declaration
///

class Stringable;

///
/// LivingEntity Class
///

class LivingEntity : public Entity {

private:

    ///
    /// Properties
    ///

    int health;

public:

    ///
    /// Getters
    ///

    int getHealth();

    ///
    /// Setters
    ///

    void setHealth(int healthIn);

    ///
    /// String Representation
    ///

    virtual std::string toString();

    ///
    /// Constructors
    ///

    LivingEntity();
    LivingEntity(int healthIn);
    LivingEntity(int xIn, int yIn, int healthIn);

};