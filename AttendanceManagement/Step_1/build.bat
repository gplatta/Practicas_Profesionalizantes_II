:: Compilo el Binario
cd src
g++ -Wall -std=c++11 -c Course.cpp
g++ -Wall -std=c++11 -c Student.cpp 
g++ -Wall -std=c++11 -c AttendanceManagement.cpp 
cd ..
g++ -Wall -std=c++11 -c main.cpp 
g++ ./src/Course.o ./src/Student.o ./src/AttendanceManagement.o main.o -o Assistance.exe

echo "Programa compilado"
pause

:: Limpio los códigos objeto
cd src
DEL *.o
cd ..
DEL *.o