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
uuid: 979735981
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 5, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board668789700 = gamma_board(board);
assert( board668789700 != NULL );
assert( strcmp(board668789700, 
".131\n"
"11.1\n"
"1.23\n"
".221\n"
"3122\n") == 0);
free(board668789700);
board668789700 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board601263296 = gamma_board(board);
assert( board601263296 != NULL );
assert( strcmp(board601263296, 
".131\n"
"11.1\n"
"1.23\n"
".221\n"
"3122\n") == 0);
free(board601263296);
board601263296 = NULL;
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board921912044 = gamma_board(board);
assert( board921912044 != NULL );
assert( strcmp(board921912044, 
".131\n"
"11.1\n"
"1323\n"
".221\n"
"3122\n") == 0);
free(board921912044);
board921912044 = NULL;
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );


char* board952966313 = gamma_board(board);
assert( board952966313 != NULL );
assert( strcmp(board952966313, 
".131\n"
"11.1\n"
"1323\n"
".221\n"
"3122\n") == 0);
free(board952966313);
board952966313 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


gamma_delete(board);

    return 0;
}
