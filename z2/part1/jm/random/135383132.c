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
uuid: 135383132
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_free_fields(board, 7) == 90 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );


char* board931743523 = gamma_board(board);
assert( board931743523 != NULL );
assert( strcmp(board931743523, 
".........\n"
"5....2...\n"
"..2.7....\n"
"...27....\n"
"....6....\n"
"...1.....\n"
"6.....47.\n"
".4....2..\n"
"1.6.5....\n"
".6..7..34\n"
"3........\n"
"..1......\n") == 0);
free(board931743523);
board931743523 = NULL;
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 84 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_golden_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );


char* board939499682 = gamma_board(board);
assert( board939499682 != NULL );
assert( strcmp(board939499682, 
"....4...1\n"
"5..7.2.2.\n"
"..2.73..5\n"
"23.273576\n"
"47..6.7..\n"
"5311...22\n"
"6133..47.\n"
".4..6.277\n"
"136.5....\n"
".61.7..34\n"
"3.4.1.5..\n"
"..1.5....\n") == 0);
free(board939499682);
board939499682 = NULL;
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );


char* board926040125 = gamma_board(board);
assert( board926040125 != NULL );
assert( strcmp(board926040125, 
"..3.42..1\n"
"5..7.2.21\n"
"6.2.73425\n"
"23.273576\n"
"47.66.772\n"
"53116..22\n"
"6133.647.\n"
".4..62277\n"
"13655..3.\n"
".31.7..34\n"
"3341155..\n"
"..1.5....\n") == 0);
free(board926040125);
board926040125 = NULL;
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_free_fields(board, 3) == 16 );


char* board658776458 = gamma_board(board);
assert( board658776458 != NULL );
assert( strcmp(board658776458, 
"..3.42..1\n"
"5..7.2.21\n"
"6.2.73425\n"
"23.273576\n"
"47.66.772\n"
"53116..22\n"
"6133.647.\n"
".4..62277\n"
"13655..3.\n"
".31.7..34\n"
"3341155..\n"
"..115....\n") == 0);
free(board658776458);
board658776458 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );


char* board256393806 = gamma_board(board);
assert( board256393806 != NULL );
assert( strcmp(board256393806, 
"..3442..1\n"
"5..7.2.21\n"
"6.2.73425\n"
"23.273576\n"
"47.66.772\n"
"53116..22\n"
"6133.647.\n"
"64..62277\n"
"13655..3.\n"
".31.7..34\n"
"3341155..\n"
"..115....\n") == 0);
free(board256393806);
board256393806 = NULL;
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );


char* board616144435 = gamma_board(board);
assert( board616144435 != NULL );
assert( strcmp(board616144435, 
"7.3442..1\n"
"5..7.2.21\n"
"6.2173425\n"
"23.273576\n"
"47.66.772\n"
"53116.422\n"
"6133.647.\n"
"64..62277\n"
"13655..3.\n"
".31.7..34\n"
"3341155..\n"
"..115....\n") == 0);
free(board616144435);
board616144435 = NULL;
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );


char* board940232206 = gamma_board(board);
assert( board940232206 != NULL );
assert( strcmp(board940232206, 
"7.3442..1\n"
"5..7.2.21\n"
"6.2173425\n"
"23.273576\n"
"47.66.772\n"
"53116.422\n"
"6133.647.\n"
"64..62277\n"
"13655..3.\n"
".31.7..34\n"
"3341155..\n"
"..115....\n") == 0);
free(board940232206);
board940232206 = NULL;
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );


gamma_delete(board);

    return 0;
}
