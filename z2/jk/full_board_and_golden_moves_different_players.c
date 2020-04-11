#include <stdint.h>
#include "gamma.h"

int main() {
    uint32_t w = 200;
    uint32_t h = 200;
    uint32_t players = 1000;
    uint64_t player_counter = 0;
    gamma_t* board = gamma_new(w, h, players, w*h);

    for (uint32_t i = 0; i < w; i++) {
        for (uint32_t j = 0; j < h; j++) {
            gamma_move(board, (player_counter % players) + 1, i, j);
            player_counter++;
        }
    }
    for (uint32_t i = 2; i <= players; i++) {
        gamma_golden_move(board, i, i%w, i%h);
    }

    gamma_delete(board);

    return 0;
}
