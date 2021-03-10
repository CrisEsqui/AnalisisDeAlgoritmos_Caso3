# AnalisisDeAlgoritmos_Caso3

Especificación del sistema

Processor: Intel(R) Core(TM) i7-3770 CPU @ 3.40GHZ 3.40 GHz
Installed memory (RAM): 16.0 GB
System type: 64-bit Operating System, x64-based processor

Pasos de prueba
- Se programó en Rust, Go y C++ un algoritmo de Bubble Sort y se aplicón con un array de 100 elemento idéntico en los 3
- Se usaron las funciones internas de cada lenguaje para medir el tiempo de ejecución y la cantidad de memoria usada.

Capturas:

Resultados de C:
<img src="Capturas/c.PNG" alt="Screenshot"/>

Resultados de C++:
<img src="Capturas/c++.PNG" alt="Screenshot"/>

Resultados de Rust:
<img src="Capturas/rust.PNG" alt="Screenshot"/>

Resultados de Go:
<img src="Capturas/go.PNG" alt="Screenshot"/>


Analísis de resultados:

Caso A: 
  Como puede observarse, la cantidad de memoria que utilizaron los programas en C y C++ fue la misma, debido a que contaban con las mismas variables.
  Además, se nota que el programa en C tuvo un tiempo de ejecución menor al de C++.

Caso B:
  El más rápido fue, notablemente, el programa codificado en C; seguido de C++, Rust y Go. Pueden verse los resultados en el archivo que se encuentra dentro de la carpeta TablaResultados.
