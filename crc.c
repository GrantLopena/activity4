#include<stdio.h>
#include<conio.h>

void main()
{
int i,f[20],n[50],div[50],j,temp,quotient[20],z[10];        
clrscr();
printf("enter the number\n");
for(i=0;i<8;i++)
{
scanf("%d",&n[i]);					/*Input the first number (dividend) in array n[]in this example a 8 digit number is use */
}
printf("enter the divisor\n"); 
for(i=0;i<4;i++)
{
scanf("%d",&div[i]);					/*Input the second number (divisor) in div[]* in this example a 4 digit number is use*/
						

for(i=8;i<12;i++)
{
n[i]=0;
}
for(i=0;i<8;i++)
{
temp=i;
if(n[i]==1)
{
for (j=0;j<4;j++)
{
if (n[temp]==div[j])					
{n[temp]=0;
f[j]=0;}
else
{n[temp]=1;
f[j]=1;}
temp=temp+1;

}
quotient[i]=1;
}
else
quotient[i]=0;
}
printf("\nthe quotient is \n");
for(i=0;i<8;i++)
printf("%d",quotient[i]);

printf("\n and the remainder is \n ");

for(j=0;j<4;j++)
printf("%d",f[j]);
getch();
}
