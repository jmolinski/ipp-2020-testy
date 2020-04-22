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
uuid: 336966266
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 4, 4, 3);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 8 );


char* board980441064 = gamma_board(board);
assert( board980441064 != NULL );
assert( strcmp(board980441064, 
"3..13..1\n"
".2......\n"
".1.4....\n"
"4.4.2..2\n") == 0);
free(board980441064);
board980441064 = NULL;
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board945833879 = gamma_board(board);
assert( board945833879 != NULL );
assert( strcmp(board945833879, 
"3.313..1\n"
".234....\n"
".1.4...2\n"
"41422..2\n") == 0);
free(board945833879);
board945833879 = NULL;
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board253833067 = gamma_board(board);
assert( board253833067 != NULL );
assert( strcmp(board253833067, 
"3.313..1\n"
".234....\n"
".2.4...2\n"
"41422..2\n") == 0);
free(board253833067);
board253833067 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
