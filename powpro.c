#include<stdio.h>
int main()
{    
int i,base,pow,res=1;   
printf("Enter the base number:");    
scanf("%d",&base);   
printf("Enter the power number:");    
scanf("%d",&pow);    
for(i=0;i<pow;i++)    
{      
if(pow!=0)       
{
  res=(base*res);           
}      
 else       
{          
res=res;            
}    
}
printf("the final resul is:%d",res);
return 0;
}
