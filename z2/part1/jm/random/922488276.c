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
uuid: 922488276
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 9, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );


char* board154982231 = gamma_board(board);
assert( board154982231 != NULL );
assert( strcmp(board154982231, 
".5..2.\n"
"42..3.\n"
"325891\n"
"47..38\n"
"..724.\n") == 0);
free(board154982231);
board154982231 = NULL;
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_free_fields(board, 9) == 10 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );


char* board254646009 = gamma_board(board);
assert( board254646009 != NULL );
assert( strcmp(board254646009, 
".5..2.\n"
"42.836\n"
"325891\n"
"479538\n"
"43724.\n") == 0);
free(board254646009);
board254646009 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_move(board, 6, 2, 3) == 0 );


char* board567753160 = gamma_board(board);
assert( board567753160 != NULL );
assert( strcmp(board567753160, 
".5.726\n"
"42.836\n"
"325891\n"
"479538\n"
"43724.\n") == 0);
free(board567753160);
board567753160 = NULL;
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );


char* board513163373 = gamma_board(board);
assert( board513163373 != NULL );
assert( strcmp(board513163373, 
".5.726\n"
"42.836\n"
"325891\n"
"479538\n"
"437247\n") == 0);
free(board513163373);
board513163373 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );


char* board518768523 = gamma_board(board);
assert( board518768523 != NULL );
assert( strcmp(board518768523, 
".5.726\n"
"42.836\n"
"325891\n"
"479138\n"
"437247\n") == 0);
free(board518768523);
board518768523 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
