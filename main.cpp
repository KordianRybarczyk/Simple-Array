#include <iostream>
#include "Array.h"
void menu(void){
    printf("1. Enter values\n");
    printf("2. Content of the array\n");
    printf("3. Minimum value of the array\n");
    printf("4. Maximum value of the array\n");
    printf("5. Average value of the array\n");
    printf("0. END\n");
}

int main() {
    int array[SIZE]= {1,2,3,4,5,6,7,8,9,10};
    printf("simple array..\n");
    int option = 0;
    int minimum = findMinValue(array);
    int maximum = findMaxValue(array);
    float average = averageValue(array);
    do {
        menu();
        scanf("%d",&option);
        switch (option) {
            case  0:
                break;
            case 1:
                enterValue(array);
                break;
            case 2:
                showArray(array);
                break;
            case 3:
                findMinValue(array);
                printf("minimum value = %d\n",minimum);
                break;
            case 4:
                findMaxValue(array);
                printf("maximum value = %d\n",maximum);
                break;
            case 5:
                averageValue(array);
                printf("Average value = %f\n", average);
                break;
            default:
                printf("Wrong option, choose the right one\n");
        }
    } while (option !=0);
    printf("END");
    return 0;
}
