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
uuid: 888874289
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 13, 9, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 1) == 91 );


char* board671533187 = gamma_board(board);
assert( board671533187 != NULL );
assert( strcmp(board671533187, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board671533187);
board671533187 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 84 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_free_fields(board, 8) == 81 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_golden_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_golden_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );


char* board716834410 = gamma_board(board);
assert( board716834410 != NULL );
assert( strcmp(board716834410, 
"883....\n"
"3252791\n"
"...49..\n"
"49.95..\n"
"......8\n"
"52.8.55\n"
"...2473\n"
"46321..\n"
"27.1...\n"
"7192.9.\n"
"7672723\n"
".265..6\n"
"24.11.7\n") == 0);
free(board716834410);
board716834410 = NULL;
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );


char* board528475463 = gamma_board(board);
assert( board528475463 != NULL );
assert( strcmp(board528475463, 
"883....\n"
"3252791\n"
"...49..\n"
"49495..\n"
"......8\n"
"52.8.55\n"
"...2473\n"
"46321..\n"
"27.1...\n"
"7192.9.\n"
"7672723\n"
".265.56\n"
"24.11.7\n") == 0);
free(board528475463);
board528475463 = NULL;
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_golden_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
