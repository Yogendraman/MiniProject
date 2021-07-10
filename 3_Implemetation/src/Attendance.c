#include "fun.h"
#include<stdio.h>
int attend(int a)
{
    if (a>100){
        printf("Please enter valid attendance. \n");
    }
    else if (a==100)
    {
        printf("Extraordinary Attendance. \n");
    }
    
    else if(a>90 && a<99)
    {
        printf("Excellent Attendance.");
    }
    else if (a>70 && a<89)
    {
        printf("Good Attendance.\n");
    }
    else if (a>50 && a<69)
    {
        printf("Satisfactory Attendance.\n");
    }
    else 
    {
        printf("Poor Attendance.\n");
    }
}