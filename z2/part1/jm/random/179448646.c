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
uuid: 179448646
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 9, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 31 );


char* board907759544 = gamma_board(board);
assert( board907759544 != NULL );
assert( strcmp(board907759544, 
"..4......\n"
".1..1....\n"
".........\n"
".4...3...\n") == 0);
free(board907759544);
board907759544 = NULL;
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_golden_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );


char* board958980438 = gamma_board(board);
assert( board958980438 != NULL );
assert( strcmp(board958980438, 
"984751122\n"
"119115..4\n"
".76.8..16\n"
"443.23237\n") == 0);
free(board958980438);
board958980438 = NULL;
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
