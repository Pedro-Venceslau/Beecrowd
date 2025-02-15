#include <stdio.h>
 
int main() {
    char nome[10];
    double sal_fix, total_v, com, final;
    
    scanf("%s %lf %lf", &nome, &sal_fix, &total_v);
    
    com = (0.15 * total_v);
    final = (sal_fix + com);
    
    printf("TOTAL = R$ %.2lf\n", final);

 
    return 0;
}
