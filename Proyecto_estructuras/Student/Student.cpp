#include "student.h"

Student::Student() {
    timeTag = 0;
}

Student::Student(int timeTag) {
    this->timeTag = timeTag;
}

int Student::getTimeTag() {
    return timeTag;
}

void Student::setTimeTag(int timeTag) {
    this->timeTag = timeTag;
}

int Student::waitTime(int realTime) {
    return realTime - timeTag;
}