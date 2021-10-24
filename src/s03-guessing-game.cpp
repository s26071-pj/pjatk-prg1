#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand (time(NULL));
	
	int random_number = rand() % 100 + 1;
	int guessing_number = 0; 

	while(true)
	{			
		std::cout << "Zgadnij liczbe: ";
		std::cin >> guessing_number;

		if(guessing_number == random_number)
		{
			std::cout << "Brawo udało ci sie zgadnąć! :) \n";	
			break;	
		}
		else if(guessing_number < random_number)
		{
			std::cout << "Twoja liczba jest za mała :( \n";
		}
		else if(guessing_number > random_number)
		{
			std::cout << "Twoja liczba jest za duża :( \n";
		}
	}	

	return 0;		
}
