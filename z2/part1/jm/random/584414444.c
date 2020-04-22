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
uuid: 584414444
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board256512623 = gamma_board(board);
assert( board256512623 != NULL );
assert( strcmp(board256512623, 
"1...\n"
"..31\n"
".883\n"
"5.21\n"
"2358\n"
"4.6.\n") == 0);
free(board256512623);
board256512623 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board756345304 = gamma_board(board);
assert( board756345304 != NULL );
assert( strcmp(board756345304, 
"1.31\n"
"5831\n"
"5883\n"
"5.21\n"
"2358\n"
"4263\n") == 0);
free(board756345304);
board756345304 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );


char* board517767987 = gamma_board(board);
assert( board517767987 != NULL );
assert( strcmp(board517767987, 
"1.31\n"
"5831\n"
"5883\n"
"5.21\n"
"2358\n"
"4263\n") == 0);
free(board517767987);
board517767987 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
