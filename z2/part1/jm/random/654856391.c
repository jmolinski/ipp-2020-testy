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
uuid: 654856391
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 8 );


char* board321351591 = gamma_board(board);
assert( board321351591 != NULL );
assert( strcmp(board321351591, 
"..73..3.\n"
"26...113\n"
"...1..2.\n"
".6.7456.\n"
"...33...\n"
"46.1..5.\n"
"55.44152\n"
"....7.4.\n"
"227.7...\n") == 0);
free(board321351591);
board321351591 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );


char* board917315962 = gamma_board(board);
assert( board917315962 != NULL );
assert( strcmp(board917315962, 
"..73..3.\n"
"267..113\n"
"...1.52.\n"
".6.7456.\n"
"...33..5\n"
"46.1..55\n"
"55444152\n"
"....7.4.\n"
"227.77..\n") == 0);
free(board917315962);
board917315962 = NULL;
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board857821725 = gamma_board(board);
assert( board857821725 != NULL );
assert( strcmp(board857821725, 
"..73..3.\n"
"2673.113\n"
"...1.52.\n"
".6.7456.\n"
"...33..5\n"
"46.1..55\n"
"55444152\n"
"....7.4.\n"
"227.77..\n") == 0);
free(board857821725);
board857821725 = NULL;
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board238536330 = gamma_board(board);
assert( board238536330 != NULL );
assert( strcmp(board238536330, 
"..73..3.\n"
"2673.113\n"
"...1.52.\n"
".6.7456.\n"
"...33..5\n"
"46.1..55\n"
"55444152\n"
"....7.4.\n"
"227.77..\n") == 0);
free(board238536330);
board238536330 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_move(board, 1, 2, 3) == 0 );


char* board455263835 = gamma_board(board);
assert( board455263835 != NULL );
assert( strcmp(board455263835, 
"..733.3.\n"
"2673.113\n"
"...1.52.\n"
".6.7456.\n"
"...33..5\n"
"46.1..55\n"
"55444152\n"
"....7.4.\n"
"227.77..\n") == 0);
free(board455263835);
board455263835 = NULL;
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
