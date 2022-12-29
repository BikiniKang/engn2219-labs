#include <stdio.h>
#include <stdlib.h>

int global_array[10] = {1,2,3,4,5,6,7,8,9,10};
int global_int = 0;

void inc();

int main(){

    int stack_array[10] = {10,9,8,7,6,5,4,3,2,1};
    
    printf("Element 2 of global_array is %d\n",global_array[2]);
    printf("Element 6 of stack_array is %d\n",stack_array[6]);

    printf("global_int: %d\n",global_int);

    for(int i = 0; i < 10; i++){
        inc();
    }

    printf("global_int: %d\n",global_int);

    return 0;
}

void inc(){
    static int static_int = 0;
    int stack_int = 0;
    static_int++;
    stack_int++;
    global_int++;

    printf("static_int: %d stack_int: %d global_array[static_int]: %d\n",static_int, stack_int, global_array[static_int]);
}