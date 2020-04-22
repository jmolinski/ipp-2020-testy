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
uuid: 366251851
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );


char* board800415309 = gamma_board(board);
assert( board800415309 != NULL );
assert( strcmp(board800415309, 
".14...1..3.\n"
"6174243132.\n"
"2.767511..5\n"
".334..24.7.\n"
"1155675.5.6\n"
".6.6.....62\n"
"1.5..4.....\n") == 0);
free(board800415309);
board800415309 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );


char* board222874101 = gamma_board(board);
assert( board222874101 != NULL );
assert( strcmp(board222874101, 
".14...1..3.\n"
"6174243132.\n"
"2.767511..5\n"
".334..24.7.\n"
"1155675.5.6\n"
".6.6.....62\n"
"1.5..4.....\n") == 0);
free(board222874101);
board222874101 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board480423420 = gamma_board(board);
assert( board480423420 != NULL );
assert( strcmp(board480423420, 
".14...1..3.\n"
"6174243132.\n"
"2.767511..5\n"
".334..24.7.\n"
"6155675.5.6\n"
".6.6.....62\n"
"1.5..4.....\n") == 0);
free(board480423420);
board480423420 = NULL;
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );


char* board740520497 = gamma_board(board);
assert( board740520497 != NULL );
assert( strcmp(board740520497, 
".143..1..3.\n"
"61742431324\n"
"2.767511..5\n"
".334..24.7.\n"
"6155675.5.6\n"
"46.63....62\n"
"1.5..4.2...\n") == 0);
free(board740520497);
board740520497 = NULL;
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );


char* board609283898 = gamma_board(board);
assert( board609283898 != NULL );
assert( strcmp(board609283898, 
"6143.71.13.\n"
"61742431324\n"
"2.767511..5\n"
"7334..24.7.\n"
"4155675.5.6\n"
"46.63...762\n"
"1.5..432...\n") == 0);
free(board609283898);
board609283898 = NULL;
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );


char* board768758794 = gamma_board(board);
assert( board768758794 != NULL );
assert( strcmp(board768758794, 
"6143.71.13.\n"
"61742431324\n"
"2.767511..5\n"
"7334..24.7.\n"
"4155675.5.6\n"
"46.63...762\n"
"1.5..432...\n") == 0);
free(board768758794);
board768758794 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board138885381 = gamma_board(board);
assert( board138885381 != NULL );
assert( strcmp(board138885381, 
"6143.71.13.\n"
"61742431324\n"
"2.767511.55\n"
"7334..24.7.\n"
"4155675.5.6\n"
"46.63...762\n"
"1.5..432...\n") == 0);
free(board138885381);
board138885381 = NULL;
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_golden_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );


char* board980767855 = gamma_board(board);
assert( board980767855 != NULL );
assert( strcmp(board980767855, 
"6143.713134\n"
"61742431324\n"
"75767511.55\n"
"73341524.7.\n"
"415567525.6\n"
"46.63..5762\n"
"1.57.432..6\n") == 0);
free(board980767855);
board980767855 = NULL;
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
