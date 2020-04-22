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
uuid: 523305768
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 10, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );


char* board854826335 = gamma_board(board);
assert( board854826335 != NULL );
assert( strcmp(board854826335, 
"..8..\n"
".....\n"
"49...\n"
"..4..\n"
".....\n"
"27...\n"
"47.25\n"
"29...\n"
"55...\n"
"..8..\n") == 0);
free(board854826335);
board854826335 = NULL;
assert( gamma_move(board, 2, 3, 4) == 1 );


char* board536752434 = gamma_board(board);
assert( board536752434 != NULL );
assert( strcmp(board536752434, 
"..8..\n"
".....\n"
"49...\n"
"..4..\n"
".....\n"
"27.2.\n"
"47.25\n"
"29...\n"
"55...\n"
"..8..\n") == 0);
free(board536752434);
board536752434 = NULL;
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_golden_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );


char* board327810443 = gamma_board(board);
assert( board327810443 != NULL );
assert( strcmp(board327810443, 
"..8..\n"
"....8\n"
"49...\n"
"..4..\n"
"48.4.\n"
"27.26\n"
"47.25\n"
"29..5\n"
"55...\n"
"..8..\n") == 0);
free(board327810443);
board327810443 = NULL;
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board621193264 = gamma_board(board);
assert( board621193264 != NULL );
assert( strcmp(board621193264, 
"..8.8\n"
"....8\n"
"49...\n"
"..4..\n"
"48.4.\n"
"27.26\n"
"47.25\n"
"29..5\n"
"55..2\n"
"..8..\n") == 0);
free(board621193264);
board621193264 = NULL;
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );


char* board596251946 = gamma_board(board);
assert( board596251946 != NULL );
assert( strcmp(board596251946, 
"..8.8\n"
"....8\n"
"49...\n"
"..4..\n"
"48.4.\n"
"27926\n"
"47.25\n"
"29..5\n"
"55..2\n"
"7.8..\n") == 0);
free(board596251946);
board596251946 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );


char* board991478863 = gamma_board(board);
assert( board991478863 != NULL );
assert( strcmp(board991478863, 
".38.8\n"
".5..8\n"
"49...\n"
"8541.\n"
"48.4.\n"
"27926\n"
"47125\n"
"295.5\n"
"55..2\n"
"7.849\n") == 0);
free(board991478863);
board991478863 = NULL;
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_golden_move(board, 9, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );


char* board161375853 = gamma_board(board);
assert( board161375853 != NULL );
assert( strcmp(board161375853, 
".3868\n"
".5..8\n"
"492..\n"
"85418\n"
"4894.\n"
"27926\n"
"47125\n"
"995.5\n"
"55..2\n"
"7.849\n") == 0);
free(board161375853);
board161375853 = NULL;
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );


gamma_delete(board);

    return 0;
}
