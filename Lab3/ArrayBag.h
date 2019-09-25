/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArrayBag.h
 * Author: cwood
 *
 * Created on February 8, 2019, 1:24 PM
 */

#ifndef ARRAYBAG_H
#define ARRAYBAG_H

#include <string>
#include "BagADT.h"

template <class T>
class ArrayBag : BagADT<T> {
public:
    ArrayBag();
    ArrayBag(const ArrayBag& orig);
    virtual ~ArrayBag();
    
    //interface methods
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add (const T& anItem);
    bool remove (const T& anItem);
    void clear();
    int getFreqOf(const T& anItem);
    bool contains(const T& anItem);
    
    //other methods
    void prtItems() const;
    
    //homework methods
    ArrayBag<T> bagUnion(const ArrayBag<T> &otherBag) const;
    
private:
    static const int SIZE = 20;
    T items[SIZE];
    int itemCount;
    /**
     * Searches the array for anItem and returns its location
     * @param anItem item to search for
     * @return index of the item in the array; returns -1 if not found
     */
    int find(const T& anItem);

};
#include "ArrayBag.cpp"
#endif /* ARRAYBAG_H */

