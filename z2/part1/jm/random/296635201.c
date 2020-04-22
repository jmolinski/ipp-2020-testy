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
uuid: 296635201
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );


char* board197991193 = gamma_board(board);
assert( board197991193 != NULL );
assert( strcmp(board197991193, 
".....5\n"
".34.2.\n"
".3....\n"
"..451.\n"
"4..3.5\n"
"2.65.2\n"
"2..2.3\n") == 0);
free(board197991193);
board197991193 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
