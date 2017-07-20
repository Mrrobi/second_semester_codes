## Welcome to My Page


### Operator_1

```markdown
1.Program that will take two numbers X and Y as inputs, then calculate and print the values of their addition, subtraction, multiplication, division (quotient and reminder). 

Sample input (X,Y)	Sample output
5     10	     Addition: 15
                     Subtraction: -5
                     Multiplication: 50
                     Quotient : 0
                     Reminder: 5

-5     10.5	     Addition: 5.5
                     Subtraction: -15.5
                     Multiplication: -52.5
                     Quotient: 0
                     Reminder: -48
		     ```
# Main Code

```markdown
Syntax highlighted code block

//Written By Robiuddin Robi
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	double a,b,add,sub,mul,quo,rem;
	scanf("%lf %lf",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	quo=a/b;
	printf("\nAddition:%.1lf",add);
	printf("\nSubtraction:%.1lf",sub);
	printf("\nMultiplication:%.1lf",mul);
	printf("\nQuotient:%d",(int)quo);
	rem=(quo-(int)quo)*10;
	printf("\nRemainder:%d",(int)rem);
		
	return 0;
	getch();
}
```

For raw file [`operator_1.c`](https://github.com/Mrrobi/second_semester_operators/blob/master/operator_1.c).
###Operator_2
```markdown
Program that will calculate the area of a circle having radius r. 
Area, A = Pi * r *r

Sample input (r)	Sample output
5			Area:  31.4
10.5			Area:  65.94
```
# Main Code

```markdown
//Written By Robiuddin Robi
#include<stdio.h>

int main(){
	float r,result;
	float Pi=3.1416;
	scanf("%f",&r);
	result=Pi*(r*r);
	printf("Area:%.2f",result);
	return 0;
}
```
###Operator_3
```markdown
Program that will take two numbers (a, b) as inputs and compute the value of the equation – (Without using math.h)

X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)

Sample input (a, b)	Sample output
5         10.5		X = 2.315475
100      -250		X = -12.766287
```
# Main Code
```markdown
//Written By Robiuddin Robi
#include<stdio.h>

int main(){
	float a,b,x;
	scanf("%f %f",&a,&b);
	x = (3.31 * (a*a) + 2.01 * (b*b*b) ) / (7.16 * (b*b) + 2.01 * (a*a*a) );
	printf("X = %f",x);
	return 0;
}
```
#Operator_4
```markdown
Program that will increment and decrement a number X by 1 inside the printf function. (Use ++ and - - operators)

Sample input(X) 	Sample output
5	 		X++ :    5
			++X :    6
			X- -  :    5
			--X   :    4
-5			X++ :    -5
			++X :    -4
			X- -  :    -5
			--X   :    -6
```
# Main Code
```markdown
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
```



### MD Robiuddin Robi


### Support or Contact

[contact support](www.facebook.com/robiz2) and we’ll help you sort it out.
