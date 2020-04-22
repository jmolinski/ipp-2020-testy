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
uuid: 269418506
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );


char* board203550467 = gamma_board(board);
assert( board203550467 != NULL );
assert( strcmp(board203550467, 
"..4.23\n"
"..2.3.\n"
"....6.\n"
"......\n"
"..5.15\n"
".1....\n") == 0);
free(board203550467);
board203550467 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );


char* board338063845 = gamma_board(board);
assert( board338063845 != NULL );
assert( strcmp(board338063845, 
"..4.23\n"
"..2.3.\n"
"3.3562\n"
"5.5...\n"
".55.15\n"
".1426.\n") == 0);
free(board338063845);
board338063845 = NULL;
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );


char* board367007605 = gamma_board(board);
assert( board367007605 != NULL );
assert( strcmp(board367007605, 
"..4.23\n"
"..2.3.\n"
"3.3562\n"
"5.5.6.\n"
".55.15\n"
"41426.\n") == 0);
free(board367007605);
board367007605 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 0, 5) == 0 );


char* board172190518 = gamma_board(board);
assert( board172190518 != NULL );
assert( strcmp(board172190518, 
"324.23\n"
".42.3.\n"
"343562\n"
"5.5.6.\n"
".55.15\n"
"41426.\n") == 0);
free(board172190518);
board172190518 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );


char* board386400786 = gamma_board(board);
assert( board386400786 != NULL );
assert( strcmp(board386400786, 
"324.23\n"
".4253.\n"
"343562\n"
"5.546.\n"
".55.15\n"
"41426.\n") == 0);
free(board386400786);
board386400786 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board925604546 = gamma_board(board);
assert( board925604546 != NULL );
assert( strcmp(board925604546, 
"324.23\n"
".4253.\n"
"343562\n"
"5.546.\n"
".55.15\n"
"41426.\n") == 0);
free(board925604546);
board925604546 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


gamma_delete(board);

    return 0;
}
