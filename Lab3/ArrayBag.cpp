/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/** 
 * @file:   ArrayBag.cpp
 * @author: cwood
 * @class:  ArrayBag
 * 
 * Created on February 8, 2019, 1:24 PM
 */

#include <string>
#include "ArrayBag.h"

template <class T>
ArrayBag<T>::ArrayBag() : itemCount(0) {
//    itemCount = 0;
}

template <class T>
ArrayBag<T>::ArrayBag(const ArrayBag& orig) {
    itemCount = orig.itemCount;
    for (int i = 0; i < orig.itemCount; i++) {
        items[i] = orig.items[i];
    }
}

template <class T>
ArrayBag<T>::~ArrayBag() {
}

//interface methods
template <class T>
int ArrayBag<T>::getCurrentSize() const {
    return itemCount;
}
template <class T>
bool ArrayBag<T>::isEmpty() const {
    return (itemCount == 0);
}
template <class T>
bool ArrayBag<T>::add(const T& anItem) {
    bool hasRoom = (itemCount < SIZE);
    if (hasRoom) {
        items[itemCount] = anItem;
        itemCount++;
    }
    return hasRoom;
}
template <class T>
bool ArrayBag<T>::remove(const T& anItem) {
    int location = find(anItem);
    bool canRemove = (!isEmpty() && location > -1);
    if (canRemove) {
        //remove
        itemCount--;
        items[location] = items[itemCount];
    }
    return canRemove;
}
template <class T>
void ArrayBag<T>::clear() {
    itemCount = 0;
}
template <class T>
int ArrayBag<T>::getFreqOf(const T& anItem) {
    int freq = 0;
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anItem) {
            freq++;
        }
    }
    return freq;
}
template <class T>
bool ArrayBag<T>::contains(const T& anItem) {
    bool found = false;
//    for (int i = 0; i < itemCount; i++) {
//        if (items[i] == anItem)
//            found = true;
//    }
    int i = 0;
    while (i < itemCount && !found) {
        if (items[i] == anItem)
            found = true;
        i++;
    }
    return found;
//    return (getFreqOf(anItem) > 0);

}
template <class T>
void ArrayBag<T>::prtItems() const {
    for (int i = 0; i < itemCount; i++) {
        std::cout << items[i] << "\t";
    }
    std::cout << std::endl;
}
template <class T>
int ArrayBag<T>::find(const T& anItem) {
    int index = -1;
    int i = 0;
    while (i < itemCount && index < 0) {
        if (items[i] == anItem)
            index = i;
        i++;
    }
    return index;
}

//homework methods
template <class T>
ArrayBag<T> ArrayBag<T>::bagUnion(const ArrayBag<T>& otherBag) const {
    
}

