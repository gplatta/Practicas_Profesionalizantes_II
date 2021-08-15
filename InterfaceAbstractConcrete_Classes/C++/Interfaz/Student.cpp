#include "Student.hpp"

Student::Student() {

}

Student::Student(int id, string name, string surname) {
    _identifier = id;
    _name = name;
    _surname = surname;
}

void Student::setIdentifier(int id) {
    _identifier = id;
}

void Student::setName(string name) {
    _name = name;
}

void Student::setSurname(string surname) {
    _surname = surname;
}

int Student::getIdentifier() {
    return _identifier;
}

string Student::getName() {
    return _name;
}

string Student::getSurname() {
    return _surname;
}

void Student::eat() {
    cout << "El estudiante come" << endl;
}

void Student::toLive() {
    cout << "El estudiante vive" << endl;
}

Student::~Student() {
    
}