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
uuid: 182586424
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 6, 9, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board695519869 = gamma_board(board);
assert( board695519869 != NULL );
assert( strcmp(board695519869, 
".......95...4.\n"
".....4......7.\n"
"7...4...11..3.\n"
"3....62.......\n"
"2.36...6.5.6..\n"
"......9.......\n") == 0);
free(board695519869);
board695519869 = NULL;
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_move(board, 9, 0, 11) == 0 );


char* board950623341 = gamma_board(board);
assert( board950623341 != NULL );
assert( strcmp(board950623341, 
".......95...4.\n"
".....4......7.\n"
"7...4...11..3.\n"
"3....62.......\n"
"2.36...6.5.6..\n"
"......9.......\n") == 0);
free(board950623341);
board950623341 = NULL;
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );


char* board981276798 = gamma_board(board);
assert( board981276798 != NULL );
assert( strcmp(board981276798, 
".......95...4.\n"
".....4......7.\n"
"7.1.4...11..3.\n"
"3....62.......\n"
"2.36...6.5.6..\n"
"......9.......\n") == 0);
free(board981276798);
board981276798 = NULL;
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 9, 13, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board741606922 = gamma_board(board);
assert( board741606922 != NULL );
assert( strcmp(board741606922, 
"...9...95.3749\n"
"....345.5...7.\n"
"7.144...11..3.\n"
"37.2.62....2..\n"
"2.363756.5.61.\n"
"9..155929.3...\n") == 0);
free(board741606922);
board741606922 = NULL;
assert( gamma_move(board, 4, 4, 9) == 0 );


char* board762591946 = gamma_board(board);
assert( board762591946 != NULL );
assert( strcmp(board762591946, 
"...9...95.3749\n"
"....345.5...7.\n"
"7.144...11..3.\n"
"37.2.62....2..\n"
"2.363756.5.61.\n"
"9..155929.3...\n") == 0);
free(board762591946);
board762591946 = NULL;
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_golden_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board988694445 = gamma_board(board);
assert( board988694445 != NULL );
assert( strcmp(board988694445, 
"...9...9573749\n"
"....345.5...7.\n"
"7.144...11..3.\n"
"3762762....2.1\n"
"2.363756.5261.\n"
"9..155929.3...\n") == 0);
free(board988694445);
board988694445 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board515613503 = gamma_board(board);
assert( board515613503 != NULL );
assert( strcmp(board515613503, 
"1..9.9.9573749\n"
"....345.5..37.\n"
"7.144.1.11.73.\n"
"3762762....2.1\n"
"2236375675261.\n"
"9..15592923...\n") == 0);
free(board515613503);
board515613503 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );


char* board124344623 = gamma_board(board);
assert( board124344623 != NULL );
assert( strcmp(board124344623, 
"1..9.9.9573749\n"
"....345.52.37.\n"
"7.144.1.11.73.\n"
"3762762.5..2.1\n"
"2236375675261.\n"
"9..15592923.5.\n") == 0);
free(board124344623);
board124344623 = NULL;
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board861756707 = gamma_board(board);
assert( board861756707 != NULL );
assert( strcmp(board861756707, 
"1439.9.9573749\n"
"..6.345.52.371\n"
"7.14421.11973.\n"
"3762762.5..2.1\n"
"2236375675261.\n"
"9..15592923.5.\n") == 0);
free(board861756707);
board861756707 = NULL;
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board312943150 = gamma_board(board);
assert( board312943150 != NULL );
assert( strcmp(board312943150, 
"1439.9.9573749\n"
"..6.345.52.371\n"
"7.14421.119737\n"
"3762762.5..2.1\n"
"2236375675261.\n"
"9..15592923.5.\n") == 0);
free(board312943150);
board312943150 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 14 );


gamma_delete(board);

    return 0;
}
