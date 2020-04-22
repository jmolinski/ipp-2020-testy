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
uuid: 838171213
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 7, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board224089442 = gamma_board(board);
assert( board224089442 != NULL );
assert( strcmp(board224089442, 
"3.\n"
"1.\n"
".1\n"
"4.\n"
"4.\n"
"21\n"
"..\n") == 0);
free(board224089442);
board224089442 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board585032972 = gamma_board(board);
assert( board585032972 != NULL );
assert( strcmp(board585032972, 
"3.\n"
"1.\n"
"21\n"
"4.\n"
"4.\n"
"21\n"
"..\n") == 0);
free(board585032972);
board585032972 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );


char* board616678671 = gamma_board(board);
assert( board616678671 != NULL );
assert( strcmp(board616678671, 
"3.\n"
"1.\n"
"21\n"
"4.\n"
"44\n"
"21\n"
"3.\n") == 0);
free(board616678671);
board616678671 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
