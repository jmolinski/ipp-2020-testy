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
uuid: 156446469
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 4, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board418209459 = gamma_board(board);
assert( board418209459 != NULL );
assert( strcmp(board418209459, 
"3.4...2.\n"
"746.....\n"
".638.1.7\n"
"2....5..\n") == 0);
free(board418209459);
board418209459 = NULL;
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_golden_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );


char* board297835432 = gamma_board(board);
assert( board297835432 != NULL );
assert( strcmp(board297835432, 
"3.41..2.\n"
"786..1..\n"
".638.1.7\n"
"2....5..\n") == 0);
free(board297835432);
board297835432 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );


char* board923441804 = gamma_board(board);
assert( board923441804 != NULL );
assert( strcmp(board923441804, 
"3.41.52.\n"
"7865.13.\n"
".338.1.7\n"
"2..3.5..\n") == 0);
free(board923441804);
board923441804 = NULL;
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_free_fields(board, 9) == 10 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
