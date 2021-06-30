#include <stdio.h>
int main()
{
  char name[100];
  int age;
  printf("Enter your name: ");
  scanf("%s",name);
  printf("Enter your age: ");
  scanf("%d",&age);
  printf("Hello, %s,You are %d years old", name, age);
}