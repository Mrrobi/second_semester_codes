//Written By Robiuddin Robi
#include<stdio.h>
int main(){
	int a;
	float b;
	scanf("%d %f",&a,&b);
	
	printf("\nAssignment: %f assigned to an int produces: %d",b,(int)b);
	printf("\nAssignment: %d assigned to a float produces %f",a,(float)a);
	printf("\nType Casting: (float) %d produces %f",a,(float)a);
	printf("\nType Casting: (int) %f produces %d",b,(int)b);
	return 0;
}
