#include <stdio.h>

int main(){
    int dist; //km
    float combs, consumo; //litro
    
    scanf("%d %f", &dist, &combs);
    
    consumo = dist/combs;    
    printf("%.3f km/l\n", consumo);

    return 0;
}
