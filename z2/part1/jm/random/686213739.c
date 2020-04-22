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
uuid: 686213739
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board451927604 = gamma_board(board);
assert( board451927604 != NULL );
assert( strcmp(board451927604, 
"3..13.\n"
"...22.\n"
"...1..\n"
"11....\n"
".2..2.\n") == 0);
free(board451927604);
board451927604 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 4, 3) == 0 );


char* board357734702 = gamma_board(board);
assert( board357734702 != NULL );
assert( strcmp(board357734702, 
"3.313.\n"
"3..222\n"
"2..1..\n"
"11.4..\n"
"12..2.\n") == 0);
free(board357734702);
board357734702 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );


char* board423411620 = gamma_board(board);
assert( board423411620 != NULL );
assert( strcmp(board423411620, 
"333131\n"
"3.1222\n"
"2111.2\n"
"11.422\n"
"12.32.\n") == 0);
free(board423411620);
board423411620 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 4 );


gamma_delete(board);

    return 0;
}
