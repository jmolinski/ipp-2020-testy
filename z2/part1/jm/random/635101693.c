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
uuid: 635101693
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );


char* board919865993 = gamma_board(board);
assert( board919865993 != NULL );
assert( strcmp(board919865993, 
"13.5...\n"
".6.24..\n"
"......6\n"
"...3...\n"
"......3\n"
".4361..\n") == 0);
free(board919865993);
board919865993 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );


char* board461476910 = gamma_board(board);
assert( board461476910 != NULL );
assert( strcmp(board461476910, 
"1365...\n"
".6524..\n"
".2....6\n"
"..13...\n"
"34....3\n"
".43614.\n") == 0);
free(board461476910);
board461476910 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board766580710 = gamma_board(board);
assert( board766580710 != NULL );
assert( strcmp(board766580710, 
"1365.1.\n"
".6524..\n"
".2....6\n"
"..132.4\n"
"34.3..3\n"
".43614.\n") == 0);
free(board766580710);
board766580710 = NULL;
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );


char* board498448948 = gamma_board(board);
assert( board498448948 != NULL );
assert( strcmp(board498448948, 
"136521.\n"
".6524..\n"
".264..6\n"
"33132.4\n"
"34131.3\n"
"543614.\n") == 0);
free(board498448948);
board498448948 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board975766289 = gamma_board(board);
assert( board975766289 != NULL );
assert( strcmp(board975766289, 
"1365213\n"
"46524..\n"
".264.36\n"
"3313214\n"
"3613143\n"
"543614.\n") == 0);
free(board975766289);
board975766289 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board160085777 = gamma_board(board);
assert( board160085777 != NULL );
assert( strcmp(board160085777, 
"1365213\n"
"46524..\n"
".264.36\n"
"3313214\n"
"3613143\n"
"543614.\n") == 0);
free(board160085777);
board160085777 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_free_fields(board, 5) == 3 );


char* board511119775 = gamma_board(board);
assert( board511119775 != NULL );
assert( strcmp(board511119775, 
"1365213\n"
"46524.5\n"
"2264.36\n"
"3313214\n"
"3613143\n"
"543614.\n") == 0);
free(board511119775);
board511119775 = NULL;
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );


gamma_delete(board);

    return 0;
}
