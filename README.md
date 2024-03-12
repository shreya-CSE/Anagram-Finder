# Anagrams Finder

## Introduction

Welcome to the Anagrams Finder program! This C application is designed to analyze a dictionary file, identify pairs of anagrams, and display the first and last pairs found. An anagram is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.

## Features

- **Anagram Detection:** Identifies and displays pairs of anagrams from the provided dictionary file.
- **First and Last Anagrams:** Highlights the first and last pairs of anagrams found during the analysis.
- **User Input:** Prompts users to enter the name of the dictionary file (e.g., `easy.txt` or `medium.txt`).

## Getting Started

1. Clone the repository.
2. Compile the C program using a compatible compiler.
3. Run the executable to find anagrams in a dictionary file.

```bash
gcc anagrams.c -o anagrams
./anagrams
```

## File Input

1. **Dictionary File:** The program prompts users to enter the name of the dictionary file (e.g., `easy.txt` or `medium.txt`).
2. **File Loading:** Reads the specified file to identify anagrams.

## Finding Anagrams

1. **Anagram Function:** The `anagram` function compares the occurrences of letters in two strings to determine if they are anagrams.
2. **Printing Function:** The `print_array` function prints a character array.

## First and Last Anagram Pairs

- The program identifies and displays pairs of anagrams found in the dictionary file.
- Highlights the first pair of anagrams found and the last pair encountered during the analysis.
