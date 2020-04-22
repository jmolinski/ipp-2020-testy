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
uuid: 746907479
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 4, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board809380528 = gamma_board(board);
assert( board809380528 != NULL );
assert( strcmp(board809380528, 
".7.621\n"
"...48.\n"
"14...9\n"
"..9..8\n") == 0);
free(board809380528);
board809380528 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board969931255 = gamma_board(board);
assert( board969931255 != NULL );
assert( strcmp(board969931255, 
".7.621\n"
"25148.\n"
"146899\n"
".89868\n") == 0);
free(board969931255);
board969931255 = NULL;
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );


char* board210557532 = gamma_board(board);
assert( board210557532 != NULL );
assert( strcmp(board210557532, 
".7.621\n"
"25148.\n"
"146899\n"
"489868\n") == 0);
free(board210557532);
board210557532 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
