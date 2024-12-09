#include <stdio.h>
#include <math.h>


int main(void){
    float a,b,c;
    float root1,root2,imaginary, discriminant;

    printf("Enter values of a, b, c of quadratic equation (ax^2 + bx + c) :");
    scanf("%f %f %f",&a,&b,&c);

    /*Calculate discriminant*/
    discriminant = pow(b,2) - (4 * a * c);

    /*Calculate roots of quadratic equation based on the discriminant value*/
    /*discriminant must be higher than 0*/
    switch (discriminant > 0){
        /*Positive discriminant*/
        case 1: 
            root1 = (-b + sqrt(discriminant) / (2 * a));
            root2 = (-b - sqrt(discriminant) / (2 * a));
            printf("Two distinct and real roots exists: %.2f and %.2f",root1,root2);

        break;

        /*negative discriminant or 0*/
        case 0:
            switch (discriminant < 0){
                /*negative discriminant*/
                case 1:
                    root1 = -b / (2 * a);
                    root2 = root1;
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",root1, imaginary, root2, imaginary);
                break;
                case 0:
                    /*Zero discriminant*/
                    root1 = -b / (2 * a);
                    root2 = root1;
                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                    break;
                break;
            }
        break;
    }
    return 0;


}