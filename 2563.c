#include <stdio.h>

int main(){
    int num, x, y, sum = 0;
    char paper[100][100] = { 0 };
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++){
        scanf("%d %d", &x, &y);
        for (int j = x - 1; j < x + 9; j++){
            for (int k = y - 1; k < y + 9; k++)
                paper[j][k] = 1;
        }
    }
    
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++)
            sum += paper[i][j];
    }
    
    printf("%d", sum);
    
    return 0;
}
