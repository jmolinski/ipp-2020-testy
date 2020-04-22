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
uuid: 775331768
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 7, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );


char* board910994828 = gamma_board(board);
assert( board910994828 != NULL );
assert( strcmp(board910994828, 
"...\n"
".1.\n"
"42.\n"
".31\n"
"..2\n"
"...\n"
"..4\n") == 0);
free(board910994828);
board910994828 = NULL;
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );


char* board301908219 = gamma_board(board);
assert( board301908219 != NULL );
assert( strcmp(board301908219, 
".68\n"
".16\n"
"424\n"
"231\n"
"372\n"
".75\n"
"564\n") == 0);
free(board301908219);
board301908219 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_golden_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board812245999 = gamma_board(board);
assert( board812245999 != NULL );
assert( strcmp(board812245999, 
".68\n"
"116\n"
"424\n"
"231\n"
"372\n"
"875\n"
"764\n") == 0);
free(board812245999);
board812245999 = NULL;


gamma_delete(board);

    return 0;
}
