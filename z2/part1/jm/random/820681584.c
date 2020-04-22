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
uuid: 820681584
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 3, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );


char* board840981607 = gamma_board(board);
assert( board840981607 != NULL );
assert( strcmp(board840981607, 
".......\n"
".......\n"
"1......\n"
".......\n"
".......\n"
"....2..\n"
".......\n") == 0);
free(board840981607);
board840981607 = NULL;
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );


char* board975039130 = gamma_board(board);
assert( board975039130 != NULL );
assert( strcmp(board975039130, 
".......\n"
".......\n"
"1......\n"
".....3.\n"
".......\n"
"....2..\n"
".3.....\n") == 0);
free(board975039130);
board975039130 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board969215810 = gamma_board(board);
assert( board969215810 != NULL );
assert( strcmp(board969215810, 
".......\n"
".......\n"
"1......\n"
"....33.\n"
"1......\n"
".2..2..\n"
".3.....\n") == 0);
free(board969215810);
board969215810 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board670387617 = gamma_board(board);
assert( board670387617 != NULL );
assert( strcmp(board670387617, 
".......\n"
".......\n"
"1......\n"
"....33.\n"
"1......\n"
".2..2..\n"
".3.....\n") == 0);
free(board670387617);
board670387617 = NULL;
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board934707211 = gamma_board(board);
assert( board934707211 != NULL );
assert( strcmp(board934707211, 
".......\n"
".......\n"
"1......\n"
"....33.\n"
"1......\n"
".2..2..\n"
".3.....\n") == 0);
free(board934707211);
board934707211 = NULL;
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 2) == 1 );


char* board269605681 = gamma_board(board);
assert( board269605681 != NULL );
assert( strcmp(board269605681, 
".......\n"
".......\n"
"1......\n"
"....33.\n"
"1....2.\n"
".2..22.\n"
".3.....\n") == 0);
free(board269605681);
board269605681 = NULL;
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board347300942 = gamma_board(board);
assert( board347300942 != NULL );
assert( strcmp(board347300942, 
".......\n"
".......\n"
"11...3.\n"
"....333\n"
"1....22\n"
"22.222.\n"
".3.....\n") == 0);
free(board347300942);
board347300942 = NULL;
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board534787591 = gamma_board(board);
assert( board534787591 != NULL );
assert( strcmp(board534787591, 
".......\n"
".......\n"
"11...3.\n"
"...3333\n"
"1....22\n"
"222222.\n"
".3...2.\n") == 0);
free(board534787591);
board534787591 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board840902610 = gamma_board(board);
assert( board840902610 != NULL );
assert( strcmp(board840902610, 
".......\n"
".......\n"
"11...3.\n"
"...3333\n"
"1....22\n"
"222222.\n"
".3...2.\n") == 0);
free(board840902610);
board840902610 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );


gamma_delete(board);

    return 0;
}
