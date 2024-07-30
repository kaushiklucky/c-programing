//Calculation of Arturo Roman's gross salary
//date:11/10/2022
# include<stdio.h>
int main(){
    float bp, da, hra, grpay;
    printf("\nEnter basic salary of Arturo Roman:");
    scanf("%f", &bp); 
    da = 0.4*bp;
    hra = 0.2*bp;
    grpay = bp+da+hra;
    printf("Basic salary of Arturo Roman = %f\n", bp);
    printf("Dearness allowance = %f\n", da);
    printf("House rent allowance = %f\n", hra);
    printf("Gross pay of Arturo Roman is %f\n", grpay);
    return 0;
}