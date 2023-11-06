#include <stdio.h>
#include <stdbool.h> 
 
int main(void)
{
    int num = 10;
    int i = 0;
    printf("true: %d\n", true);
    printf("false: %d\n", false);

    while(true){
        printf("%d ", i++);
        if(i>num)
            break;
    }
    printf("\n");
    
    printf("sizeof 1: %lu\n", sizeof(1));
    printf("sizeof 0: %lu\n", sizeof(0));
    printf("sizeof true: %lu\n", sizeof(true));
    printf("sizeof false: %lu\n", sizeof(false));
    return 0;
    
}