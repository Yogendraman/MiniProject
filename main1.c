#include "fun.h"
#include <stdio.h>
int main()
{
  printf(" Welcome Student, Please enter your roll no.\n");
  int a,b,c=0,d;
  scanf(" %d",&a);
  printf("Enter total number of subjects to calculate marks\n");
  scanf("%d",&b);
  float arr1[b];
  float e=0.00,f,g;
  while(c!=b){
      float i,o;
      printf("Enter marks of subject %d\n",c+1);
      scanf("%f",&i);
      o=marks(i);
      // printf("%.2f\n",o);
      arr1[c]=o;
      c=c+1;
  }
  printf("Enter your attendance\n");
  scanf("%d",&d);
  attend(d); 
  for(int i=0;i<=b;i++){
    e=e+arr1[i];
  }
  f=e/(b*10);
  f=f*100;
  // printf("%f\n",f);
  g=marks(f);
  printf("Your SGPA is %.2f\n",g);
  return 0;
}