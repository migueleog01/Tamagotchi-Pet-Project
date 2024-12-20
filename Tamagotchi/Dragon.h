#ifndef DRAGON_H
#define DRAGON_H
#include "Pet.h"


class Dragon : public Pet
{
public:
    Dragon();
    Dragon(string,int,int,int,int,int,int,int);
    int GetAgility();
    int GetSpeed();
    int GetReflexes();

    void SetAgility(int);
    void SetSpeed(int);
    void SetReflexes(int);

    //virtual functions
    //int GetAction();S
    //void SetAction(int);
    void Setstats(int);
    void PrintInfo() override;
    //void PrintGameOptions();
    void suggestions() override;
    void feed() override;

    
private:
    int agility;
    int speed;
    int reflexes;

};
#endif