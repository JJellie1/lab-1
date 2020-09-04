// Jason Jellie

#include <iostream>
#include <string>

bool check(std::string a);

int main(int argc, char *argv[]) 
{

	//Declaring Variables
	bool doubleLetter = false;

	std::cout << "This code will find words with double letters.\n";

#ifdef UNIT_TEST
	std::cout << "This is the Test Version.\n";
	std::string words[6] = {"a", "aardvark", "book", "fall", "abcdddddd", "test"};
	for(int x = 0; x < 6; x++) {
		std::cout << words[x];
		(check(words[x]) ? std::cout << " has double letters.\n" : std::cout << " does not have double letters.\n");
	}
	return 0;
#endif
	std::cout << "This is the Release Version.\n";
	std::string word = ""; 
	do {
		//Receiving user input
		std::cout << "Enter a word: ";
		std::cin >> word;
		//Calling function to search for double letters.
		doubleLetter = check(word);
		if (!doubleLetter) std::cout << word << " does not have double letters.\n";
	} while (doubleLetter == false);
	std::cout << word << " has double letters.\n";

	std::cout << "\n";
	return 0;
}

bool check(std::string a) 
{
	bool dl = false;
	//Looping through array until null terminator to search for double letters;
	for (int x = 1; a[x] != '\0'; x++) {
		if (a[x] == a[x - 1]) {
			dl = true;
			if (x > 1 && a[x] == a[x - 2]) {
				dl = false;
			}
		}
	}
	return dl;
}
