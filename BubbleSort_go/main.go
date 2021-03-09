package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()
	lista := []int{5, 10, 42, 73, 92813, 2198712, 9872, 982981, 21192, 502}
	lenght := 10
	for index1 := 0; index1 < lenght-1; index1++ {
		for index2 := 0; index2 < lenght-1; index2++ {
			if lista[index2] > lista[index2+1] {
				lista[index2+1], lista[index2] = lista[index2], lista[index2+1]
			}
		}
	}
	fmt.Println("\nOrdenada\n\n", lista, "\n")
	fmt.Println("Tiempo de ejecucion: ", time.Since(start))
}
