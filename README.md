# Tic-Tac-Toe-Game


---


# 🧩 Console-Based Board Game in C++

This is a simple console-based board game implemented in modern C++ using object-oriented programming principles. Two players (X and O) can move their pieces on a board by selecting positions. The system validates each move according to game rules and updates the board state accordingly.

---

## 📦 Features

- Two-player turn-based movement
- Position-based board navigation
- Move validation:
  - Can't move to occupied space
  - Can't move outside board boundaries
  - Can't move opponent's piece
- Clean object-oriented design
- Modern C++ best practices ( const-correctness, safe assignment)

---

---

## 👨‍💻 Classes Overview

### `User`
- Represents a player (username + symbol)
- Can move a piece from one position to another
- Validates moves before applying them

### `Board`
- Holds the 2D board and position mapping
- Allows querying and updating positions

### `Game`
- Manages both users
- Starts the game and handles turns

---


### ✅ Prerequisites
- C++17 or newer
- CMake (recommended)
- Linux/macOS/Windows terminal

### 🛠️ Build Instructions

Using CMake:

```bash
mkdir build
cd build
cmake ..
make
./BoardGame
````

Or directly using g++:

```bash
g++ -std=c++17 src/*.cpp main.cpp -o BoardGame
./BoardGame
```

---
---

## 🧠 Concepts Applied

* Object-Oriented Programming (OOP)
* Encapsulation and abstraction
* Clean Code practices
* STL containers (`std::unordered_map`, `std::string`, etc.)

---


## 📃 License

This project is licensed under the MIT License.

---

## ✍️ Author

**Abdo Alaa**
C++ Software Engineer 
Feel free to contribute or reach out!
