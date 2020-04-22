#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: test_golden_move
uuid: 753457081
*/
/*
golden_move, limited areas
*/
gamma_t* board = gamma_new(8, 8, 3, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );


assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );


assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );


assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );


assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );


assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );


assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );


assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );


assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );


assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );


assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );


assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );


assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );


assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
