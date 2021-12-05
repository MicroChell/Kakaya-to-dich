// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int  batya[17][17];
void fillTow (int  brat9, int  brat10)
{
    for (int cestra = 0; cestra < brat9; cestra++)
    {
        for (int cplusplustra = 0; cplusplustra < brat10; cplusplustra++)
        {
            batya[cestra][cplusplustra] = 2;
        }
    }
}
void OutMatr(int  brat9, int  brat10)
{
    for (int cestra = 0; cestra < brat9; cestra++)
    {
        for (int cplusplustra = 0; cplusplustra < brat10; cplusplustra++)
        {
            if (batya[cestra][cplusplustra] == 2)
            {
                std::cout <<  "  ";
            }
            else
                std::cout << batya[cestra][cplusplustra] << " ";
            //std::cout << batya[cestra][cplusplustra] << " ";
        }
        std::cout << "\n";
    }
}
void TopStringSqare(int NumberString, int End = 10)
{

    int NumberColumn = NumberString;
    for (; NumberColumn != End - NumberString; NumberColumn++)
    {
        batya[NumberString][NumberColumn] = 1;
    }
}
void BottomStringSqare(int NumberString = 1 , int End = 10)
{
    int BottomStringNumber = End -( NumberString + 1);
    int NumberColumn = NumberString;
    for (; NumberColumn != End - NumberString; NumberColumn++)
    {
        batya[BottomStringNumber][NumberColumn] = 1;
    }
}
void leftSideSqare(int NumberString, int End = 10)
{

    int BottomStringNumber = End - (NumberString + 1);
    int NumberColumn = NumberString;
    for (; NumberColumn != End - NumberString; NumberColumn++)
    {
        batya[NumberColumn][BottomStringNumber] = 1;
    }
}
void RightSideSqare(int NumberString, int End = 10)
{
    int NumberColumn = NumberString;
    for (; NumberColumn != End - NumberString; NumberColumn++)
    {
        batya[NumberColumn][NumberString] = 1;
    }
}
int main()
{
    int End = 17;
    int NumberString;
    std::cin >> NumberString;
    if (NumberString > End/2 || NumberString < 0)
    {
        std::cout << "Ty Durachek";
        return 0;
    }
    fillTow(End, End);
    for (; NumberString != -1 && NumberString > -1; NumberString = NumberString - 2)
    {
        TopStringSqare(NumberString,End);
        BottomStringSqare(NumberString, End);
        leftSideSqare(NumberString, End);
        RightSideSqare(NumberString, End);
    }
    OutMatr(End, End);

}
//for (;  < brat2; std::cout << "\n", brat2 = brat2 + 50 )

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
