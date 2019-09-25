/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/** 
 * @file:   BagADT.h
 * @author: cwood
 * @class:  BagADT
 *
 * Created on February 8, 2019, 1:20 PM
 */

#ifndef BAGADT_H
#define BAGADT_H

#include <string>

template <class T>
class BagADT {
public:
    /**
     * Returns the number of items in the bag
     * @return the number of items in the bag
     */
    virtual int getCurrentSize() const = 0;
    /**
     * Tests to see if the bag is empty
     * @return true if the bag is empty, false if it contains items
     */
    virtual bool isEmpty() const = 0;
    /**
     * Adds an item to the bag in no particular order
     * @param anItem item to be added
     * @return true if successfully added
     */
    virtual bool add (const T& anItem) = 0;
    /**
     * Removes an item from the bag
     * @param anItem the item to be removed
     * @return true if successfully removed
     */
    virtual bool remove (const T& anItem) = 0;
    /**
     * Removes all items from the bag
     */
    virtual void clear() = 0;
    /**
     * Counts the number of times an item is in the bag
     * @param anItem items to be counted
     * @return the number of times an item is in the bag
     */
    virtual int getFreqOf(const T& anItem) = 0;
    /**
     * Tests to see if an item is in the bag
     * @param anItem item to test for
     * @return true if the bag contains the item
     */
    virtual bool contains(const T& anItem) = 0;
    
};



#endif /* BAGADT_H */

