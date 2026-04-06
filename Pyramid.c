#include<stdio.h>
int main()
{
	 int i,j,space,rows;
	 printf("Enter no.of rows : ");
	 scanf("%d",&rows);
	 for(i=1;i<=rows;i++)
	 {
	 for(space=1;space<=rows-i;space++)
	 {
	 printf(" ");
	 }
	 for(j=1;j<=2*i-1;j++)
	 {
	 printf("*");
	 }
	 printf("\n");
	 }
     printf("\n     25331A05G9");
	 return 0;
}

