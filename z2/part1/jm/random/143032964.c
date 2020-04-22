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
uuid: 143032964
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 5, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );


char* board513666659 = gamma_board(board);
assert( board513666659 != NULL );
assert( strcmp(board513666659, 
"....\n"
"...2\n"
"1...\n"
"...3\n"
"....\n") == 0);
free(board513666659);
board513666659 = NULL;
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );


char* board739017761 = gamma_board(board);
assert( board739017761 != NULL );
assert( strcmp(board739017761, 
"5...\n"
"...2\n"
"1...\n"
"6..3\n"
"...5\n") == 0);
free(board739017761);
board739017761 = NULL;
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );


char* board483750988 = gamma_board(board);
assert( board483750988 != NULL );
assert( strcmp(board483750988, 
"5...\n"
"...2\n"
"1..7\n"
"6..3\n"
"..75\n") == 0);
free(board483750988);
board483750988 = NULL;
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
