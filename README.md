# bag-array

In this lab, you will demonstrate your understanding of a static ADT. We will continue working with the Array-Based implementation of the Bag ADT in this exercise. 

The following 3 methods are to be added to the Array-based implementation of the Bag ADT (ArrayBag.h and ArrayBag.cpp).  Methods must compose a new Bag object by accessing the elements of the underlying array of the Bag objects.  You may not convert the Bags to vectors in the completion of these methods.  The main method must also be updated to thoroughly test the newly added methods. Your output does not need to match the samples shown.  

Note: Remember that the ArrayBag is a template, not an actual class. The last line of ArrayBag.h should say: #include "ArrayBag.cpp". Therefore, ArrayBag.cpp cannot be added to the project; you can open it in the NetBeans editor from the File tab. Also note that the examples below use <ItemType> instead of the usual <T>.

1) bagUnion:  The union of two bags is a new bag containing the combined contents of the original two bags. Design and specify a method union for the ArrayBag that returns as a new bag the union of the bag receiving the call to the method and the bag that is the method's parameter.  The method signature (which should appear in the .h file and be implemented in the .cpp file is:

    ArrayBag<ItemType> bagUnion(const ArrayBag<ItemType> &otherBag) const;

This method would be called in main() with:

    ArrayBag<int> bag1u2 = bag1.bagUnion(bag2);

Note that the union of two bags might contain duplicate items.  For example, if object x occurs five times in one bag and twice in another, the union of these bags contains x seven times. The union does not affect the contents of the original bags.  




2) bagIntersection: The intersection of two bags is a new bag containing the entries that occur in both of the original bags.  Design and specify a method intersection for the ArrayBag that returns as a new bag the intersection of the bag receiving the call to the method and the bag that is the method's parameter. The method signature is:

    ArrayBag<ItemType> bagIntersection(const ArrayBag<ItemType> &otherBag) const;

Note that the intersection of two bags might contain duplicate items.  For example, if object x occurs five times in one bag and twice in another, the intersection of these bags contains x two times.  The intersection does not affect the contents of the original bags.




3) bagDifference: The difference of two bags is a new bag containing the entries that would be left in one bag after removing those that also occur in the second. Design and specify a method difference for the ArrayBag that returns as a new bag the difference of the bag receiving the call to the method and the bag that is the method's parameter.  The method signature is:

    ArrayBag<ItemType> bagDifference(const ArrayBag<ItemType> &otherBag) const;

Note that the difference of two bags might contain duplicate items.  For example, if object x occurs five times in one bag and twice in another, the difference of these bags contains x three times.



 
