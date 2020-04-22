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
uuid: 542218494
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 9, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 3) == 0 );


char* board490675803 = gamma_board(board);
assert( board490675803 != NULL );
assert( strcmp(board490675803, 
"....\n"
"....\n"
"4...\n"
"7...\n"
"....\n"
".11.\n"
".8..\n"
"...3\n"
"26..\n") == 0);
free(board490675803);
board490675803 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );


char* board789773031 = gamma_board(board);
assert( board789773031 != NULL );
assert( strcmp(board789773031, 
"....\n"
"....\n"
"4...\n"
"7...\n"
"....\n"
".11.\n"
"18..\n"
"...3\n"
"26..\n") == 0);
free(board789773031);
board789773031 = NULL;
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );


char* board308130542 = gamma_board(board);
assert( board308130542 != NULL );
assert( strcmp(board308130542, 
"...6\n"
"..5.\n"
"4.8.\n"
"74.3\n"
"....\n"
"211.\n"
"1869\n"
"...3\n"
"46.3\n") == 0);
free(board308130542);
board308130542 = NULL;
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_golden_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );


char* board802316453 = gamma_board(board);
assert( board802316453 != NULL );
assert( strcmp(board802316453, 
"...6\n"
"4.5.\n"
"4.8.\n"
"74.3\n"
"....\n"
"211.\n"
"1869\n"
"...3\n"
"9673\n") == 0);
free(board802316453);
board802316453 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );


char* board896468301 = gamma_board(board);
assert( board896468301 != NULL );
assert( strcmp(board896468301, 
".2.6\n"
"4.5.\n"
"4.8.\n"
"74.3\n"
"....\n"
"211.\n"
"1869\n"
"...3\n"
"9673\n") == 0);
free(board896468301);
board896468301 = NULL;
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board597394637 = gamma_board(board);
assert( board597394637 != NULL );
assert( strcmp(board597394637, 
"82.6\n"
"4.5.\n"
"4.8.\n"
"74.3\n"
".6..\n"
"6118\n"
"1869\n"
".813\n"
"9673\n") == 0);
free(board597394637);
board597394637 = NULL;
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );


gamma_delete(board);

    return 0;
}
