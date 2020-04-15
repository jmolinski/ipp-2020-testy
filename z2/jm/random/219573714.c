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
uuid: 219573714
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_free_fields(board, 6) == 65 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board664426451 = gamma_board(board);
assert( board664426451 != NULL );
assert( strcmp(board664426451, 
"........\n"
"..4..21.\n"
"........\n"
"5.....2.\n"
"....1...\n"
"56.146.3\n"
"...6..9.\n"
".2..79.8\n"
"....8...\n") == 0);
free(board664426451);
board664426451 = NULL;
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_golden_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );


char* board378461496 = gamma_board(board);
assert( board378461496 != NULL );
assert( strcmp(board378461496, 
"8827....\n"
"..4.5217\n"
"...66.4.\n"
"5.65682.\n"
"886.1.9.\n"
"66.14673\n"
".1.67794\n"
"221.7948\n"
"11298863\n") == 0);
free(board378461496);
board378461496 = NULL;
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board678645434 = gamma_board(board);
assert( board678645434 != NULL );
assert( strcmp(board678645434, 
"8827...5\n"
"..4.5217\n"
"...66.4.\n"
"5.65682.\n"
"88611.9.\n"
"66.14273\n"
".1967794\n"
"221.7948\n"
"11298863\n") == 0);
free(board678645434);
board678645434 = NULL;
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );


char* board358171510 = gamma_board(board);
assert( board358171510 != NULL );
assert( strcmp(board358171510, 
"8827...5\n"
"..4.5217\n"
"...66.4.\n"
"5.656823\n"
"88611.9.\n"
"66.14273\n"
".1967794\n"
"221.7948\n"
"11298863\n") == 0);
free(board358171510);
board358171510 = NULL;
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_free_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 12 );


char* board382995516 = gamma_board(board);
assert( board382995516 != NULL );
assert( strcmp(board382995516, 
"88276..5\n"
"..465217\n"
"...66543\n"
"5.656823\n"
"88611.96\n"
"66.14273\n"
".1967794\n"
"221.7948\n"
"11298863\n") == 0);
free(board382995516);
board382995516 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );


char* board534348988 = gamma_board(board);
assert( board534348988 != NULL );
assert( strcmp(board534348988, 
"88276.85\n"
"8.465217\n"
"...66543\n"
"5.656823\n"
"88611.96\n"
"66.14273\n"
"71967794\n"
"221.7948\n"
"11298863\n") == 0);
free(board534348988);
board534348988 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 0) == 0 );


gamma_delete(board);

    return 0;
}
