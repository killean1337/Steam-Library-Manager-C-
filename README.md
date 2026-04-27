# Steam Library Manager (C++)

A console-based application for managing a personal game library.  
This project was created to practice Object-Oriented Programming (OOP) in C++ and working with multi-file projects.

---

## Features

- Add new games to the library
- Remove games by ID
- Search games by title
- Display all games
- Store game information (title, genre, playtime, status)

---

## Tech Stack

- C++
- Object-Oriented Programming (OOP)
- STL (vector, string)
- Console application

---

## Project Structure

Game.h / Game.cpp → Game model
Library.h / Library.cpp → Core logic
main.cpp → CLI interface

---

## How to run

g++ main.cpp Game.cpp Library.cpp -o app
./app

What I learned
Object-Oriented Programming in C++
Using STL containers
Structuring multi-file projects
Building CLI applications

Future improvements
File saving/loading system
Better filtering (genre, status)
Improved UI output formatting
