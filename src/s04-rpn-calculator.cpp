#include <iostream>
#include <string>
#include <math.h>

int main(int argc,char* argv[])
{

	float liczba1;
	float liczba2;
	float wynik;
	std::string op;
	bool polish_notation = false; 
	
	if(argc < 3)
	{
		std::cout << "Nie podano wystarczajacej ilosci argumentow! \n";

		return 0;
	}
	for(int i = 0 ; i < argc; i++) //szukanie notacji
	{
		std::string arg = argv[i];
	
		if(arg == "p")
		{
			polish_notation = true;
		}
	}

	if(polish_notation == true)
	{
		liczba1 = std::stoi(argv[1]);
		liczba2 = std::stoi(argv[2]);
		op = argv[3];
		
	}
	else
	{
		op = argv[1];
		liczba1 = std::stoi(argv[2]);
		liczba2 = std::stoi(argv[3]);
	}
		
	if(op == "+") wynik = liczba1 + liczba2;
	if(op == "-") wynik = liczba1 - liczba2;
	if(op == "*") wynik = liczba1 * liczba2;
	if(op == "/") wynik = liczba1 / liczba2;
	if(op == "//") wynik = floor(liczba1 / liczba2);
	if(op == "%") wynik = (int)liczba1 % (int)liczba2;
	if(op == "**") wynik = pow(liczba1,liczba2);
	if(op == "sqrt") wynik = sqrt(liczba1);
	
	std::cout << wynik << "\n";

	return 0;
}
