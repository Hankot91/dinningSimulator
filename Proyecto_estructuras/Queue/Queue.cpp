#include "Queue.h"

template <typename T>
void Queue<T>::push(const T &value) {
    list.insert(list.size(),value);

}

template <typename T>
void Queue<T>::pop() {
    list.erase(0);

}

template <typename T>
T &Queue<T>::front() const {
    return list.get(0);

}

template <typename T>
T &Queue<T>::back() const {
    return list.get(list.size()-1);

}

template<typename T>
int Queue<T>::size() {
    return list.size();
}

template <typename T>
void Queue<T>::print() const {
    list.print();

}

