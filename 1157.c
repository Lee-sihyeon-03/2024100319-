#include <stdio.h>
 
int main(void){
    char word[1000001];
    scanf("%s", word);
 
    int alphabet[26];
    for(int i=0; i<26; i++){
        alphabet[i]=0;
    }
 
    int len = strlen(word);
    for(int j=0; j<len; j++){
        char cur = toupper(word[j]);
        alphabet[cur-'A']++;
    }
 
    int max = 0, num = 0, max_alphabet = 0;
    for(int k=0; k<26; k++){
        if(alphabet[k] > max){
            max = alphabet[k];
            num = 1;
            max_alphabet='A'+k;
        }
        else if(max!=0 && alphabet[k] == max){
            num++;
        }
        else{
            continue;
        }
    }
  
 
    if(num==1){
        printf("%c\n", max_alphabet); 
    }
    else{
        printf("?");
    }
}