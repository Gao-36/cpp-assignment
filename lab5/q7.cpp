#include <iostream>
#include <string>
using namespace std;

int countWords(const string& line) {
    int count = 0;
    bool inWord = false;
    
    for (char c : line) {
        if (isspace(c)) {
            if (inWord) count++;
            inWord = false;
        } else {
            inWord = true;
        }
    }
    if (inWord) count++;
    
    return count;
}

int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);
    
    cout << "Number of words: " << countWords(line) << endl;
    return 0;
}