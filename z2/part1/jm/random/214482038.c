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
uuid: 214482038
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_free_fields(board, 5) == 64 );


char* board780580642 = gamma_board(board);
assert( board780580642 != NULL );
assert( strcmp(board780580642, 
"........\n"
"........\n"
"....2...\n"
"........\n"
"....4...\n"
".3.1....\n"
"....4...\n"
".......3\n"
".2.....5\n") == 0);
free(board780580642);
board780580642 = NULL;
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_golden_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );


char* board582778614 = gamma_board(board);
assert( board582778614 != NULL );
assert( strcmp(board582778614, 
"..3...6.\n"
"...2....\n"
".1.72...\n"
"........\n"
"65..4..7\n"
"33.13...\n"
"2..84...\n"
".......3\n"
".2.1..55\n") == 0);
free(board582778614);
board582778614 = NULL;
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board900632222 = gamma_board(board);
assert( board900632222 != NULL );
assert( strcmp(board900632222, 
"683...68\n"
".4.26...\n"
".1.72...\n"
"..5.6274\n"
"65..4.87\n"
"33.137.5\n"
"2..844.4\n"
".15....3\n"
".2.13.55\n") == 0);
free(board900632222);
board900632222 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 2) == 0 );


char* board838514067 = gamma_board(board);
assert( board838514067 != NULL );
assert( strcmp(board838514067, 
"683...68\n"
".4.26.6.\n"
".1.727..\n"
"..576274\n"
"65..4.87\n"
"331137.5\n"
"2..844.4\n"
".15..8.3\n"
".2.13.55\n") == 0);
free(board838514067);
board838514067 = NULL;
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );


char* board422663793 = gamma_board(board);
assert( board422663793 != NULL );
assert( strcmp(board422663793, 
"683...68\n"
".4.26.61\n"
".15727.4\n"
"..576274\n"
"65..4.87\n"
"331137.5\n"
"2..844.4\n"
".15..8.3\n"
".2113.55\n") == 0);
free(board422663793);
board422663793 = NULL;
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );


char* board299697487 = gamma_board(board);
assert( board299697487 != NULL );
assert( strcmp(board299697487, 
"683...68\n"
".4.26.61\n"
".15727.4\n"
"..576274\n"
"65..4.87\n"
"331137.5\n"
"2..844.4\n"
".15..8.3\n"
".2113.55\n") == 0);
free(board299697487);
board299697487 = NULL;
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board942798578 = gamma_board(board);
assert( board942798578 != NULL );
assert( strcmp(board942798578, 
"683...68\n"
".4.26.61\n"
".15727.4\n"
"..576274\n"
"65..4.87\n"
"331137.5\n"
"2..844.4\n"
".15..8.3\n"
".2113.55\n") == 0);
free(board942798578);
board942798578 = NULL;
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


gamma_delete(board);

    return 0;
}
