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
uuid: 132007371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 4, 4, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );


char* board950873636 = gamma_board(board);
assert( board950873636 != NULL );
assert( strcmp(board950873636, 
"1.......\n"
"........\n"
"........\n"
"........\n") == 0);
free(board950873636);
board950873636 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board605525218 = gamma_board(board);
assert( board605525218 != NULL );
assert( strcmp(board605525218, 
"1..1..44\n"
".3422...\n"
"2..32...\n"
"4133....\n") == 0);
free(board605525218);
board605525218 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board965072468 = gamma_board(board);
assert( board965072468 != NULL );
assert( strcmp(board965072468, 
"22211.44\n"
".3422314\n"
"22132.22\n"
"4133...1\n") == 0);
free(board965072468);
board965072468 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
