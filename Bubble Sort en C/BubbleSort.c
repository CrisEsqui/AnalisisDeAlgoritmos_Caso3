#include <stdio.h>
#include <time.h>

const int SIZE = 30000;
int numbers[] = {307734, 155657, 187029, 149704, 157889, 290671, 481743, 214803, 327204, 158580, 264491, 60768, 323149, 44649, 99956, 253380, 305488, 248366, 191329, 455700, 231493, 78851, 462832, 292549, 5504, 149479, 164266, 42151, 493618, 70417, 208761, 499031, 461368, 23270, 384377, 388311, 192102, 282641, 376760, 318013, 367633, 68152, 443689, 21075, 197182, 51986, 435116, 128732, 279785, 160593, 120119, 16625, 233907, 365730, 113111, 453792, 30005, 365313, 335377, 322100, 249539, 96422, 404719, 60726, 496258, 67058, 472303, 485898, 474856, 372420, 438279, 52004, 275470, 437373, 326830, 223612, 197603, 427795, 88341, 58051, 337553, 406184, 137505, 399430, 17440, 311998, 145984, 176758, 148140, 33384, 23183, 437305, 141829, 130390, 124418, 230509, 200410, 163083, 368046, 309175};

int main()
{
    clock_t start, final;
    start = clock();

    int size = 100;
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
    double tiempo_final = (final-start)/CLK_TCK;
    final = clock();
    printf("\nEl tiempo de ejecucion fue de ");
    printf("\n%d",tiempo_final);
    printf("\nMemoria ocupada: %d", &numbers[size+1]-&SIZE);
    return 0;
}