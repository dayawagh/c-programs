#include <stdio.h>
 
void printNumber(int i, int N);
 
int main(){
    int N;
    printf("Enter a number\n");
    scanf("%d", &N);
     
    printNumber(1, N);
 
    return 0;
}
 
void printNumber(int i, int N){
    if(i <= N){
         printf("%d ", i);
         printNumber(i + 1, N);
    }
}
