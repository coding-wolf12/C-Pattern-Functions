#include <iostream>
using namespace std;

void patternA(int n)
// * * * *
// * * * *
// * * * *
// * * * *
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void patternB(int n)
// *
// * *
// * * *
// * * * *
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void patternC(int n)
// 1
// 12
// 123
// 1234
{
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

void patternD(int n)
// 1
// 2 2
// 3 3 3
// 4 4 4 4
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void patternE(int n)
// A
// AB
// ABC
// ABCD
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void patternF(int n)
// A
// BB
// CCC
// DDDD
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
}
void patternG(int n)
// * * * *
// * * *
// * *
// *
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void patternH(int n)
// 1234
// 123
// 12
// 1
{
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < n - i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void patternI(int n) // Floyd Series
// 1
// 23
// 456
// 78910
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void patternJ(int n)
//    *
//   ***
//  *****
// *******
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternK(int n)
// *******
//  *****
//   ***
//    *
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patternL(int n)
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patternM(int n)
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    // patternA(4);
    // patternB(4);
    // patternC(4);
    // patternD(4);
    // patternE(4);
    // patternF(4);
    // patternG(4);
    // patternH(4);
    // patternI(4);
    // patternJ(4);
    // patternK(4);
    // patternL(4);
    // patternM(4);
    return 0;
}