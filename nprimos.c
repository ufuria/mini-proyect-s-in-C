#include <stdio.h>

int esPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int cantidadPrimos = 0;
    
    for (int i = 3; i <= 100; i++) {
        if (esPrimo(i)) {
            cantidadPrimos++;
        }
    }
    
    printf("La cantidad de numeros primos entre 3 y 100 es: %d\n", cantidadPrimos);
    
    return 0;
}
