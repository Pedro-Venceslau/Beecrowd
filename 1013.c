#include <stdio.h>
 
int main() {
    int a, b, c, maior1, maior2;
    
    scanf("%d%d%d", &a, &b, &c);
    
    maior1 = (a + b + abs(a-b))/2;
    maior2 = (maior1 + c + abs(maior1-c))/2;
    
    printf("%d eh o maior", maior2);
    printf("\n");
    
    return 0;
}
