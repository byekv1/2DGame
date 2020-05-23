#pragma once
#include <string>
#include "../Log/Log.h"
#include "../Stringable.h"


///
/// Forward Declaration
///

class Log;
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

    int getX() const;
    int getY() const;

    ///
    /// Setters
    ///

    void setX(const int xIn);
    void setX(const int *xInPtr);
    void setY(const int yInPtr);
    void setY(const int *yInPtr);

    ///
    /// String Representation
    ///

    virtual std::string toString();


    ///
    /// Constructors
    ///

    Entity();
    Entity(const int xIn, const int yIn);

};