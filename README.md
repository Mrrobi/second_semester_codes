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
### Operator_5
```markdown
Program that will increment and decrement a number X by Y. (Use += and -= operators)

Sample input(X,Y)	Sample output
5     10		Incremented Value:    10
			Decremented Value:   -5
-5      5		Incremented Value:      0
			Decremented Value:   -10
```
# Main Code
```markdown
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
```
### Operator_6
```markdown
Program that will multiply and divide a number X by Y. (Use *= and /= operators)

Sample input(X,Y)	Sample output
56       10		Multiplication:    560
			Division:   5
-56      -10		Multiplication:    560
			Division:   5

```
# Main Code
```markdown
//Written By Robiuddin Robi
#include<stdio.h>
int main(){
	int x,y,a,b;
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	printf("\nMultiplication:%d",(x*=y));
	x=a;
	y=b;
	printf("\nDivision:%d",(x/=y));
	return 0;
}
```
### Operator_7
```markdown
Program that will declare and initialize an integer and a floating point number. Then it will perform floating to integer and integer to floating conversions using
(a)	Assignment operation
(b)	Type casting

Sample input		Sample output
-150      123.125	Assignment:   123.125000 assigned to an int produces 123
			Assignment:  -150 assigned to a float produces -150.000000
			Type Casting: (float) -150 produces -150.000000
			Type Casting: (int) 123.125 produces -123

```
# Main Code
```markdown
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
```
### Operator_8
```markdown
Program that will take two numbers as inputs and print the maximum value. (Using conditional operator - ?)

Sample input (x, y)	Sample output
20     100		Max: 100
50     -20		Max: 50

```
# Main Code
```markdown
//Written By Robiuddin Robi
#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	(a>b)?printf("Max:%d",a):printf("Max:%d",b);
	return 0;
}
```
### Operator_9
```markdown
Program that will evaluate the following equations - 
X = a – b / 3 + c * 2 – 1
Y = a – ( b / ( 3 + c ) * 2) - 1 
Z = a – ( ( b / 3) + c * 2) - 1

Sample input (a, b, c)		Sample output
9     12     3			X = 10
				Y = 4
				Z = -1

```
# Main Code
```markdown
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
```
### Operator_10
```markdown
Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)

	(a+b)≤80 
	!(a+b)
	c!=0

Sample input (a, b, c)		Sample output
10   -10   0			1
				1
				0

```
# Main Code
```markdown
//Written By Robiuddin Robi
#include<stdio.h>
#include<stdbool.h>

int main(){
	bool x,y,z;
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	x=a;
	y=b;
	z=c;
	printf("\na) %d",x);
	printf("\nb) %d",y);
	printf("\nc) %d",z);
	return 0;
}
```



### MD Robiuddin Robi


### Support or Contact

[contact support](www.facebook.com/robiz2) and we’ll help you sort it out.
