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
uuid: 264883879
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 4, 9, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );


char* board803227711 = gamma_board(board);
assert( board803227711 != NULL );
assert( strcmp(board803227711, 
"961..7\n"
"957...\n"
"16.32.\n"
"4.865.\n") == 0);
free(board803227711);
board803227711 = NULL;
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board436366238 = gamma_board(board);
assert( board436366238 != NULL );
assert( strcmp(board436366238, 
"961917\n"
"957..9\n"
"16.32.\n"
"4.8652\n") == 0);
free(board436366238);
board436366238 = NULL;
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );


char* board305094002 = gamma_board(board);
assert( board305094002 != NULL );
assert( strcmp(board305094002, 
"961917\n"
"957..9\n"
"16.32.\n"
"448652\n") == 0);
free(board305094002);
board305094002 = NULL;
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
