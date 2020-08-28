#include <stdio.h>
int prime(int n, int i){
    if(i==1) return 1;
    else{
        if(n%i==0) return 0;
        else prime(n, i-1);
    }
}
int main(){
    int n, check;
    printf("Enter a number to check prime: ");
    scanf("%d", &n);
    check=prime(n, n/2);
    if(check==1) printf("\n%d is a prime.\n", n);
    else printf("\n%d is not a prime.\n", n);
    return 0;
}
