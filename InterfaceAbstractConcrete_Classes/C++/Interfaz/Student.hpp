#ifndef STUDENT_H
#define STUDENT_H
#include "Human.hpp"

// Clase concreta
class Student : public Human {
    private:
        int _identifier;
        string _name;
        string _surname;
    public:
        Student();
        Student(int id, string name, string surname);
        void setIdentifier(int id);
        void setName(string name);
        void setSurname(string surname);
        int getIdentifier();
        string getName();
        string getSurname();
        void eat();
        void toLive();
        virtual ~Student();
};

#endif // STUDENT_H