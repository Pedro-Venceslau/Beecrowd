#include <stdio.h>
 
int main() {
    int cod1, qtd1, cod2, qtd2;
    float val1, val2, total1, total2, total;
    
    scanf("%d %d %f", &cod1, &qtd1, &val1);
    scanf("%d %d %f", &cod2, &qtd2, &val2);
 
    total1 = (qtd1 * val1);  
    total2 = (qtd2 * val2);  
    total = (total1 + total2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}
