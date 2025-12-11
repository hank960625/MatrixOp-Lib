#include <stdio.h>
#include "matrix_op.h"

void mat_add(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void mat_sub(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
             R[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mat_mulelm(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
             R[i][j] = A[i][j] * B[i][j];
        }
    }    
}


void mat_print(int A[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d ", A[i][j]);
        }
        printf("\n");
    }
}

void mat_mul(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            int sum = 0;
            for (int k = 0; k < SIZE; k++) {  
                sum += A[i][k] * B[k][j];
            }
            R[i][j] = sum;
        }
    }   
}

void mat_transpose(int A[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[j][i] = A[i][j];
        }
    }
}
