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
uuid: 234167293
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 5, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );


char* board417667975 = gamma_board(board);
assert( board417667975 != NULL );
assert( strcmp(board417667975, 
".4..\n"
".6..\n"
"913.\n"
".1.5\n"
"..92\n") == 0);
free(board417667975);
board417667975 = NULL;
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );


char* board762924197 = gamma_board(board);
assert( board762924197 != NULL );
assert( strcmp(board762924197, 
".46.\n"
".6.5\n"
"913.\n"
"8185\n"
"..92\n") == 0);
free(board762924197);
board762924197 = NULL;
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );


char* board250805237 = gamma_board(board);
assert( board250805237 != NULL );
assert( strcmp(board250805237, 
".46.\n"
"3655\n"
"9131\n"
"8185\n"
"3.92\n") == 0);
free(board250805237);
board250805237 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board308722035 = gamma_board(board);
assert( board308722035 != NULL );
assert( strcmp(board308722035, 
".46.\n"
"3655\n"
"9131\n"
"8185\n"
"3.92\n") == 0);
free(board308722035);
board308722035 = NULL;
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 3 );


gamma_delete(board);

    return 0;
}
