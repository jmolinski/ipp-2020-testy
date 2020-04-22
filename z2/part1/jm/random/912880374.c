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
uuid: 912880374
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board430089401 = gamma_board(board);
assert( board430089401 != NULL );
assert( strcmp(board430089401, 
"1.2.\n"
"3222\n"
"1.33\n"
".241\n"
"4222\n"
"43.4\n") == 0);
free(board430089401);
board430089401 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );


char* board584080243 = gamma_board(board);
assert( board584080243 != NULL );
assert( strcmp(board584080243, 
"1.2.\n"
"3222\n"
"1233\n"
".241\n"
"4222\n"
"43.4\n") == 0);
free(board584080243);
board584080243 = NULL;
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );


gamma_delete(board);

    return 0;
}
