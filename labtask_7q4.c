#include<stdio.h>
int main(){
	int randomNum[6],i, last;
	printf("Enter the numbers:");
	for(i=0;i<6;i++){
		scanf("%d", &randomNum[i]);
	}
	last=randomNum[5];

	for(i=4;i>=0;i--){
		randomNum[i+1]=randomNum[i];
	}
		randomNum[0]=last;
		for(i=0;i<6;i++){
		printf("%d   ", randomNum[i]);
	}
}
