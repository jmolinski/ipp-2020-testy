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
uuid: 438861063
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 15, 6, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 42 );


char* board743010409 = gamma_board(board);
assert( board743010409 != NULL );
assert( strcmp(board743010409, 
"3....\n"
"1...5\n"
"....2\n"
"164..\n"
"..1..\n"
"4..66\n"
"3..36\n"
"..6..\n"
"..6..\n"
"4..14\n"
".5..6\n"
"..15.\n"
"6...4\n"
".612.\n"
"53121\n") == 0);
free(board743010409);
board743010409 = NULL;
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board565989471 = gamma_board(board);
assert( board565989471 != NULL );
assert( strcmp(board565989471, 
"313.4\n"
"1..65\n"
".24.2\n"
"1643.\n"
"..1.6\n"
"4.666\n"
"3.136\n"
"346..\n"
".46..\n"
"4..14\n"
".5..6\n"
"3.163\n"
"66.24\n"
".612.\n"
"53121\n") == 0);
free(board565989471);
board565989471 = NULL;
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );


char* board474947889 = gamma_board(board);
assert( board474947889 != NULL );
assert( strcmp(board474947889, 
"313.4\n"
"1..65\n"
".2432\n"
"1643.\n"
"..1.6\n"
"4.666\n"
"3.136\n"
"346..\n"
".46.2\n"
"4..14\n"
".5..6\n"
"35163\n"
"66.24\n"
".612.\n"
"53121\n") == 0);
free(board474947889);
board474947889 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );


char* board176216217 = gamma_board(board);
assert( board176216217 != NULL );
assert( strcmp(board176216217, 
"313.4\n"
"1.465\n"
".2432\n"
"1643.\n"
"5.1.6\n"
"4.666\n"
"3.136\n"
"346..\n"
"146.2\n"
"4.214\n"
".5.16\n"
"35163\n"
"66.24\n"
".6121\n"
"53121\n") == 0);
free(board176216217);
board176216217 = NULL;
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 5, 3, 14) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );


gamma_delete(board);

    return 0;
}
