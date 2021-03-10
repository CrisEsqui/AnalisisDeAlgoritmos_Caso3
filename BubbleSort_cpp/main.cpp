#include <iostream>
#include <ctime>


using namespace std;

const int SIZE = 30000;
int array[] = {307734, 155657, 187029, 149704, 157889, 290671, 481743, 214803, 327204, 158580,
264491, 60768, 323149, 44649, 99956, 253380, 305488, 248366, 191329, 455700,
231493, 78851, 462832, 292549, 5504, 149479, 164266, 42151, 493618, 70417,
208761, 499031, 461368, 23270, 384377, 388311, 192102, 282641, 376760, 318013,
367633, 68152, 443689, 21075, 197182, 51986, 435116, 128732, 279785, 160593,
120119, 16625, 233907, 365730, 113111, 453792, 30005, 365313, 335377, 322100,
249539, 96422, 404719, 60726, 496258, 67058, 472303, 485898, 474856, 372420,
438279, 52004, 275470, 437373, 326830, 223612, 197603, 427795, 88341, 58051,
337553, 406184, 137505, 399430, 17440, 311998, 145984, 176758, 148140, 33384,
23183, 437305, 141829, 130390, 124418, 230509, 200410, 163083, 368046, 309175};

int main() 
{
 
    unsigned t0, t1;
 
	t0=clock();
	
 
    //int array[] = {5,10,42,73,92813,2198712,9872,982981,21192, 502}; 
    int arraySize = 100;

    int index1, index2, aux; 
 
    for (index1 = 0; index1 < arraySize; index1++){ 
        
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
    double memoria = &array[arraySize+1]-&SIZE;

    cout << "Tiempo de ejecucion: " << time << endl;
    cout << "Memoria inicia: " << &SIZE << ", termina: " << &array[arraySize+1] <<", la diferencia es " << memoria << endl;
    return 0; 
} 