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
uuid: 849771253
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 11, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board623314089 = gamma_board(board);
assert( board623314089 != NULL );
assert( strcmp(board623314089, 
"..1..\n"
".....\n"
".....\n"
".1...\n"
"..7..\n"
"....5\n"
"....4\n"
".1...\n"
"1....\n"
"5...2\n"
".....\n") == 0);
free(board623314089);
board623314089 = NULL;
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );


char* board806050459 = gamma_board(board);
assert( board806050459 != NULL );
assert( strcmp(board806050459, 
"..1..\n"
".....\n"
"....4\n"
".1...\n"
"..7..\n"
"....5\n"
"....4\n"
".1...\n"
"1....\n"
"5.2.2\n"
"..53.\n") == 0);
free(board806050459);
board806050459 = NULL;
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );


char* board872395301 = gamma_board(board);
assert( board872395301 != NULL );
assert( strcmp(board872395301, 
"..1..\n"
".....\n"
"....4\n"
"11...\n"
".77.7\n"
"...45\n"
".5714\n"
".1...\n"
"1....\n"
"572.2\n"
"..531\n") == 0);
free(board872395301);
board872395301 = NULL;
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 10, 4) == 0 );


char* board759761268 = gamma_board(board);
assert( board759761268 != NULL );
assert( strcmp(board759761268, 
"..1..\n"
".176.\n"
".72.4\n"
"115..\n"
".7767\n"
"25345\n"
".4714\n"
".1...\n"
"1.41.\n"
"57222\n"
"..531\n") == 0);
free(board759761268);
board759761268 = NULL;
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );


char* board947266850 = gamma_board(board);
assert( board947266850 != NULL );
assert( strcmp(board947266850, 
"..1..\n"
".176.\n"
".72.4\n"
"115..\n"
".7767\n"
"25345\n"
".4714\n"
".1...\n"
"1.41.\n"
"57222\n"
"..531\n") == 0);
free(board947266850);
board947266850 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board768495421 = gamma_board(board);
assert( board768495421 != NULL );
assert( strcmp(board768495421, 
"..1..\n"
".176.\n"
".72.4\n"
"115..\n"
".7767\n"
"25345\n"
".4714\n"
".7...\n"
"1761.\n"
"57222\n"
"2.531\n") == 0);
free(board768495421);
board768495421 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 8) == 1 );


char* board451940323 = gamma_board(board);
assert( board451940323 != NULL );
assert( strcmp(board451940323, 
"..1..\n"
".176.\n"
".7264\n"
"115..\n"
".7767\n"
"25345\n"
".4714\n"
".7...\n"
"1761.\n"
"57222\n"
"2.531\n") == 0);
free(board451940323);
board451940323 = NULL;
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );


char* board414062223 = gamma_board(board);
assert( board414062223 != NULL );
assert( strcmp(board414062223, 
"2.1..\n"
".176.\n"
".7264\n"
"115..\n"
".7767\n"
"25345\n"
".4711\n"
".7.6.\n"
"17614\n"
"57222\n"
"2.531\n") == 0);
free(board414062223);
board414062223 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );


char* board637811058 = gamma_board(board);
assert( board637811058 != NULL );
assert( strcmp(board637811058, 
"2.1..\n"
".176.\n"
".7264\n"
"115..\n"
".7767\n"
"25345\n"
".4711\n"
".7.6.\n"
"17614\n"
"57222\n"
"2.531\n") == 0);
free(board637811058);
board637811058 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );


gamma_delete(board);

    return 0;
}
