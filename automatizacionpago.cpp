#include<stdio.h>

int main()
{
   int answer, ask;
    float calculo;

        /* Solamente para la pregunta inicial es decir para luego saber si aplicar descuento o no ocupe ask 
            y para answer me refiero a todas las demas variables que me afectan el descuento a aplicar*/

    
        printf("N* de veces que se a atendido: \n 1-. minimo  10 veces por enfermedad leve y 2 veces por enfermedad grave?. \n 2.- minimo 5 enfermedades mediano grave y 1 por enfermedad grave?. \n 3-. Ninguna de las anteriores.");
        scanf("%d", &ask);
            while(ask != 1 or ask != 2 or ask != 3)
                printf("Ingrese un valor valido");
                scanf("%d", ask);
            
        printf("ingrese el numero de su respuesta\n 1-.Isapre\n 2-. Fonasa \n R: ");
            while (answer != 2 || answer != 2)
        {   
            printf("Ingrese un valor valido");
            scanf("%d", answer);     
        }

       {
        if (answer == 1)
        {
            printf("Ingrese el gravedad de su enfermedad.\n 1-. Leve.\n2. Mediana gravedad.\n 3. Grave.\n R: ");
            scanf("%d", &answer) ;
                while (answer != 1 || answer != 2 || answer != 3)
                    {  printf ("ingrese un valor valido");
                        scanf("%d", &answer);
                        }
                        if (answer = 1 )
                        {
                            
                        }
                        

        }
        


    }

}
