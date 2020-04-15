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
uuid: 350284168
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 1, 4, 1);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );


gamma_delete(board);

    return 0;
}
