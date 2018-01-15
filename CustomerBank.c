#include <stdio.h>
#include <stdlib.h>

struct bank
{
int accNo;
char accHolderName[20];
int balance;
int internetFacility;
int pincode;
char accountType;
};
int main()
{
	int i , j , n , count=0;
	printf("Enter the no of Customer bank accounts\n");
	scanf("%d", &n);
	struct bank b[n] , temp;
	printf("Enter the bank account details.\n");
	printf("Do you avail Internet Facility? If yes enter 1 else enter 0.\n");
	printf("Enter Account type S for Saving R for Recurring and D for Deposit.\n");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d%s%d%d%d%c",&b[i].accNo, b[i].accHolderName, &b[i].balance, &b[i].internetFacility, &b[i].pincode, &b[i].accountType);
	}
	printf("The bank account details");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n%d\t%s\t%d\t%d\t%d\t%c\n",b[i].accNo, b[i].accHolderName, b[i].balance, b[i].internetFacility, b[i].pincode, b[i].accountType);
	}
	printf("List of customer as a Golden , Silver & General Customer:\n");
	for(i = 0 ; i < n ; i++)
	{
		if(b[i].balance >= 1000000)
		{
			printf("The customer is Golden customer!\n");
		}
		else
		{
			if(b[i].balance <= 1000000 && b[i].balance >= 500000)
			printf("The customer is silver customer!\n");
			else
			printf("The customer is General customer!\n");
		}
	}
	printf("List of Customer Who have InternetBankingFacility:\n");
	for(i = 0 ; i < n ; i++)
	{
		if(b[i].internetFacility == 1)
		{
			printf("%d\t%s\t%d\t%d\t%d\t%c\n",b[i].accNo, b[i].accHolderName,b[i].balance, b[i].internetFacility, b[i].pincode, b[i].accountType);
			count++;
		}
	}
	printf("List of customer according to their Account Type:\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n");
		if(b[i].accountType == 'S')
		printf("Saving Account:%s\t%d\t", b[i].accHolderName, b[i].accNo);
		else if(b[i].accountType == 'R')
		printf("Recurring Account:%s\t%d\t", b[i].accHolderName , b[i].accNo);
		else
		printf("Deposit Account:%s\t%d\t", b[i].accHolderName , b[i].accNo);
	}
	printf("Sorting of BankAccounts According to their Postal code\n");
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = i+1 ; j < n ; j++)
		if(b[i].pincode > b[j].pincode)
		{
			temp = b[i];
			b[i] = b[j];
			b[j] = temp;
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		printf("%d\t%s\t%d\t\n",b[i].accNo, b[i].accHolderName , b[i].pincode);
	}
	return 0;
}
