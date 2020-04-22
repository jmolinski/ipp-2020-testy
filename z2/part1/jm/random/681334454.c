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
uuid: 681334454
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 5, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );


char* board653479441 = gamma_board(board);
assert( board653479441 != NULL );
assert( strcmp(board653479441, 
".1.....\n"
".......\n"
".......\n"
"..2....\n"
".......\n") == 0);
free(board653479441);
board653479441 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );


char* board986320344 = gamma_board(board);
assert( board986320344 != NULL );
assert( strcmp(board986320344, 
".1....6\n"
".......\n"
".4.....\n"
"..2...6\n"
".4...5.\n") == 0);
free(board986320344);
board986320344 = NULL;
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_golden_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );


char* board234767868 = gamma_board(board);
assert( board234767868 != NULL );
assert( strcmp(board234767868, 
"8135636\n"
"23.6.48\n"
".4.3762\n"
".8246.6\n"
"847415.\n") == 0);
free(board234767868);
board234767868 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );


char* board552986614 = gamma_board(board);
assert( board552986614 != NULL );
assert( strcmp(board552986614, 
"8135636\n"
"23.6.48\n"
"44.3762\n"
".8246.6\n"
"847415.\n") == 0);
free(board552986614);
board552986614 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );


char* board175378877 = gamma_board(board);
assert( board175378877 != NULL );
assert( strcmp(board175378877, 
"8135636\n"
"23.6748\n"
"4423762\n"
".824676\n"
"8474155\n") == 0);
free(board175378877);
board175378877 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );


gamma_delete(board);

    return 0;
}
