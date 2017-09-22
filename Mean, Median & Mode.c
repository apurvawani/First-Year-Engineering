/*Write a C program to store N numbers in an array and calculate mean, median & mode.*/

#include<stdio.h>
int main(){
	int i, j, n;
	printf("Enter array size:\n");
	scanf("%d",&n);
	float a[n], sum=0, mean=0, median=0, temp=0;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	mean=sum/n;
	//Median is middle element of a sorted list. 
	//Bubble Sort
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
		/*for(k=0;k<n;k++){
			printf("%f\n",a[k]);
		}*/	
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%f\n",a[i]);
	}
	if(n%2==0){
		median=(a[(n/2)-1]+a[n/2])/2;
	}
	else{
		median=a[n/2];
	}
	//Mode is the element which occurs maximum number of times.
	int count=0, max, c[n], k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			} 
			c[i]=count;
		}
	count=0;
	}
	max=c[0];
	for(i=0;i<n;i++){
		if(max<c[i]){
			max=c[i];
			k=i;
		}
	}
	printf("Mean of the given array elements: %f\n",mean);
	printf("Median of the given array elements: %f\n",median);
	printf("Mode of the given array elements: %f\n",a[k]);
	return(0);
}
