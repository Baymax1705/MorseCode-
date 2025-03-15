#include <bits/stdc++.h>
using namespace std;

// Morse code mapping (GLobal Declaration)
map<char, string> morseCode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
    {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
    {' ', " / "} // Space between words
};

string toMorseCode(string text) {
    string morse = "";
    for (char c : text) {
        c = toupper(c); // Convert to uppercase 
        if (morseCode.find(c) != morseCode.end()) {
            morse += morseCode[c] + " ";
        }
    }
    return morse;
}

int main() {
    string input;
    cout << "Enter a string to convert: ";
    getline(cin, input);
    
    string morse = toMorseCode(input);
    cout << "Morse Code: " <<endl<< morse << endl;
    
    return 0;
}
