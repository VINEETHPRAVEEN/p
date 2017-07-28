#include<stdio.h>
int main()
{
int z;
scanf("%d",&z);
if(z>0)
printf("%d is the positive number",z);
else if(z<0)
printf("%dis the negative number",z);
else
printf("%d is zero",z);
return 0;
}
