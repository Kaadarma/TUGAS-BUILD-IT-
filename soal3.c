#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    long long n, j, i;

    scanf("%lld", &n);
    j= 0;
    
    if (n <= 1){
        printf("BUKAN\n");
    }
    

    for (i = 1; i <= n; i++ ){
        if (n % i == 0){
            j++;
        }
    }

    if (j == 2){
        printf("PRIMA\n");
    }
    else {
        printf("BUKAN\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}