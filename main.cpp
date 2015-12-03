#include <stdio.h>

int main() {
    int a = 5,b = 0x19,c = 010;//怎么又在这里犯了符号的错
    if(a + !a < a + !c){
        printf("yes! \n");
    }else
    if(c + c > b)
        printf("wrong! \n");
    printf("no! \n");

    return 0;
}