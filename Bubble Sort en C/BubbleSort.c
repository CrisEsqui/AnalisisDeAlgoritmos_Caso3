#include <stdio.h>

void bubbleSort(int pArray[], int pSize)
{
    int i,j,aux;

    for (i=0; i<pSize; i++)
    {
        for(j=0; j<pSize-i-1; j++)
        {
            if (pArray[j] > pArray[j+1])
            {
                aux = pArray[j];
                pArray[j] = pArray[j+1];
                pArray[j+1] = aux;
            }
        }
    }
}

void printArray(int pArray[], int pSize)
{
    int i;
    for (i=0; i<pSize; i++)
    {
        printf("%i  ", pArray[i]);
    }
}


int main()
{
    int size = 10;
    int numbers[] = {4,5,50,23,45,100,-1,30, -100, 55};

    bubbleSort(numbers, size);
    printArray(numbers, size);


    return 0;
}