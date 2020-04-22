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
uuid: 968864409
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board663974690 = gamma_board(board);
assert( board663974690 != NULL );
assert( strcmp(board663974690, 
"......\n"
"3.....\n"
".2....\n"
"......\n"
"1.1...\n"
"......\n"
"14...2\n") == 0);
free(board663974690);
board663974690 = NULL;
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
