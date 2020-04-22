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
uuid: 936136817
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 10, 6, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


char* board974246170 = gamma_board(board);
assert( board974246170 != NULL );
assert( strcmp(board974246170, 
"....4\n"
"....1\n"
"...15\n"
".....\n"
"6.1.2\n"
"15...\n"
".3..3\n"
"..53.\n"
"13.61\n"
"1.2.2\n") == 0);
free(board974246170);
board974246170 = NULL;
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board234905414 = gamma_board(board);
assert( board234905414 != NULL );
assert( strcmp(board234905414, 
"....4\n"
"....1\n"
"...15\n"
".....\n"
"6.1.2\n"
"151.2\n"
".3..3\n"
"..534\n"
"13.61\n"
"1.2.2\n") == 0);
free(board234905414);
board234905414 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );


char* board971562399 = gamma_board(board);
assert( board971562399 != NULL );
assert( strcmp(board971562399, 
".2.24\n"
"...21\n"
"3.415\n"
"....6\n"
"6.1.2\n"
"151.2\n"
"23.33\n"
"..534\n"
"13461\n"
"1.2.2\n") == 0);
free(board971562399);
board971562399 = NULL;
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_golden_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );


char* board553822852 = gamma_board(board);
assert( board553822852 != NULL );
assert( strcmp(board553822852, 
"22.24\n"
"..221\n"
"3.415\n"
"346.6\n"
"6.162\n"
"151.2\n"
"23133\n"
"21535\n"
"13461\n"
"16252\n") == 0);
free(board553822852);
board553822852 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );


char* board958191483 = gamma_board(board);
assert( board958191483 != NULL );
assert( strcmp(board958191483, 
"22.24\n"
"..221\n"
"3.415\n"
"346.6\n"
"6.162\n"
"151.2\n"
"23133\n"
"21535\n"
"13461\n"
"16252\n") == 0);
free(board958191483);
board958191483 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board699875221 = gamma_board(board);
assert( board699875221 != NULL );
assert( strcmp(board699875221, 
"22.24\n"
"..221\n"
"34415\n"
"346.6\n"
"6.162\n"
"151.2\n"
"23133\n"
"21535\n"
"13461\n"
"16252\n") == 0);
free(board699875221);
board699875221 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );


char* board859590516 = gamma_board(board);
assert( board859590516 != NULL );
assert( strcmp(board859590516, 
"22.24\n"
"..221\n"
"34415\n"
"346.6\n"
"6.162\n"
"151.2\n"
"23133\n"
"21535\n"
"13461\n"
"16252\n") == 0);
free(board859590516);
board859590516 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );


gamma_delete(board);

    return 0;
}
