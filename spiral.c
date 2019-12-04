#include<stdio.h>

int main()
{
int i,j;
int c[100][100];
int m,n;

printf("Enter no.of rows : ");
scanf("%d",&m);
printf("Enter no.of columns : ");
scanf("%d",&n);

i=0;
j=0;
int col=n-1;
int row=m-1;

for(int a=0;a<m;++a)
{
	for(int b=0;b<n;++b)
	{
		scanf("%d",&c[a][b]);
	}
}

while(i<=row && j<=col)
{	
	for(int z=j;z<=col;z++)
	{
		printf("%d ",c[i][z]);
	}
	i++;
	for(int z=i;z<=row;z++)
	{
		printf("%d ",c[z][col]);
	}
	col--;
	if(i<=row)
	{
		for(int z=col;z>=j;z--)
		{
			printf("%d ",c[row][z]);
		}
	row--;
	}
	if(j<=col)
	{
		for(int z=row;z>=i;z--)
		{
			printf("%d ",c[z][j]);
		}
		j++;
	}
}

}
