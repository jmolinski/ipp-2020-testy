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
uuid: 227938746
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_golden_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );


char* board941265114 = gamma_board(board);
assert( board941265114 != NULL );
assert( strcmp(board941265114, 
"3..1.7\n"
"...1..\n"
"......\n"
"....27\n"
"...4..\n"
"4.....\n"
"....1.\n"
"4..1.5\n"
"....6.\n"
"65..3.\n") == 0);
free(board941265114);
board941265114 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_golden_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board561499546 = gamma_board(board);
assert( board561499546 != NULL );
assert( strcmp(board561499546, 
"3..1.7\n"
"...1..\n"
"....1.\n"
".6..27\n"
"3..4..\n"
"4.4.5.\n"
"....12\n"
"4741.5\n"
"47.76.\n"
"657636\n") == 0);
free(board561499546);
board561499546 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 2) == 0 );


char* board277125582 = gamma_board(board);
assert( board277125582 != NULL );
assert( strcmp(board277125582, 
"3..1.7\n"
"..11..\n"
".5..1.\n"
"66.327\n"
"32.4..\n"
"424.55\n"
"..2.12\n"
"4741.5\n"
"37776.\n"
"657636\n") == 0);
free(board277125582);
board277125582 = NULL;
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );


char* board745380628 = gamma_board(board);
assert( board745380628 != NULL );
assert( strcmp(board745380628, 
"3..1.7\n"
"..11..\n"
".5..1.\n"
"66.327\n"
"32.4..\n"
"424.55\n"
"..2.12\n"
"4741.5\n"
"37776.\n"
"657636\n") == 0);
free(board745380628);
board745380628 = NULL;
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );


char* board127919643 = gamma_board(board);
assert( board127919643 != NULL );
assert( strcmp(board127919643, 
"3..1.7\n"
"..11..\n"
".55.1.\n"
"66.327\n"
"32.4..\n"
"424.55\n"
"..2.12\n"
"4741.5\n"
"37776.\n"
"657636\n") == 0);
free(board127919643);
board127919643 = NULL;
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board964704530 = gamma_board(board);
assert( board964704530 != NULL );
assert( strcmp(board964704530, 
"3..1.7\n"
"5.11..\n"
"755.1.\n"
"66.327\n"
"32.4.1\n"
"424.55\n"
"..2.12\n"
"4741.5\n"
"37776.\n"
"657636\n") == 0);
free(board964704530);
board964704530 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 8 );


gamma_delete(board);

    return 0;
}
