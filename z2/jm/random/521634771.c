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
uuid: 521634771
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 9, 16);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_free_fields(board, 6) == 56 );


char* board603948810 = gamma_board(board);
assert( board603948810 != NULL );
assert( strcmp(board603948810, 
".......4.\n"
"...3.....\n"
".....6...\n"
"....2.5..\n"
"..4......\n"
".3.......\n"
".........\n") == 0);
free(board603948810);
board603948810 = NULL;
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_golden_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board862407367 = gamma_board(board);
assert( board862407367 != NULL );
assert( strcmp(board862407367, 
"..7..7848\n"
"...3.....\n"
".....6..1\n"
"....2.5..\n"
".34......\n"
".3.......\n"
".........\n") == 0);
free(board862407367);
board862407367 = NULL;
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board655203007 = gamma_board(board);
assert( board655203007 != NULL );
assert( strcmp(board655203007, 
"..7..7848\n"
"...3.....\n"
".....6..1\n"
"....2.5..\n"
".34......\n"
".3.......\n"
".....4...\n") == 0);
free(board655203007);
board655203007 = NULL;
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );


char* board315876402 = gamma_board(board);
assert( board315876402 != NULL );
assert( strcmp(board315876402, 
"..7..7848\n"
"...3.....\n"
".....68.1\n"
"....2.5..\n"
".34.7....\n"
".3...2...\n"
".6...4...\n") == 0);
free(board315876402);
board315876402 = NULL;
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_free_fields(board, 9) == 34 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board982905979 = gamma_board(board);
assert( board982905979 != NULL );
assert( strcmp(board982905979, 
"2.7..7848\n"
".943.71..\n"
"82.6.68.1\n"
"7.652.543\n"
"23477....\n"
"83.6827.2\n"
"565534...\n") == 0);
free(board982905979);
board982905979 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board167507256 = gamma_board(board);
assert( board167507256 != NULL );
assert( strcmp(board167507256, 
"2.7..7848\n"
".943.71..\n"
"82.6.68.1\n"
"7.652.543\n"
"23477....\n"
"83.6827.2\n"
"565534...\n") == 0);
free(board167507256);
board167507256 = NULL;
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );


char* board358654544 = gamma_board(board);
assert( board358654544 != NULL );
assert( strcmp(board358654544, 
"2.7.87848\n"
".943.71..\n"
"82.6.6821\n"
"7.652.543\n"
"23477....\n"
"83.6827.2\n"
"568534..1\n") == 0);
free(board358654544);
board358654544 = NULL;
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_golden_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board493287169 = gamma_board(board);
assert( board493287169 != NULL );
assert( strcmp(board493287169, 
"2.7.87848\n"
".943.7168\n"
"824616821\n"
"7.652.543\n"
"23477....\n"
"83.6827.2\n"
"568534..1\n") == 0);
free(board493287169);
board493287169 = NULL;
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );


gamma_delete(board);

    return 0;
}
