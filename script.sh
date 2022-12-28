#!/bin/bash
gcc -fopenmp  Kir_Assi_1.c -o Kir_Assi_1
export OMP_NUM_THREADS=1
./Kir_Assi_1

export OMP_NUM_THREADS=5
./Kir_Assi_1

export OMP_NUM_THREADS=10
./Kir_Assi_1