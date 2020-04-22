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
uuid: 583010389
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 2, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );


char* board502249349 = gamma_board(board);
assert( board502249349 != NULL );
assert( strcmp(board502249349, 
"..4.3..\n"
"75.1.1.\n") == 0);
free(board502249349);
board502249349 = NULL;
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );


char* board447765284 = gamma_board(board);
assert( board447765284 != NULL );
assert( strcmp(board447765284, 
".74.3..\n"
"75.1.1.\n") == 0);
free(board447765284);
board447765284 = NULL;
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_free_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board787600408 = gamma_board(board);
assert( board787600408 != NULL );
assert( strcmp(board787600408, 
".74.3..\n"
"7531812\n") == 0);
free(board787600408);
board787600408 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
