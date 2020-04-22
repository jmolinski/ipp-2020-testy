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
uuid: 729941097
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 3, 4, 5);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );


char* board717189282 = gamma_board(board);
assert( board717189282 != NULL );
assert( strcmp(board717189282, 
".\n"
".\n"
".\n") == 0);
free(board717189282);
board717189282 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board291871707 = gamma_board(board);
assert( board291871707 != NULL );
assert( strcmp(board291871707, 
"2\n"
"3\n"
"2\n") == 0);
free(board291871707);
board291871707 = NULL;


gamma_delete(board);

    return 0;
}
