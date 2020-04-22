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
uuid: 484424519
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 4, 9, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );


char* board263634233 = gamma_board(board);
assert( board263634233 != NULL );
assert( strcmp(board263634233, 
"4.8\n"
"21.\n"
"...\n"
".3.\n") == 0);
free(board263634233);
board263634233 = NULL;
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_move(board, 8, 1, 1) == 0 );


char* board414927241 = gamma_board(board);
assert( board414927241 != NULL );
assert( strcmp(board414927241, 
"4.8\n"
"215\n"
".6.\n"
"733\n") == 0);
free(board414927241);
board414927241 = NULL;
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
