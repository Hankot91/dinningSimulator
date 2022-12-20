#include "List.h"

template<typename T>
list<T>::list() {
    begin = 0 ;
    count = 0;

}

template<typename T>
list<T>::~list() {
    Node<T> *del = begin;
    while (begin){
        begin = begin->next;
        delete del;
        del = begin;
    }
}

template<typename T>
Node<T> *list<T>::makeNode(const T &value) {
    Node<T> *temp = new Node<T>;
    temp->data = value;
    temp->next = 0;
    return temp;
}

template<typename T>
void list<T>::insert(int pos, const T &value) {

    if (pos < 0 || pos > count){
        cout<< "No es una posicion valida..." << endl;
        assert(false);

    } else{
        Node<T> *add = makeNode(value);
        if (pos == 0) {
            add->next = begin;
            begin = add;

        } else{
            Node<T> *cur = begin;
            for (int i = 0; i < pos-1; ++i) {
                cur = cur->next;

            }
            add->next = cur->next;
            cur->next = add;

        }

    }
    count++;

}

template<typename T>
void list<T>::erase(int pos){
    if (pos < 0 || pos > count){
        cout<< "No existe esa posicion..." << endl;
        assert(false);

    } else{
        Node<T> *del = begin;
        if (pos == 0){
            begin = begin->next;
            delete del;

        } else{
            Node<T> *cur = begin;
            for (int i = 0; i < pos-1; ++i) {
                cur = cur->next;

            }
            del = cur->next;
            cur->next = del->next;
            delete del;

        }

    }
    count--;

}

template<typename T>
T &list<T>::get(int pos) const {
    if (pos < 0 || pos > count-1){
        cout<< "No existe esa posicion..." << endl;
        assert(false);

    } else{
        Node<T> *cur = begin;
        for (int i = 0; i < pos; ++i) {
            cur = cur->next;

        }
        return cur->data;

    }

}

template<typename T>
void list<T>::print() const {
    if (count == 0){
        cout<< "La lista esta vacia" << endl;

    } else{
        Node<T> *cur = begin;
        for (int i = 0; i <= count-1; ++i) {
            cout << "Dato de la posicion " << i+1 << " " << cur->data << endl;
            cur = cur->next;

        }

    }

}

template<typename T>
int list<T>::size() const {
    return count;

}
