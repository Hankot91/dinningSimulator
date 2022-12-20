//
// Created by cras9 on 14/12/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_LIST_H
#define PROYECTO_ESTRUCTURAS_LIST_H

#include <iostream>
#include <cassert>

using namespace std;

template<typename T>
struct Node{
    T data;
    Node<T> *next;

};

template<typename T>
class list {
private:
    Node<T> *begin;
    int count;
    Node<T> *makeNode(const T &value);

public:
    list();
    ~list();
    void insert(int pos, const T &value);
    void erase(int pos);
    T &get(int pos) const;
    void print() const;
    int size() const;

};

#endif //PROYECTO_ESTRUCTURAS_LIST_H
