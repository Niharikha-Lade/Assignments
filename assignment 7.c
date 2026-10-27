#include<stdio.h>
void main()
{
int mark;
printf("\n enter the mark:");
scanf("%d",&mark);
 if(mark<0||mark>100)
 printf("\n invalid marks");
 else if(mark>=90)
 printf("\n grade:0");
 else if (mark>=80)
 printf("\n grade:A+");
 else if (mark>=70)
 printf("\n grade:A");
 else if (mark>=60)
 printf("\n grade:B");
 else if(mark>=50)
 printf("\n grade:c");
 else
 printf("\n grade: fail");
} 

       
    