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
uuid: 597860045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 8, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 2, 4) == 1 );


char* board950588245 = gamma_board(board);
assert( board950588245 != NULL );
assert( strcmp(board950588245, 
"......\n"
".....4\n"
"...1..\n"
"..6...\n"
"......\n"
".....2\n"
".4....\n"
"......\n") == 0);
free(board950588245);
board950588245 = NULL;
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );


char* board662599552 = gamma_board(board);
assert( board662599552 != NULL );
assert( strcmp(board662599552, 
"..148.\n"
"8....4\n"
"2..17.\n"
"646576\n"
"4.....\n"
"..8722\n"
".4....\n"
".3...3\n") == 0);
free(board662599552);
board662599552 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );


char* board377193140 = gamma_board(board);
assert( board377193140 != NULL );
assert( strcmp(board377193140, 
"..148.\n"
"8..6.4\n"
"2..178\n"
"646576\n"
"4..5..\n"
"..8722\n"
".43..5\n"
".32..3\n") == 0);
free(board377193140);
board377193140 = NULL;
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board757749523 = gamma_board(board);
assert( board757749523 != NULL );
assert( strcmp(board757749523, 
"..148.\n"
"856644\n"
"28.178\n"
"646576\n"
"45.5..\n"
"..8722\n"
".43.26\n"
".32253\n") == 0);
free(board757749523);
board757749523 = NULL;
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );


gamma_delete(board);

    return 0;
}
