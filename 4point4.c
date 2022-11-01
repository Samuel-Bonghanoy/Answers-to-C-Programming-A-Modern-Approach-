#include<stdio.h> 

int main(void) 
{ 
   int m, digit, sum = 0, base = 1; 
   printf("Enter a decimal number: "); 
   scanf("%d",&m); 

   while (m != 0) 
   { 
       digit = m % 8; 
       m /= 8; 
       sum = sum + digit * base; 
       base *= 10; 
   } 
   printf("In octal, your number is %05d", sum); 
   return 0;
} 