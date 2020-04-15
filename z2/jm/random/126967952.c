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
uuid: 126967952
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 11, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );


char* board520138134 = gamma_board(board);
assert( board520138134 != NULL );
assert( strcmp(board520138134, 
"..4.\n"
"....\n"
"....\n"
"....\n"
"....\n"
"...1\n"
"1...\n"
"4...\n"
"....\n"
"..6.\n"
"7.1.\n") == 0);
free(board520138134);
board520138134 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board129551665 = gamma_board(board);
assert( board129551665 != NULL );
assert( strcmp(board129551665, 
"..4.\n"
"....\n"
"....\n"
"....\n"
"....\n"
"...1\n"
"1.2.\n"
"4...\n"
"....\n"
"..6.\n"
"7.1.\n") == 0);
free(board129551665);
board129551665 = NULL;
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 1 );


char* board598352912 = gamma_board(board);
assert( board598352912 != NULL );
assert( strcmp(board598352912, 
"..4.\n"
"5417\n"
".643\n"
".3..\n"
".2..\n"
"7..1\n"
"122.\n"
"4.45\n"
".312\n"
"7462\n"
"761.\n") == 0);
free(board598352912);
board598352912 = NULL;
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board271463693 = gamma_board(board);
assert( board271463693 != NULL );
assert( strcmp(board271463693, 
"..4.\n"
"5417\n"
".643\n"
".3..\n"
".227\n"
"7..1\n"
"122.\n"
"4.45\n"
".312\n"
"7462\n"
"761.\n") == 0);
free(board271463693);
board271463693 = NULL;
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board235695140 = gamma_board(board);
assert( board235695140 != NULL );
assert( strcmp(board235695140, 
"..4.\n"
"5417\n"
".643\n"
".32.\n"
".227\n"
"7..1\n"
"122.\n"
"4.45\n"
".312\n"
"7462\n"
"761.\n") == 0);
free(board235695140);
board235695140 = NULL;
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );


char* board774527329 = gamma_board(board);
assert( board774527329 != NULL );
assert( strcmp(board774527329, 
"..4.\n"
"5417\n"
".643\n"
".327\n"
"5227\n"
"7.21\n"
"1225\n"
"4.45\n"
".312\n"
"7462\n"
"7614\n") == 0);
free(board774527329);
board774527329 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );


char* board286025469 = gamma_board(board);
assert( board286025469 != NULL );
assert( strcmp(board286025469, 
"..4.\n"
"5417\n"
".643\n"
".327\n"
"5227\n"
"7.21\n"
"1225\n"
"4.45\n"
"7312\n"
"7462\n"
"7614\n") == 0);
free(board286025469);
board286025469 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
