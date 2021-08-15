#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human {
    public:
        Human();
        void eat();
        void toLive();
        virtual ~Human();
};

#endif // HUMAN_H