#pragma once

class Game {

private:

    ///
    /// Properties
    ///

    bool overFlag;

public:

    ///
    /// Getters
    ///

    bool isOver() const;

    ///
    /// Setters
    ///

    void setOver(bool &overFlagRefIn);

    ///
    /// Constructors
    ///

    Game();

};