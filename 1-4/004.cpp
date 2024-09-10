
#include <stdio.h>

int main()
{
    //4번
    char ch = 'A';
    char str[20] = "HEllo World!";
    float flt = 10.234;
    int no = 150;
    double dbl = 20.123456;
    int oct = 226;
    int hex = 96;

    printf("Character is %c\n", ch);
    printf("String is %s\n", str);
    printf("Float is %f\n", flt);
    printf("Integer value is %d\n", no);
    printf("Double value is %.6f\n", dbl);
    printf("Octal value is %d\n", oct);
    printf("Hexadecimal value is %d\n", hex);
    printf("\n");
}

