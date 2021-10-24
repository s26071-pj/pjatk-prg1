#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	char separator = ' ';	
	bool append_new_line = true; 
	bool print_reverse = false;
	
	for(int i = 0; i <argc; i++)
	{
		std::string arg = argv[i];

		if(arg == "-n")			//ćwiczenie dodatkowe numer 1
		{
			append_new_line = false;
		}
		else if(arg== "-r")		//ćwiczenie dodatkowe numer 2
		{
			print_reverse = true;
		}
		else if(arg == "-l")		//ćwiczenie dodatkowe numer 3
		{
			separator = '\n';
		}		
	}

	if(print_reverse == false)
	{
		for(int i = 0; i < argc; i++)
		{
			std::cout << argv[i] << separator;
			
		}
	}
	else
	{
		for(int i = argc -1; i >= 0; i--)	//sprawdzenie i wykonanie przy użyciu -r
		{
		std::cout << argv[i] << separator;
		
		}	
	}
	
	if(append_new_line == true)
	{
		std::cout << "\n";
	}
	
	return 0;
}
