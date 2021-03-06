﻿// ЛР1 СТРУКТУРА ПРОГРАММЫ, ТИПЫ ДАННЫХ, ОСНОВНЫЕ ОПЕРАТОРЫ

/*ДЗ:
1) выписать и распечатать в коде с помощью cout всю таблицу escape +
2) таблица кодировки ASCII +
3) дописать остальные типы данных С++ +
4) для числовых данных выписать диапазоны, которые в них хранятся +
*/

/* тоже комментарий

// include - подключение сторонних библиотек */
#include "pch.h"
#include <iostream>

double value_of_pi = 3.14;

int main() // т.н. "точка входа"
{
	//вывод на консоль
	//SDT - область видимости, т.н."пространство имён"
	//в <iostream> есть часть библиотеки SDT
	/*
	ESCAPE - последовательности:
	\n
	\b
	\f
	\n
	\r
	\t
	\v
	\'
	\"
	\\
	\?
	\ ooo
	\x hh
	\x hhhh

   */

	std::cout << "Hello, world!\a"; // звонок (предупреждение) ASCII: BEL
	std::cout << "Hello, world!\b"; //backspace ASCII: BS
	std::cout << "Hello, world!\f"; //переод страницы ASCII: FF
	std::cout << "Hello, world!\n"; //новая строка ASCII:  NL(LF)
	std::cout << "Hello, world!\r"; //возврат каретки ASCII: CR
	std::cout << "Hello, world!\t"; //горизонтальная табуляция ASCII: HT
	std::cout << "Hello, world!\v"; //вертикальная табуляция ASCII: VT
	std::cout << "Hello, world!\'"; //одиночная кавычка ASCII: '
	std::cout << "Hello, world!\""; //двойная кавычка ASCII:"
	std::cout << "Hello, world!\\"; //обратная косая черта ASCII: \
    std::cout << "Hello, world!\?"; //литерал вопросительного знака ASCII: ?
	std::cout << "Hello, world!\ ooo"; //символ ASCII в восьмеричной нотации ASCII: ooo
	std::cout << "Hello, world!\x hh"; //символ ASCII в шестнадцатиричной нотации ASCII: hh
	std::cout << "Hello, world!\x hhhh"; /*
	символ юникода в шестадцатиричном формате, если эта escape-последовательность
	используется в многобайтовой знаковой константе или строковом литерале юникода
	ASCII: hhhh
	*/
	//объявление переменных/ыделение памяти: тип_данных имя_переменных:
	int a;
	int number_of_desks;
	double velocity_of_auto;
	//ТИПЫ ДАННЫХ
	/*
	char(x8) - от -127 до 127, либо от 0 до 255
	signed char(x8) - -127 до 127
	unsigned char(x8) - 0 до 255
	wchar_t(x16) от 0 до 65 535 (при 2 байтах), либо от 0 до 4 294 967 295 (для 4 байт)
	char16_t(x16)  от 0 до 65 535
	char32_t(x32) 0 до 4 294 967 295

	short(x16) –32767 до 32767
	unsigned short(x16)  0 до 65535

	int(x32)  от –32767 до 32767 (при 2 байтах) или от −2 147 483 647 до 2 147 483 647 (при 4 байтах)
	unsigned int(x32) от 0 до 65535 (для 2 байт), либо от 0 до 4 294 967 295 (для 4 байт)

	long(x32)  long int(x32) −2 147 483 647 до 2 147 483 647
	unsigned long(x32) от −9 223 372 036 854 775 807 до +9 223 372 036 854 775 807

	long long (x64) - целые числа со знаком от 0 до 18 446 744 073 709 551 615
	unsigned long long(x64) от 0 до 18 446 744 073 709 551 615

	float (x32) +/- 3.4E-38 до 3.4E+38

	double (x64) - числа с плавающей точкой +/- 1.7E-308 до 1.7E+308
	long double(x64)  В зависимости от размера занимаемой памяти может отличаться диапазон допустимых значений

	void тип без значения

	char - также и для символов ASCII
	bool - true (истина) и false (ложь)
	long bool..
	*/
}

// СИНТАКСИС С++
//блок кода в {}
//разделение строк ;
