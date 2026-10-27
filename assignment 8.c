#include<stdio.h>
void main()
{
float weight,height,bmi;
printf("enter weight(in kg),height(in meters):");
scanf("%f%f",&weight,&height);
bmi= weight/(height*height);
if(bmi<18.5)
{
printf("\nbmi is %f",bmi);
printf("\ncategory : under weight");
}
else if(bmi>=18.5&&bmi<25.0)
{
printf("\n bmi is %f",bmi);
printf("\n category:normal");
}
else if (bmi>=25.0&&bmi<30.0)
{
printf("\n bmi is %f",bmi);
printf("\n category:overweight");
}
else
{
printf("\n obese");
}
}
       
    