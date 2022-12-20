#include "../List/List.cpp"
#include "../Queue/Queue.cpp"
#include "../DinningRoom/DinningRoom.cpp"
#include "../Student/Student.cpp"
#include <cstdlib>

bool newStudent(){

    if (1 + rand() % 28 == 28){
        return true;
    } else{
        return false;

    }

}

int sumList(list<int> a){
    int aux=0;
    for (int j = 0; j <a.size(); ++j) {
        aux += a.get(j);

    }
    return aux;

}

void Simulation(int numberSeg, int serviceTime){

    int promTime = 0;
    DinningRoom dinningRoom = DinningRoom(serviceTime, 0);
    Queue<Student> dinningQueue;
    list<int> timeLeft;

    for (int i = 0; i < numberSeg; ++i) {
        if (newStudent() == true) {
            Student student = Student(i);
            dinningQueue.push(Student(i));

        }

        if (!dinningRoom.busy() && dinningQueue.size() > 0){
            Student nextStudent = dinningQueue.front();
            dinningRoom.startNew(nextStudent);
            dinningQueue.pop();
            timeLeft.insert(timeLeft.size(),nextStudent.waitTime(i));

        }
        dinningRoom.tictac();

    }

    for (int j = 0; j < timeLeft.size(); ++j) {
        promTime += timeLeft.get(j);

    }

    promTime/=timeLeft.size();

    cout << "El tiempo de espera promedio es de: "
         << promTime << " segundos. Estudiantes restantes " << dinningQueue.size() <<endl;

}