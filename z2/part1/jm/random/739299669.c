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
uuid: 739299669
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 10, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );


char* board986631354 = gamma_board(board);
assert( board986631354 != NULL );
assert( strcmp(board986631354, 
"..5.\n"
"6...\n"
".227\n"
".375\n"
"4746\n"
"...2\n"
"12.1\n"
"7543\n"
"122.\n"
"326.\n") == 0);
free(board986631354);
board986631354 = NULL;
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board419327355 = gamma_board(board);
assert( board419327355 != NULL );
assert( strcmp(board419327355, 
"715.\n"
"6.16\n"
".227\n"
"1375\n"
"4746\n"
"5..2\n"
"1241\n"
"7543\n"
"1227\n"
"3267\n") == 0);
free(board419327355);
board419327355 = NULL;
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
