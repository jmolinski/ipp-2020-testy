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
uuid: 398010101
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board151463578 = gamma_board(board);
assert( board151463578 != NULL );
assert( strcmp(board151463578, 
"..3...\n"
"41.4.6\n"
"....61\n"
"5.54.1\n"
"...62.\n"
"...2.4\n"
"261.15\n"
"3.1..2\n") == 0);
free(board151463578);
board151463578 = NULL;


char* board929568118 = gamma_board(board);
assert( board929568118 != NULL );
assert( strcmp(board929568118, 
"..3...\n"
"41.4.6\n"
"....61\n"
"5.54.1\n"
"...62.\n"
"...2.4\n"
"261.15\n"
"3.1..2\n") == 0);
free(board929568118);
board929568118 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );


char* board879122767 = gamma_board(board);
assert( board879122767 != NULL );
assert( strcmp(board879122767, 
"..3...\n"
"41.4.6\n"
".5..61\n"
"5.54.1\n"
"...62.\n"
"...2.4\n"
"261.15\n"
"3.1..2\n") == 0);
free(board879122767);
board879122767 = NULL;
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );


char* board600238050 = gamma_board(board);
assert( board600238050 != NULL );
assert( strcmp(board600238050, 
"..3...\n"
"41.4.6\n"
".5..61\n"
"5.5466\n"
"...623\n"
"...234\n"
"261.15\n"
"3.1..2\n") == 0);
free(board600238050);
board600238050 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );


char* board575977018 = gamma_board(board);
assert( board575977018 != NULL );
assert( strcmp(board575977018, 
"..3...\n"
"41.4.6\n"
".5..61\n"
"5.5466\n"
"...623\n"
"...234\n"
"261.15\n"
"3.1..2\n") == 0);
free(board575977018);
board575977018 = NULL;
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );


gamma_delete(board);

    return 0;
}
