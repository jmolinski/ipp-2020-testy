#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 937389035
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );


char* board808454433 = gamma_board(board);
assert( board808454433 != NULL );
assert( strcmp(board808454433, 
"24351\n"
"....3\n"
"2.351\n"
".1544\n"
"25553\n"
"1.314\n") == 0);
free(board808454433);
board808454433 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );


gamma_delete(board);

    return 0;
}
