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
uuid: 865420701
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 3, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );


char* board318032839 = gamma_board(board);
assert( board318032839 != NULL );
assert( strcmp(board318032839, 
"523\n"
".1.\n"
"..4\n") == 0);
free(board318032839);
board318032839 = NULL;
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );


char* board815975023 = gamma_board(board);
assert( board815975023 != NULL );
assert( strcmp(board815975023, 
"123\n"
"21.\n"
"314\n") == 0);
free(board815975023);
board815975023 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
