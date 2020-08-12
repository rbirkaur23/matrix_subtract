#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3];
  int i,j;
  printf("Enter first matrix\n");
  for(i=0;i<=2;i++)
  {
    printf("\nEnter row %d :",i+1);
    for(j=0;j<=2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter second matrix\n");
  for(i=0;i<=2;i++)
  {
    printf("\nEnter row %d :",i+1);
    for(j=0;j<=2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      c[i][j]=a[i][j]-b[i][j];
    }
  }
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("%d",c[i][j];
    }
  }
  getch();
  }
