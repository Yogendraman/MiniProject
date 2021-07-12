#include "fun.h"
#include<stdio.h>
char* attend(int a)
{
    if (a>100){
        return("Please enter valid attendance.");
    }
    else if (a==100)
    {
        return("Extraordinary Attendance.");
    }
    
    else if(a>90 && a<99)
    {
        return("Excellent Attendance.");
    }
    else if (a>70 && a<89)
    {
        return("Good Attendance.");
    }
    else if (a>50 && a<69)
    {
        return("Satisfactory Attendance.");
    }
    else 
    {
        return("Poor Attendance.\n");
    }
    return 0;
}