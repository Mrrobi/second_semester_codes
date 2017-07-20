## Welcome to My Page


Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Operator_1

1.		Program that will take two numbers X and Y as inputs, then calculate and print the values of their addition, subtraction, multiplication, division (quotient and reminder). 

Sample input (X,Y)	Sample output
5     10	           Addition: 15
                     Subtraction: -5
                     Multiplication: 50
                     Quotient : 0
                     Reminder: 5

-5     10.5	         Addition: 5.5
                     Subtraction: -15.5
                     Multiplication: -52.5
                     Quotient: 0
                     Reminder: -48


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

For more details see [`operator_1.c`](https://github.com/Mrrobi/second_semester_operators/blob/master/operator_1.c).

### MD Robiuddin Robi


### Support or Contact

[contact support](www.facebook.com/robiz2) and we’ll help you sort it out.
