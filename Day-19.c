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




 // Reverse number
int number,sum,temp,rem;
printf("enter the number : ");
scanf("%d", &number);
sum = 0;
temp = number;

while (temp!=0)
{
    rem=temp%10;
    sum= sum*10+rem;
    temp = temp/10;
}
printf("Reverse is %d",sum);   



// palindrom number 
int number,sum,temp,rem;
printf("Enter the number : ");
scanf("%d",&number);
sum = 0;
temp = number;

while (temp!=0)
{
    rem = temp%10;
    sum = sum*10+rem;
    temp= temp/10;

}

if(number==sum){
    printf("Palindrome");
}

else{
    printf("Not a palindrome");
}


 


    return 0;

}

