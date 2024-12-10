#include<stdio.h>
int main()
{
    int number,digits,oddcount=0,evencount=0;
    printf("enter a number");
    scanf("%d",&number);
    if (number<0)
    {
        number=-number;

    }
    while(number>0)
    {
        digits=number%10;
        if (digits%2==0)
        {
            evencount++;

        }
        else {
                oddcount ++;
        }
        number/=10;

    }
      printf("number of even digits %d\n",evencount);
        printf("number of odd digits \n",oddcount);

}
