#include<stdio.h>
void main()
{
	int cprice,sprice;
	printf("enter cprice and sprice");
	scanf("%d%d",&cprice,&sprice);
	if(sprice>cprice)
	{
		printf("profit");
	}
	else
	{
		printf("loss");
	}
}
