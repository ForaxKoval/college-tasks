#include <iostream>
#include <string>
	int main(){
		// SANDWICH WITH ICECREAM
        std::string sandwich;
		std::cout << "enter a row ->" << std::endl;
		std::cin >> sandwich;

		// count how mush symbols is

		int numofletters = 0;
    	for (int f = 0; sandwich[f] != '\0'; f++){
      		numofletters++;
    	}
		std::cout << "we have " << numofletters << " symbols" << std::endl;

		if (numofletters < 3)
		{
			std::cout << "Symbols must be more than 3 its not SANDWICH" << std::endl;
			return 0;
		}

		int middlesymbol = 	numofletters / 2;
		char middlesymbolChar = sandwich[middlesymbol];	

		for (int i = 0; i < middlesymbol; i++)
		{
			if (sandwich[i] != sandwich [numofletters - 1 - i]) 
			{
				std::cout << "its NOT SANDWICH" << std::endl;
				std::cout << "bye" << std::endl;
				return 0;
			}
		}
		std::cout << "our row: " << sandwich << " A SANDWICH YEEE" << std::endl;
		
		
		

		
}