# Object-Oriented Programming Practicals (SPPU)

This repository contains the Object-Oriented Programming (OOP) practicals I completed as part of my curriculum at Savitribai Phule Pune University (SPPU). Each practical demonstrates the implementation of key OOP concepts in C++.

## Features

- Hands-on implementation of OOP principles such as:
  - Operator Overloading
  - Classes and Objects
  - Inheritance
  - Polymorphism
  - Encapsulation
  - Abstraction
  - File Handling
  - Templates (if applicable)
  - Standard Template Library (STL) usage (Vector, Map)
- Practical examples focusing on real-world problems and applications.
- Clear code documentation with comments for better understanding.

## Practical List

| Practical No. | Title/Concept                                   | Description                                                                                                                                                                                                          |
| ------------- | ----------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1             | Operator Overloading                            | Demonstrates operator overloading for complex numbers, including addition, multiplication, and input/output operations                                                                                               |
| 2             | Student Database Management                     | Illustrates constructors, static members, friend classes, dynamic memory allocation, and exception handling                                                                                                          |
| 3             | Publication Management                          | Implements class hierarchy with exception handling, dynamic memory allocation, and encapsulation                                                                                                                     |
| 4             | File Handling                                   | Demonstrates creating, writing to, reading from, and closing files in C++                                                                                                                                            |
| 5             | Template-Based Sorting                          | Implements a function template for selection sort to sort integer and float arrays                                                                                                                                   |
| 6             | Sorting and Searching with User-Defined Records | Implements sorting and searching functionality for user-defined records such as personal records (name, DOB, telephone number) and item records (item code, name, cost, quantity) using the vector container in C++. |
| 7             | Map Associative Container                       | Demonstrates the use of the `map` container in C++ to store states and their populations. The program looks up the population based on the state name entered by the user.                                           |

## Practical 1: Operator Overloading

### Description

This program demonstrates operator overloading for complex numbers. It implements:

- Addition of two complex numbers using the `+` operator.
- Multiplication of two complex numbers using the `*` operator.
- Input (`>>`) and output (`<<`) operators for complex number handling.

## Practical 2: Student Database Management

### Description

This program demonstrates the creation of a student database using various OOP concepts. It includes:

- Default constructor, parameterized constructor, and copy constructor.
- Use of `this` pointer.
- Dynamic memory allocation using `new` and `delete`.
- Exception handling for memory allocation errors.
- Static member functions to track the count of student objects.
- Friend class to modify private members.

## Practical 3: Publication Management

### Description

This program models a publishing company managing books and audio cassettes. It demonstrates:

- Class hierarchy with a base class `publications` and derived classes `bookpublications` and `tapepublication`.
- Use of constructors to initialize attributes.
- Exception handling to validate user input and reset attributes upon invalid input.
- Encapsulation through private and protected member variables.
- Dynamic memory allocation to ensure robust resource management.

## Practical 4: File Handling

### Description

This program demonstrates basic file handling operations in C++. It includes:

- Creating an output file and writing information to it.
- Closing the file after writing.
- Reopening the file as an input file.
- Reading and displaying the information from the file.

## Practical 5: Template-Based Sorting

### Description

This program demonstrates the use of function templates in C++ by implementing selection sort. It includes:

- Sorting an integer array.
- Sorting a float array.
- A menu-driven interface to choose the type of sorting.

## Practical 6: Sorting and Searching with User-Defined Records

### Description

This program demonstrates sorting and searching functionality using the Standard Template Library (STL) in C++. It works with user-defined records, such as:

- `PersonalRecord` (name, DOB, telephone number)
- `ItemRecord` (item code, name, cost, quantity)

It uses the `vector` container to store and manage records. The program provides functionality to:

- Add new records.
- Display records.
- Search for a record by name.
- Sort records by name using the `<` operator.

## Practical 7: Map Associative Container

### Description

This program demonstrates the use of the `map` container in C++ to store state names and their populations. The program prompts the user to enter a state name, then looks up the population of the state using the map. If the state is found, it prints the population; otherwise, it prints an error message.

## How to Compile and Run

To compile and run the programs, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Ayush-Butala/OOP-Practicals.git
   ```
2. **Navigate to the desired program file: For example:**:

```bash
  cd OOP/Practical1_E1
```

3. **Compile the program:**:

```bash
  g++ E1.cpp -o E1
```

4. **Run the program:**:

```bash
  ./E1
```

## Contributing

Feel free to open issues or submit pull requests if you find any bugs or have suggestions for improvement.
