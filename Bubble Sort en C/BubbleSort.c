#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, final;
    start = clock();

    int size = 10;
    int numbers[] = {5,10,42,73,92813,2198712,9872,982981,21192, 502};
    int aux;

    //For para el ordenamiento
    for (int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                aux = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = aux;
            }
        }
    }

    printf("ARREGLO ORDENADO\n");
    //For para imprimir el arreglo ordenado
    for (int i=0; i<size; i++)
    {
        printf("[%i] ", numbers[i]);
    }

    final = clock();
    printf("\nEl tiempo de ejecucion fue de %f", (final-start)/CLK_TCK);
    printf("\nInicial: %i, Final: %i, CLK_TCK: %i", start, final, CLK_TCK);

    return 0;
}