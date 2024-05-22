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
    do {
        menu();
        scanf("%d",&option);
        switch (option) {
            case  0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Wrong option, choose the right one\n");
        }
    } while (option !=0);
    printf("END");
    return 0;
}
