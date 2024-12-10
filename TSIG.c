#include<stdio.h>
 void swap(int a ,int b){
 a=a+b;
 b=a-b;
 a=a-b;
 printf("the number after swapping num2= %d,num1= %d\n",a,b);
 }
 int main()
 {

     int num1,num2;
     printf("enter the first num");
     scanf("%d",&num1);
     printf("enter the sceond num");
     scanf("%d",&num2);
     printf("the numbers before swapping num1=%d,num2=%d\n",num1,num2);
     swap(num1,num2);


 }
