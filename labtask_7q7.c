 /*You want to create a program that extracts only the digits from the input and stores them in an array. Then, calculate the sum
of all extracted digits and display it.*/
#include<stdio.h>
int main(){
    char ranChar[100];
	char digitArr[50];
    int i,j=0,sum=0,k;
    printf("Enter a text:");
    scanf("%[^\n]",ranChar);
    
    for(i=0;ranChar[i]!='\0';i++){
        if(ranChar[i]>= '0'&&ranChar[i]<='9'){
        digitArr[j]=ranChar[i];
        sum=sum+(digitArr[j]-'0');
        j++;
        }
    }
    printf("The digits extracted are:");
    for (k = 0;k<j ; k++)
{
    printf("%c  ", digitArr[k]);
}
    printf("sum is %d", sum);
}
