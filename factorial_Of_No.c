#include <stdio.h>
#include <math.h>
// to find out factorial of any no.
int main(){

    int m,n,f;
    printf("Enter your No. : ");
    scanf("%d",&n);
    m = n;
    f=1;
    
    while(n!=0){
        f=f*n;
        n--;

    }
    
    printf("\n Factorial of %d is %d \n",m,f);

    return 0;
}

