# Week 1: Data Types, Conditional Statements, and STL

## Introduction
This repository contains notes and exercises for **Week 1** of the programming course, covering fundamental topics such as data types, conditional statements, and the Standard Template Library (STL) in C++.

## Topics Covered

### 1. Data Types
- Primitive data types: `int`, `float`, `double`, `char`, `bool`
- Derived data types: `array`, `pointer`, `reference`
- User-defined data types: `struct`, `class`, `enum`
- Type modifiers: `signed`, `unsigned`, `short`, `long`

### 2. Conditional Statements
- `if`, `else if`, `else`
- Nested `if` statements
- `switch` statement
- Ternary operator (`condition ? expr1 : expr2`)

### 3. Standard Template Library (STL)
#### Containers
- `vector` (Dynamic array)
- `list` (Doubly linked list)
- `deque` (Double-ended queue)
- `stack` (LIFO structure)
- `queue` (FIFO structure)
- `priority_queue` (Heap-based priority queue)
- `set` (Unique sorted elements)
- `map` (Key-value pairs)
- `unordered_set` and `unordered_map` (Hash-based versions of `set` and `map`)

#### Iterators
- `begin()`, `end()`, `rbegin()`, `rend()`
- `advance()`, `next()`, `prev()`

#### Algorithms
- `sort()`, `reverse()`, `max_element()`, `min_element()`
- `find()`, `count()`, `binary_search()`

## Exercises

### Required Problems
| Problem ID | Title |
|------------|----------------|
| 2557 | Hello World |
| 10430 | Remainder |
| 9498 | Exam Score |

### Practice Problems
| Problem ID | Title |
|------------|----------------|
| 11654 | ASCII Code |
| 10926 | ??! |
| 1330 | Compare Two Numbers |
| 2884 | Alarm Clock |

## Code Examples
### Example 1: Conditional Statements
```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    if (x > 0) {
        cout << "Positive number";
    } else if (x < 0) {
        cout << "Negative number";
    } else {
        cout << "Zero";
    }
    return 0;
}
```

### Example 2: Using STL `vector`
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}
```

## How to Run the Code
1. Install a C++ compiler (e.g., GCC, Clang, MSVC)
2. Copy and paste the code into a `.cpp` file
3. Compile and run the program:
   ```sh
   g++ filename.cpp -o output
   ./output
   ```

## Resources
- [C++ Reference](https://cplusplus.com/)
- [STL Documentation](https://en.cppreference.com/w/)
