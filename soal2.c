#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char A [101], B[101];
    
    scanf("%s", A);
    scanf("%s", B);

    if (strlen(A) != strlen(B)){
        printf("berbeda\n");

        } else {
            
            if (strcmp(A, B) == 0) {
                printf("identik\n");
            
            }else {
                printf("mirip\n");
            }

        }
        return 0;

}
