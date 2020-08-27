// Jason Jellie

#include <iostream>
#include <string>

bool check(std::string a);

int main(int argc, char *argv[]) 
{
	//Declaring Variables
	bool doubleLetter = false;
	bool quit = false;
	std::string word = ""; 
	std::string words[6] = {"a", "aardvark", "book", "fall", "abcdddddd", "test"};
	char choice;

	std::cout << "This code will find words with double letters.\n";
	while (!quit) {
	std::cout << "\nAutomated: A/a\nEnter word: E/e\nQuit: Q/q\n";
	std::cin >> choice;
	std::cout << "\n";
		switch (choice) {
			case 'Q':
			case 'q':
				quit = true;
				break;
			case 'A':
			case 'a':
				for(int x = 0; x < 6; x++) {
					std::cout << words[x];
					(check(words[x]) ? std::cout << " has double letters.\n" : std::cout << " does not have double letters.\n");
				}
				break;
			case 'E':
			case 'e':
				do {
					//Receiving user input
					std::cout << "Enter a word: ";
					std::cin >> word;        
					//Calling function to search for double letters.
					doubleLetter = check(word);
					if (!doubleLetter) std::cout << word << " does not have double letters.\n";
				} while (doubleLetter == false);
				std::cout << word << " has double letters.\n";
				break;
			default: std::cout << "Please enter a valid option\n";
				 break;
		}
	}
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
