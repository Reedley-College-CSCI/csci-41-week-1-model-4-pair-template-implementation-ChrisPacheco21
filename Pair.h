// Pair.h
// Christopher Pacheco
#ifndef PAIR_H
#define PAIR_H

// Initializing class template.
template <typename T>
class Pair {
private:
    T first;  // Initializing private members variables. 
    T second;
public:
    // Initializing constructor with parameters.
    Pair(T f, T s); 
    // Initializing getters and setters.
    T getFirst() const;  
    T getSecond() const;
    void setFirst(T f);
    void setSecond(T s);
};

// Defining the constructor, getters, and setters. 
template <typename T> 
Pair<T>::Pair(T f, T s) {
    first = f;
    second = s;
}

template <typename T>
T Pair<T>::getFirst() const {
    return first;
}

template <typename T>
T Pair<T>::getSecond() const {
    return second;
}

template <typename T> 
void Pair<T>::setFirst(T f) {
    first = f;
}

template <typename T>
void Pair<T>::setSecond(T s) {
    second = s;
}
#endif