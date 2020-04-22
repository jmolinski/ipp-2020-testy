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
uuid: 892920548
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );


char* board736204656 = gamma_board(board);
assert( board736204656 != NULL );
assert( strcmp(board736204656, 
"....\n"
"....\n"
"....\n"
"....\n"
"..2.\n"
"1...\n") == 0);
free(board736204656);
board736204656 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_golden_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );


char* board468611554 = gamma_board(board);
assert( board468611554 != NULL );
assert( strcmp(board468611554, 
".443\n"
".328\n"
".756\n"
"1.35\n"
"9929\n"
"1.73\n") == 0);
free(board468611554);
board468611554 = NULL;
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );


char* board548211059 = gamma_board(board);
assert( board548211059 != NULL );
assert( strcmp(board548211059, 
"9443\n"
".328\n"
"3756\n"
"1335\n"
"9529\n"
"1973\n") == 0);
free(board548211059);
board548211059 = NULL;


gamma_delete(board);

    return 0;
}
