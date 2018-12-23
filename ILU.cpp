#include<stdio.h>
main()
{
	int i,j,k,n;
	n=12;
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
			printf("*");
			else if(i>=2&&i<=(n-1)&&j>((n/2)-1)&&j<(n/2)+2)
			printf("*");
			else 
			printf(" ");
		}
	printf("\n");
	}
	printf("\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=18;j++)
		{
			if(j>=4-i&&j<=i+3||j>=11-i&&j<=i+10)
			printf("*",j);
			else
			printf(" ");
		}
	printf("\n");
	}
	for(i=6;i<=12;i++)
	{
		for(j=1;j<=13;j++)
		{
			k=i-5;
			if(i>=6&&j>=k+1&&j<=13-k)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=12;j++)
		{
			if(i<=7&&(j<=3||j>=10))
			printf("*");
			else if(i>=8&&(((j>=i-6)&&(j<=i-3))||(j>=16-i&&j<=19-i)))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
