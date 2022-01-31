#include <stdio.h>
 
int main() {
 
    int NUMBER , HOURT ;
    float VALORHOUR ; 
    double SALARY;
    
    scanf("%i", &NUMBER);
    scanf("%i", &HOURT);
    scanf("%F", &VALORHOUR);
    
    SALARY = HOURT * VALORHOUR;
    
    printf("NUMBER = %i\n",NUMBER);
    printf("SALARY '= U$ %.2lf \n",SALARY);
 
    return 0;
}
