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
uuid: 110811945
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(6, 5, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );


char* board693084987 = gamma_board(board);
assert( board693084987 != NULL );
assert( strcmp(board693084987, 
"......\n"
".1....\n"
"......\n"
"......\n"
"......\n") == 0);
free(board693084987);
board693084987 = NULL;
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );


char* board260090212 = gamma_board(board);
assert( board260090212 != NULL );
assert( strcmp(board260090212, 
"......\n"
".1....\n"
".4....\n"
"..5...\n"
".....6\n") == 0);
free(board260090212);
board260090212 = NULL;
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board710600459 = gamma_board(board);
assert( board710600459 != NULL );
assert( strcmp(board710600459, 
".....9\n"
".1...8\n"
".4....\n"
"..5...\n"
".....6\n") == 0);
free(board710600459);
board710600459 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );


char* board359523883 = gamma_board(board);
assert( board359523883 != NULL );
assert( strcmp(board359523883, 
"4....9\n"
".13..8\n"
".4.2..\n"
"..5...\n"
".....6\n") == 0);
free(board359523883);
board359523883 = NULL;
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );


char* board488560617 = gamma_board(board);
assert( board488560617 != NULL );
assert( strcmp(board488560617, 
"4....9\n"
".13..8\n"
".4.2..\n"
"..5...\n"
"7....6\n") == 0);
free(board488560617);
board488560617 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );


char* board121898608 = gamma_board(board);
assert( board121898608 != NULL );
assert( strcmp(board121898608, 
"4....9\n"
".13..8\n"
".4.2..\n"
"..5...\n"
"7..4.6\n") == 0);
free(board121898608);
board121898608 = NULL;
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );


char* board834067646 = gamma_board(board);
assert( board834067646 != NULL );
assert( strcmp(board834067646, 
"4..8.9\n"
".13..8\n"
".4.2..\n"
"..5.7.\n"
"7..4.6\n") == 0);
free(board834067646);
board834067646 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );


gamma_delete(board);

    return 0;
}
