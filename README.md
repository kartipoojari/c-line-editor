# C Line Editor

A simple command-line text editor developed in C as part of **Activity 7: Line Editor Competition** for Portfolio Building.

## Student Details

- **Name:** Kartik Poojari
- **SRN:** R25EJ052
- **Branch:** CSIT
- **Semester:** 3rd Semester
- **Course:** Portfolio Building (B25CS0311)

## Project Description

The C Line Editor is a menu-driven program that allows users to manage lines of text through a command-line interface. It uses an array of character strings to store and manipulate text.

## Features

- **Insert Line:** Add a new line of text.
- **Delete Line:** Remove a selected line.
- **Display Lines:** Display all stored lines.
- **Menu-driven Interface:** Select operations using menu options.
- **Input Validation:** Handle invalid menu choices.

*Note: Save/load, search, find/replace, and undo are not implemented in the current version.*

## Technologies Used

- Programming Language: C
- Compiler: GCC
- Editor: Visual Studio Code
- Version Control: Git and GitHub

## Project Structure

```text
c-line-editor/
├── editor.c
├── editor.exe
└── README.md
```

## How to Compile and Run

### 1. Clone the repository

```bash
git clone https://github.com/kartipoojari/c-line-editor.git
cd c-line-editor
```

### 2. Compile the program

```bash
gcc editor.c -o editor
```

### 3. Run the program

On Windows:

```bash
editor.exe
```

On Linux or macOS:

```bash
./editor
```

## How to Use

1. Run the program.
2. Select an operation from the displayed menu.
3. Enter the required line number or text.
4. View the result on the screen.
5. Continue using the menu until you choose the exit option.

## Testing

Test the program with:
- Displaying lines when the editor is empty.
- Inserting a new line.
- Displaying inserted text.
- Deleting an existing line.
- Entering an invalid menu option.

Record the actual results after running these tests.

## Learning Outcomes

Through this project, I practised C programming, arrays, strings, functions, menu-driven programming, input validation, and basic text manipulation. I also gained experience organising source code and maintaining a project using GitHub.

## GitHub Repository

[View C Line Editor on GitHub](https://github.com/kartipoojari/c-line-editor)

---

**Developed by Kartik Poojari**  
B.Tech CSIT | 3rd Semester
