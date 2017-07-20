//Written By Robiuddin Robi
#include<stdio.h>
int main(){
	int x,y,a,b;
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	printf("\nIncremented Value:%d",(x+=y));
	x=a;
	y=b;
	printf("\nDecremented Value:%d",(x-=y));
	return 0;
}
