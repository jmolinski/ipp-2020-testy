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
uuid: 906445286
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(1, 7, 1, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );


char* board432999635 = gamma_board(board);
assert( board432999635 != NULL );
assert( strcmp(board432999635, 
".\n"
".\n"
".\n"
".\n"
".\n"
"1\n"
".\n") == 0);
free(board432999635);
board432999635 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board579892939 = gamma_board(board);
assert( board579892939 != NULL );
assert( strcmp(board579892939, 
".\n"
".\n"
".\n"
"1\n"
"1\n"
"1\n"
".\n") == 0);
free(board579892939);
board579892939 = NULL;
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


gamma_delete(board);

    return 0;
}
