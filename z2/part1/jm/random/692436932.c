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
uuid: 692436932
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );


char* board834907253 = gamma_board(board);
assert( board834907253 != NULL );
assert( strcmp(board834907253, 
".573.75\n"
"..33666\n"
".545.27\n"
"122245.\n") == 0);
free(board834907253);
board834907253 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );


char* board927500367 = gamma_board(board);
assert( board927500367 != NULL );
assert( strcmp(board927500367, 
".573.75\n"
"6.33666\n"
".545.27\n"
"122245.\n") == 0);
free(board927500367);
board927500367 = NULL;
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );


gamma_delete(board);

    return 0;
}
