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
uuid: 783356956
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 3, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board109934789 = gamma_board(board);
assert( board109934789 != NULL );
assert( strcmp(board109934789, 
"1.3..33\n"
"3333333\n"
".....32\n"
"..22.11\n"
"..1.111\n"
".111223\n"
".111..3\n") == 0);
free(board109934789);
board109934789 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board518420286 = gamma_board(board);
assert( board518420286 != NULL );
assert( strcmp(board518420286, 
"1.3..33\n"
"3333333\n"
"...2.32\n"
"..22.11\n"
"3.2.111\n"
"1111223\n"
".111..3\n") == 0);
free(board518420286);
board518420286 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );


char* board209510199 = gamma_board(board);
assert( board209510199 != NULL );
assert( strcmp(board209510199, 
"1.3..33\n"
"3333333\n"
"...2.32\n"
"..22.11\n"
"3.2.111\n"
"1111223\n"
".111..3\n") == 0);
free(board209510199);
board209510199 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
