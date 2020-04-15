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
uuid: 478504098
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 2, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board261220300 = gamma_board(board);
assert( board261220300 != NULL );
assert( strcmp(board261220300, 
".1....\n"
"..1...\n") == 0);
free(board261220300);
board261220300 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );


char* board590609267 = gamma_board(board);
assert( board590609267 != NULL );
assert( strcmp(board590609267, 
".1....\n"
"3.1...\n") == 0);
free(board590609267);
board590609267 = NULL;
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board831060754 = gamma_board(board);
assert( board831060754 != NULL );
assert( strcmp(board831060754, 
".1....\n"
"3415..\n") == 0);
free(board831060754);
board831060754 = NULL;
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );


char* board490901335 = gamma_board(board);
assert( board490901335 != NULL );
assert( strcmp(board490901335, 
"312.8.\n"
"34156.\n") == 0);
free(board490901335);
board490901335 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );


char* board478419251 = gamma_board(board);
assert( board478419251 != NULL );
assert( strcmp(board478419251, 
"312.8.\n"
"34156.\n") == 0);
free(board478419251);
board478419251 = NULL;
assert( gamma_move(board, 7, 0, 0) == 0 );


char* board359020611 = gamma_board(board);
assert( board359020611 != NULL );
assert( strcmp(board359020611, 
"312.8.\n"
"34156.\n") == 0);
free(board359020611);
board359020611 = NULL;
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
