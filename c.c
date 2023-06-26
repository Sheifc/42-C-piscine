// This is a simple program in C to make a calculation selected by an user when supplied 2 numbers
#include <stdio.h>
int main(){
    int num1, num2, op;
    printf("Enter your choice: \n");
    printf("1.Addition \t 2.Subtraction \t 3. Multiplication \t 4.Division \n");
    scanf("%d",&op);
    printf("Enter 2 numbers : \n");
    scanf("%d %d",&num1,&num2);

    if(op==1){
        printf("The addition is:%d \n",num1+num2);
    } else if (op==2){
        printf("Substraction is:%d \n",num1-num2);
    } else if (op==3){
        printf("Multiplication is:%d \n",num1*num2);
    } else if (op==4){
        printf("Division is:%d \n",num1/num2);
    } else {
        printf("Wrong input, try again \n");
    }
    return 0;
}