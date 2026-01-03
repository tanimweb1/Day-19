#include<stdio.h>
int main(){

// practice codes for loop

int number,sum,rem,temp;
printf("Enter the number : ");
scanf("%d", &number);
sum = 0;
temp = number;

while(temp!=0){

rem=temp%10;
sum = sum + rem;
temp = temp/10;

}

printf("Sum is : %d", sum);



    return 0;
}