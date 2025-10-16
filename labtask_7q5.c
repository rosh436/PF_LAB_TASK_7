#include<stdio.h>
int main(){
	int ranNum[12],a=sizeof(ranNum)/sizeof(ranNum[0]),i,j=0,remNum;
	printf("Enter random numbers: ");
	for(i=0;i<a;i++){
		scanf("%d", &ranNum[i]);
	}
	printf("Enter a number you want to remove: ");
	scanf("%d", &remNum);
    for(i=0;i<a;i++){
		if(ranNum[i]!=remNum){
		ranNum[j]=ranNum[i];
		j++;
		}
	}
	for(i=0;i<j;i++)
	printf("%d  ", ranNum[i]);
}
