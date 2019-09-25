/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * @file:   main.cpp
 * @author: cwood
 *
 * Created on February 8, 2019, 1:20 PM
 */

#include <cstdlib>
#include <iostream>
#include "ArrayBag.h"
using namespace std;

template <class T>
void displayBag(const ArrayBag<T>& bag);
/*
 * 
 */
int main() {
    
    
     // Test using bags of integers
	ArrayBag<int> bag1;
	for (int i=1; i<=5; i++)
	    bag1.add(i);
	ArrayBag<int> bag2;
	bag2.add(20);
	bag2.add(30);
	bag2.add(40);
	bag2.add(50);
	bag2.add(1);
	
	std::cout << "First bag: ";
	displayBag(bag1);
	
	std::cout << "Second bag: ";
	displayBag(bag2);

// Test bagUnion, bagIntersection, bagDifference for bag1, bag2
        ArrayBag<int> bag1u2 = bag1.bagUnion(bag2);
	
// Test using bags of strings
	ArrayBag<std::string> bag3;
	bag3.add("one");
	bag3.add("two");
	bag3.add("three");
	bag3.add("four");
	bag3.add("five");
	
	ArrayBag<std::string> bag4;
	bag4.add("twenty");
	bag4.add("thirty");
	bag4.add("fourty");
	bag4.add("fifty");
	bag4.add("one");
	
	std::cout << "First bag: ";
	displayBag(bag3);
	
	std::cout << "Second bag: ";
	displayBag(bag4);
	
// Test bagUnion, bagIntersection, bagDifference for bag3, bag4
     
     
    return 0;
}

template <class T>
void displayBag(const ArrayBag<T>& bag) {
    //must pass by reference
    //pass by value calls copy constructor = shallow copy
    cout << "The bag contains " << bag.getCurrentSize()
        << " items:" << endl;
    bag.prtItems();
}

