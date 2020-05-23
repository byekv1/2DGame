#include "../include/Log/Log.h"
#include "../include/Entities/Entity.h"
#include "../include/Entities/LivingEntity.h"
#include <iostream>
#include <ctime>

class Log;
class Stringable;
class Entity;
class LivingEntity;

//
//  Compile:
//      g++ ../src/Log.cpp ../src/Entities/*.cpp TestEntities.cpp -o TestEntities.exe
//

int main() {
    
    srand(time(nullptr));
    bool repeat = true;

    while (repeat) {

        //
        //  Entity
        //

        Entity *nullEntity, *randEntity;
        nullEntity = new Entity();
        randEntity = new Entity(rand(), rand());
        Log::write(nullEntity->toString().c_str());
        Log::write(randEntity->toString().c_str());
        delete nullEntity, randEntity;

        //
        //  Living Entity
        //

        LivingEntity *nullLivingEntity, *randHealthLE, *randLivingEntity;
        nullLivingEntity = new LivingEntity();
        randHealthLE = new LivingEntity(rand());
        randLivingEntity = new LivingEntity(rand(), rand(), rand());
        Log::write(nullLivingEntity->toString().c_str());
        Log::write(randHealthLE->toString().c_str());
        Log::write(randLivingEntity->toString().c_str());
        delete nullLivingEntity, randHealthLE, randLivingEntity;

        //
        //  Repeat?
        //

        std::cout << "Enter -1 to quit: ";
        int i; std::cin >> i;
        if (i == -1) repeat = false;

    }

    //
    //  Termination Sequence
    //

    std::cout << "Press Enter to Terminate..." << std::endl;
    std::cin.get();

}