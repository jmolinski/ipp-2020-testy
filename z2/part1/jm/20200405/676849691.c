#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: test_check_busy_fields
uuid: 676849691
*/
/*
busy_fields, with collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(7, 13, 3, 100);
assert( board != NULL );


assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );


gamma_delete(board);

    return 0;
}
