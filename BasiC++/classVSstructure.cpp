/*
In C++, both classes and structures are used to define custom data types, 
but there are some differences in how they behave by default. 
Here are the key differences between classes and structures in C++:

1. **Default Member Access Control:**
   - In a class, members (data members and member functions) are private by default. 
   This means that the members are not accessible outside the class 
   without explicit access modifiers like `public`, `protected`, or `private`.
   - In a structure, members are public by default. This means that the members can be accessed and modified 
   directly from outside the structure without any access modifiers.
2. **Inheritance:**
   - Classes are typically used when you want to define more complex types with the ability to implement
    inheritance, polymorphism, and encapsulation. You can use access control specifiers 
    (`public`, `protected`, `private`) to control the visibility of members in derived classes.
   - Structures are primarily used for simple data structures where you want to group related 
   data members together but don't require complex inheritance and member access control. 
   In C++, you can still use structures for more complex tasks, but they lack some features of classes
    like inheritance.
3. **Usage Convention:**
   - Classes are often used for defining objects with behaviors and attributes, 
   emphasizing encapsulation and data hiding. They are suitable for modeling real-world entities 
   in object-oriented programming.
   - Structures are commonly used for plain data structures that group related data members together,
    such as representing points, rectangles, or other simple collections of data. 
    They are often used for data-oriented programming.
4. **Compatibility:**
   - In terms of memory layout and compatibility, classes and structures are the same. 
   You can often interchange them without issues, especially when working with C libraries or 
   handling binary data.
It's important to note that C++ allows you to override the default access control in
both classes and structures. You can make class members public or make structure members private,
depending on your needs. The choice between using a class or a structure should be 
based on your design requirements and coding conventions.
*/
