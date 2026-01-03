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




 // armstrong number 
int number,sum,temp,rem;
printf("enter the number : ");
scanf("%d",&number);
temp =number;
sum = 0;

while(temp!=0){

rem = temp%10;
sum = sum + rem*rem*rem;
temp = temp/10;

}

if(number==sum){
    printf("Armstorng number");
}
else{
    printf("Not armstorng");
}





    // check Armstorng number from 2 give number

    int i, initialNum, finalNum, sum, temp, rem;
    printf("Enter the initial number :");
    scanf("%d", &initialNum);
    printf("Enter the Final number :");
    scanf("%d", &finalNum);
    sum = 0;

    for (i = initialNum; i <= finalNum; i++)
    {
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
        sum = 0;
    }
 






 
    return 0;

}



