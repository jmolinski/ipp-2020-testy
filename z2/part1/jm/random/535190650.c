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
uuid: 535190650
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );


char* board103844484 = gamma_board(board);
assert( board103844484 != NULL );
assert( strcmp(board103844484, 
".......\n"
"4......\n"
".....4.\n"
"..77.5.\n"
".2.....\n"
"......6\n"
".......\n"
"2.1..5.\n"
".......\n"
".....6.\n") == 0);
free(board103844484);
board103844484 = NULL;
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );


char* board428302954 = gamma_board(board);
assert( board428302954 != NULL );
assert( strcmp(board428302954, 
".......\n"
"4...4..\n"
".....4.\n"
"..77.5.\n"
".2.....\n"
"6.....6\n"
".......\n"
"2.1..5.\n"
".......\n"
"...5.6.\n") == 0);
free(board428302954);
board428302954 = NULL;
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_free_fields(board, 7) == 27 );


char* board775065414 = gamma_board(board);
assert( board775065414 != NULL );
assert( strcmp(board775065414, 
"45.62..\n"
"4..6447\n"
"3..3547\n"
"6.77.5.\n"
".2..4.2\n"
"6..31.6\n"
".377142\n"
"221.35.\n"
"1.7...5\n"
"1.35.6.\n") == 0);
free(board775065414);
board775065414 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board306936946 = gamma_board(board);
assert( board306936946 != NULL );
assert( strcmp(board306936946, 
"45.62..\n"
"41.6447\n"
"33.3547\n"
"6177.51\n"
".2.6422\n"
"6273226\n"
"3377142\n"
"221.35.\n"
"14774.5\n"
"1.35.6.\n") == 0);
free(board306936946);
board306936946 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );


char* board640591691 = gamma_board(board);
assert( board640591691 != NULL );
assert( strcmp(board640591691, 
"45.62..\n"
"41.6447\n"
"33.3547\n"
"6177.51\n"
".2.6422\n"
"6273226\n"
"3377142\n"
"221.35.\n"
"14774.5\n"
"1.35.6.\n") == 0);
free(board640591691);
board640591691 = NULL;
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );


gamma_delete(board);

    return 0;
}
