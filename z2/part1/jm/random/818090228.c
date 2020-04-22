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
uuid: 818090228
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 1, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );


char* board949931890 = gamma_board(board);
assert( board949931890 != NULL );
assert( strcmp(board949931890, 
"13\n") == 0);
free(board949931890);
board949931890 = NULL;


gamma_delete(board);

    return 0;
}
