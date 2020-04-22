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
uuid: 156421277
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(2, 16, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 0 );


char* board688480430 = gamma_board(board);
assert( board688480430 != NULL );
assert( strcmp(board688480430, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n") == 0);
free(board688480430);
board688480430 = NULL;
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );


char* board210324614 = gamma_board(board);
assert( board210324614 != NULL );
assert( strcmp(board210324614, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
".3\n") == 0);
free(board210324614);
board210324614 = NULL;
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 16, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board901015056 = gamma_board(board);
assert( board901015056 != NULL );
assert( strcmp(board901015056, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
".3\n") == 0);
free(board901015056);
board901015056 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );


char* board842847268 = gamma_board(board);
assert( board842847268 != NULL );
assert( strcmp(board842847268, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"23\n") == 0);
free(board842847268);
board842847268 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );


char* board191891858 = gamma_board(board);
assert( board191891858 != NULL );
assert( strcmp(board191891858, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"23\n") == 0);
free(board191891858);
board191891858 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );


char* board422323959 = gamma_board(board);
assert( board422323959 != NULL );
assert( strcmp(board422323959, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
"..\n"
"23\n") == 0);
free(board422323959);
board422323959 = NULL;
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );


char* board793162039 = gamma_board(board);
assert( board793162039 != NULL );
assert( strcmp(board793162039, 
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"..\n"
"6.\n"
".8\n"
"23\n") == 0);
free(board793162039);
board793162039 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
