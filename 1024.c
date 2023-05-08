#include <stdio.h>

int main() {
    int potencia = 1;
    
    while (potencia <= 1000) {
        potencia *= 2;
    }
    
    printf("La primera potencia de dos mayor que 1000 es: %d\n", potencia);
    
    return 0;
}
