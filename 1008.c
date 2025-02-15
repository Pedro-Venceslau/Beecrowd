#include <stdio.h>
 
int main() {
    int num, qtd_h;
    float val_h, sal;
    
    scanf("%d%d", &num, &qtd_h);
    scanf("%f", &val_h);
    
    sal = (qtd_h * val_h);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);

    return 0;
}
