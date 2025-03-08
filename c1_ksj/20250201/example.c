#include <stdio.h>
void main(){
    int a;
    for( a = 1; a < 1001; a += 1) {
        if(a  % 3 != 0 || a % 7 != 0) continue;
        if(a  % 2 != 0) continue;
        if(a  % 10 == 0) continue;
        printf("%d\n", a);
    }
}
