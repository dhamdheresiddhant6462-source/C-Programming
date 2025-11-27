#include<stdio.h>

int iMarks = 89;

int main()
{
    char cValue = 'g';
    int iValue = 11;
    float fValue = 90.70f;
    double dValue = 90.564323;

    printf("Size of character is : %lu\n",sizeof(cValue));
    printf("Size of integer is : %lu\n",sizeof(iValue));
    printf("Size of float is : %lu\n",sizeof(fValue));
    printf("Size of double  is : %lu\n",sizeof(dValue));

    return 0;
    
}