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
uuid: 461673228
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 2);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );


char* board493761578 = gamma_board(board);
assert( board493761578 != NULL );
assert( strcmp(board493761578, 
"...3..\n"
".....2\n"
"3.....\n"
"...44.\n"
"175.1.\n"
"...21.\n"
"....6.\n") == 0);
free(board493761578);
board493761578 = NULL;
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board872430165 = gamma_board(board);
assert( board872430165 != NULL );
assert( strcmp(board872430165, 
"...3..\n"
".....2\n"
"3.....\n"
"...447\n"
"175.1.\n"
"...21.\n"
"6...6.\n") == 0);
free(board872430165);
board872430165 = NULL;
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );


char* board903652011 = gamma_board(board);
assert( board903652011 != NULL );
assert( strcmp(board903652011, 
"...3..\n"
"4....2\n"
"3.....\n"
"...447\n"
"175.1.\n"
"...21.\n"
"6...6.\n") == 0);
free(board903652011);
board903652011 = NULL;
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 3 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );


char* board557024437 = gamma_board(board);
assert( board557024437 != NULL );
assert( strcmp(board557024437, 
"...3..\n"
"4....2\n"
"3..4.5\n"
"...447\n"
"17511.\n"
"..521.\n"
"6...6.\n") == 0);
free(board557024437);
board557024437 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board568276901 = gamma_board(board);
assert( board568276901 != NULL );
assert( strcmp(board568276901, 
"...3..\n"
"4....2\n"
"3..455\n"
"...447\n"
"17511.\n"
".5521.\n"
"6...6.\n") == 0);
free(board568276901);
board568276901 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board127921356 = gamma_board(board);
assert( board127921356 != NULL );
assert( strcmp(board127921356, 
"...3..\n"
"4....2\n"
"3..455\n"
"...447\n"
"17511.\n"
".5521.\n"
"6...6.\n") == 0);
free(board127921356);
board127921356 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );


char* board427829589 = gamma_board(board);
assert( board427829589 != NULL );
assert( strcmp(board427829589, 
"...3..\n"
"4...22\n"
"3..455\n"
"...447\n"
"17511.\n"
".5521.\n"
"6...6.\n") == 0);
free(board427829589);
board427829589 = NULL;
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );


char* board859270350 = gamma_board(board);
assert( board859270350 != NULL );
assert( strcmp(board859270350, 
"...3..\n"
"4...22\n"
"3..455\n"
"...447\n"
"17511.\n"
".5521.\n"
"6..66.\n") == 0);
free(board859270350);
board859270350 = NULL;


gamma_delete(board);

    return 0;
}
