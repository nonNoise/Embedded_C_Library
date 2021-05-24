#include        <stdio.h>
#include        <string.h>
#include        <stdlib.h>

#include "IntToStr.h"
#include "HexToStr.h"

int main()
{
    char str[20];

    printf("=== IntToStr TEST ===\n");
    for(int i=-100;i<=100;i++)
    {
        IntToStr(i,str);
        printf("str= %s \n",str);
    }

    printf("=== HexToStr TEST ===\n");
    for(int i=0;i<=100;i++)
    {
        HexToStr(i,str);
        printf("str= %s \n",str);
    }

    return 0;
}