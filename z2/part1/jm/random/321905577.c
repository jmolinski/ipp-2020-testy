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
uuid: 321905577
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 11, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );


char* board847285572 = gamma_board(board);
assert( board847285572 != NULL );
assert( strcmp(board847285572, 
"3..3\n"
"2...\n"
"....\n"
"4..5\n"
"1...\n"
"....\n"
"..9.\n"
"61..\n"
"...7\n"
".3..\n"
".8..\n") == 0);
free(board847285572);
board847285572 = NULL;
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );


char* board456407180 = gamma_board(board);
assert( board456407180 != NULL );
assert( strcmp(board456407180, 
"3..3\n"
"2.2.\n"
"9...\n"
"4..5\n"
"18..\n"
"....\n"
"..9.\n"
"61.6\n"
".4.7\n"
".3..\n"
".81.\n") == 0);
free(board456407180);
board456407180 = NULL;
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );


char* board177172384 = gamma_board(board);
assert( board177172384 != NULL );
assert( strcmp(board177172384, 
"3..3\n"
"2.22\n"
"9...\n"
"4..5\n"
"18.8\n"
"..74\n"
".89.\n"
"61.6\n"
"1417\n"
"93.5\n"
"5817\n") == 0);
free(board177172384);
board177172384 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board457232986 = gamma_board(board);
assert( board457232986 != NULL );
assert( strcmp(board457232986, 
"3..3\n"
"2.22\n"
"9...\n"
"4..5\n"
"18.8\n"
".474\n"
".89.\n"
"61.6\n"
"1417\n"
"93.5\n"
"5817\n") == 0);
free(board457232986);
board457232986 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 13 );


char* board502696844 = gamma_board(board);
assert( board502696844 != NULL );
assert( strcmp(board502696844, 
"3..3\n"
"2.22\n"
"97..\n"
"4..5\n"
"18.8\n"
".474\n"
".89.\n"
"61.6\n"
"1417\n"
"93.5\n"
"5817\n") == 0);
free(board502696844);
board502696844 = NULL;
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
