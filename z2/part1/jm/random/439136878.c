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
uuid: 439136878
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 13, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 153 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 11, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 12, 12) == 1 );
assert( gamma_free_fields(board, 9) == 136 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_golden_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_free_fields(board, 8) == 125 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 9, 12, 9) == 0 );
assert( gamma_golden_move(board, 9, 9, 12) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 123 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_free_fields(board, 8) == 112 );
assert( gamma_golden_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 12, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );


char* board144078552 = gamma_board(board);
assert( board144078552 != NULL );
assert( strcmp(board144078552, 
"..........2.9\n"
"...4...7.8...\n"
".....5..6....\n"
".3..55.3.62.1\n"
"..4.8..3.7.9.\n"
".81.3...9....\n"
"..2.8.172.549\n"
"11..6.5...7.4\n"
"....6.8.....7\n"
"....413..4.5.\n"
"73......9.6.2\n"
".4....85....2\n"
"811....8.14..\n") == 0);
free(board144078552);
board144078552 = NULL;
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_free_fields(board, 1) == 105 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 102 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 12, 12) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board444334430 = gamma_board(board);
assert( board444334430 != NULL );
assert( strcmp(board444334430, 
"5....3..2.2.9\n"
"...4.1.7.8..5\n"
".4.8.5..6....\n"
".3..55.3.62.1\n"
".94.87.3.759.\n"
".81.335.9.16.\n"
"..2.8.1723549\n"
"11..6.5...7.4\n"
"...86.8.7..77\n"
"....413.74.55\n"
"73..54..9.6.2\n"
".4....85.4..2\n"
"811.32.8.14..\n") == 0);
free(board444334430);
board444334430 = NULL;
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );


char* board192438092 = gamma_board(board);
assert( board192438092 != NULL );
assert( strcmp(board192438092, 
"5....3.22.2.9\n"
"...4.1.7.8..5\n"
".4.8.5..6....\n"
".3..55.3.62.1\n"
".94.87.3.759.\n"
".81.335.9.16.\n"
"..2.8.1723549\n"
"11..6.5...7.4\n"
"...86.8.7..77\n"
"....413.74.55\n"
"73..54..9.6.2\n"
".4....85.4..2\n"
"811.32.8.14..\n") == 0);
free(board192438092);
board192438092 = NULL;
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_golden_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_move(board, 2, 11, 5) == 1 );
assert( gamma_golden_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_golden_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_free_fields(board, 9) == 43 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );


char* board442488451 = gamma_board(board);
assert( board442488451 != NULL );
assert( strcmp(board442488451, 
"54..73.22.2.9\n"
".4.4811758565\n"
".4.8.5916.6..\n"
"23..55.3.62.1\n"
"994.8743.759.\n"
".81.33599.16.\n"
"..2.861723549\n"
"111.6756.3724\n"
"88.86.8.7..77\n"
"76.3413274755\n"
"7378541.92662\n"
"946.3.85.4.62\n"
"511.3248.1438\n") == 0);
free(board442488451);
board442488451 = NULL;
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_golden_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );


char* board665815812 = gamma_board(board);
assert( board665815812 != NULL );
assert( strcmp(board665815812, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.8743.759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7..77\n"
"76.3413274755\n"
"7378541.92662\n"
"946.3.85.4.62\n"
"511.3248.1438\n") == 0);
free(board665815812);
board665815812 = NULL;
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );


char* board105149927 = gamma_board(board);
assert( board105149927 != NULL );
assert( strcmp(board105149927, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.8743.759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7..77\n"
"7693413274755\n"
"7378541.92662\n"
"946.3.85.4.62\n"
"511.3248.1438\n") == 0);
free(board105149927);
board105149927 = NULL;
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 12, 12) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );


char* board685269531 = gamma_board(board);
assert( board685269531 != NULL );
assert( strcmp(board685269531, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.87437759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7.677\n"
"7693413274755\n"
"7378541.92662\n"
"946.3685.4.62\n"
"51173248.1438\n") == 0);
free(board685269531);
board685269531 = NULL;
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );


char* board128963123 = gamma_board(board);
assert( board128963123 != NULL );
assert( strcmp(board128963123, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.87437759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7.677\n"
"7693413274755\n"
"7378541.92662\n"
"946.3685.4.62\n"
"51173248.1438\n") == 0);
free(board128963123);
board128963123 = NULL;
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 10, 12) == 0 );


char* board843023966 = gamma_board(board);
assert( board843023966 != NULL );
assert( strcmp(board843023966, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.87437759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7.677\n"
"7693413274755\n"
"7378541.92662\n"
"946.3685.4.62\n"
"51173248.1438\n") == 0);
free(board843023966);
board843023966 = NULL;
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board402460605 = gamma_board(board);
assert( board402460605 != NULL );
assert( strcmp(board402460605, 
"54..73.22.2.9\n"
"54.4811758565\n"
".4.8.5916.6..\n"
"23..55.3662.1\n"
"994.87437759.\n"
".81.33599.16.\n"
"392.861723549\n"
"111.6756.3724\n"
"88.86.8.7.677\n"
"7693413274755\n"
"7378541.92662\n"
"946.3685.4.62\n"
"5117324861438\n") == 0);
free(board402460605);
board402460605 = NULL;
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );


gamma_delete(board);

    return 0;
}
