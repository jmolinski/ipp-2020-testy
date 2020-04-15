#include <stdint.h>
#include <stdlib.h>
#include "gamma.h"

int main() {
    uint32_t w = 200;
    uint32_t h = 200;
    int n = 5000;
    gamma_t* board = gamma_new(w, h, 1, 10);

    for (uint32_t i = 0; i < w; i++) {
        for (uint32_t j = 0; j < h; j++) {
            gamma_move(board, 1, i, j);
        }
    }
    for (int i = 0; i < n; i++) {
        free(gamma_board(board));
    }
    gamma_delete(board);

    return 0;
}
