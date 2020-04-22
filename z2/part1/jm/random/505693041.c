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
uuid: 505693041
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 3, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board427292789 = gamma_board(board);
assert( board427292789 != NULL );
assert( strcmp(board427292789, 
"774.4..\n"
"31..25.\n"
"14..5.4\n") == 0);
free(board427292789);
board427292789 = NULL;
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );


char* board978059153 = gamma_board(board);
assert( board978059153 != NULL );
assert( strcmp(board978059153, 
"774.4..\n"
"31..25.\n"
"14.65.4\n") == 0);
free(board978059153);
board978059153 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 5) == 0 );


char* board594162083 = gamma_board(board);
assert( board594162083 != NULL );
assert( strcmp(board594162083, 
"77414.3\n"
"312525.\n"
"14.65.4\n") == 0);
free(board594162083);
board594162083 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board314822394 = gamma_board(board);
assert( board314822394 != NULL );
assert( strcmp(board314822394, 
"7741463\n"
"312525.\n"
"14165.4\n") == 0);
free(board314822394);
board314822394 = NULL;
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
