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
uuid: 267299029
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 3, 9, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board673865006 = gamma_board(board);
assert( board673865006 != NULL );
assert( strcmp(board673865006, 
".734.3\n"
"14...9\n"
"1.5..6\n") == 0);
free(board673865006);
board673865006 = NULL;
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 5 );


char* board777991472 = gamma_board(board);
assert( board777991472 != NULL );
assert( strcmp(board777991472, 
".73453\n"
"14...9\n"
"1453.6\n") == 0);
free(board777991472);
board777991472 = NULL;
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
