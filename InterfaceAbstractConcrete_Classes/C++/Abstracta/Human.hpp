#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human {
    public:
        Human();
        void eat();
        virtual void toLive() = 0;
        virtual ~Human();
};

#endif // HUMAN_H