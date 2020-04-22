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
uuid: 634305815
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board648007239 = gamma_board(board);
assert( board648007239 != NULL );
assert( strcmp(board648007239, 
"....2.\n"
"..17..\n"
"1.....\n"
"14.61.\n"
"1..236\n"
"26....\n"
".37..6\n"
".4....\n"
"35.425\n") == 0);
free(board648007239);
board648007239 = NULL;
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_golden_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board608882841 = gamma_board(board);
assert( board608882841 != NULL );
assert( strcmp(board608882841, 
".4..2.\n"
"2.177.\n"
"164.1.\n"
"14.612\n"
"15.276\n"
"261...\n"
"737136\n"
".45.1.\n"
"35.425\n") == 0);
free(board608882841);
board608882841 = NULL;
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board707494865 = gamma_board(board);
assert( board707494865 != NULL );
assert( strcmp(board707494865, 
".4..28\n"
"23177.\n"
"164.1.\n"
"141612\n"
"15.276\n"
"2612.7\n"
"737136\n"
"645.14\n"
"35.425\n") == 0);
free(board707494865);
board707494865 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
