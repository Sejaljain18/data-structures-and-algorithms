#include<stdio.h>
int towerOfHanoi(int n,char A,char B,char C){
    if(n==0)
    return 1;
    towerOfHanoi(n-1,A,C,B);
    printf(" disk %d is moving from %c to %c\n",n,A,B);
    towerOfHanoi(n-1,C,B,A);
    }
void main(){
towerOfHanoi(3,'A','B','C');
}