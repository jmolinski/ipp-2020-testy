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
uuid: 582603648
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_golden_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );


char* board650041728 = gamma_board(board);
assert( board650041728 != NULL );
assert( strcmp(board650041728, 
"....86\n"
"..34.5\n"
".447.1\n"
"18.2..\n"
"688...\n"
"12...8\n"
"...247\n"
"388342\n"
".35.68\n"
".6.64.\n"
"724.38\n") == 0);
free(board650041728);
board650041728 = NULL;
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_golden_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );


char* board863958277 = gamma_board(board);
assert( board863958277 != NULL );
assert( strcmp(board863958277, 
"..8.86\n"
".13435\n"
".44711\n"
"1812..\n"
"6887.3\n"
"123.18\n"
"7.5247\n"
"388342\n"
".86.68\n"
".6864.\n"
"724.38\n") == 0);
free(board863958277);
board863958277 = NULL;


gamma_delete(board);

    return 0;
}
