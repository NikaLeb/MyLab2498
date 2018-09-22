// ЛР2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int main()
{
	int a = 300;
	int b = 560;
	std::cout << "a*a*b*b\n" << a * a*b*b << std::endl;
	std::cout << "b/a\n" << b/a << std::endl;
	std::cout << "symphol_A + a\n\n";

	std::cout << "\t\t\t\t\tC++ data type table\n\n";

	std::cout << "data type" << "\tnumber of bits" << "\t\tMIN value" << "\t\t\tMAX value" << std::endl <<std::endl;


	std::cout << "bool\t\t" << sizeof(bool) << "\t\t\t0"<< "\t\t\t\t1" << std::endl;
	std::cout << "char\t\t" << sizeof(char) << "\t\t\t-128" << "\t\t\t\t127" << std::endl;
	std::cout << "int\t\t" << sizeof(int) << "\t\t\t-2147483647-1" << "\t\t\t2147483647" << std::endl;
	std::cout << "short\t\t" << sizeof(short) << "\t\t\t-32768" << "\t\t\t\t32768" << std::endl;
	std::cout << "long\t\t" << sizeof(long) << "\t\t\t-2147483647-1" << "\t\t\t2147483647" << std::endl;
	std::cout << "long long\t" << sizeof(long long) << "\t\t\t-9 223 372 036 854 775 807" << "\t9 223 372 036 854 775 807"<< std::endl;
	std::cout << "double\t\t" << sizeof(double) << "\t\t\t1.7E-308" << "\t\t\t1.7E+308" << std::endl << std::endl;

	
	int max_int = 0b01111111111111111111111111111111;

	return 0;






}
