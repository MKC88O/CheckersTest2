// CheckersTest2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>


using namespace std;

void Card(int kletkaSize)
{
    SetConsoleOutputCP(CP_UTF8);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    // Определяем цвета для клеток доски
    int Color1 = 395;  
    int Color2 = 445;   
    
    //цвет рамки
    int borderColor = 112;
    
    //координаты доски
    int x = 47;
    int y = 5;
    
    //выводим координаты столбцов(символы от A до H)  
    //сверху доски
    COORD temp = { x - 4, y - 3 };
    SetConsoleCursorPosition(h, temp);
    SetConsoleTextAttribute(h, 0);
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int i = 0; i < kletkaSize - 1; ++i) {
            cout << " ";
        }
        cout << col;
    }
    
    //снизу доски
    COORD temp1 = { x - 4, y + 34 };
    SetConsoleCursorPosition(h, temp1);
    SetConsoleTextAttribute(h, 0);
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int i = 0; i < kletkaSize - 1; ++i) {
            cout << " ";
        }
        cout << col;
    }
	
	// Выводим доску
    for (int row = 0; row < 8; row++)
    {
        // Выводим цифру слева
        temp = { static_cast<SHORT>(x - 5), static_cast<SHORT>((y+1) + row * kletkaSize / 2) };
        SetConsoleCursorPosition(h, temp);
        SetConsoleTextAttribute(h, 0);
        std::cout << row + 1 ; 
        
        // Выводим цифру справа
        temp = { static_cast<SHORT>(x + 8 * kletkaSize + 4), static_cast<SHORT>((y + 1) + row * kletkaSize / 2) };
        SetConsoleCursorPosition(h, temp);
        SetConsoleTextAttribute(h, 0);
        cout << row + 1;
        

        for (int col = 0; col < 8; col++)
        {
            // Определяем цвет клетки в зависимости от ее позиции
            int color = (row + col) % 2 == 0 ? Color1 : Color2;

            // Устанавливаем цвет и координаты курсора
            COORD temp = { x + col * kletkaSize, y + row * kletkaSize / 2 };
            SetConsoleCursorPosition(h, temp);
            SetConsoleTextAttribute(h, color);

            // Выводим клетку
            for (int i = 0; i < kletkaSize / 2; i++) {
                for (int j = 0; j < kletkaSize; j++) {
                    cout << " ";
                }
                temp.Y++;
                SetConsoleCursorPosition(h, temp);
            }
        }
        
    }
    cout << "\n";

    // gorizonalnye chasti ramki
    for (int i = 0; i < 8 * kletkaSize +4; i++)
    {
        //верхняя
        temp = { static_cast<SHORT>(x + i - 2), static_cast<SHORT>(y - 1) };
        SetConsoleCursorPosition(h, temp);
        SetConsoleTextAttribute(h, borderColor);
        cout << " ";
        //нижняя
        temp = { static_cast<SHORT>(x + i - 2), static_cast<SHORT>(y + 8 * kletkaSize / 2 ) };
        SetConsoleCursorPosition(h, temp);
        cout << " ";
    }
    //vertikalnye chasti ramki
    for (int i = 0; i < 8 * kletkaSize / 2; i++)
    {
        //слева
        temp = { static_cast<SHORT>(x-2), static_cast<SHORT>(y  + i) };
        SetConsoleCursorPosition(h, temp);
        SetConsoleTextAttribute(h, borderColor);
        cout << "  ";
        //справа
        temp = { static_cast<SHORT>(x + 8 * kletkaSize), static_cast<SHORT>(y + i) };
        SetConsoleCursorPosition(h, temp);
        cout << "  ";
    }
    
    
}






int main()
{
    
	Card(8);
    cout << "\n\n\n";
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
