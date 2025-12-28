#include <stdio.h>
/*void printHello();         //declaration/prototype
int main(){
    printHello();           //function call
    return 0;
}~
void printHello(){
    printf("Hello world\n");       //function defination
    printf("My name is Samiksha Jha");
}*/

//print hello and good bye
/*void printHello();
void printbye();
int main(){
    printHello();
    printbye();
    return 0;
}
void printHello(){
    printf("Hello!\n");
}
void printbye(){
    printf("Goodbye!!");
}*/

//print a function that print Namaste if user is Indian & Bonjour if the user is french
/*void namaste();
void bonjour();
int main(){
    printf("Enter f for french or i for india");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}*/


//passinf arument

//addition
/*int sum(int a,int b);
int main(){
    int a,b;
    printf("enter a num");
    scanf("%d",&a);
    printf("enter second num");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("sum is %d\n", s);
    
    return 0;
}
int sum(int x, int y){
    return x+y;
}*/

//table
/*void printTable(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    printTable(n);     //argument/actual parameter
    return 0;
}
void printTable(int x){        //parameter/formal parameter
    for(int i = 1; i<=10; i++){
        printf("%d\n",i*x);
    }
}*/


//write a function to convert celsius to fahrenheit
/*float covertTemp(float c);
int main(){
    printf("%f", covertTemp(37));
    return 0;
}
float covertTemp(float c){
    float far = c * (9.0/5.0) + 32;
    return far;
}*/

//fahrenheit to celsius
/*float convertTemp(float far);
int main(){
    printf("%f", convertTemp(98));
    return 0;
}
float convertTemp(float far){
    float c = (far - 32) * 5.0/9.0;
    return c;
}*/

 //write a function to calculate percentege of a student form marks in science, math, sanskrit
 /*int calPerc(int science, int math , int sanskrit);
 int main(){
    printf("%d", calPerc(80,80,80));
    return 0;
 }
 int calPerc(int science, int math , int sanskrit){
    int percentage = ((science+math+sanskrit)/3);
    return percentage;
 }*/



 
