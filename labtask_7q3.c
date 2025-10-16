#include<stdio.h>
int main(){
	int partAge[8],i, Youngest;
	printf("Enter the age:");
	for(i=0;i<8;i++){
		scanf("%d", &partAge[i]);
	}
	 Youngest=partAge[0];
	for(i=1;i<=8;i++){
		if(partAge[i]<Youngest){
		   Youngest=partAge[i];
		}}
	printf("The youngest is %d",Youngest);	
}
