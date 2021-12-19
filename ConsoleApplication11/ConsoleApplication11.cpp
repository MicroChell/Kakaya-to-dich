﻿// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int  batya[17][17];
void fillTow(int  brat9, int  brat10)
{
    for (int cestra = 0; cestra < brat9; cestra++)
    {
        for (int cplusplustra = 0; cplusplustra < brat10; cplusplustra++)
        {
            batya[cestra][cplusplustra] = 3;
        }
    }
}
void fillZero(int  brat9, int  brat10)
{
    for (int cestra = 0; cestra < brat9; cestra++)
    {
        for (int cplusplustra = 0; cplusplustra < brat10; cplusplustra++)
        {
            batya[cestra][cplusplustra] = 0;
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
    for (; NumberColumn < End - NumberString; NumberColumn++)
    {
        batya[NumberString][NumberColumn] = 1;
    }
}
void BottomStringSqare(int NumberString = 1 , int End = 10)
{
    int BottomStringNumber = End -( NumberString + 1);
    int NumberColumn = NumberString;
    for (; NumberColumn < End - NumberString; NumberColumn++)
    {
        batya[BottomStringNumber][NumberColumn] = 1;
    }
}
void leftSideSqare(int NumberString, int End = 10)
{

    int BottomStringNumber = End - (NumberString + 1);
    int NumberColumn = NumberString;
    for (; NumberColumn < End - NumberString; NumberColumn++)
    {
        batya[NumberColumn][BottomStringNumber] = 1;
    }
}
void RightSideSqare(int NumberString, int End = 17)
{
    int NumberColumn = NumberString;
    for (; NumberColumn < End - NumberString; NumberColumn++)
    {
        batya[NumberColumn][NumberString] = 1;
    }
}
void ShiftMatr(int NumberRow = 17)
{
    int NumberColumn;
    std::cin >> NumberColumn;
    for (int j = 16; j >= 0; j--)
    {
     
        for (int i = 16; i >= 0; i--)
        {
            if (NumberColumn + j <= NumberRow)
                batya[j][i] = batya[j - NumberColumn][i];
            else
                batya[j][i] = 0;
        }
    }
 /*   for (int j = 16; j >= 0; j--)
    {
        int* Pointer = batya[j];
        int* PointerShift = batya[j - 1];
        for (int i = 16; i >= 0; i--)
        {
            *PointerShift = *Pointer;

            PointerShift++;
            Pointer++;
        }
    }*/
    
}
void CreateSqare()
{ 
    int num;
    std::cin >> num;
    TopStringSqare(num, 17);
    BottomStringSqare(num, 17);
    RightSideSqare(num, 17);
    leftSideSqare(num, 17);
}
void CommandTablo()
{
    char Command[10];
    for (int o = 0; o == 0;)
    {
        std::cout << "1 - VivodMatr" << "\n";
        std::cout << "2 - Vihod" << "\n";
        std::cout << "3 - Zapolnit0" << "\n";
        std::cout << "4 - Zapolnit2" << "\n";
        std::cout << "5 - CreateSqare" << "\n";
        std::cout << "6 - ShiftMatrix" << "\n";

        std::cin >> Command;

        if (strcmp(Command,"2") == 0)
        {
            return;
        }
        else if (strcmp(Command, "4") == 0)
        {
            fillTow(17,17);
            
        }
        else if (strcmp(Command, "1") == 0)
        {
            OutMatr(17, 17);
            
        }
        else if (strcmp(Command, "3") == 0)
        {
            fillZero(17, 17);
          
        }
        else if (strcmp(Command, "TopStringSqare") == 0)
        {
            TopStringSqare(17, 17);
           
        }
        else if (strcmp(Command, "leftSideSqare") == 0)
        {
            leftSideSqare(17, 17);
           
        }
        else if (strcmp(Command, "RightSideSqare") == 0)
        {
            RightSideSqare(17, 17);
           
        }
        else if (strcmp(Command, "BottomStringSqare") == 0)
        {
            BottomStringSqare(17, 17);
        }
        else if (strcmp(Command, "6") == 0)
        {
            ShiftMatr(17);
        }
        else if (strcmp(Command, "5") == 0)
        {
            CreateSqare();
        }
        else
        {
            std::cout << "TY DURACHEK!!!!";
        }
    }
}
int main()
{
    CommandTablo();
   
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
