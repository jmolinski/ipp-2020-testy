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
uuid: 335899672
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 4, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );


char* board943663104 = gamma_board(board);
assert( board943663104 != NULL );
assert( strcmp(board943663104, 
"...\n"
"1..\n"
"...\n"
"...\n") == 0);
free(board943663104);
board943663104 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board876993793 = gamma_board(board);
assert( board876993793 != NULL );
assert( strcmp(board876993793, 
".5.\n"
"1..\n"
".5.\n"
"76.\n") == 0);
free(board876993793);
board876993793 = NULL;
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_golden_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


gamma_delete(board);

    return 0;
}
