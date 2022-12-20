//
// Created by cras9 on 17/12/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_STUDENT_H
#define PROYECTO_ESTRUCTURAS_STUDENT_H


class Student {
    int timeTag;
public:
    Student();
    Student(int timeTag);
    int getTimeTag();
    void setTimeTag(int timeTag);
    int waitTime(int realTime);
};



#endif //PROYECTO_ESTRUCTURAS_STUDENT_H
