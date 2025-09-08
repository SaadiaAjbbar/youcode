#include <stdio.h>
#include <string.h>
int main() {
    char c[50];
    int palindrome = 1;
    printf("Entrez une chaine : ");
    scanf("%s", c);
    int i = 0;              
    int j = strlen(c) - 1; 
    while(i < j) {            
        if(c[i] != c[j]) {
            palindrome = 0;   break;
         }
        i++;  
        j--;  
    }
    if(palindrome==1){
        printf("C'est un palindrome !\n");
    }else{
        printf("Ce n'est pas un palindrome.\n");
    }
    return 0;
}
