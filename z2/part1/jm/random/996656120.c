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
uuid: 996656120
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );


char* board139496612 = gamma_board(board);
assert( board139496612 != NULL );
assert( strcmp(board139496612, 
"...3..\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"..2.3.\n"
"..2...\n"
"......\n"
"......\n") == 0);
free(board139496612);
board139496612 = NULL;
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );


char* board441906635 = gamma_board(board);
assert( board441906635 != NULL );
assert( strcmp(board441906635, 
"2.13..\n"
"4.....\n"
"......\n"
"..3..5\n"
".1.4..\n"
"521..2\n"
".22.3.\n"
".42.3.\n"
".32...\n"
".14.5.\n") == 0);
free(board441906635);
board441906635 = NULL;
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );


char* board269170810 = gamma_board(board);
assert( board269170810 != NULL );
assert( strcmp(board269170810, 
"2.13..\n"
"4.....\n"
"......\n"
"..3..5\n"
".134..\n"
"551..2\n"
".2233.\n"
".42.3.\n"
"532.2.\n"
"114.5.\n") == 0);
free(board269170810);
board269170810 = NULL;
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );


char* board732348583 = gamma_board(board);
assert( board732348583 != NULL );
assert( strcmp(board732348583, 
"2.13..\n"
"4.....\n"
"......\n"
"..3..5\n"
".134..\n"
"551..2\n"
".2233.\n"
".42.3.\n"
"532.2.\n"
"114.55\n") == 0);
free(board732348583);
board732348583 = NULL;
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );


char* board128581634 = gamma_board(board);
assert( board128581634 != NULL );
assert( strcmp(board128581634, 
"2.13..\n"
"4.....\n"
"......\n"
"..3..5\n"
".134..\n"
"551..2\n"
".2233.\n"
".42.3.\n"
"532.2.\n"
"114.55\n") == 0);
free(board128581634);
board128581634 = NULL;
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_move(board, 5, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
