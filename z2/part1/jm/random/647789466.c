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
uuid: 647789466
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 5, 2, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 0 );


char* board465564808 = gamma_board(board);
assert( board465564808 != NULL );
assert( strcmp(board465564808, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board465564808);
board465564808 = NULL;
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );


char* board335565907 = gamma_board(board);
assert( board335565907 != NULL );
assert( strcmp(board335565907, 
"...\n"
".1.\n"
"...\n"
"...\n"
".2.\n") == 0);
free(board335565907);
board335565907 = NULL;
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );


char* board719521242 = gamma_board(board);
assert( board719521242 != NULL );
assert( strcmp(board719521242, 
"...\n"
".11\n"
"..1\n"
".2.\n"
"22.\n") == 0);
free(board719521242);
board719521242 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
