/////////////////////////////////////////////////////
//  
//  Author       : Omkar Sanjay Salunke
//  Date         : 22/10/2026
//  Write a program to print 5 to 1 numbers on screen
//
//////////////////////////////////////////////////////
#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return 0;
}