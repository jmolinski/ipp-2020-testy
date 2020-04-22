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
uuid: 576303907
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 1, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );


char* board961128486 = gamma_board(board);
assert( board961128486 != NULL );
assert( strcmp(board961128486, 
"1.1..\n"
"..11.\n"
".1...\n"
".....\n") == 0);
free(board961128486);
board961128486 = NULL;
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board372348295 = gamma_board(board);
assert( board372348295 != NULL );
assert( strcmp(board372348295, 
"11111\n"
"1111.\n"
"111.1\n"
"1..11\n") == 0);
free(board372348295);
board372348295 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


gamma_delete(board);

    return 0;
}
