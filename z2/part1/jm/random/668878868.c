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
uuid: 668878868
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );


char* board743468975 = gamma_board(board);
assert( board743468975 != NULL );
assert( strcmp(board743468975, 
".1.2364\n"
"5..5...\n"
"..21..6\n"
"3.3....\n"
"1.26...\n"
".5.....\n") == 0);
free(board743468975);
board743468975 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );


char* board792132547 = gamma_board(board);
assert( board792132547 != NULL );
assert( strcmp(board792132547, 
".1.2364\n"
"5..5...\n"
"..21..6\n"
"3.3....\n"
"1.26..6\n"
".5.....\n") == 0);
free(board792132547);
board792132547 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board664117907 = gamma_board(board);
assert( board664117907 != NULL );
assert( strcmp(board664117907, 
".1.2364\n"
"5..5...\n"
"4221..6\n"
"3.32...\n"
"1.26..6\n"
".5.....\n") == 0);
free(board664117907);
board664117907 = NULL;
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );


char* board175415694 = gamma_board(board);
assert( board175415694 != NULL );
assert( strcmp(board175415694, 
"2132344\n"
"5..5...\n"
"4221266\n"
"3.32136\n"
"1.26156\n"
"2511...\n") == 0);
free(board175415694);
board175415694 = NULL;
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
