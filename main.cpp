#include <iostream>
#include <string>
#include <cstdio>

std::string escapeCharacters(const std::string&);

int main() {
    std::string toFix = "\"He\?llo b\'etween quotes\"";
    toFix = escapeCharacters(toFix);
    std::cout << toFix << "\n";

    return 0;
}

std::string escapeCharacters(const std::string& text) {
    std::string fixedText;
    char currentChar;
    for (int i = 0; i < text.length(); ++i) {
        currentChar = text[i];
        if (currentChar == '\\') {
            char nextChar = text[i + 1];
            fixedText.push_back(nextChar);
            i += 2;
        } else {
            fixedText.push_back(currentChar);
        }
    }
    return fixedText;
}

