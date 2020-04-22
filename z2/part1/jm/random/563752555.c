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
uuid: 563752555
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 7, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board884073815 = gamma_board(board);
assert( board884073815 != NULL );
assert( strcmp(board884073815, 
".4.5..6....\n"
"..6.346....\n"
"12.727757.5\n"
"..5..2.53..\n"
"763.6.4..1.\n"
"6.731344377\n"
".....32...7\n") == 0);
free(board884073815);
board884073815 = NULL;
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_free_fields(board, 7) == 38 );


char* board572032901 = gamma_board(board);
assert( board572032901 != NULL );
assert( strcmp(board572032901, 
".4.5..6....\n"
"..6.346....\n"
"12.757757.5\n"
"..5..2.53..\n"
"763.6.4..1.\n"
"6.731344377\n"
".....32...7\n") == 0);
free(board572032901);
board572032901 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );


char* board862174431 = gamma_board(board);
assert( board862174431 != NULL );
assert( strcmp(board862174431, 
"3425..457.7\n"
"1.6.346..34\n"
"121752757.5\n"
"..513275315\n"
"733.6.4.31.\n"
"66731344377\n"
"11.7632.5.7\n") == 0);
free(board862174431);
board862174431 = NULL;
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
