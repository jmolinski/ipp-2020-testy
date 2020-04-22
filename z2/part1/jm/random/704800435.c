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
uuid: 704800435
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 15, 8, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );


char* board314411787 = gamma_board(board);
assert( board314411787 != NULL );
assert( strcmp(board314411787, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".2.....\n"
".......\n"
".......\n") == 0);
free(board314411787);
board314411787 = NULL;
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_golden_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_free_fields(board, 5) == 93 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 4, 12) == 0 );


char* board556020375 = gamma_board(board);
assert( board556020375 != NULL );
assert( strcmp(board556020375, 
"..3.2..\n"
"......5\n"
"25..7..\n"
".......\n"
"...43..\n"
"6.44...\n"
"....1..\n"
".......\n"
".5.7..2\n"
"4.1..7.\n"
"..332..\n"
".......\n"
".2.851.\n"
".1....1\n"
"33.84.2\n") == 0);
free(board556020375);
board556020375 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board347795613 = gamma_board(board);
assert( board347795613 != NULL );
assert( strcmp(board347795613, 
"..312..\n"
"...6..5\n"
"25..7..\n"
".......\n"
"...4377\n"
"6.448..\n"
"..5.1..\n"
".......\n"
"2527.32\n"
"4.1..7.\n"
"11332..\n"
".2.....\n"
".2.151.\n"
".1....1\n"
"33.84.2\n") == 0);
free(board347795613);
board347795613 = NULL;
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_golden_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_golden_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_golden_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 5, 14) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );


char* board660154070 = gamma_board(board);
assert( board660154070 != NULL );
assert( strcmp(board660154070, 
"123128.\n"
"4646.55\n"
"257.727\n"
"75..4.5\n"
".634377\n"
"68448.6\n"
".8511.6\n"
"776.7.7\n"
"2827.32\n"
"4117275\n"
"6133267\n"
"3274...\n"
"227151.\n"
"212.851\n"
"33.85.2\n") == 0);
free(board660154070);
board660154070 = NULL;
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_golden_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 14) == 0 );


gamma_delete(board);

    return 0;
}
