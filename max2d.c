#include <stdio.h>
int max(int a,int b);
int largest(int (*)[5]);
int main()
{
int a[5][5],i,j,d;
for (i=0;i<5;i++)
{
for (j=0;j<5;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n");
d=largest(a);
printf("The largest of the entered numbers is: %d\n",d);
return 0;
}

int max(int a,int b)
{
if (a>=b)
{
return a;
}
else
{
return b;
}
}

int largest(int (*k)[5])
{
int a[5][5],i,j,s;
for (i=0;i<5;i++)
{
for (j=0;j<5;j++)
{
a[i][j]=*(*(k+i)+j);
}
}
s=max(a[0][0],a[0][1]);
for (i=0;i<5;i++)
{
for (j=0;j<5;j++)
{
s=max(s,a[i][j]);
}
}
return s;
}



