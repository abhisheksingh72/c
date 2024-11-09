#include <stdio.h>
#include <math.h>
// to find out multiplication table of any no.
int main(){

    int userInput,i;
    printf("Enter your No. : ");
    scanf("%d",&userInput);
    i=1;
    while(i<=10){
        printf("%d * %d = %d \n",userInput,i,i*userInput);
        i++;

    }


    return 0;
}