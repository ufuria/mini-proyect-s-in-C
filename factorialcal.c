#include <stdio.h>

int main() {
  int n, i;
  unsigned long long factorial = 1;

  // Validar que el número ingresado sea positivo.
  do {
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if (n < 0) {
      printf("Error: el número ingresado es negativo. Intente nuevamente.\n");
    }
  } while (n < 0);

  // Calcular el factorial del número ingresado.
  for (i = 1; i <= n; i++) {
    factorial *= i;
  }

  // Mostrar el resultado del factorial.
  printf("%d! = %llu\n", n, factorial);

  return 0;
}

