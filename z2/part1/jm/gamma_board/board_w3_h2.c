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
uuid: 425129746
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(2, 3, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );


char* board762791695 = gamma_board(board);
assert( board762791695 != NULL );
assert( strcmp(board762791695, 
"..\n"
"..\n"
"1.\n") == 0);
free(board762791695);
board762791695 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


char* board203734731 = gamma_board(board);
assert( board203734731 != NULL );
assert( strcmp(board203734731, 
"..\n"
"..\n"
"1.\n") == 0);
free(board203734731);
board203734731 = NULL;


gamma_delete(board);

    return 0;
}
