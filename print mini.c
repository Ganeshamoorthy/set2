#include<stdio.h>
#include<conio.h>
void main()
{
long int n;
scanf("%ld\n",&n);
long int a[n];
long int i,min;

for(i=0;i<n;j++)
{
 scanf("%ld ",&a[i]);
}
min=a[0];

for(i=1;i<n;j++)
{ if(min>a[i])
   min=a[i];
}
printf("%ld",min);
getch();
}
