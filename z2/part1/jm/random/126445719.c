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
uuid: 126445719
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 7, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );


char* board392212280 = gamma_board(board);
assert( board392212280 != NULL );
assert( strcmp(board392212280, 
"6...\n"
"..5.\n"
"....\n"
"....\n"
"....\n"
".2..\n"
"...2\n") == 0);
free(board392212280);
board392212280 = NULL;
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board837427039 = gamma_board(board);
assert( board837427039 != NULL );
assert( strcmp(board837427039, 
"6...\n"
".25.\n"
".6..\n"
"...7\n"
"...5\n"
"72.3\n"
".112\n") == 0);
free(board837427039);
board837427039 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );


char* board230831269 = gamma_board(board);
assert( board230831269 != NULL );
assert( strcmp(board230831269, 
"6...\n"
"225.\n"
"46..\n"
"..77\n"
"..45\n"
"7213\n"
".112\n") == 0);
free(board230831269);
board230831269 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 9 );


char* board638072323 = gamma_board(board);
assert( board638072323 != NULL );
assert( strcmp(board638072323, 
"6...\n"
"2253\n"
"46..\n"
"..77\n"
".645\n"
"7213\n"
".112\n") == 0);
free(board638072323);
board638072323 = NULL;
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board485681781 = gamma_board(board);
assert( board485681781 != NULL );
assert( strcmp(board485681781, 
"6...\n"
"2253\n"
"46..\n"
"..77\n"
"2645\n"
"7213\n"
"2112\n") == 0);
free(board485681781);
board485681781 = NULL;
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );


char* board410201885 = gamma_board(board);
assert( board410201885 != NULL );
assert( strcmp(board410201885, 
"6...\n"
"2253\n"
"46..\n"
"..77\n"
"2645\n"
"7313\n"
"2112\n") == 0);
free(board410201885);
board410201885 = NULL;


gamma_delete(board);

    return 0;
}
