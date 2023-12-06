#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{

    array<int, 2>^ a = gcnew array<int, 2>(3, 4);
    array<int, 2>^ b = gcnew array<int, 2>(3, 4);

    Random^ rnd = gcnew Random;

    array<int>^ x = gcnew array<int>(3 * 4);
    array<int>^ y = gcnew array<int>(3 * 4);

    //generate matrixes a and b with random numbers

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i, j] = rnd->Next() / 10000000 - 100;
            b[i, j] = rnd->Next() / 10000000 - 100;
        }
    }

    //write matrix a

    Console::WriteLine(L"Matrix A:");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Console::Write(L"{0} ", a[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine();

    //write matrix b

    Console::WriteLine(L"Matrix B:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Console::Write(L"{0} ", b[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine();

    int P = 0;

    Console::WriteLine(L"Write P:");

    P = Convert::ToInt32(Console::ReadLine());

    Console::WriteLine();

    //заполнение массива x

    int k = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i, j] % P == 0)
            {
                x[k] = a[i, j];
                k++;
            }
        }
    }

    //заполнение массива y

    k = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (b[i, j] % P == 0)
            {
                y[k] = b[i, j];
                k++;
            }
        }
    }

    Console::WriteLine(L"Matrix X:");

    for each (int i in x)
    {
        if (i != 0) Console::Write(L"{0} ", i);
    }

    Console::WriteLine("\n");

    Console::WriteLine(L"Matrix Y:");

    for each (int i in y)
    {
        if (i != 0) Console::Write(L"{0} ", i);
    }

    Console::WriteLine();

    return 0;
}
