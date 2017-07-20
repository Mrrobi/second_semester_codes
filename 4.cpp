//Written By Robiuddin Robi
#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	y=x;
	printf("\nX++:%d",x++);
	x=y;
	printf("\n++X:%d",++x);
	x=y;
	printf("\nX--:%d",x--);
	x=y;
	printf("\n--X:%d",--x);
	return 0;
}
