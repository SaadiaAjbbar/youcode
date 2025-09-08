#include <stdio.h>
#include <string.h>


int main(){
    char name[] = "name";
    char voyelles[] = "aeoyiu";
    int count = 0;
    printf("Enter a name : ");
    scanf(" %s",name);


    int size1 = strlen(name);
    int size2 = strlen(voyelles);


    printf("%d ",size1);
   // printf("%d %d\n%s %s",size1,size2,name,machiname);
 
    for(int i = 0 ; i < size1 ; i++){
        for(int j = 0 ; j < size2 ; j++){
            if(name[i] == voyelles[j]){
               // printf("%c %c",name[i],machiname[j]);
                count++;
            }
        }
    }


    printf("%s a %d voyells\n",name,count);
return 0;}




