#include <stdio.h>
#include <stdlib.h>

union book
{
	int purchaseCost;
	char donorName[20];
};
struct library
{
	int accNo;
	char title[30];
	int edition;
	char author[30];
	union book tag;
};
int main()
{
	int i , n , t;
	printf("Enter the no of book records:\n ");
	scanf("%d", &n);
	struct library l[n];
	printf("Enter the book details:\n");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d%s%d%s",&l[i].accNo, l[i].title, &l[i].edition, l[i].author);
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("%d\t%s\t%d\t%s\t\n",l[i].accNo, l[i].title, l[i].edition, l[i].author);
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("Enter the tag value 1 for Purchase cost and 0 for donated books\n");
		scanf("%d",&t);
		if(t == 1)
		{
			scanf("%d",&l[i].tag.purchaseCost);
			printf("Purchased book:%d\t%d\t%s\n", l[i].tag.purchaseCost , l[i].accNo , l[i].title);
		}
		else
		{
			scanf("%s",l[i].tag.donorName);
			printf("Donated book :%s\t%d\t%s\n",l[i].tag.donorName,l[i].accNo,l[i].title);
		}
	}
	return 0;
}