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
uuid: 938317367
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_golden_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );


char* board356214095 = gamma_board(board);
assert( board356214095 != NULL );
assert( strcmp(board356214095, 
"..159\n"
".6.1.\n"
"...82\n"
".6.3.\n"
"545..\n"
"8.8..\n"
"...5.\n") == 0);
free(board356214095);
board356214095 = NULL;
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_free_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board218684089 = gamma_board(board);
assert( board218684089 != NULL );
assert( strcmp(board218684089, 
"89159\n"
"86.19\n"
"51782\n"
"36818\n"
"545.3\n"
"828.6\n"
"93157\n") == 0);
free(board218684089);
board218684089 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_golden_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 2 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );


gamma_delete(board);

    return 0;
}
