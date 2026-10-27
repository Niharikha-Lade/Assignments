#include<stdio.h>
void main()
{
int age, monthly_income,credit_score;
printf("\n enter age,monthly income,credit score");
scanf("%d%d%d",&age,&monthly_income,&credit_score);
if(age>21&&age<60)
 if(monthly_income>=25000)
   if(credit_score>=700)
   printf("\n loan approved");
   else
   printf("\nloan rejected:credit score below 700");
 else
 printf("\n loan rejected:monthly income below 25000");
else
printf("\n loan rejected:age not in 21 and 60");   
} 

       
    