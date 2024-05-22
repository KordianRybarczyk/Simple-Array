#include <iostream>
#include "Array.h"
FILE * fptr;
void enterValue(int *array){
    printf("Enter values to array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void showArray(int *array){
    for (int i = 0; i < SIZE; i++) {
        printf("array[%d] = %d\n", i, array[i]);

    }
}

int findMaxValue(int *array){
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if(array[i] > max) max = array[i];
    }
    return max;
}
int findMinValue(int *array){
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if(array[i] < min) min= array[i];

    }
    return min;
}
float averageValue(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum = sum + array[i];
    }
    float avg=(float)sum/SIZE;
    return avg;
}
void fileEnter(int array[]){
    fptr = fopen("text.txt","w+");
    if(fptr ==0){
        exit(1);
    }
    for (int x = 0; x < SIZE; ++x) {
        fputc(array[x],fptr);
    }
    fclose(fptr);
}





void fileReading(int array[]){
    fptr = fopen("text.txt", "r+");
    fseek(fptr,0,SEEK_SET);
    printf("Content of file\n");
    for (int i = 0; i < SIZE; i++) {
        array[i]= fgetc(fptr);
        fseek(fptr,0,SEEK_CUR);
        printf("%d\n",array[i]);
    }
    printf("\n");
    fclose(fptr);
}
