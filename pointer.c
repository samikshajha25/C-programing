#include <stdio.h>
/*int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}*/


/*int main(){
    int age = 22;
    int *ptr = &age;

    //address
    //printf("%p", &age);
    //printf("%u\n", &age);

    //printf("%u\n", ptr);

    //printf("%u", &ptr);


    //value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d", *(&age));
}*/


//pointer to pointer

/*int main(){
    float price = 100.00;
    float *ptr = &price;
    float **ptr = &ptr;
}*/


//pointe in function call
/*void square (int n);       
void _square (int* n);   //pointer address
int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);
    _square(&number);           //number address
    printf("number = %d\n", number);

    return 0;
}
//call by value
void square (int n){      //copy
    n = n * n;
    printf("square = %d\n", n);
}
//call by reference
void _square (int* n){     //changes address
    *n = (*n) *(*n);
    printf("square = %d\n", *n);
}*/


// Swap 2 numbers, a & b
void swap(int a, int b);
int main(){
    int x = 3, y = 5;
    printf("x = %d , y = %d", x , y);
    return 0;
}
void swap(int a , int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d , b = %d", a,b);
}