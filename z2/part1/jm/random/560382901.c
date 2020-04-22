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
uuid: 560382901
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_free_fields(board, 1) == 108 );


char* board507891017 = gamma_board(board);
assert( board507891017 != NULL );
assert( strcmp(board507891017, 
"..........\n"
".....1....\n"
"..........\n"
"..........\n"
".........1\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board507891017);
board507891017 = NULL;
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );


char* board913830858 = gamma_board(board);
assert( board913830858 != NULL );
assert( strcmp(board913830858, 
"..........\n"
"....51....\n"
"6.1.......\n"
"..........\n"
".....3.7.1\n"
"...2......\n"
"5.........\n"
"....1....3\n"
"........3.\n"
".4........\n"
".........3\n") == 0);
free(board913830858);
board913830858 = NULL;
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );


char* board833638102 = gamma_board(board);
assert( board833638102 != NULL );
assert( strcmp(board833638102, 
".......2..\n"
"....51.41.\n"
"6.1.......\n"
"..........\n"
"..2..3.7.1\n"
"...2.6.7..\n"
"57........\n"
"...51..4.3\n"
".....1263.\n"
".4..7.....\n"
".........3\n") == 0);
free(board833638102);
board833638102 = NULL;
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );


char* board298575589 = gamma_board(board);
assert( board298575589 != NULL );
assert( strcmp(board298575589, 
"..64...26.\n"
"....51.41.\n"
"6.1......3\n"
"........7.\n"
"3.2..3.761\n"
"...2.6.735\n"
"57...5....\n"
"...51.44.3\n"
".....1263.\n"
".4..75....\n"
"......2.53\n") == 0);
free(board298575589);
board298575589 = NULL;
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );


char* board301112954 = gamma_board(board);
assert( board301112954 != NULL );
assert( strcmp(board301112954, 
"..64...26.\n"
"....51.41.\n"
"6.1......3\n"
"........7.\n"
"3.2..3.761\n"
"...2.6.735\n"
"57...5....\n"
"...51.44.3\n"
".....1263.\n"
".4..75....\n"
"...2..2.53\n") == 0);
free(board301112954);
board301112954 = NULL;
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );


char* board979071177 = gamma_board(board);
assert( board979071177 != NULL );
assert( strcmp(board979071177, 
"..64...26.\n"
"...451.41.\n"
"6.13.....3\n"
".....5..7.\n"
"362.53.761\n"
"...2.6.735\n"
"57...5..2.\n"
"...51.4433\n"
".....12637\n"
".4..75....\n"
"...2..2.53\n") == 0);
free(board979071177);
board979071177 = NULL;
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );


char* board926111293 = gamma_board(board);
assert( board926111293 != NULL );
assert( strcmp(board926111293, 
"..64.4.266\n"
"...451.41.\n"
"6.135.15.3\n"
".....5.27.\n"
"362.533761\n"
"...2.6.735\n"
"576..5..2.\n"
".6.51.4433\n"
"37..212637\n"
".4.675..27\n"
"..42.52.53\n") == 0);
free(board926111293);
board926111293 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_golden_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );


char* board255198177 = gamma_board(board);
assert( board255198177 != NULL );
assert( strcmp(board255198177, 
"..64.4.266\n"
"...451.41.\n"
"6.135.1513\n"
"....45.27.\n"
"362.533761\n"
"..32.6.735\n"
"576.755.2.\n"
".6.51.4433\n"
"37.1212637\n"
"74.675..27\n"
"7.42352.53\n") == 0);
free(board255198177);
board255198177 = NULL;
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_golden_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );


char* board951393166 = gamma_board(board);
assert( board951393166 != NULL );
assert( strcmp(board951393166, 
"..64.4.266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.6.735\n"
"5767755.2.\n"
".6.51.4433\n"
"3741212637\n"
"74.675..27\n"
"7.42352.53\n") == 0);
free(board951393166);
board951393166 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board266694915 = gamma_board(board);
assert( board266694915 != NULL );
assert( strcmp(board266694915, 
"..6414.266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.6.735\n"
"5767755.2.\n"
".6.51.4433\n"
"3741212637\n"
"74.675..27\n"
"7.42352.53\n") == 0);
free(board266694915);
board266694915 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );


char* board549787414 = gamma_board(board);
assert( board549787414 != NULL );
assert( strcmp(board549787414, 
"..6414.266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board549787414);
board549787414 = NULL;
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board210847502 = gamma_board(board);
assert( board210847502 != NULL );
assert( strcmp(board210847502, 
"..6414.266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board210847502);
board210847502 = NULL;
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );


char* board282613349 = gamma_board(board);
assert( board282613349 != NULL );
assert( strcmp(board282613349, 
"..6414.266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board282613349);
board282613349 = NULL;
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );


char* board134271069 = gamma_board(board);
assert( board134271069 != NULL );
assert( strcmp(board134271069, 
"..64144266\n"
"...451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board134271069);
board134271069 = NULL;
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );


char* board173115778 = gamma_board(board);
assert( board173115778 != NULL );
assert( strcmp(board173115778, 
"..64144266\n"
".4.451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board173115778);
board173115778 = NULL;
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );


char* board779194118 = gamma_board(board);
assert( board779194118 != NULL );
assert( strcmp(board779194118, 
"..64144266\n"
".4.451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board779194118);
board779194118 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );


char* board422921739 = gamma_board(board);
assert( board422921739 != NULL );
assert( strcmp(board422921739, 
"..64144266\n"
".4.451.417\n"
"6.135.1513\n"
"3...45727.\n"
"362.533761\n"
"..32.63735\n"
"5767755.2.\n"
".6151.4433\n"
"3741212637\n"
"74.6755227\n"
"7.42352.53\n") == 0);
free(board422921739);
board422921739 = NULL;
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );


gamma_delete(board);

    return 0;
}
