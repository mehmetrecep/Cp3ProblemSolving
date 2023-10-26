#include <stdio.h>
void swap(int* x, int* y);
int main(int argc, char** argv){
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);
    swap(&number1, &number2);
    printf("%d\n",number2);
    return 0;
}
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}