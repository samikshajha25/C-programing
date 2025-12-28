#include <stdio.h>

//print hello world 5 times
/*void printHW(int count);

int main(){
    printHW(5);
    return 0;
}
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count - 1);
}*/


//sum to N natural numberu7b yn
/*int sum(int n);
int main(){
    printf("sum is %d", sum(11));
    return 0;
}
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1= sum(n-1);
    int sumN = sumNm1+n;
    return sumN;
}*/


//factorial of n
/*int fact(int n);
int main(){
    printf("factorial is %d", fact(5));
    return 0;
}
int fact(int n){
    if(n == 1){
        return 1;
    }
    int fact1 = fact(n-1);
    int factN= fact1 * n;
    return factN;
}*/


//write a function to print n terms of the fibonacci sequence
int fs(int n);
int main(){
    printf("%d", fs(6));
    return 0;
}
int fs(int n){
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
    int fs1 = fs(n-1);
    int fs2 = fs(n-2);
    int fsN = fs1 + fs2;
    return fsN;
}



