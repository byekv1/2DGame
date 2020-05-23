#pragma once
#include "Entity.h"

///
/// Forward Declaration
///

class Log;
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

    int getHealth() const;

    ///
    /// Setters
    ///

    void setHealth(const int healthIn);
    void setHealth(const int *healthInPtr);

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