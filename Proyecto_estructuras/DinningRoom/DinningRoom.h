
#ifndef PROYECTO_ESTRUCTURAS_DINNINGROOM_H
#define PROYECTO_ESTRUCTURAS_DINNINGROOM_H

#include "../Student/Student.h"

class DinningRoom {
    int serviceTime,timeLeft;
    Student currentStudent;
public:
    DinningRoom();
    DinningRoom(int serviceTime, int timeTag);
    int getServiceTime();
    void setServiceTime(int serviceTime);
    int gettimeLeft();
    void setTimeleft(int timeLeft);
    Student getCurrentStudent();
    void setCurrentStudent(Student s);
    void tictac();
    void startNew(Student);
    bool busy();

};


#endif //PROYECTO_ESTRUCTURAS_DINNINGROOM_H
