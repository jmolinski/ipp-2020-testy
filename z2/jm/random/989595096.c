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
uuid: 989595096
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 11, 9, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_golden_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );


char* board198583922 = gamma_board(board);
assert( board198583922 != NULL );
assert( strcmp(board198583922, 
"...5.\n"
"..9..\n"
".6...\n"
"..22.\n"
".1...\n"
"7..2.\n"
"...49\n"
".9..4\n"
"6...8\n"
"68.4.\n"
"..7.1\n") == 0);
free(board198583922);
board198583922 = NULL;
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );


char* board616706539 = gamma_board(board);
assert( board616706539 != NULL );
assert( strcmp(board616706539, 
"...5.\n"
"5.9..\n"
".6.6.\n"
"..22.\n"
".1...\n"
"7..2.\n"
"72.49\n"
"29.24\n"
"6..18\n"
"68.4.\n"
"..7.1\n") == 0);
free(board616706539);
board616706539 = NULL;
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board112827146 = gamma_board(board);
assert( board112827146 != NULL );
assert( strcmp(board112827146, 
"...5.\n"
"5.94.\n"
".6.6.\n"
"..22.\n"
".16.3\n"
"7.724\n"
"72949\n"
"29.24\n"
"67118\n"
"68.43\n"
"867.1\n") == 0);
free(board112827146);
board112827146 = NULL;
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board322917673 = gamma_board(board);
assert( board322917673 != NULL );
assert( strcmp(board322917673, 
"...5.\n"
"5.94.\n"
".6.6.\n"
"..22.\n"
".1683\n"
"71724\n"
"72949\n"
"29.24\n"
"67118\n"
"68.43\n"
"86711\n") == 0);
free(board322917673);
board322917673 = NULL;
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board909686733 = gamma_board(board);
assert( board909686733 != NULL );
assert( strcmp(board909686733, 
"...5.\n"
"5.94.\n"
".6.6.\n"
"1.22.\n"
".1683\n"
"71724\n"
"72949\n"
"29.24\n"
"67118\n"
"68.43\n"
"86711\n") == 0);
free(board909686733);
board909686733 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board574093725 = gamma_board(board);
assert( board574093725 != NULL );
assert( strcmp(board574093725, 
"..45.\n"
"5.94.\n"
".6.6.\n"
"1.22.\n"
".1683\n"
"71724\n"
"72949\n"
"29.24\n"
"67118\n"
"68.43\n"
"86711\n") == 0);
free(board574093725);
board574093725 = NULL;
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );


char* board113965833 = gamma_board(board);
assert( board113965833 != NULL );
assert( strcmp(board113965833, 
"..45.\n"
"5.94.\n"
".676.\n"
"1322.\n"
".1683\n"
"71724\n"
"72949\n"
"29.24\n"
"67118\n"
"68.43\n"
"86711\n") == 0);
free(board113965833);
board113965833 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );


char* board598263640 = gamma_board(board);
assert( board598263640 != NULL );
assert( strcmp(board598263640, 
"4.45.\n"
"5.949\n"
"7676.\n"
"13227\n"
".1683\n"
"71724\n"
"72949\n"
"29124\n"
"67118\n"
"61843\n"
"86711\n") == 0);
free(board598263640);
board598263640 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );


gamma_delete(board);

    return 0;
}
