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
uuid: 161943142
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 2, 3, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 3 );


char* board463307583 = gamma_board(board);
assert( board463307583 != NULL );
assert( strcmp(board463307583, 
".23.1.\n"
".3....\n") == 0);
free(board463307583);
board463307583 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );


char* board687747573 = gamma_board(board);
assert( board687747573 != NULL );
assert( strcmp(board687747573, 
".2331.\n"
".3.11.\n") == 0);
free(board687747573);
board687747573 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
