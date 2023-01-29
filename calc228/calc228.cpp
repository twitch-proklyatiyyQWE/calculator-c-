#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "Russian");
    int i1 = 0;
    int i2 = 0;
    double ch1 = 0;
    double ch2 = 0;
    std::string operation;
    std::cout << "Привет, это мегакрутой калькулятор, который ниначто не спосбен. ";

    for (;;)
    {
        std::cout << "+ - сложение \n- - вычитание \n* - умножение\n/ - деление\n% - ещё одно делоение\ngg - воход из проги";
        std::cout << "введи перове число: ";
        std::cin >> ch1;
        std::cout << "vвведи второе число: ";
        std::cin >> ch2;
        std::cout << "что делаем? : ";
        std::cin >> operation;
        if (operation == "+")
        {
            std::cout << "перврое + второе = " << ch1 + ch2 << '\n';
        }
        if (operation == "-")
        {
            std::cout << "перврое - второе = " << ch1 - ch2 << '\n';
        }
        if (operation == "*")
        {
            std::cout << "перврое умножить на второе = " << ch1 * ch2 << '\n';
        }
        if (operation == "gg")
        {
            std::cout << "Бай Бай";
            break;
        }
        if (operation != "*"  "/"  "-" || "+")
        {
            std::cout << "вводи только то, что можно\n";
        }
        if (operation == "/")
        {
            if (ch2 == 0)
            {
                std::cout << "незя ноль гений\n";
            }
            else
            {
                std::cout << "перврое делить на второе = " << ch1 / ch2 << '\n';
            }
        }
        if (operation == "%") {
            if (ch2 == 0)
            {
                std::cout << "незя ноль гений\n";
            }
            else
            {
                std::cout << "перврое делить на второе = " << i1 % i2 << '\n';
            }
        }
    }
    return i1;
}