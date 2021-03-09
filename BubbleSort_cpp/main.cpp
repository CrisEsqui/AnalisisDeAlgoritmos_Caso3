#include <iostream>
#include <ctime>


using namespace std;



int main() 
{
    unsigned t0, t1;
 
	t0=clock();
	
 
    int array[] = {5,10,42,73,92813,2198712,9872,982981,21192, 502}; 
    int arraySize = 10;

    int index1, index2, aux; 
 
    for (index1 = 0; index1 < arraySize-1; index1++){ 
        
        for (index2 = 0; index2 < arraySize-index1-1; index2++){ 

            if (array[index2] > array[index2+1]){ 
                aux = array[index2];
                array[index2] = array[index2+1];
                array[index2+1] = aux;
    
            } 
        }    
    }
         
    cout << "Ordenado: " << endl; 
    for (int index2=0; index2 < arraySize; index2++){
        cout << "[" <<array[index2] << "] ";  
    }
    cout << endl;

    t1 = clock();
 
	double time = (double(t1-t0)/CLOCKS_PER_SEC);

    cout << "Tiempo de ejecucion: " << time << endl;
    return 0; 
} 