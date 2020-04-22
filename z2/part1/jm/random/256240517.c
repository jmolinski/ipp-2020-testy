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
uuid: 256240517
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 8, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );


char* board127774609 = gamma_board(board);
assert( board127774609 != NULL );
assert( strcmp(board127774609, 
".1....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...1..\n") == 0);
free(board127774609);
board127774609 = NULL;
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board487081488 = gamma_board(board);
assert( board487081488 != NULL );
assert( strcmp(board487081488, 
"614453\n"
"815..6\n"
"122836\n"
".243.7\n"
".77816\n"
"44628.\n"
"5.51.4\n") == 0);
free(board487081488);
board487081488 = NULL;
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );


gamma_delete(board);

    return 0;
}
