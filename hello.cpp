#include <stdio.h>

int main(){
	int mark[5];
	int sum = 0;
	int average;
	 
	 for(int i=0; i<5; i++)
	 {
	   printf("enter your marks:");
	   scanf("%d",&mark[i]);
	   sum = sum + mark[i];	
	 }
	 
	 average = sum / 5;
	 printf("the average of five subjects marks is %d", average);
	 return 0;
}
