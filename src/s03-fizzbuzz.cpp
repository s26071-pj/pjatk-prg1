#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if(argc == 1)
	{
		std::cout << "Wprowadź liczbe w wierszu poleceń \n";
		return -1;	
	}

	int liczba = std::stoi(argv[1]);

	if(liczba <= 1)
	{
		std::cout << "Podaj liczbe większą niż 1 \n";
		return -1; //zabezpieczenie przed niewlasciwymi danymi
	}
	
	for(int i = 1; i <= liczba; ++i)
	{
		std::cout << i << " ";
		
		if(i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz";
		}
		else if(i % 3 ==0)
		{
			std::cout << "Fizz";
		}
		else if(i % 5 == 0)
		{
			std::cout << "Buzz";
		}
		std::cout << "\n";
	}

	return 0;
}
