#include <iostream>
#include <string>

int main(int argc, char* argv[])
{	
	if(argc < 2)
	{
		std::cout << "Podaj haslo w wierszu polecen. \n";
		
		return 0;	
	}	

	std::string password = argv[1];
	std::string given_password;

	while(password != given_password)
	{
		std::cout << "Podaj poprawne hasło: ";
		std::cin >> given_password;
	}
	
	std::cout << "ok! \n";
	
	return 0;
}






