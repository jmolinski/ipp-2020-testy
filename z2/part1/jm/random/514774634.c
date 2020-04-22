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
uuid: 514774634
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 5, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );


char* board138300639 = gamma_board(board);
assert( board138300639 != NULL );
assert( strcmp(board138300639, 
"2.3..7366\n"
"62.72....\n"
".16....7.\n"
".3.3.55..\n"
"2315..6..\n") == 0);
free(board138300639);
board138300639 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );


char* board468527290 = gamma_board(board);
assert( board468527290 != NULL );
assert( strcmp(board468527290, 
"2.3.67366\n"
"62.72....\n"
"716...37.\n"
".3.3.55..\n"
"2315..6..\n") == 0);
free(board468527290);
board468527290 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );


char* board772555705 = gamma_board(board);
assert( board772555705 != NULL );
assert( strcmp(board772555705, 
"213.67366\n"
"62772...7\n"
"716..8374\n"
".3.3.55.4\n"
"23152266.\n") == 0);
free(board772555705);
board772555705 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
