#include <iostream>
#include <string>
#include <algorithm> // for std::reverse

// Function to calculate the length of a string
int stringLength(const std::string& str) {
    return str.length();
}

// Function to reverse a string
std::string reverseString(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main() {
    // Task: Initialize a string with the value "Hello, World!" and print it.
    std::string str = "Hello, World!";
    std::cout << "Initialized string: " << str << std::endl;

    // Task: Assign the string "Goodbye, World!" to the same string variable and print it.
    str = "Goodbye, World!";
    std::cout << "Assigned string: " << str << std::endl;

    // Task: Concatenate the strings "Hello" and "World" with a space in between and print the result.
    std::string hello = "Hello";
    std::string world = "World";
    std::string concatenatedString = hello + " " + world;
    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    // Task: Print the length of the string "Hello, World!".
    std::string helloWorld = "Hello, World!";
    int length = stringLength(helloWorld);
    std::cout << "Length of \"" << helloWorld << "\": " << length << std::endl;

    // Task: Access and print the first and last characters of the string "Hello, World!".
    char firstChar = helloWorld[0];
    char lastChar = helloWorld[helloWorld.length() - 1];
    std::cout << "First character: " << firstChar << ", Last character: " << lastChar << std::endl;

    // Task: Print the reversed string.
    std::string reversedString = reverseString(helloWorld);
    std::cout << "Reversed string: " << reversedString << std::endl;

    // Task: Check if the substring "World" exists in the string "Hello, World!" and print the result.
    bool containsWorld = helloWorld.find("World") != std::string::npos;
    std::cout << "Contains \"World\": " << (containsWorld ? "Yes" : "No") << std::endl;

    // Task: Convert the string "Hello, World!" to uppercase and print it. Use a simple loop to change each character.
    std::string uppercaseString = helloWorld;
    for (char& c : uppercaseString) {
        c = toupper(c);
    }
    std::cout << "Uppercase string: " << uppercaseString << std::endl;

    return 0;
}