# C++ Module: C++ Templates

## Overview

In this module, we will dive into **C++ Templates**, a powerful feature that allows you to write generic and reusable code. Templates enable you to create functions, classes, and structures that can operate on any data type. This flexibility significantly enhances code reuse, type safety, and maintainability. We will cover both **function templates** and **class templates**, along with advanced topics such as **template specialization** and **variadic templates**.

## Topics Covered

### 1. **Introduction to Templates**
- What **templates** are and why they are important in C++.
- The difference between **function templates** and **class templates**.
- How templates allow writing code that works with any data type.
- Syntax for defining function and class templates.

### 2. **Function Templates**
- How to define a **generic function** using function templates.
- The role of the **template parameter** and how the compiler deduces the type automatically.
- How to explicitly specify template arguments when calling template functions.
- Benefits of function templates in reducing code duplication.

### 3. **Class Templates**
- How to define a **generic class** using class templates.
- How to use class templates to create classes that work with different data types (e.g., containers like `LinkedList`, `Stack`).
- The role of template parameters in class templates.
- How to instantiate and use class templates with various data types.

### 4. **Template Specialization**
- What **template specialization** is and why it is useful.
- How to define specialized versions of templates for specific types.
- The difference between **full specialization** and **partial specialization**.
- Example use cases where template specialization is necessary (e.g., optimizing code for specific data types).

### 5. **Variadic Templates**
- Introduction to **variadic templates**, which allow working with an arbitrary number of template parameters.
- How to use **parameter packs** in function and class templates.
- Techniques for unpacking parameter packs and handling multiple template arguments.
- Practical examples of variadic templates for implementing flexible functions and classes.

### 6. **SFINAE (Substitution Failure Is Not An Error)**
- Understanding the concept of **SFINAE** and its role in template metaprogramming.
- How SFINAE can be used to enable or disable templates based on type traits.
- How to use **`std::enable_if`** and **`std::is_integral`** to create type-safe template functions.
  
### 7. **Template Metaprogramming**
- An introduction to **template metaprogramming** (TMP) for performing computations at compile time.
- How templates can be used to optimize performance by reducing runtime overhead.
- Examples of simple TMP techniques like computing factorials or Fibonacci numbers at compile time.

## Subject
https://cdn.intra.42.fr/pdf/pdf/147953/en.subject.pdf

---
