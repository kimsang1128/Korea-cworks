#include <stdio.h>
void main(){
    int i;
    for(i =1; i<10001; i+=1){
        if(i %11 != 0 || i%17 != 0 || i % 10 ==0) continue;
        printf("%d\n", i);
    }
}