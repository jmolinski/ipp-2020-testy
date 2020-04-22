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
uuid: 105416216
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_golden_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_golden_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_free_fields(board, 9) == 24 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_golden_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );


char* board322389238 = gamma_board(board);
assert( board322389238 != NULL );
assert( strcmp(board322389238, 
"64..4316\n"
"58536244\n"
"577765.4\n"
".89..6..\n"
"3.7972..\n"
".468.51.\n"
"85186.1.\n"
".2..5897\n"
"8233.732\n") == 0);
free(board322389238);
board322389238 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );


char* board177842972 = gamma_board(board);
assert( board177842972 != NULL );
assert( strcmp(board177842972, 
"64..4316\n"
"58536244\n"
"527765.4\n"
".89..6..\n"
"3.7972..\n"
".468251.\n"
"85186.1.\n"
".2..5897\n"
"8233.732\n") == 0);
free(board177842972);
board177842972 = NULL;
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board739949260 = gamma_board(board);
assert( board739949260 != NULL );
assert( strcmp(board739949260, 
"64..4316\n"
"58536244\n"
"527765.4\n"
".89..69.\n"
"3.7972..\n"
".468251.\n"
"85186.1.\n"
"72..5897\n"
"8233.732\n") == 0);
free(board739949260);
board739949260 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_free_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );


char* board385701453 = gamma_board(board);
assert( board385701453 != NULL );
assert( strcmp(board385701453, 
"64..4316\n"
"58536244\n"
"527765.4\n"
"389.469.\n"
"3.7972..\n"
".468251.\n"
"85186.1.\n"
"72..5897\n"
"8233.732\n") == 0);
free(board385701453);
board385701453 = NULL;
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );


char* board911109908 = gamma_board(board);
assert( board911109908 != NULL );
assert( strcmp(board911109908, 
"64..4316\n"
"58536244\n"
"52776594\n"
"389.469.\n"
"3.7972..\n"
".468251.\n"
"85186.1.\n"
"72..5897\n"
"8233.732\n") == 0);
free(board911109908);
board911109908 = NULL;


gamma_delete(board);

    return 0;
}
