// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char c[] = "hello";
  int length = sizeof(c)/sizeof(c[0]);
  int i;
  
  for (i =length ; i >=0; i--) {
    printf("%c",c[i]);
  }
    return 0;
}