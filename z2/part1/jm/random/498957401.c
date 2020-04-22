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
uuid: 498957401
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 4, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board655079823 = gamma_board(board);
assert( board655079823 != NULL );
assert( strcmp(board655079823, 
"41...2\n"
"..33..\n"
"3444..\n"
"3.1.41\n") == 0);
free(board655079823);
board655079823 = NULL;
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_free_fields(board, 1) == 9 );


char* board438278567 = gamma_board(board);
assert( board438278567 != NULL );
assert( strcmp(board438278567, 
"41.1.2\n"
"..33..\n"
"3444..\n"
"3.1441\n") == 0);
free(board438278567);
board438278567 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 3) == 0 );


gamma_delete(board);

    return 0;
}
