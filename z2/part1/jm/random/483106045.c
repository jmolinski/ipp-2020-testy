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
uuid: 483106045
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_free_fields(board, 7) == 36 );


char* board548108510 = gamma_board(board);
assert( board548108510 != NULL );
assert( strcmp(board548108510, 
"2.....\n"
"..2...\n"
"..54.1\n"
"......\n"
".....3\n"
"......\n"
"......\n") == 0);
free(board548108510);
board548108510 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board552055883 = gamma_board(board);
assert( board552055883 != NULL );
assert( strcmp(board552055883, 
"2.....\n"
"..2...\n"
"3.54.1\n"
"......\n"
".....3\n"
"...2..\n"
"..1...\n") == 0);
free(board552055883);
board552055883 = NULL;
assert( gamma_move(board, 4, 4, 4) == 1 );


char* board533210855 = gamma_board(board);
assert( board533210855 != NULL );
assert( strcmp(board533210855, 
"2.....\n"
"..2...\n"
"3.5441\n"
"......\n"
".....3\n"
"...2..\n"
"..1...\n") == 0);
free(board533210855);
board533210855 = NULL;
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_golden_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );


char* board750746785 = gamma_board(board);
assert( board750746785 != NULL );
assert( strcmp(board750746785, 
"2..5..\n"
"..26.4\n"
"3.5441\n"
"6.6.5.\n"
".32..5\n"
"725234\n"
"2.1..5\n") == 0);
free(board750746785);
board750746785 = NULL;
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
