#include<stdio.h>
int main(){
	int studMarks[10];
int i, sum=0;
printf("Enter the marks:");
	for(i=0;i<10;i++){
		scanf("%d", &studMarks[i]);
		sum=sum+studMarks[i];
	}
	float average=sum/10;
	printf("The average is %2f", average);
}


