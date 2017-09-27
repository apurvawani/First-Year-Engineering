/*Given an array A [ ] having distinct elements, write a C program to find the next greater element for each element of the array in order of their appearance in the array. If no such element exists, output -1.*/

#include <stdio.h>
struct stack{
	int arr[1000][2];
	int top;
};
struct stack s;
int push(int,int);
int* pop();
int main() {
	int T = 0;
	scanf("%d",&T);
	int j = 0,N = 0;
	for(j = 0; j < T; j++){
      	scanf("%d",&N);
        	int r=0,i=0,k=0;
            int A[N] , *x;
            for(i = 0; i < N; i++){
                scanf("%d",&A[i]);
            }
            s.top = -1;
	      push(A[0],0);
	      i=1;
	      while(i<N){
			if(s.arr[s.top][0]<A[i]){			
			        x=pop();
			        A[x[1]] = A[i];
			        //printf("%d",A[i]);
			        r=0;
			}
		      else{
    			    	push(A[i],i);	
    			    	r=1;
    			    	i++;		
		      }	
    		    	if(r==0 && s.top==-1){
    			    	push(A[i],i);
    			    	i++;
    		    	}
    	    	}
    	    	while(s.top!=-1){
    		    	x=pop();
    		    	A[x[1]] = -1;
    		    	//printf("-1");
    	    	}
	      for(i = 0; i < N; i++){
                	printf("%d ",A[i]);
            }    
	      printf("\n");
	}	
	return 0;
}
int push(int y,int index){
    	if(s.top==999){
    		printf("Stack is full!!\nCannot push more elements.\n");
    	}
    	else{
    		s.arr[++s.top][0] = y;
    		s.arr[s.top][1] = index;
    	}
}
int* pop(){
    	return(s.arr[s.top--]);
    	if(s.top==-1){
    		printf("Stack is empty!!\nCannot pop more elements.\n");
    	}
}
