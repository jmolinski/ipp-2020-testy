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
uuid: 673973495
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 5, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );


char* board360972859 = gamma_board(board);
assert( board360972859 != NULL );
assert( strcmp(board360972859, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11..5..\n"
"2....53\n") == 0);
free(board360972859);
board360972859 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );


char* board738143072 = gamma_board(board);
assert( board738143072 != NULL );
assert( strcmp(board738143072, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11.15..\n"
"2...353\n") == 0);
free(board738143072);
board738143072 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );


char* board898618626 = gamma_board(board);
assert( board898618626 != NULL );
assert( strcmp(board898618626, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11.15..\n"
"2.3.353\n") == 0);
free(board898618626);
board898618626 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );


char* board453289448 = gamma_board(board);
assert( board453289448 != NULL );
assert( strcmp(board453289448, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11.15..\n"
"2.3.353\n") == 0);
free(board453289448);
board453289448 = NULL;


char* board181824414 = gamma_board(board);
assert( board181824414 != NULL );
assert( strcmp(board181824414, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11.15..\n"
"2.3.353\n") == 0);
free(board181824414);
board181824414 = NULL;
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 1) == 1 );


char* board659766131 = gamma_board(board);
assert( board659766131 != NULL );
assert( strcmp(board659766131, 
"33122.3\n"
"1241...\n"
"1412.24\n"
"11415..\n"
"2.3.353\n") == 0);
free(board659766131);
board659766131 = NULL;
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board378552220 = gamma_board(board);
assert( board378552220 != NULL );
assert( strcmp(board378552220, 
"33122.3\n"
"1241...\n"
"1412224\n"
"11415..\n"
"2.3.353\n") == 0);
free(board378552220);
board378552220 = NULL;
assert( gamma_move(board, 5, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
