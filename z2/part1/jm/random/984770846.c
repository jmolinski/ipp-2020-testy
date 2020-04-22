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
uuid: 984770846
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );


char* board891634765 = gamma_board(board);
assert( board891634765 != NULL );
assert( strcmp(board891634765, 
"5...3.6.6\n"
"2381.7.8.\n"
"7.543....\n"
"26.3..435\n"
".4.3...6.\n"
".47..381.\n"
"..1..5...\n") == 0);
free(board891634765);
board891634765 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );


char* board479962481 = gamma_board(board);
assert( board479962481 != NULL );
assert( strcmp(board479962481, 
"5...3.6.6\n"
"2381.738.\n"
"7.5434...\n"
"2673..435\n"
".453..76.\n"
".47..381.\n"
"6.13.5..6\n") == 0);
free(board479962481);
board479962481 = NULL;
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_free_fields(board, 8) == 23 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board338701567 = gamma_board(board);
assert( board338701567 != NULL );
assert( strcmp(board338701567, 
"53773.216\n"
"23811738.\n"
"7.54344.7\n"
"2673..435\n"
".45326765\n"
"247.53815\n"
"6713656.6\n") == 0);
free(board338701567);
board338701567 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
