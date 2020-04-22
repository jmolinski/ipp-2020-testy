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
uuid: 359227686
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );


char* board937813372 = gamma_board(board);
assert( board937813372 != NULL );
assert( strcmp(board937813372, 
".....54.15\n"
".3.453....\n"
"....43..11\n"
".54..1....\n"
".....4.3..\n"
"31....2.5.\n") == 0);
free(board937813372);
board937813372 = NULL;
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );


char* board212413548 = gamma_board(board);
assert( board212413548 != NULL );
assert( strcmp(board212413548, 
".3...54.15\n"
".3.453....\n"
".2..43..11\n"
"154..1.3..\n"
".....4.3..\n"
"31...32.5.\n") == 0);
free(board212413548);
board212413548 = NULL;
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );


char* board703252631 = gamma_board(board);
assert( board703252631 != NULL );
assert( strcmp(board703252631, 
".3...54.15\n"
".3.453....\n"
".2..43.111\n"
"154..1.3..\n"
".....4.33.\n"
"31...3235.\n") == 0);
free(board703252631);
board703252631 = NULL;
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );


char* board664044629 = gamma_board(board);
assert( board664044629 != NULL );
assert( strcmp(board664044629, 
"33...54.15\n"
".34453....\n"
".2..43.111\n"
"1542.1.3..\n"
".....4.33.\n"
"31...3235.\n") == 0);
free(board664044629);
board664044629 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );


char* board997266222 = gamma_board(board);
assert( board997266222 != NULL );
assert( strcmp(board997266222, 
"33..254.15\n"
".34453.2..\n"
".2..43.111\n"
"1542.1.33.\n"
".....4.33.\n"
"31...3235.\n") == 0);
free(board997266222);
board997266222 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );


gamma_delete(board);

    return 0;
}
