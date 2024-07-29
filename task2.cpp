#include <iostream>
#include <string>

int main() {
    // Task: Create a string that includes a newline character (\n) and a tab character (\t). Print the string to demonstrate how special characters work.
    std::string specialChars = "This is a line.\nThis is a new line.\tThis is a tabbed text.";
    std::cout << "String with special characters:\n" << specialChars << std::endl;

    // Task: Read a full sentence from the user and print it. Use basic input handling to store the sentence in a string.
    std::string userSentence;
    std::cout << "Please enter a sentence: ";
    std::getline(std::cin, userSentence); // Read a full line of input including spaces
    std::cout << "You entered: " << userSentence << std::endl;

    return 0;
}