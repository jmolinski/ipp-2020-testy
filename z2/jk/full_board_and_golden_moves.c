#include <stdint.h>
#include "gamma.h"


int main() {
    uint32_t w = 200;
    uint32_t h = 200;
    uint32_t players = 1000;
    gamma_t* board = gamma_new(w, h, players, 10);

    for(uint32_t i = 0; i< w; i++){
        for(uint32_t j = 0 ;j < h;j++){
            gamma_move(board,1,i,j);
        }
    }
    for(uint32_t i = 2 ; i <= players; i++){
        gamma_golden_move(board,i,0,0);
    }

    gamma_delete(board);

    return 0;
}
