# Parameterized Constructor #
#### Elaborated tasks on the topic parameterized constructor ####

## <a href="Task1/Task1_Lab7/Task1_Lab7.cpp">First Task</a> ##
Develop a parameterized constructor for the presented Animal class,
which allows you to set the type and nickname of the animal and the name of the owner.

<br></br>
## <a href="Task2/Task2_Lab7/Task2_Lab7.cpp">Second Task</a> ##
Develop such parameterized constructors:
1) A constructor with a single parameter that creates a fraction from an integer.
The numerator of such a fraction is equal to the transmitted integer, and the denominator is
one.

2) A constructor that takes two int-type parameters specifying the value
of the numerator and denominator, and then reduces the fraction to an irreducible form with
a positive denominator. For example, the fraction 6/15 should be converted to 2/5 , and the fraction 8/(-6) to (-4)/3 . It is guaranteed that
the denominator is not zero.

3) Rewrite the constructors of the Rational class so that initialization of its fields is performed in the initialization lists.

<br></br>
## <a href="Task4/Task4_Lab7/Task4_Lab7.cpp">Fourth Task</a> ##
1) Write a class named Point. There should be two double-type member variables in this class: m_a and m_b with default values of 0.0. 
Write the constructor for this class and the print() output function.    
The following program:

```c++
#include <iostream>
int main()
{
First item;
Point two(2.0, 5.0);
first.print();
second.print();
returns 0;
}
```
Should produce the following result:     
```c++ 
Point(0, 0)    
Point(2, 5) 
```

2) Now add the distanceTo() method, which will take the second object of the Point class as a parameter and will calculate the distance between two
objects.     
Given two points ( a1 , b1 ) and ( a2 , b2 ), the distance between them can be calculated as follows:    
sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2)).    
Next program:

```c++
#include <iostream>
int main()
{
Point first;
Point second(2.0, 5.0);
first.print();
second.print();
return 0;
}
```

Should produce the following result:    
```c++ 
Point(0, 0)    
Point(2, 5)     
Distance between two points: 5.38516
```
