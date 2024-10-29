#include <stdio.h>

//FUNCTION TO CHANGE TWO VARIABLES' VALUE
void swap(int* x, int* y){

    int tmp = *x; // Store value on address x for while

    *x = *y; // Store value on address y to address x
    *y = tmp; // Store value on address tmp (old x) to address y

}

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Please provide two variables: \n");
    scanf("%d %d", &a, &b);

    printf("Swapped values: ");

    swap(&a, &b); // Swap values

    printf("%d %d\n", a, b);
    

    return 0;
}
