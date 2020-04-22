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
uuid: 911630568
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 56 );


char* board163848605 = gamma_board(board);
assert( board163848605 != NULL );
assert( strcmp(board163848605, 
"...761..\n"
"....1.4.\n"
"5...4...\n"
".....5..\n"
"4....2.2\n"
".3.85..7\n"
"..46...4\n"
"5.41.6.1\n"
".....34.\n"
"6..3.28.\n"
"8.1....8\n") == 0);
free(board163848605);
board163848605 = NULL;
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_golden_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 10, 6) == 0 );


char* board220649039 = gamma_board(board);
assert( board220649039 != NULL );
assert( strcmp(board220649039, 
"7..761..\n"
"85411.42\n"
"5..141..\n"
".3.87525\n"
"48844222\n"
"53.85867\n"
".7461..4\n"
"574376.1\n"
"..2.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board220649039);
board220649039 = NULL;
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );


char* board460047604 = gamma_board(board);
assert( board460047604 != NULL );
assert( strcmp(board460047604, 
"7..761..\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
".7461..4\n"
"57437631\n"
".62.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board460047604);
board460047604 = NULL;
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 16 );


char* board945283245 = gamma_board(board);
assert( board945283245 != NULL );
assert( strcmp(board945283245, 
"7..761.8\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
".7461..4\n"
"57437631\n"
".62.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board945283245);
board945283245 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );


char* board472170591 = gamma_board(board);
assert( board472170591 != NULL );
assert( strcmp(board472170591, 
"7..761.8\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
".7461..4\n"
"57437631\n"
".62.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board472170591);
board472170591 = NULL;
assert( gamma_move(board, 8, 4, 6) == 0 );


char* board866066587 = gamma_board(board);
assert( board866066587 != NULL );
assert( strcmp(board866066587, 
"7..761.8\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
".7461..4\n"
"57437631\n"
".62.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board866066587);
board866066587 = NULL;
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );


char* board992295559 = gamma_board(board);
assert( board992295559 != NULL );
assert( strcmp(board992295559, 
"7..761.8\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
"17461..4\n"
"57437631\n"
".62.2342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board992295559);
board992295559 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_move(board, 3, 9, 7) == 0 );


char* board547371577 = gamma_board(board);
assert( board547371577 != NULL );
assert( strcmp(board547371577, 
"7.1761.8\n"
"85411.42\n"
"53.141.4\n"
".3587525\n"
"48844222\n"
"53.85867\n"
"17461..4\n"
"57437631\n"
".6232342\n"
"62331286\n"
"841.4..8\n") == 0);
free(board547371577);
board547371577 = NULL;
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


gamma_delete(board);

    return 0;
}
