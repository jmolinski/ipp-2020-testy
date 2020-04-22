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
uuid: 621832432
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 7, 9, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );


char* board227180113 = gamma_board(board);
assert( board227180113 != NULL );
assert( strcmp(board227180113, 
"........\n"
"..5....1\n"
".7.25...\n"
"........\n"
"..6...1.\n"
"........\n"
".2..7...\n") == 0);
free(board227180113);
board227180113 = NULL;
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );


char* board755122816 = gamma_board(board);
assert( board755122816 != NULL );
assert( strcmp(board755122816, 
"...4....\n"
"..59.111\n"
".7.256..\n"
"9..7....\n"
".26.9.18\n"
".3...5..\n"
".2..7.4.\n") == 0);
free(board755122816);
board755122816 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );


char* board392296659 = gamma_board(board);
assert( board392296659 != NULL );
assert( strcmp(board392296659, 
"...4....\n"
"..59.111\n"
".7.256..\n"
"93.77.3.\n"
".26.9.18\n"
".3...5..\n"
"622.7.4.\n") == 0);
free(board392296659);
board392296659 = NULL;
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_free_fields(board, 9) == 3 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );


char* board776490952 = gamma_board(board);
assert( board776490952 != NULL );
assert( strcmp(board776490952, 
"...4..4.\n"
"..59.111\n"
"77.256..\n"
"93.77.3.\n"
"22679.18\n"
".3...518\n"
"622.7748\n") == 0);
free(board776490952);
board776490952 = NULL;
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_golden_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board750253457 = gamma_board(board);
assert( board750253457 != NULL );
assert( strcmp(board750253457, 
"...4..4.\n"
"..59.111\n"
"771286..\n"
"93.77.3.\n"
"22679.18\n"
".3...518\n"
"622.7748\n") == 0);
free(board750253457);
board750253457 = NULL;
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


gamma_delete(board);

    return 0;
}
