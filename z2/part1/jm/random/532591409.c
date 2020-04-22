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
uuid: 532591409
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 69 );


char* board662157317 = gamma_board(board);
assert( board662157317 != NULL );
assert( strcmp(board662157317, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"1.......\n"
"........\n"
"3.2.....\n"
"........\n") == 0);
free(board662157317);
board662157317 = NULL;
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );


char* board748230517 = gamma_board(board);
assert( board748230517 != NULL );
assert( strcmp(board748230517, 
".....5..\n"
"........\n"
".......5\n"
"....24..\n"
"..4..1.1\n"
"1.......\n"
".2..4...\n"
"3.2.....\n"
"5...3.3.\n") == 0);
free(board748230517);
board748230517 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_golden_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board711326801 = gamma_board(board);
assert( board711326801 != NULL );
assert( strcmp(board711326801, 
".....5..\n"
"........\n"
".......5\n"
"....24..\n"
"..4..1.1\n"
"1....1..\n"
".2..4...\n"
"3.2.....\n"
"5...3.3.\n") == 0);
free(board711326801);
board711326801 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );


char* board986957838 = gamma_board(board);
assert( board986957838 != NULL );
assert( strcmp(board986957838, 
".....5..\n"
"........\n"
".......5\n"
"....24..\n"
"..4..1.1\n"
"1....1..\n"
".2..4...\n"
"3.2.....\n"
"5...3.3.\n") == 0);
free(board986957838);
board986957838 = NULL;
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board671427134 = gamma_board(board);
assert( board671427134 != NULL );
assert( strcmp(board671427134, 
".....5..\n"
"........\n"
".......5\n"
"....24..\n"
".444.1.1\n"
"1....1..\n"
"12..44..\n"
"3.22433.\n"
"55..3.33\n") == 0);
free(board671427134);
board671427134 = NULL;
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_golden_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );


char* board573250924 = gamma_board(board);
assert( board573250924 != NULL );
assert( strcmp(board573250924, 
".....5..\n"
"........\n"
"....44.5\n"
"....24..\n"
".444.1.1\n"
"1....1.1\n"
"12.444..\n"
"3322433.\n"
"55..3.33\n") == 0);
free(board573250924);
board573250924 = NULL;
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 7 );


char* board426391690 = gamma_board(board);
assert( board426391690 != NULL );
assert( strcmp(board426391690, 
".....5..\n"
"........\n"
"....44.5\n"
"....24.5\n"
".444.1.1\n"
"1....1.1\n"
"12.444..\n"
"3322433.\n"
"55..3.33\n") == 0);
free(board426391690);
board426391690 = NULL;
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
