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
uuid: 713011736
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );


char* board793022579 = gamma_board(board);
assert( board793022579 != NULL );
assert( strcmp(board793022579, 
".....2.1\n"
"431.6..3\n"
"...64.5.\n"
"43.5.43.\n"
"...1..2.\n"
"12.6.55.\n") == 0);
free(board793022579);
board793022579 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );


char* board382073998 = gamma_board(board);
assert( board382073998 != NULL );
assert( strcmp(board382073998, 
".34.1261\n"
"431.61.3\n"
".5.6455.\n"
"4335243.\n"
"52115.2.\n"
"12.6.55.\n") == 0);
free(board382073998);
board382073998 = NULL;
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_golden_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );


char* board772598940 = gamma_board(board);
assert( board772598940 != NULL );
assert( strcmp(board772598940, 
".34.1661\n"
"451.6133\n"
".5.64552\n"
"43352431\n"
"24115124\n"
"12.6.55.\n") == 0);
free(board772598940);
board772598940 = NULL;
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
