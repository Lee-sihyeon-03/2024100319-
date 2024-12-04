#include <stdio.h>

int main() {
    int num[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    char call[26];
    int result = 0;
    scanf("%s", call);
    for(int i=0; call[i]!='\0'; i++) {
        result = result + num[call[i]-65] ;
    }
    printf("%d", result);
}
