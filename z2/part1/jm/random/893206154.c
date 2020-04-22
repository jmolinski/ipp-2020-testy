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
uuid: 893206154
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 8, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );


char* board296812891 = gamma_board(board);
assert( board296812891 != NULL );
assert( strcmp(board296812891, 
".....\n"
".....\n"
"....1\n"
"..4.4\n"
"....1\n"
"....3\n"
".252.\n") == 0);
free(board296812891);
board296812891 = NULL;
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_free_fields(board, 7) == 23 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );


char* board320309016 = gamma_board(board);
assert( board320309016 != NULL );
assert( strcmp(board320309016, 
".....\n"
".....\n"
"....1\n"
"..434\n"
"....1\n"
".7563\n"
".252.\n") == 0);
free(board320309016);
board320309016 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );


char* board114603975 = gamma_board(board);
assert( board114603975 != NULL );
assert( strcmp(board114603975, 
".....\n"
".5...\n"
"....1\n"
".6434\n"
".7..1\n"
".7563\n"
".252.\n") == 0);
free(board114603975);
board114603975 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );


char* board231617006 = gamma_board(board);
assert( board231617006 != NULL );
assert( strcmp(board231617006, 
".....\n"
".5.7.\n"
"....1\n"
".6434\n"
".77.1\n"
".7563\n"
".2523\n") == 0);
free(board231617006);
board231617006 = NULL;
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board748854173 = gamma_board(board);
assert( board748854173 != NULL );
assert( strcmp(board748854173, 
".....\n"
".5.7.\n"
"....1\n"
".6434\n"
".77.1\n"
"87563\n"
"22523\n") == 0);
free(board748854173);
board748854173 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
