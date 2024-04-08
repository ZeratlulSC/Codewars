#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

int martingale(int bank, const bool *outcomes, size_t n) {
    int ret = bank;
    int stake = 100;
    if (outcomes[0] == NULL) return bank;
    for (size_t i = 0; i<n;i++){
        if (outcomes[i] != 1){
            ret -= stake;
            stake = stake*2;
        }
        else{
            ret = ret + stake;
            stake = 100;
        }
        //printf("ret=%d stake=%d\n", ret, stake);
    }
    return ret;
}


int main(){
    const bool c[20] = {1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0};
    printf("%d\n", martingale(5100, c, 20));
    return 0;
}