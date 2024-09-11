#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int n, j, i, jumlah;
    
    
    scanf("%d", &n); 
    
    int array[n]; 
 
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                
                jumlah = array[j];
                array[j] = array[j + 1];
                array[j + 1] = jumlah;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d \n", array[i]);
    }
    
    return 0;
}

