/*
#include <iostream>
#include <string>

int main(int argc, char* argv[]) 
{
	if(argc < 2)
	{
		std::cout << "Wprowadź liczbe w wierszu poleceń \n";
		
		return 0;
	}

	int liczba = std::stoi(argv[1]);

	while(liczba >= 0)
	{
		std::cout << liczba << "\n";
		liczba--;
	}
	
	return 0;
}
*/
#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		std::cout << "Wprowadź liczbe w wierszu poleceń \n";
		
		return 0;
	}

	int liczba = std::stoi(argv[1]);

	for(int i = liczba; i >= 0; i--)
	{
		std::cout << i << "\n";
	}

//	for( ; liczba >= 0 ; liczba--)
//	{
//		std::cout << liczba << "\n";
//	}

	return 0;
}
