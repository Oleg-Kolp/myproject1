// False1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

bool b(0);//или b(false) логическая переменная

int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    cout << "  \t ЛОГИЧ. ПЕРЕМЕННАЯ(0 -> FALSE;иначе -> true)\n ";
    cout << "  \t Введите число b = ";
    cin >> x;
    if (x)

        cout << " \t b  is  true!" << std::endl;
    else
        cout << "\t b  is  false ! " << std::endl;
    return 0;
}


