#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tossCoin();
int main(){
    int heads = 0, tails = 0;
    srand(time(NULL));

    for (int i=0; i<1000; i++)
        tossCoin() ? tails++ : heads++;

    printf( "Heads was flipped %d times\n", heads );
    printf( "Tails was flipped %d times\n", tails );

    return 0;
}

int tossCoin(){
    return ((rand() %2) ? 1 : 0);
}