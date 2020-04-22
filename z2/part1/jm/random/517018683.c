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
uuid: 517018683
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );


char* board150282074 = gamma_board(board);
assert( board150282074 != NULL );
assert( strcmp(board150282074, 
".2....\n"
".3....\n"
"621...\n"
".4..3.\n"
"1..261\n") == 0);
free(board150282074);
board150282074 = NULL;
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board738616841 = gamma_board(board);
assert( board738616841 != NULL );
assert( strcmp(board738616841, 
".2666.\n"
".3151.\n"
"621.15\n"
"244.3.\n"
"12.261\n") == 0);
free(board738616841);
board738616841 = NULL;
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );


char* board504993121 = gamma_board(board);
assert( board504993121 != NULL );
assert( strcmp(board504993121, 
".2666.\n"
".31516\n"
"621315\n"
"244.3.\n"
"12.261\n") == 0);
free(board504993121);
board504993121 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board582426472 = gamma_board(board);
assert( board582426472 != NULL );
assert( strcmp(board582426472, 
".26663\n"
".31516\n"
"621315\n"
"244.3.\n"
"126261\n") == 0);
free(board582426472);
board582426472 = NULL;
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
