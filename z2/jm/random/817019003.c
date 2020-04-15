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
uuid: 817019003
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(2, 5, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 4 );


char* board406268661 = gamma_board(board);
assert( board406268661 != NULL );
assert( strcmp(board406268661, 
".2\n"
".1\n"
"2.\n"
"35\n"
"1.\n") == 0);
free(board406268661);
board406268661 = NULL;
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 3 );


char* board688686930 = gamma_board(board);
assert( board688686930 != NULL );
assert( strcmp(board688686930, 
".2\n"
".1\n"
"21\n"
"35\n"
"1.\n") == 0);
free(board688686930);
board688686930 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );


char* board625331300 = gamma_board(board);
assert( board625331300 != NULL );
assert( strcmp(board625331300, 
".2\n"
".1\n"
"21\n"
"35\n"
"1.\n") == 0);
free(board625331300);
board625331300 = NULL;
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
