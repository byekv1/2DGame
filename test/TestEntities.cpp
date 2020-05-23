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
//      g++ ../src/Log/Log.cpp ../src/Entities/*.cpp TestEntities.cpp -o TestEntities.exe
//

int main() {
    
    srand(time(nullptr));
    bool repeat = true;

    Log::write("\n/*\tTestEntities\t*/\n");

    while (repeat) {

        //
        //  Entity Test
        //

        Log::write("Standard Entity Test...");
        Entity *nullEntity, *randEntity;
        nullEntity = new Entity();
        randEntity = new Entity(rand(), rand());
        Log::write(nullEntity->toString().c_str());
        Log::write(randEntity->toString().c_str());
        
        // Entity Ptr Test
        
        Log::write("Pointer Entity Test...");
        int *entXPosPtr; int *entYPosPtr;
        entXPosPtr = new int(rand()); entYPosPtr = new int(rand());
        randEntity->setX(entXPosPtr);
        randEntity->setY(entYPosPtr);
        Log::write(randEntity->toString().c_str());
        delete entXPosPtr, entYPosPtr;
        

        //  Entity Ref Test

        Log::write("Reference Entity Test...");
        int entXPos, entYPos;
        entXPos = rand(); entYPos = rand();
        randEntity->setX(&entXPos);
        randEntity->setY(&entYPos);
        Log::write(randEntity->toString().c_str());
        Log::write();

        //  Entity Clean Up

        delete nullEntity, randEntity;

        //
        //  Living Entity Test
        //

        Log::write("Standard LivingEntity Test...");
        LivingEntity *nullLivingEntity, *randHealthLE, *randLivingEntity;
        nullLivingEntity = new LivingEntity();
        randHealthLE = new LivingEntity(rand());
        randLivingEntity = new LivingEntity(rand(), rand(), rand());
        Log::write(nullLivingEntity->toString().c_str());
        Log::write(randHealthLE->toString().c_str());
        Log::write(randLivingEntity->toString().c_str());

        //  LivingEntity Ptr Test

        Log::write("Pointer LivingEntity Test...");
        int *lEntXPtr, *lEntYPtr, *lEntHealthPtr;
        lEntXPtr = new int(rand());
        lEntYPtr = new int(rand());
        lEntHealthPtr = new int(rand());
        randLivingEntity->setX(lEntXPtr);
        randLivingEntity->setY(lEntYPtr);
        randLivingEntity->setHealth(lEntHealthPtr);
        Log::write(randLivingEntity->toString().c_str());
        delete lEntXPtr, lEntYPtr, lEntHealthPtr;

        //  LivingEntity Ref Test

        Log::write("Reference LivingEntity Test...");
        int lEntX, lEntY, lEntHealth;
        lEntX = rand(); lEntY = rand();
        lEntHealth = rand();
        randLivingEntity->setX(&lEntX);
        randLivingEntity->setY(&lEntY);
        randLivingEntity->setHealth(&lEntHealth);
        Log::write(randLivingEntity->toString().c_str());

        //  LivingEntity Clean Up

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