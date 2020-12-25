#include <iostream>

int main(){

    int m = 0,n = 0;

//    printf("Please, input number of lines ");
    scanf("%d ", &m);

//    printf("Please, input amount of numbers ");
    scanf("%d ", &n);

    int arrOne[m];
    int arrTwo[n];
    int arrThree[m][n];

    for(int i;i < m; i++){
        arrOne[i] = arrOne[m];
    }

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arrTwo[i]);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arrThree[i][j] = arrTwo[j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j=0; j < n; j++)
            printf("%d ", arrThree[i][j]);
        printf("\n");
    }

    return 0;
}