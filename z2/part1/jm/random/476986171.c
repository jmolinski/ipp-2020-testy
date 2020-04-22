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
uuid: 476986171
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board932989237 = gamma_board(board);
assert( board932989237 != NULL );
assert( strcmp(board932989237, 
"..5....4.\n"
"24..225..\n"
"...13.134\n"
"..331..4.\n"
"5........\n"
"4.11....4\n"
".....351.\n"
".....3...\n") == 0);
free(board932989237);
board932989237 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 30 );


char* board664169777 = gamma_board(board);
assert( board664169777 != NULL );
assert( strcmp(board664169777, 
"..5..2.45\n"
"244.2243.\n"
"...13.134\n"
".3331..42\n"
"5135...1.\n"
"4311.4114\n"
".4...351.\n"
"2...33...\n") == 0);
free(board664169777);
board664169777 = NULL;
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );


gamma_delete(board);

    return 0;
}
