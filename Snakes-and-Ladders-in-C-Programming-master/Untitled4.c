#include <stdio.h>
int ans=1;
int fact(int i){
    if(i==0) return 1;
    ans=i*ans;
    fact(i-1);
    return ans;
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", fact(n));
    return 0;
}
