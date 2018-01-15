#include <stdio.h>
struct Date
{
	int day;
	int month;
	int year;
};
struct market
{
	int itmNum;
	char itmName[20];
	char itmCat[20];
	int price;
	int qty;
	struct Date mfg;
};
int main()
{
	int n,i;
	printf("Enter number of items:\n");
	scanf("%d", &n);
	struct market item[n];
	for(i = 0 ; i < n ; i++)
	{
		fflush(stdin);
		printf("Item Number:");
		scanf("%d", &item[i].itmNum);
		printf("Item Name:");
		scanf("%s",item[i].itmName);
		printf("Item Category ( Electronics, Food, Cosmetics etc) :");
		scanf("%s",item[i].itmCat);
		printf("Quantity:");
		scanf("%d",&item[i].qty);
		printf("Unit Price:");
		scanf("%d",&item[i].price);
		printf("Manufacturing date(dd-mm-yyyy):");
		scanf("%d-%d-%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);	
	}
	printf("---------------------------------------------------------------------------------\n");
	printf("S.N.| ITM NUM | ITM NAME \t| ITM CAT | QUANTITY | PRICE |MFG.DATE\n");
	printf("---------------------------------------------------------------------------------\n");
	for(i = 0 ; i < n ; i++)
	printf("%-4d %-6d %-10s\t %-10s %-5d %-5d%d/%d/%d\n",i+1,item[i].itmNum,item[i].itmName,item[i].itmCat,item[i].qty,item[i].pri
ce,item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);
	printf("------------------------------------------------------------------\n");
	return 0;
}