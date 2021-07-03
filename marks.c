#include "fun.h"
#include<stdio.h>
    int marks(float c)
    {
    float a;
    if (c>100 || c<1)
    {
        printf("Invalid marks\n");
    }
    else
    {
        a=c/9.5;
        return(a);
    }
}