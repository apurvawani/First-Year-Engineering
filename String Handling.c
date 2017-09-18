/*Write a C program to accept a string and to display the following:
(a)Total number of charcters in the string.
(b)Total number of vowels in the string.
(c)Total number of occurrence of particular charcter in the string.*/

#include<stdio.h>
void main(){
	int i=0,l=0,j,count;
	char s[20],a;
	printf("Enter the string:\nEnter the charcter whose no of occurrence is required:\n");
	scanf("%s %c",s,&a);
	while(s[i]!='\0'){
		i++;
		l++;
	}
	printf("Total number of charcters in the string: %d\n",l);
	char s1[]={'a','e','i','o','u','A','E','I','O','U'};
	for(i=0;i<l;i++){
		for(j=0;j<10;j++){
			if(s[i]==s1[j]){
				count++;
			}
		}
	}
	printf("Total number of vowels in the string: %d\n",count);
	count=0;
	for(i=0;i<l;i++){
		if(s[i]==a){
			count++;	
		}
	}
	printf("Total number of occurrence of %c charcter in the string is %d\n",a,count);
}

