//EXPT 2A - SIMPLE CALCULATOR

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void display(float s)
{
printf("Ans: %.2f \n",s);
}

float add(int x,int y)
{
    return x+y;
}

float subtract(int x, int y)
{
    return x-y;
}

float multiply(int x,int y)
{
    return x*y;
}

float divide(int x,int y)
{
    if(y!=0) return (float)x/y;
    else return 0.0;
}

float power(int x,int y)
{
    return pow(x,y);
}

float squareroot(int x)
{
    return sqrt(x);
}

int main()
{
int a,b;
    float ans;
    unsigned char c;
while(1)
    {
printf("\nEnter the two numbers separating with single space: ");
scanf("%d %d", &a,&b);
printf("Enter the arithmatic operation (+,-,*,/,^,s) : ");
scanf(" %c",&c);
    switch(c)
            {
                case '+': ans=add(a,b);
                                break;
                case '-': ans=subtract(a,b);
                                break;
                case '*': ans=multiply(a,b);
                                break;
                case '/': ans=divide(a,b);
                                break;
                case '^': ans=power(a,b);
                                break;
                case 's': ans=squareroot(a);
                                break;
                case 'e': exit(0);
                default: printf("Invalid Operation\n");
            }
    display(ans);
    }
    return 0;
}







