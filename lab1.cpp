// Jason Jellie

#include <iostream>
#include <string>

bool check(std::string a);

int main() 
{
    //Declaring Variables
    bool doubleLetter = false;
    //char word[20];
    std::string word = "";

    std::cout << "This code will find words with double letters.\n";
    do {
        //Receiving user input
        std::cout << "Enter a word: ";
        //Using getline instead of just cin to add support for searching an entire sentence for double letters. 
        getline(std::cin, word);        
        //Calling function to search for double letters.
        doubleLetter = check(word);
        if (!doubleLetter) std::cout << word << " does not have double letters.\n";
    } while (doubleLetter == false);
    std::cout << word << " has double letters.\n";

    return 0;
}

bool check(std::string a) 
{
    //Looping through array until null terminator to search for double letters;
    for (int x = 1; a[x] != '\0'; x++) {
        if (a[x] == a[x - 1]) return true;
    } 
    return false;
}
