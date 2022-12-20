#include "DinningRoom.h"

DinningRoom::DinningRoom() {
    serviceTime = timeLeft = 0;
    currentStudent = Student();

}

DinningRoom::DinningRoom(int serviceTime, int timeTag) {
    this->serviceTime = serviceTime;
    currentStudent = Student(timeTag);
    timeLeft = 0;
}

int DinningRoom::getServiceTime() {
    return  serviceTime;

}

void DinningRoom::setServiceTime(int serviceTime) {
    this->serviceTime = serviceTime;

}

int DinningRoom::gettimeLeft() {
    return timeLeft;

}

void DinningRoom::setTimeleft(int timeLeft) {
    this->timeLeft = timeLeft;

}

Student DinningRoom::getCurrentStudent() {
    return currentStudent;

}

void DinningRoom::setCurrentStudent(Student s) {
    currentStudent = s;

}

void DinningRoom::tictac() {
    if (currentStudent.getTimeTag() != 0) {
        timeLeft = timeLeft - 1;
        if (timeLeft == 0) {
            currentStudent = Student();
        }
    }
}

void DinningRoom::startNew(Student newStudent) {
    currentStudent = newStudent;
    timeLeft = serviceTime;

}

bool DinningRoom::busy(){
    if(currentStudent.getTimeTag() != 0){
        return true;

    }else{
        return false;
    }

}