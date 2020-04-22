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
uuid: 291111741
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 9, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_golden_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );


char* board558534248 = gamma_board(board);
assert( board558534248 != NULL );
assert( strcmp(board558534248, 
"1.1.15..\n"
"........\n"
"385.....\n"
"9.274...\n"
"....2.46\n"
"3.6..3.4\n"
"8..13..9\n"
".2.2118.\n"
"..6.533.\n"
"..9...2.\n") == 0);
free(board558534248);
board558534248 = NULL;
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_free_fields(board, 9) == 47 );


char* board846210794 = gamma_board(board);
assert( board846210794 != NULL );
assert( strcmp(board846210794, 
"1.1.15..\n"
"........\n"
"385.....\n"
"9.274...\n"
"....2.46\n"
"3.6..3.4\n"
"8..13..9\n"
".2.2118.\n"
"..6.533.\n"
"..9...2.\n") == 0);
free(board846210794);
board846210794 = NULL;
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );


char* board923769893 = gamma_board(board);
assert( board923769893 != NULL );
assert( strcmp(board923769893, 
"181815..\n"
"62.15291\n"
"3859.811\n"
"9.274.56\n"
"7...2646\n"
"3.6433.4\n"
"82113479\n"
".2921186\n"
"716.5334\n"
"4.94.82.\n") == 0);
free(board923769893);
board923769893 = NULL;
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );


gamma_delete(board);

    return 0;
}
