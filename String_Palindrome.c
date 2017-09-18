/*Write a C program that check whether given String is Palindrome or not.*/

#include<stdio.h>
#include<string.h>
void main(){
	int l, i, r=0;
	char s[50];
	printf("Enter the string:\n");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]){
			printf("The given string is not a palindrome.\n");
			r=1;
			break;
		}
	}
	if(r==0){
		printf("The given string is a palindrome.\n");
	}
}
