#pragma once
#include <string>
#include "../Stringable.h"

///
/// Forward Declaration
///

class Stringable;

///
/// Entity Class
///

class Entity : virtual Stringable {

private:

    ///
    /// Properties
    ///

    int x;
    int y;

public:

    ///
    /// Getters
    ///

    int getX();
    int getY();

    ///
    /// Setters
    ///

    void setX(int xIn);
    void setY(int yIn);

    ///
    /// String Representation
    ///

    virtual std::string toString();


    ///
    /// Constructors
    ///

    Entity();
    Entity(int xIn, int yIn);

};