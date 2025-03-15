# Morse Code Converter

## Overview

This is a simple C++ program that converts English text into Morse code and also decodes Morse code back into English. It utilizes a predefined mapping of characters to Morse code and processes user input to generate the corresponding output.

## Features

- Converts English text to Morse code
- Decodes Morse code back to English
- Supports letters (A-Z), numbers (0-9), and spaces
- Case-insensitive conversion

## How to Use

1. Clone this repository:
   ```sh
   git clone https://github.com/your-username/MorseCode.git
2. Navigate to the project directory:
   ```sh
   cd MorseCode
3. Compile the program using a C++ compiler:
   ```sh
   g++ morse_code.cpp -o morse_code
4. Run the executable:
   ```sh
   ./morse_code


## Examples
# Encoding
  ```sh
Enter your choice (1 or 2): 1
Enter text to convert: Hello World
Morse Code: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
```
# Decoding
```sh
Enter your choice (1 or 2): 2
Enter Morse Code: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
Decoded Text: HELLO WORLD
```
## Requirements
* C++ compiler (g++)
* Standard C++ Library
