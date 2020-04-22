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
uuid: 487831103
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 5, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board720164052 = gamma_board(board);
assert( board720164052 != NULL );
assert( strcmp(board720164052, 
"....1....1.\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board720164052);
board720164052 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );


char* board374994103 = gamma_board(board);
assert( board374994103 != NULL );
assert( strcmp(board374994103, 
"....1....1.\n"
"......3..4.\n"
"..2........\n"
"...........\n"
"..2........\n") == 0);
free(board374994103);
board374994103 = NULL;
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );


char* board962183961 = gamma_board(board);
assert( board962183961 != NULL );
assert( strcmp(board962183961, 
"6...1....1.\n"
"5.624.34.41\n"
"..2.......5\n"
"....1.6.5..\n"
".12........\n") == 0);
free(board962183961);
board962183961 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board690937281 = gamma_board(board);
assert( board690937281 != NULL );
assert( strcmp(board690937281, 
"6...1....1.\n"
"5.624.34.41\n"
"..22..6...5\n"
"....1.6.5..\n"
".12....1.4.\n") == 0);
free(board690937281);
board690937281 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );


char* board690693569 = gamma_board(board);
assert( board690693569 != NULL );
assert( strcmp(board690693569, 
"6.2.1....1.\n"
"5.624.34.41\n"
"..22..6...5\n"
"..2.1.625..\n"
".12....1.4.\n") == 0);
free(board690693569);
board690693569 = NULL;
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_golden_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_golden_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 21 );


char* board118408154 = gamma_board(board);
assert( board118408154 != NULL );
assert( strcmp(board118408154, 
"66241...314\n"
"55624.34.41\n"
"..22..6...5\n"
".32.1.625..\n"
"112.61.1.4.\n") == 0);
free(board118408154);
board118408154 = NULL;
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board931051155 = gamma_board(board);
assert( board931051155 != NULL );
assert( strcmp(board931051155, 
"66242..6314\n"
"55624.34.41\n"
"..22..63..5\n"
"532.13625..\n"
"112.61.1.46\n") == 0);
free(board931051155);
board931051155 = NULL;
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board683831319 = gamma_board(board);
assert( board683831319 != NULL );
assert( strcmp(board683831319, 
"66242..6314\n"
"55624.34.41\n"
"..22..63..5\n"
"532.13625..\n"
"112.61.1.46\n") == 0);
free(board683831319);
board683831319 = NULL;
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board790711342 = gamma_board(board);
assert( board790711342 != NULL );
assert( strcmp(board790711342, 
"662424.6314\n"
"55624.34.41\n"
"3.22..63..5\n"
"532.13625..\n"
"112.61.1.46\n") == 0);
free(board790711342);
board790711342 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
