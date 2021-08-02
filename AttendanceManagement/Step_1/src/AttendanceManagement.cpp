#include "../include/AttendanceManagement.hpp"
#include <fstream>
#include <string>

using namespace std;

AttendanceManagement::AttendanceManagement() {
}

void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state) {
    fstream readFile("./db/attendance.csv", ios::in);

    if (!readFile) {
        fstream createFile("./db/attendance.csv", ios::out);
        // Column titles
        createFile << "Id de Estudiante, "
                   << "Nombre/s, " 
                   << "Apellido/s, "
                   << "Id de Materia, "
                   << "Nombre de Materia, "
                   << "Marca Temporal, "
                   << "Presente" << endl;
        createFile.close();
    }
    readFile.close();

    fstream csvFile;
    csvFile.open("./db/attendance.csv", ios::app);
    if (csvFile.is_open()) {
        csvFile << student->getIdentifier() << ", "
                << student->getName() << ", "
                << student->getSurname() << ", "
                << course->getIdentifier() << ", "
                << course->getName() << ", "
                << datetime << ", "
                << state << endl;
    }
    csvFile.close();
}

void AttendanceManagement::showAttendance(Student* student, Course* course, string datetime, bool state) {
    cout << student->getIdentifier() << ", "
            << student->getName() << ", "
            << student->getSurname() << ", " 
            << course->getIdentifier() << ", " 
            << course->getName() << ", " 
            << datetime << ", " 
            << "present: " << state << ", " 
            << endl;
}


void AttendanceManagement::showAllAttendances() {
    ifstream csvFile;
    string line;

    csvFile.open("./db/attendance.csv", ios::in);

    if (!csvFile.eof()) {
        getline(csvFile, line); // obtengo el encabezado y lo muestro
        cout << line << endl;
        getline(csvFile, line); // obtengo la primera linea de datos útiles
        while (!csvFile.eof()) {
            cout << line << endl;
            getline(csvFile, line);
        }
    }
    csvFile.close();

}


AttendanceManagement::~AttendanceManagement() {
}