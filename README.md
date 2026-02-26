# Mad Libs Game (C)

A simple Mad Libs-style terminal game written in C.

This program asks the user to enter different types of words (such as adjectives, nouns, and verbs) and uses them to generate a short and funny story.

## How It Works

The game prompts the user to input:

* One noun (animal or person)
* One verb ending in **-ing**
* Three adjectives

The inputs are collected using `fgets()` and the newline character (`\n`) is removed using `strcspn()` to ensure the final output is properly formatted.

These values are then inserted into a predefined story template and displayed on the screen.

## Example Output

```
Today I went to the zoo.
I saw a very fluffy dog.
It was giant and was running all day long.
Everyone said it was the most bizarre thing they had ever seen.
I will never forget that fluffy dog.
```

## Concepts Used

* Character arrays (strings)
* User input with `fgets()`
* Removing newline characters from input
* Basic string handling with `<string.h>`
* Formatted output using `printf()`

## How to Compile and Run

Compile using GCC:

```
gcc main.c -o madlibs
```

Run on Linux / macOS:

```
./madlibs
```

Run on Windows (PowerShell):

```
.\madlibs
```

## Purpose

This project was created to practice basic C programming concepts such as user input, string manipulation, and formatted output in a simple and interactive way.


