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
uuid: 357828027
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 14, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board455909227 = gamma_board(board);
assert( board455909227 != NULL );
assert( strcmp(board455909227, 
"....1.\n"
"...6..\n"
"..1...\n"
".32.55\n"
".....6\n"
".5.1.4\n"
"......\n"
"6..6.4\n"
"2.1..5\n"
".8.483\n"
"..7.8.\n"
"5..9.7\n"
".34...\n"
"5.3367\n") == 0);
free(board455909227);
board455909227 = NULL;
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 1, 11) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 1, 12) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_golden_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_golden_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_free_fields(board, 9) == 26 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board338494121 = gamma_board(board);
assert( board338494121 != NULL );
assert( strcmp(board338494121, 
"814.1.\n"
"27.63.\n"
".8127.\n"
".32.55\n"
"49.4.6\n"
"85.1.4\n"
"...6..\n"
"63.6.4\n"
"2.29.5\n"
"187483\n"
".17564\n"
"5.3917\n"
"534..3\n"
"5.3367\n") == 0);
free(board338494121);
board338494121 = NULL;
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );


char* board193568847 = gamma_board(board);
assert( board193568847 != NULL );
assert( strcmp(board193568847, 
"814.1.\n"
"27663.\n"
".8127.\n"
"832.55\n"
"49.4.6\n"
"85.1.4\n"
"...6..\n"
"63.6.4\n"
"2.2915\n"
"187483\n"
"217564\n"
"5.3917\n"
"534..3\n"
"5.3367\n") == 0);
free(board193568847);
board193568847 = NULL;
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board190881559 = gamma_board(board);
assert( board190881559 != NULL );
assert( strcmp(board190881559, 
"814.11\n"
"27663.\n"
".8127.\n"
"832955\n"
"49.486\n"
"85.144\n"
"...6..\n"
"6366.4\n"
"2.2915\n"
"187483\n"
"217564\n"
"563917\n"
"5342.3\n"
"593367\n") == 0);
free(board190881559);
board190881559 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );


char* board753520636 = gamma_board(board);
assert( board753520636 != NULL );
assert( strcmp(board753520636, 
"814.11\n"
"27663.\n"
".8127.\n"
"832955\n"
"49.486\n"
"85.144\n"
"...6..\n"
"6366.4\n"
"2.2915\n"
"187483\n"
"217564\n"
"563917\n"
"534253\n"
"593367\n") == 0);
free(board753520636);
board753520636 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
