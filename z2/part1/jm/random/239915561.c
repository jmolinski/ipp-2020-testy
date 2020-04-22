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
uuid: 239915561
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 14, 4, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board981010336 = gamma_board(board);
assert( board981010336 != NULL );
assert( strcmp(board981010336, 
"......\n"
"..23..\n"
".32...\n"
"2....1\n"
"1.....\n"
"...3..\n"
".4..3.\n"
".4...2\n"
"3.....\n"
"11....\n"
"....3.\n"
"441.21\n"
"13.4.4\n"
"4..3..\n") == 0);
free(board981010336);
board981010336 = NULL;
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board674526973 = gamma_board(board);
assert( board674526973 != NULL );
assert( strcmp(board674526973, 
"......\n"
".123.4\n"
".32...\n"
"2....1\n"
"1.....\n"
"3..3..\n"
".4..3.\n"
".4...2\n"
"3.23..\n"
"11..1.\n"
"...23.\n"
"441421\n"
"13.4.4\n"
"4..3..\n") == 0);
free(board674526973);
board674526973 = NULL;
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );


char* board344700119 = gamma_board(board);
assert( board344700119 != NULL );
assert( strcmp(board344700119, 
"..41.2\n"
"3123.4\n"
"232...\n"
"2....1\n"
"1322..\n"
"3..3..\n"
".4..33\n"
".4.3.2\n"
"3.43..\n"
"111.11\n"
"...23.\n"
"442421\n"
"13.444\n"
"4..3..\n") == 0);
free(board344700119);
board344700119 = NULL;
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 8) == 1 );


char* board586121224 = gamma_board(board);
assert( board586121224 != NULL );
assert( strcmp(board586121224, 
"..41.2\n"
"3123.4\n"
"232...\n"
"2....1\n"
"1322.2\n"
"3.23.3\n"
".4..33\n"
".4.3.2\n"
"3.43.4\n"
"111111\n"
".1.232\n"
"442421\n"
"13.444\n"
"4..3..\n") == 0);
free(board586121224);
board586121224 = NULL;
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );


char* board439785287 = gamma_board(board);
assert( board439785287 != NULL );
assert( strcmp(board439785287, 
"..41.2\n"
"3123.4\n"
"2324..\n"
"2....1\n"
"1322.2\n"
"3.2323\n"
".4..33\n"
".4.3.2\n"
"3.43.4\n"
"111111\n"
".1.232\n"
"442421\n"
"13.444\n"
"41.3..\n") == 0);
free(board439785287);
board439785287 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


char* board490199252 = gamma_board(board);
assert( board490199252 != NULL );
assert( strcmp(board490199252, 
"2.41.2\n"
"3123.4\n"
"2324..\n"
"2....1\n"
"1322.2\n"
"3.2323\n"
".4..33\n"
"44.3.2\n"
"3.43.4\n"
"111111\n"
".1.232\n"
"442421\n"
"13.444\n"
"41.3..\n") == 0);
free(board490199252);
board490199252 = NULL;
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );


char* board489133225 = gamma_board(board);
assert( board489133225 != NULL );
assert( strcmp(board489133225, 
"2.41.2\n"
"3123.4\n"
"23241.\n"
"2....1\n"
"1322.2\n"
"3.2323\n"
"24..33\n"
"4443.2\n"
"3.43.4\n"
"111111\n"
".1.232\n"
"442421\n"
"13.444\n"
"41.3..\n") == 0);
free(board489133225);
board489133225 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board488178494 = gamma_board(board);
assert( board488178494 != NULL );
assert( strcmp(board488178494, 
"2.4132\n"
"312314\n"
"23241.\n"
"23.3.1\n"
"132212\n"
"332323\n"
"24.433\n"
"4443.2\n"
"3.43.4\n"
"111111\n"
"41.232\n"
"442421\n"
"13.444\n"
"41.3..\n") == 0);
free(board488178494);
board488178494 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 13 );


gamma_delete(board);

    return 0;
}
