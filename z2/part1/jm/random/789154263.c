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
uuid: 789154263
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 9, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );


char* board458407818 = gamma_board(board);
assert( board458407818 != NULL );
assert( strcmp(board458407818, 
"1.431.7\n"
"1754...\n"
"86824..\n"
"32...15\n") == 0);
free(board458407818);
board458407818 = NULL;
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_golden_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 5 );


gamma_delete(board);

    return 0;
}
