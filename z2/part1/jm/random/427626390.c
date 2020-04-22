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
uuid: 427626390
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );


char* board205220893 = gamma_board(board);
assert( board205220893 != NULL );
assert( strcmp(board205220893, 
".....\n"
"...2.\n"
"...32\n"
"2...2\n"
".3..1\n"
".....\n") == 0);
free(board205220893);
board205220893 = NULL;
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );


char* board887466644 = gamma_board(board);
assert( board887466644 != NULL );
assert( strcmp(board887466644, 
".4..4\n"
"2..2.\n"
"24132\n"
"2.4.2\n"
"22..1\n"
"44...\n") == 0);
free(board887466644);
board887466644 = NULL;
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board401965015 = gamma_board(board);
assert( board401965015 != NULL );
assert( strcmp(board401965015, 
".41.4\n"
"24323\n"
"24132\n"
"214.2\n"
"224.1\n"
"44232\n") == 0);
free(board401965015);
board401965015 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board513918176 = gamma_board(board);
assert( board513918176 != NULL );
assert( strcmp(board513918176, 
".4134\n"
"24323\n"
"24132\n"
"214.2\n"
"224.1\n"
"44232\n") == 0);
free(board513918176);
board513918176 = NULL;
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );


char* board154570127 = gamma_board(board);
assert( board154570127 != NULL );
assert( strcmp(board154570127, 
"34134\n"
"24323\n"
"24132\n"
"214.2\n"
"224.1\n"
"44232\n") == 0);
free(board154570127);
board154570127 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );


gamma_delete(board);

    return 0;
}
