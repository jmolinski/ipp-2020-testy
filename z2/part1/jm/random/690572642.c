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
uuid: 690572642
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 7, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );


char* board286566605 = gamma_board(board);
assert( board286566605 != NULL );
assert( strcmp(board286566605, 
".2.7..2..\n"
"..3.4....\n"
"13.1...2.\n"
".5...3.5.\n") == 0);
free(board286566605);
board286566605 = NULL;
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board153565868 = gamma_board(board);
assert( board153565868 != NULL );
assert( strcmp(board153565868, 
"22.7..2.7\n"
"..314.1.5\n"
"13311.62.\n"
".5.7.3.5.\n") == 0);
free(board153565868);
board153565868 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );


char* board796440411 = gamma_board(board);
assert( board796440411 != NULL );
assert( strcmp(board796440411, 
"22.7..2.7\n"
"34314.155\n"
"13311.62.\n"
"45.7.3.5.\n") == 0);
free(board796440411);
board796440411 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board385878454 = gamma_board(board);
assert( board385878454 != NULL );
assert( strcmp(board385878454, 
"22.7..2.7\n"
"34314.155\n"
"13311.62.\n"
"45.7.3.5.\n") == 0);
free(board385878454);
board385878454 = NULL;
assert( gamma_busy_fields(board, 6) == 1 );


char* board747509014 = gamma_board(board);
assert( board747509014 != NULL );
assert( strcmp(board747509014, 
"22.7..2.7\n"
"34314.155\n"
"13311.62.\n"
"45.7.3.5.\n") == 0);
free(board747509014);
board747509014 = NULL;
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );


char* board497061195 = gamma_board(board);
assert( board497061195 != NULL );
assert( strcmp(board497061195, 
"22.7..2.7\n"
"34314.155\n"
"13311.62.\n"
"45.7.3.5.\n") == 0);
free(board497061195);
board497061195 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
