#include<stdio.h>
void main()
{
     int a,x,next=1,sum,i;

    printf("Enter value :");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
    	x=next;
        next=sum;
        sum=x+next;

        printf("%ld\n",x);

            }
    printf("\n");
}
