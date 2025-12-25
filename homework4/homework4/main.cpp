#include <iostream>
#include <Windows.h>
#include <type_traits>
#include <string>


int multiply(int a, int b) 
{
    
    if (b == 0) return 0;

    if (a < 0 && b < 0)
        return -multiply(-a, -b);

    
    if (a < 0)
        return -multiply(-a, b);

    
    return a + multiply(a, b - 1);
}






int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


    int num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Произведение: " << multiply(num1, num2);






	return 0;
}
