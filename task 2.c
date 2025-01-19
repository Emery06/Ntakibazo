#include <stdio.h>
#include <stdlib.h>
int main()
{
int stock[]={100,240,330,675,455};
int i;
int sum=0;
int avg;
    for(i=0; i<5 ; i+1){
    	sum=sum + stock[i];
    	avg=sum / 5;
	printf("Product %d Stock:%d\n",i+=1,stock[i]);
}
   
    printf("Total Stock:%d\n",sum);
    
    printf("Average stock:%d\n",avg);

	return 0;
}
