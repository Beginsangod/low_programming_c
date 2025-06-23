#include <stdio.h>

int main(void){
    int i = 5;
    int* p = &i;
    printf("%d \n", i);
    *p = 8;
    printf("%d", i);
    return 0;
}