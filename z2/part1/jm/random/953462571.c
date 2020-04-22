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
uuid: 953462571
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 5, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 0 );


char* board280358597 = gamma_board(board);
assert( board280358597 != NULL );
assert( strcmp(board280358597, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board280358597);
board280358597 = NULL;
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board442007564 = gamma_board(board);
assert( board442007564 != NULL );
assert( strcmp(board442007564, 
".3.....\n"
".......\n"
".2.....\n"
".......\n"
"...3...\n") == 0);
free(board442007564);
board442007564 = NULL;
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_free_fields(board, 9) == 28 );


char* board798861235 = gamma_board(board);
assert( board798861235 != NULL );
assert( strcmp(board798861235, 
"53.....\n"
".......\n"
"62.....\n"
".......\n"
".9.3.4.\n") == 0);
free(board798861235);
board798861235 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );


char* board413662410 = gamma_board(board);
assert( board413662410 != NULL );
assert( strcmp(board413662410, 
"53..1..\n"
"8...2..\n"
"62453..\n"
"..11...\n"
"49.3.49\n") == 0);
free(board413662410);
board413662410 = NULL;
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board279986927 = gamma_board(board);
assert( board279986927 != NULL );
assert( strcmp(board279986927, 
"53781.9\n"
"84.221.\n"
"62453..\n"
"3.11...\n"
"49.3.49\n") == 0);
free(board279986927);
board279986927 = NULL;
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_golden_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_golden_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board171292447 = gamma_board(board);
assert( board171292447 != NULL );
assert( strcmp(board171292447, 
"53781.9\n"
"84.2217\n"
"62453.8\n"
"3411...\n"
"49.3849\n") == 0);
free(board171292447);
board171292447 = NULL;


gamma_delete(board);

    return 0;
}
