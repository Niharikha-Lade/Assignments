#include<stdio.h>
void main()
{
int amount,deliverycharge,membershiptype;
float discount,totalamount;
printf("enter amount:");
scanf("%d",&amount);
printf("enter membershiptype(1 for premium,0 for regular :");
scanf("%d",&membershiptype);
if(amount>=500)
{ 
   if(membershiptype==1)
   {
    discount=amount*(10/100.0);
    deliverycharge=0;
    totalamount=amount-discount+deliverycharge;
    printf("\n %f",totalamount);
   }
   else
   {
    discount=0;
    deliverycharge=0;
    totalamount=amount-discount+deliverycharge;
    printf("\n %f",totalamount);
   }
 }
 else
 {
  discount=0;
  deliverycharge=50;
  totalamount=amount-discount+deliverycharge;
  printf("\n %f",totalamount);
  }
 } 
  
    



       
    