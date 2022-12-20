
#ifndef PROYECTO_ESTRUCTURAS_QUEUE_H
#define PROYECTO_ESTRUCTURAS_QUEUE_H
#include "../List/List.h"

template <typename T>
class Queue{
    list<T> list;

public:
    void push(const T &value);
    void pop();
    T &front() const;
    T &back() const;
    int size();
    void print() const;
    int sizeQ() const;
    int size() const;
};

#endif //PROYECTO_ESTRUCTURAS_QUEUE_H