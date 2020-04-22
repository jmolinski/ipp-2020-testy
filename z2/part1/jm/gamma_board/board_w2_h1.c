#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 519939453
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(1, 2, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 0 );


char* board143704551 = gamma_board(board);
assert( board143704551 != NULL );
assert( strcmp(board143704551, 
".\n"
".\n") == 0);
free(board143704551);
board143704551 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
