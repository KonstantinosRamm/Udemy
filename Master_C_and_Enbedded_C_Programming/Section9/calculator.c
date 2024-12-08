#include <stdio.h>

int main(void){
    float x,y;
    int operator;

    printf("Enter 2 numbers : ");
    scanf("%f %f",&x,&y);

    printf("1:+\n2:-\n3:/\n4:*\n");
    printf("Enter the operator : ");
    scanf("%d",&operator);

    switch (operator){
        /* + */
        case 1:
        printf("result: %f",x+y);
        break;
        /* - */
        case 2:
        printf("result: %f",x-y);

        break;
        /* / */
        case 3:
        /*check if divider is 0*/
        if(y == 0){ printf("error: division with 0"); break;};

        printf("result: %f",x/y);

        break;
        /* * */
        case 4:
        printf("result: %f",x*y);

        break;
        default:
        printf("\nNo valid input");
    }


}