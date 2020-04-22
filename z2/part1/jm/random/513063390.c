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
uuid: 513063390
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 4, 9, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board953257311 = gamma_board(board);
assert( board953257311 != NULL );
assert( strcmp(board953257311, 
"18.7.\n"
"..5.7\n"
"5.52.\n"
"84...\n") == 0);
free(board953257311);
board953257311 = NULL;
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board812125097 = gamma_board(board);
assert( board812125097 != NULL );
assert( strcmp(board812125097, 
"18.7.\n"
".45.7\n"
"2252.\n"
"84.3.\n") == 0);
free(board812125097);
board812125097 = NULL;
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_golden_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );


char* board671077545 = gamma_board(board);
assert( board671077545 != NULL );
assert( strcmp(board671077545, 
"18.76\n"
".4557\n"
"2952.\n"
"8493.\n") == 0);
free(board671077545);
board671077545 = NULL;
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board565460410 = gamma_board(board);
assert( board565460410 != NULL );
assert( strcmp(board565460410, 
"88.76\n"
".4557\n"
"2952.\n"
"8493.\n") == 0);
free(board565460410);
board565460410 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );


char* board726687818 = gamma_board(board);
assert( board726687818 != NULL );
assert( strcmp(board726687818, 
"88976\n"
"64557\n"
"29522\n"
"8493.\n") == 0);
free(board726687818);
board726687818 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
