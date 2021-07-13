#include "fun.h"
#include<stdio.h>
char* attend(int a)
{
    if (a>=101){
        return "Please enter attendance\n";
    }
    else if (a==100)
    {
        return "Extraordinary Attendance\n";
    }
    
    else if(a>90 && a<99)
    {
        return "Excellent Attendance\n";
    }
    else if (a>70 && a<89)
    {
        return "Good Attendance\n";
    }
    else if (a>50 && a<69)
    {
        return "Satisfactory Attendance\n";
    }
    else 
    {
        return "Poor Attendance\n";
    }
}