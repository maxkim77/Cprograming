#include <stdio.h>
int main(){
    int i = 1;
    while (i < 5){
        i++;
        if (i == 3){
            break;
        }
        printf("%d", i);
        return 0;
        
    }
}