/*
A class is a specification or blueprint for a number of objects. Objects consist of both data and
functions that operate on that data. In a class definition, the members—whether data or functions—
can be private, meaning they can be accessed only by member functions of that class, or 
public, meaning they can be accessed by any function in the program.

A member function is a function that is a member of a class. Member functions have access to
an object’s private data, while non-member functions do not.

A constructor is a member function, with the same name as its class, that is executed every
time an object of the class is created. A constructor has no return type but can take arguments.
It is often used to give initial values to object data members. Constructors can be overloaded,
so an object can be initialized in different ways.

A destructor is a member function with the same name as its class but preceded by a tilde (~).
It is called when an object is destroyed. A destructor takes no arguments and has no return value.
In the computer’s memory there is a separate copy of the data members for each object that is
created from a class, but there is only one copy of a class’s member functions. You can restrict
a data item to a single instance for all objects of a class by making it static.

One reason to use OOP is the close correspondence between real-world objects and OOP
classes. Deciding what objects and classes to use in a program can be complicated. For small
programs, trial and error may be sufficient. For large programs, a more systematic approach is
usually needed.
*/