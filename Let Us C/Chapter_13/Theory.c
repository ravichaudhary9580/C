[A] Answer the following questions:
(a) Are the following array declarations correct?
    int a(25);//False
    int size = 10, b[size];// True
(b) Which element of the array does this expression reference?
    num[4]// 5th element
(c) What is the difference between the 5's in these two expressions?
    int num[5];//here 5 indicates the number of element in the array
    num[5] = 11;//here 5 is the index number of elment that is 6th element 
(d) What will happen if you try to put so many values into an array when you
    initialize it that the size of array is exceeded?
    //there is no upper bound checking in C so the extra entries will take memory from unreserved memory if that contain important data will lose it.
(e) What will happen if you put too few elements in an array when you initialize 
    it.// the rest memory contain 0
(f) What will happen if you assign a value to an element of an array whose
    subscript exceeds the size of the array?//no error shows as C dont have bound checking it will place the value at the location that is unreserved 
(g) When you pass an array as an argument to a function,  what actually gets
    passed?//it Passes the base address or the address of the first element 
(h) If you don't' initialize a static array , what will its elements be set 
    to? //all elements will be initialized to 0 by default for static arrays  
(i) if int s[5] is a 1-D array of integers, how will you refer to the third 
    element in the array using pointer notation?// *(s+2)
    