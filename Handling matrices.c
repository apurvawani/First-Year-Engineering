/*Write a C program with functions to compute arithematic operations like addition & substraction of two matrices.*/

#include<stdio.h>
int i, j, r1, c1;
void add(int m1[r1][c1], int m2[r1][c1], int m[r1][c1]){              
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			m[i][j]=m1[i][j]+m2[i][j];
		}
	}
}
void sub(int m1[r1][c1], int m2[r1][c1], int m[r1][c1]){
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			m[i][j]=m1[i][j]-m2[i][j];
		}
	}
}
void main(){
	printf("Enter number of rows & columns in the matrix:\n");
	scanf("%d %d",&r1,&c1);
	int m1[r1][c1], m2[r1][c1], m[r1][c1];
	printf("Enter the elements of the first matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&m1[i][j]);
		}
	}	
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&m2[i][j]);
		}
	}	
	int f;
	printf("Enter your choice:\n1-Addition\n2-Substraction\n");
	scanf("%d",&f);
	switch(f){
	case 1:
		add(m1,m2,m);
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}		
		break;
	case 2:
		sub(m1,m2,m);
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}		
		break;	
	}
}

