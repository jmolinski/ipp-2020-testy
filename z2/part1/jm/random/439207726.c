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
uuid: 439207726
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );


char* board851280947 = gamma_board(board);
assert( board851280947 != NULL );
assert( strcmp(board851280947, 
"1.8152545\n"
"13823..8.\n"
"755..3...\n"
"1332646.1\n"
"..464182.\n"
"26433.43.\n") == 0);
free(board851280947);
board851280947 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board215333057 = gamma_board(board);
assert( board215333057 != NULL );
assert( strcmp(board215333057, 
"1.8152545\n"
"13823..8.\n"
"755..3...\n"
"1332646.1\n"
"..464182.\n"
"26433.43.\n") == 0);
free(board215333057);
board215333057 = NULL;
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board842292615 = gamma_board(board);
assert( board842292615 != NULL );
assert( strcmp(board842292615, 
"1.8152545\n"
"13823..8.\n"
"7553.3668\n"
"133264651\n"
"5.464182.\n"
"26433143.\n") == 0);
free(board842292615);
board842292615 = NULL;
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );


char* board791558025 = gamma_board(board);
assert( board791558025 != NULL );
assert( strcmp(board791558025, 
"1.8152545\n"
"13823.28.\n"
"7553.3668\n"
"133264651\n"
"52464182.\n"
"26433143.\n") == 0);
free(board791558025);
board791558025 = NULL;
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 6 );


char* board270985071 = gamma_board(board);
assert( board270985071 != NULL );
assert( strcmp(board270985071, 
"1.8152545\n"
"13823.28.\n"
"7553.3668\n"
"133264651\n"
"52464182.\n"
"26433143.\n") == 0);
free(board270985071);
board270985071 = NULL;


gamma_delete(board);

    return 0;
}
