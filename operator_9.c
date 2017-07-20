//Written By Robiuddin Robi
#include<stdio.h>

int main(){
	int a,b,c,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	
	x = a-(b/3)+(c*2)-1;
	y = a-(b/(3+c)*2)-1;
	z = a-((b/3)+c*2)-1;
	
	printf("\nX = %d",x);
	printf("\nY = %d",y);
	printf("\nZ = %d",z);
	return 0;
}
