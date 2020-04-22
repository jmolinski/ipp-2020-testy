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
uuid: 854520314
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );


char* board136059014 = gamma_board(board);
assert( board136059014 != NULL );
assert( strcmp(board136059014, 
".5..\n"
".72.\n"
"24.3\n"
"....\n"
"513.\n"
"1...\n") == 0);
free(board136059014);
board136059014 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_golden_move(board, 7, 3, 1) == 0 );


char* board631581656 = gamma_board(board);
assert( board631581656 != NULL );
assert( strcmp(board631581656, 
"75..\n"
".72.\n"
"2433\n"
"..88\n"
"513.\n"
"1..9\n") == 0);
free(board631581656);
board631581656 = NULL;
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );


char* board115628031 = gamma_board(board);
assert( board115628031 != NULL );
assert( strcmp(board115628031, 
"75..\n"
".72.\n"
"2433\n"
"..88\n"
"513.\n"
"1.89\n") == 0);
free(board115628031);
board115628031 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_free_fields(board, 7) == 6 );


char* board618922433 = gamma_board(board);
assert( board618922433 != NULL );
assert( strcmp(board618922433, 
"756.\n"
".72.\n"
"2433\n"
"7.88\n"
"513.\n"
"1.89\n") == 0);
free(board618922433);
board618922433 = NULL;
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );


char* board809175607 = gamma_board(board);
assert( board809175607 != NULL );
assert( strcmp(board809175607, 
"756.\n"
".72.\n"
"2433\n"
"7.88\n"
"513.\n"
"1.89\n") == 0);
free(board809175607);
board809175607 = NULL;
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
