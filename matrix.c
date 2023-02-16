#include<stdio.h>
void main()
{
int i,j,r,c,a[20][20],b[20][20],s[20][20];
printf("enter the number of rows and columns ");
scanf("%d%d",&r,&c);
printf("enter the elements of first:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of second:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("the matrix sum is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
s[i][j]=0;
s[i][j]=a[i][j]+b[i][j];
printf("%d\t",s[i][j]);
}
printf("\n");
}
}
