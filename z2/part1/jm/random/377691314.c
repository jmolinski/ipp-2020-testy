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
uuid: 377691314
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );


char* board740924972 = gamma_board(board);
assert( board740924972 != NULL );
assert( strcmp(board740924972, 
"3497.3\n"
"56.7.9\n"
"268497\n"
"6.5..5\n"
"1.5...\n") == 0);
free(board740924972);
board740924972 = NULL;
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );


char* board434984410 = gamma_board(board);
assert( board434984410 != NULL );
assert( strcmp(board434984410, 
"349713\n"
"56.7.9\n"
"268497\n"
"6.5..5\n"
"1.5...\n") == 0);
free(board434984410);
board434984410 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );


gamma_delete(board);

    return 0;
}
