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
uuid: 667562900
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board265329534 = gamma_board(board);
assert( board265329534 != NULL );
assert( strcmp(board265329534, 
".5...\n"
".14.1\n"
"7..2.\n"
"13..2\n"
".6...\n"
"..35.\n") == 0);
free(board265329534);
board265329534 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );


char* board361837247 = gamma_board(board);
assert( board361837247 != NULL );
assert( strcmp(board361837247, 
"45...\n"
".14.1\n"
"7.72.\n"
"13..2\n"
".6..6\n"
"5135.\n") == 0);
free(board361837247);
board361837247 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board914001776 = gamma_board(board);
assert( board914001776 != NULL );
assert( strcmp(board914001776, 
"45..1\n"
"41461\n"
"7.772\n"
"13742\n"
".6.36\n"
"51356\n") == 0);
free(board914001776);
board914001776 = NULL;
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
