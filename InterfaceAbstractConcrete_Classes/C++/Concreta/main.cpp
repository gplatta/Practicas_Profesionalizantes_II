#include "Human.hpp"
#include "Student.hpp"

int main() {
    Student *estudiante = new Student(1, "Pepe", "Lui");
    
    cout << estudiante->getIdentifier() << endl
         << estudiante->getName() << " " << estudiante->getSurname() << endl;
    estudiante->eat();
    estudiante->toLive();

    return 0;
}