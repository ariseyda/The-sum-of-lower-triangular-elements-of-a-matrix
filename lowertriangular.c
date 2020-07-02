#include<stdio.h>
#include<time.h>

//Write a C program to find the sum of lower triangular elements of a matrix. 

int main(){
	
	time_t t;
	int n;
	int i,j;
	printf("Enter N for NXN matrix:");
	scanf("%d",&n);
	int matrix[n][n];
	srand((unsigned) time(&t));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matrix[i][j]=(rand() %20);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",matrix[i][j]);
			if(j<n-1){
				printf(" , ");
			}
		}
		printf("\n");
	}
	
	int sum=0,k=0;
	while(k<n){
	  for(i=k;i<n;i++){
		sum+=matrix[i][k];
	   }
	   k++;
	}
	printf("The sum of lower triangular elements of a matrix:%d",sum);
	
	
	
	return 0;
}
