#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int beer_count ;	
	if(argc < 2)
	{
		beer_count = 99;
	}
	else 
	{
		beer_count = std::stoi(argv[1]);
	}
	
	for(int i = beer_count; i >= 0; i--)
	{
		if(i > 0)
		{
			std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer. \n";
			std::cout << "Take one down, pass it around, " << i -1 << " bottles of beer on the wall... \n";
		}
		else
		{
			std::cout << "No more bottles of beer on the wall, no more bottles of beer. \n";
			std::cout << "Go to the store and buy some more, " << beer_count << " bottles of beer on the wall... \n";
		
		}
	}
	
	return 0;
	
}
