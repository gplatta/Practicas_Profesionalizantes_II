#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human {
    public:
        Human();
        virtual void eat() = 0;
        virtual void toLive() = 0;
        virtual ~Human();
};

#endif // HUMAN_H