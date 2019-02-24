//
// Created by David Ceniceros 2/24/2019.
//

#include <stdio.h>

//global variable and functions (2) and (3)
int global = 9;

void wont_change(int i) {
    i = 10;
}

void change(int *pointer_to_global) {
    *pointer_to_global = 10;
}

void change_again(int *pointer_to_global) {
    *pointer_to_global = 11;
}

//functions (3)
int add_one(int argument_i) {
    return argument_i + 1;
}

int subtract_four(int argument_i) {
    return argument_i - 4;
}


int main() {
    printf("pointers (1)\n");
    int a = 5;
    int *b;
    *b = a;
    printf("If a = 5 and *b equals a.\n");
    printf("the value of a is %d.\n", a);
    printf("the value of *b is %d.\n\n", *b);
    *b = 3;
    printf("If the value of *b is changed to 3.\n");
    printf("the values of a is still %d.\n", a);
    printf("but the new value of b is %d.\n\n", *b);
    a = 4;
    printf("If the value of a is changed to 4.\n");
    printf("the values of a is now %d.\n", a);
    printf("but the value of *b is still %d.\n\n\n", *b);


    printf("global variable and functions (2)\n");
    printf("global equals %d.\n", global);
    wont_change(global);
    printf("using a function that does not use pointers, global equals %d.\n", global);
    change(&global);
    printf("using a function that uses pointers to change global, global equals %d.\n", global);
    change_again(&global);
    printf("using another function to change the global again makes it equal to %d.\n\n\n", global);


    printf("global variables and functions (3)\n");
    printf("global equals %d.\n", global);
    global = add_one(global);
    printf("adding one to global using a function makes global equal to %d.\n", global);
    global = subtract_four(global);
    printf("subtracting four from global using a function makes global equal to %d.\n\n\n", global);


    printf("arrays with pointers (4)\n");
    int iarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("iarray[10] = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.\n");
    printf("iarray[5] = 5 and iarray[7] = 7.\n");
    int *jarr = iarray;
    printf("int *jarr = iarray.\n");
    jarr[5] = jarr[5] + 1;
    printf("jarr[5] = jarr[5] + 1 equals %d.\n", jarr[5]);
    jarr[5] = jarr[5] + jarr[7];
    printf("jarr[5] = jarr[5] + jarr[7] equals %d.\n", jarr[5]);

    return 0;
}