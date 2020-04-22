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
uuid: 727496543
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_golden_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );


char* board879802736 = gamma_board(board);
assert( board879802736 != NULL );
assert( strcmp(board879802736, 
"77..45.2.\n"
".89...696\n"
".7.4.73..\n"
"82.1.92.6\n"
"...33.72.\n"
"6..1...88\n"
"38546....\n"
"3..1.42.8\n") == 0);
free(board879802736);
board879802736 = NULL;
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board110767260 = gamma_board(board);
assert( board110767260 != NULL );
assert( strcmp(board110767260, 
"77..45.2.\n"
".89...696\n"
".7.4.73..\n"
"82.1.92.6\n"
"19.33.72.\n"
"6..1...88\n"
"38546....\n"
"3..1.42.8\n") == 0);
free(board110767260);
board110767260 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_golden_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board980149317 = gamma_board(board);
assert( board980149317 != NULL );
assert( strcmp(board980149317, 
"77..45.26\n"
".89.52696\n"
".734.73.1\n"
"8841392.6\n"
"19.337727\n"
"655195.88\n"
"385465.41\n"
"3..1842.8\n") == 0);
free(board980149317);
board980149317 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_free_fields(board, 9) == 14 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );


char* board768255928 = gamma_board(board);
assert( board768255928 != NULL );
assert( strcmp(board768255928, 
"77..45.26\n"
".89.52696\n"
"3734.73.1\n"
"8841392.6\n"
"19.337727\n"
"655195788\n"
"385465.41\n"
"3..1842.8\n") == 0);
free(board768255928);
board768255928 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
