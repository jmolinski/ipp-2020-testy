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
uuid: 682193403
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 7, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );


char* board432044714 = gamma_board(board);
assert( board432044714 != NULL );
assert( strcmp(board432044714, 
".4..2\n"
"6535.\n"
"241..\n"
".32.4\n"
".....\n"
".....\n"
".2.4.\n") == 0);
free(board432044714);
board432044714 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board560963792 = gamma_board(board);
assert( board560963792 != NULL );
assert( strcmp(board560963792, 
".4.52\n"
"6535.\n"
"241..\n"
"632.4\n"
"..3..\n"
".51..\n"
".2.4.\n") == 0);
free(board560963792);
board560963792 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board808743617 = gamma_board(board);
assert( board808743617 != NULL );
assert( strcmp(board808743617, 
".4.52\n"
"6535.\n"
"241..\n"
"632.4\n"
"..3..\n"
".51..\n"
".2.4.\n") == 0);
free(board808743617);
board808743617 = NULL;
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );


char* board435156127 = gamma_board(board);
assert( board435156127 != NULL );
assert( strcmp(board435156127, 
".4.52\n"
"6535.\n"
"241..\n"
"63234\n"
"..3..\n"
".51..\n"
".264.\n") == 0);
free(board435156127);
board435156127 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );


char* board988126217 = gamma_board(board);
assert( board988126217 != NULL );
assert( strcmp(board988126217, 
".4.52\n"
"65356\n"
"241..\n"
"63234\n"
"..3..\n"
".5164\n"
"6264.\n") == 0);
free(board988126217);
board988126217 = NULL;
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );


char* board851624349 = gamma_board(board);
assert( board851624349 != NULL );
assert( strcmp(board851624349, 
"24552\n"
"65356\n"
"241.3\n"
"63234\n"
"..3.2\n"
"15164\n"
"62643\n") == 0);
free(board851624349);
board851624349 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
