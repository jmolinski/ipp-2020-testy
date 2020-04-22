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
uuid: 258533602
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 7, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );


char* board680685368 = gamma_board(board);
assert( board680685368 != NULL );
assert( strcmp(board680685368, 
"..2.\n"
"....\n"
"2.7.\n"
"....\n"
".9..\n"
"5.19\n"
"7...\n") == 0);
free(board680685368);
board680685368 = NULL;
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_free_fields(board, 8) == 17 );


char* board471999570 = gamma_board(board);
assert( board471999570 != NULL );
assert( strcmp(board471999570, 
"472.\n"
"....\n"
"2.7.\n"
"....\n"
"79..\n"
"5.19\n"
"7...\n") == 0);
free(board471999570);
board471999570 = NULL;
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );


char* board769083953 = gamma_board(board);
assert( board769083953 != NULL );
assert( strcmp(board769083953, 
"4721\n"
"1...\n"
"2.7.\n"
"91.2\n"
"7994\n"
"5719\n"
"7632\n") == 0);
free(board769083953);
board769083953 = NULL;
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );


char* board751700372 = gamma_board(board);
assert( board751700372 != NULL );
assert( strcmp(board751700372, 
"4721\n"
"1...\n"
"2.7.\n"
"9122\n"
"7794\n"
"5719\n"
"7632\n") == 0);
free(board751700372);
board751700372 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
