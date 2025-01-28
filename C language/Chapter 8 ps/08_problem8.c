#include <stdio.h>
#include <string.h>

int main(){
    char c = 'P';
    int count = 0;
    char str[] = "Puneet";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c){
            count++;
        }

    }
    printf("%d", count);
    
    return 0;
}