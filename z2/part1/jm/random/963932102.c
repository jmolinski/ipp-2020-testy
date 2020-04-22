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
uuid: 963932102
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 2, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );


char* board692916895 = gamma_board(board);
assert( board692916895 != NULL );
assert( strcmp(board692916895, 
".3....1\n"
".......\n") == 0);
free(board692916895);
board692916895 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 11 );


char* board726338244 = gamma_board(board);
assert( board726338244 != NULL );
assert( strcmp(board726338244, 
".3....1\n"
"..4....\n") == 0);
free(board726338244);
board726338244 = NULL;
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );


char* board474024785 = gamma_board(board);
assert( board474024785 != NULL );
assert( strcmp(board474024785, 
".3..6.1\n"
"..4....\n") == 0);
free(board474024785);
board474024785 = NULL;
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


char* board322882523 = gamma_board(board);
assert( board322882523 != NULL );
assert( strcmp(board322882523, 
"1343641\n"
"1.4..6.\n") == 0);
free(board322882523);
board322882523 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
