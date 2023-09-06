# MMSproject
# Marriage Matching System

Marriage Matching System is a C/C++ application that helps users find compatible partners based on their preferences and attributes. It calculates the distance between individuals and suggests potential matches.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Reporting Errors or Bugs](#reporting-errors-or-bugs)
- [Authors](#authors)

## Features

- **Data Import:** Read data from a file (e.g., `sm.txt` or `people.txt`) to populate the database of potential partners.
- **Compatibility Calculation:** Calculate compatibility scores between users based on specified attributes and weights.
- **Matching:** Find the top two matching partners for a given user's preferred gender.
- **Flexible Configuration:** Customize attribute weights to fine-tune matching preferences.

## Requirements

- Dev-C++ IDE (or a C/C++ compiler of your choice)
- Input data file (e.g., "people.txt" or "sm.txt") containing the user database

## Installation
Clone the repository to your local machine:
   git clone https://github.com/HariniM03/MMSproject.git

1. Open the Dev-C++ IDE and select "File" > "Open Project..."

2. Navigate to the project directory (the directory where you cloned the repository) and select the appropriate project file based on your compiler:
  -For C code: main.c
  -For C++ code: main.cpp
3. Click the "Open" button to open the project.

4. Build and run the project from within the Dev-C++ IDE.

5. Create an input data file (e.g., "people.txt" or "sm.txt") with the user profiles, following the format specified in the code.

20
sravani female 26 7 7 7 7 7
meghana female 25 9 8 9 6 9
... (other user profiles) ...

## Usage
C Code:
1. Run the compiled C program:
./partner_matching_c

2. Follow the prompts to enter your preferred gender and attribute weights.

C++ Code:
1. Run the compiled C++ program:
./partner_matching_cpp

2. Follow the prompts to enter your preferred gender and attribute weights.

## File Structure
main.c: The main C source code file containing the application logic.
main.cpp: The main C++ source code file containing the application logic.
people.txt: Sample input data file with user profiles.
README.md: This documentation file.

## Reporting Bugs and Errors

If you encounter any bugs, errors, or have suggestions for improvements while using the Partner Matching System, we encourage you to report them through GitHub Issues. This provides a streamlined and organized way to track and address issues within the project.

Please follow these steps to report an issue:

1. Navigate to the [Issues](https://github.com/HariniM03/MMSproject/issues) section of this repository.
2. Click the "New Issue" button.
3. Describe the problem or suggestion in detail, providing as much context as possible.
4. Use appropriate labels to categorize the issue (e.g., "bug," "enhancement," etc.).
5. Click "Submit New Issue" to create the issue.
We greatly appreciate your contributions to improving the Partner Matching System and will address your reports promptly.
Thank you for your understanding and for helping us make this project better.

## Authors
@HariniM03
@vasanthii12
@swathishvani
@harikajaddu13

