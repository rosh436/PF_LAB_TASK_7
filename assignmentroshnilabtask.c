#include<stdio.h>
int main(){
	int useremployeeID,i, count=0;
	int IDemployee[12];
	printf("Enter the employee ID:");
	for(i=0;i<12;i++){
		scanf("%d", &IDemployee[i]);
	}
	printf("Enter the id you want to find:");
	scanf("%d",&useremployeeID);
	for(i=0;i<12;i++){
if(IDemployee[i]==useremployeeID){
	count++;
	break;
	}
	}
	if(count!=0){
		printf("ID exists");
	}else
	printf("ID doesnt exist");
}


