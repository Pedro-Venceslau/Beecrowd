#include <stdio.h>

int main(){
    double A, B, C, pi = 3.14159, circ, tri, trap, ret, quad;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    // tri
    tri = (A * C)/2;
    printf("TRIANGULO: %.3lf\n", tri);
    
    // circ
    circ = (pi * C * C);
    printf("CIRCULO: %.3lf\n", circ);
    
    // trap
    trap = (A + B)*C/2;
    printf("TRAPEZIO: %.3lf\n", trap);
    
    // quad
    quad = (B*B);
    printf("QUADRADO: %.3lf\n", quad);
    
    // ret
    ret = (A*B);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}
