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
uuid: 928137945
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 4, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );


char* board466029530 = gamma_board(board);
assert( board466029530 != NULL );
assert( strcmp(board466029530, 
"14....\n"
".6....\n"
"2.7...\n"
"..2...\n") == 0);
free(board466029530);
board466029530 = NULL;
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board904633258 = gamma_board(board);
assert( board904633258 != NULL );
assert( strcmp(board904633258, 
"14786.\n"
".6....\n"
"2172..\n"
"542..3\n") == 0);
free(board904633258);
board904633258 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board578658586 = gamma_board(board);
assert( board578658586 != NULL );
assert( strcmp(board578658586, 
"147867\n"
".6....\n"
"2172.4\n"
"542..3\n") == 0);
free(board578658586);
board578658586 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );


char* board251355393 = gamma_board(board);
assert( board251355393 != NULL );
assert( strcmp(board251355393, 
"147867\n"
".63...\n"
"2172.4\n"
"542..3\n") == 0);
free(board251355393);
board251355393 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_free_fields(board, 8) == 3 );


gamma_delete(board);

    return 0;
}
