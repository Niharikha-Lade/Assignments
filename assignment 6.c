#include<stdio.h>
void main()
{
 int entered_id,entered_password;
 const int stored_id=101, stored_password=4321;
 printf("\n enter user_id,password:");
 scanf("%d%d",&entered_id,&entered_password);
 if(entered_id!=stored_id)
 printf("\n user not found");
 else
 {
  if(entered_password==stored_password)
  printf("\n login successfull");
  else 
  printf("\n incorrect password");
  }
} 

       
    