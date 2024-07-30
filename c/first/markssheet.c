//calculation of aggregate and percentage marks
//Date:11/10/2022
# include<stdio.h>
int main(){
    int English, Chemisrty, Physics, Maths, Python, PhysicalEducation,aggr;
    float per;
    printf("\nEnter marks in six subjects:");
    scanf("%d %d %d %d %d %d", &English, &Chemisrty, &Physics, &Maths, &Python, &PhysicalEducation);
    aggr = English+Chemisrty+Physics+Maths+Python+PhysicalEducation;
    per = aggr/6;
    printf("Aggregate marks = %d\n", aggr);
    printf("Percentage marks = %f\n", per);
    return 0;
}