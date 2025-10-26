#include<stdio.h>

int main(){
    //assuming that the characters are in smallcase
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 65 && ch<97){
        ch += 32;
    }
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u'){
        printf("\n%c is a vowel.", ch);
    }
    else{
        printf("%c is a consonant.", ch);
    }
    return 0;
}