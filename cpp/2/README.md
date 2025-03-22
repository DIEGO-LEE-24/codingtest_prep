# Brute-force Algorithm Study (Week 2)

This README summarizes the concepts and exercises covered in Week 2, focusing on the **Brute-force Algorithm** using C++.

## Overview
This class is part of the algorithm course designed to teach the fundamentals of brute-force algorithms and the essential programming elements needed to implement them using C++.

---

## 1. Loops
### Concept
A loop is a control structure that allows the repeated execution of a block of code as long as a specified condition is met.

### Types of Loops
- **For Loop**  
  Syntax: `for (initialization; condition; increment) { statements; }`
  - Executes the initialization once, then repeats the statements as long as the condition is true.
  - After each iteration, the increment statement is executed.
  - Variables declared inside the loop are destroyed when the loop ends.
  - Commonly used when the number of iterations is known.

- **While Loop**  
  Syntax: `while (condition) { statements; increment; }`
  - Repeats the statements as long as the condition is true.
  - Initialization occurs before the loop, and the increment is included within the loop body.
  - Used when the number of iterations is unknown and based on a condition.

- **Do-While Loop**  
  Syntax: `do { statements; increment; } while (condition);`
  - Executes the statements at least once, regardless of whether the condition is true or not.
  - Less commonly used.

---

## 2. Arrays
### Concept
An array is a data structure that stores elements of the same type in contiguous memory locations.

### Characteristics
- **Declaration:** `datatype arrayName[size];` (e.g., `int arr[5];`)
- **Indexing:** Starts from 0 (e.g., `arr[0]`, `arr[1]`, ..., `arr[size - 1]`).
- **Initialization:**
  - Directly: `int arr[5] = {0, 2, 5, 7, 8};`
  - Partial initialization: Uninitialized elements are set to 0.
  - `memset()` can be used to initialize an array (e.g., `memset(arr, 0, sizeof(arr));`).
- **Character Arrays vs. Strings:**
  - In C++, `std::string` is preferred, but character arrays (`char[]`) require a null terminator (`\0`).

### Important Considerations
- Accessing out-of-bounds indices leads to runtime errors or unpredictable behavior.
- Declaring arrays with extra space is a common practice to prevent errors.

---

## 3. Vectors (Dynamic Arrays)
### Concept
Vectors are part of the C++ Standard Library (STL) and provide dynamic array capabilities.

### Characteristics
- **Declaration:** `std::vector<datatype> vectorName;` or `std::vector<datatype> vectorName(size);`
- **Methods:**
  - `push_back()`: Adds an element to the end of the vector.
  - `pop_back()`: Removes the last element.
  - `size()`: Returns the number of elements.
  - `begin(), end()`: Returns iterators to the start and end.
- **Initialization:** `std::vector<int> v = {0, 2, 5};`
- **Dynamic resizing:** Vectors can grow and shrink during runtime, unlike arrays.

---

## 4. Loop Control Keywords
- **`break`:** Immediately exits the loop.
- **`continue`:** Skips the current iteration and continues with the next.

---

## 5. Brute-force Algorithm
### Concept
A brute-force algorithm attempts all possible solutions until a correct one is found.

### Characteristics
- Simple to implement and guarantees finding the solution if it exists.
- Generally inefficient due to high time complexity.
- Suitable when the problem size is small or when optimality is not required.

### When to Use
- When the input size is small.
- When other efficient algorithms are not available or too complex to implement.
- When straightforward implementation is more important than efficiency.

### Example Problem
Finding the closest sum to a target by selecting three numbers from a list (using a triple nested `for` loop).

---

## 6. Additional Considerations
- **Test Cases:** Essential for verifying the correctness of your code.
  - Single test case: As provided in the problem description.
  - Multiple test cases: Read all input cases and handle them accordingly.
  - End-of-file handling: Useful when input size is not specified.
- **Array Size Limitation:**
  - Local arrays (stack memory) are limited in size.
  - Global arrays (data memory) or `std::vector` (heap memory) are preferred for large data.

---

## Key Takeaways
- Brute-force algorithms explore all possible cases to find a solution.
- Loops and arrays are fundamental for implementing brute-force algorithms.
- Vectors provide a flexible alternative to arrays with dynamic sizing capabilities.
- Efficient use of loops and data structures can significantly enhance your solutions.


