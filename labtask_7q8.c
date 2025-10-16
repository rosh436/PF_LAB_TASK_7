//take an array of 10 elements, and write a program to print if its ascending or not
#include<stdio.h>
int main(){
	int ranNum[10],i,a=sizeof(ranNum)/sizeof(ranNum[0]), count=0;
	printf("Enter 10 numbers: ");
    for(i=0;i<a;i++){
    	scanf("%d", &ranNum[i]);
	}
	 for(i=0;i<a-1;i++){
	 	if(ranNum[i]<ranNum[i+1]){
	 	count++;}
	 }
	 if(count==a-1)
	 printf("The order is ascending");
	 else
	 printf("The order is not ascending");
	 
}
