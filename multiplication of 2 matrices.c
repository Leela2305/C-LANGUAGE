#include<stdio.h>
int main()
{
	int A[100][100],B[100][100],C[100][100],r1,c1,r2,c2,k,i,j;
	printf("enter row and column size of A");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter value at A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter row and column size of B");
	scanf("%d %d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter value at B[%d][%d]",i,j);
			scanf("%d",&B[i][j]);
		}
	}
if(c1!=r2)
{
	printf("invalid input");
	return 0;
}

for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		for(k=0;k<c1;k++)
		{
			C[i][j]=0;
			C[i][j]+=A[i][j]*B[i][j];
		}
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
printf("\t%d",C[i][j]);
}
printf("\n");
}
}
