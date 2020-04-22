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
uuid: 743395925
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 5, 4);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 0 );


char* board845496406 = gamma_board(board);
assert( board845496406 != NULL );
assert( strcmp(board845496406, 
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board845496406);
board845496406 = NULL;
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );


char* board168230612 = gamma_board(board);
assert( board168230612 != NULL );
assert( strcmp(board168230612, 
".....\n"
".....\n"
".52.5\n"
"..2.4\n"
"1...3\n"
".3..2\n"
"....1\n") == 0);
free(board168230612);
board168230612 = NULL;
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );


char* board434080447 = gamma_board(board);
assert( board434080447 != NULL );
assert( strcmp(board434080447, 
".....\n"
"..1.2\n"
".52.5\n"
"..2.4\n"
"1...3\n"
".3.52\n"
"....1\n") == 0);
free(board434080447);
board434080447 = NULL;
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );


char* board849129787 = gamma_board(board);
assert( board849129787 != NULL );
assert( strcmp(board849129787, 
".....\n"
"..1.2\n"
"252.5\n"
"..2.4\n"
"1...3\n"
".3.52\n"
".3.31\n") == 0);
free(board849129787);
board849129787 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board878361816 = gamma_board(board);
assert( board878361816 != NULL );
assert( strcmp(board878361816, 
".....\n"
"43122\n"
"25245\n"
"5.244\n"
"1.4.4\n"
".3552\n"
".3.31\n") == 0);
free(board878361816);
board878361816 = NULL;
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 1 );


gamma_delete(board);

    return 0;
}
