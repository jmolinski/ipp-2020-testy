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
uuid: 948377257
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 7, 6, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board819341980 = gamma_board(board);
assert( board819341980 != NULL );
assert( strcmp(board819341980, 
"...\n"
"14.\n"
"2..\n"
"..5\n"
"261\n"
".33\n"
"511\n") == 0);
free(board819341980);
board819341980 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board618024447 = gamma_board(board);
assert( board618024447 != NULL );
assert( strcmp(board618024447, 
"...\n"
"14.\n"
"2..\n"
"..5\n"
"261\n"
".33\n"
"511\n") == 0);
free(board618024447);
board618024447 = NULL;
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );


char* board886009356 = gamma_board(board);
assert( board886009356 != NULL );
assert( strcmp(board886009356, 
"...\n"
"14.\n"
"2..\n"
"..5\n"
"261\n"
"633\n"
"511\n") == 0);
free(board886009356);
board886009356 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );


char* board773228979 = gamma_board(board);
assert( board773228979 != NULL );
assert( strcmp(board773228979, 
"...\n"
"14.\n"
"2..\n"
"..5\n"
"261\n"
"633\n"
"511\n") == 0);
free(board773228979);
board773228979 = NULL;
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
