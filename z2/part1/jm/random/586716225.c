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
uuid: 586716225
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 3, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );


char* board486708542 = gamma_board(board);
assert( board486708542 != NULL );
assert( strcmp(board486708542, 
"1221\n"
".123\n"
"1221\n") == 0);
free(board486708542);
board486708542 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
