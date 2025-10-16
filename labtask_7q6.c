#include<stdio.h>
int main(){
    int dailyStatus[10],a=sizeof(dailyStatus)/sizeof(dailyStatus[0]),i,sum=0;
    printf("Enter daily status for profit and loss");
    for(i=0;i<a;i++){
        scanf("%d",&dailyStatus[i]);
    }
    for(i=0;i<a;i++){
        if(dailyStatus[i]>0)
        sum=sum+dailyStatus[i];
    }
	printf("The sum is %d", sum);
}
