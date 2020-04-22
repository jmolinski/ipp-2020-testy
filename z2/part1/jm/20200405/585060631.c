#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: test_golden_move
uuid: 585060631
*/
/*
golden_move, limited areas
*/
gamma_t* board = gamma_new(8, 8, 3, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );


assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );


assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );


assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );


assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );


assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );


assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );


assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );


assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );


assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
