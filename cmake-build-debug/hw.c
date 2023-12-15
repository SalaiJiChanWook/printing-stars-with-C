//
// Created by uchia on 12/9/2023.
//
#include <stdio.h>
int main() {

    int row;
    printf("Enter the role numbers: ");
    scanf("%d",&row);
    for(int i=0; i <= row; i++){
        int c = row - i;
        int c2 = (i * 2) - 1;
        for(int j=0; j <= c; j++){
            printf(" ");
        }
        for(int k=0; k < c2; k++){
            printf("*");
        }
        for(int l=0; l <= c*2; l=l+1){
            printf(" ");
        }
        for(int m=0; m < c2; m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}