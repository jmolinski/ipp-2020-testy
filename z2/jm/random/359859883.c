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
uuid: 359859883
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 9, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );


char* board910675881 = gamma_board(board);
assert( board910675881 != NULL );
assert( strcmp(board910675881, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"1........\n"
".......1.\n"
".........\n"
".......2.\n"
".........\n"
".........\n") == 0);
free(board910675881);
board910675881 = NULL;
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );


char* board736685293 = gamma_board(board);
assert( board736685293 != NULL );
assert( strcmp(board736685293, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".3.......\n"
".........\n"
".........\n"
"1.....3..\n"
".......1.\n"
".........\n"
".......2.\n"
".........\n"
".........\n") == 0);
free(board736685293);
board736685293 = NULL;
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );


char* board301505970 = gamma_board(board);
assert( board301505970 != NULL );
assert( strcmp(board301505970, 
"......1..\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".3.....25\n"
".........\n"
".........\n"
"1...9.3.9\n"
".......1.\n"
".........\n"
".......2.\n"
".2..6.7..\n"
".........\n") == 0);
free(board301505970);
board301505970 = NULL;
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 8, 12) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board560338062 = gamma_board(board);
assert( board560338062 != NULL );
assert( strcmp(board560338062, 
"......1..\n"
".........\n"
"........9\n"
".........\n"
".........\n"
".........\n"
".3.....25\n"
".........\n"
"..5......\n"
"1...963.9\n"
".......1.\n"
".........\n"
".......2.\n"
".2..687..\n"
"....7....\n") == 0);
free(board560338062);
board560338062 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 9, 14, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );


char* board699001271 = gamma_board(board);
assert( board699001271 != NULL );
assert( strcmp(board699001271, 
"......1..\n"
".35......\n"
"........9\n"
".........\n"
".....2...\n"
".3.......\n"
"53.1.5.25\n"
".........\n"
"..5......\n"
"1...963.9\n"
".......14\n"
".2.......\n"
".......2.\n"
".24.687..\n"
"....7....\n") == 0);
free(board699001271);
board699001271 = NULL;
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 105 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 3, 14) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_free_fields(board, 2) == 98 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board757447793 = gamma_board(board);
assert( board757447793 != NULL );
assert( strcmp(board757447793, 
"...9..1..\n"
"835......\n"
"........9\n"
"........2\n"
".....2...\n"
".39......\n"
"53.1.5.25\n"
"....2..3.\n"
"..5......\n"
"1...963.9\n"
".......14\n"
".2.8.....\n"
"....6..2.\n"
".24.687..\n"
".6.87....\n") == 0);
free(board757447793);
board757447793 = NULL;
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_free_fields(board, 8) == 94 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 8, 6, 12) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );


char* board169511566 = gamma_board(board);
assert( board169511566 != NULL );
assert( strcmp(board169511566, 
".2.9..1..\n"
"835..35..\n"
"......8.9\n"
"........2\n"
".....2...\n"
".39.....8\n"
"5361.5925\n"
"8.2.2..3.\n"
"..5......\n"
"1...963.9\n"
"...7...14\n"
".2.8.2...\n"
"....62.2.\n"
".24.687.4\n"
".6.87...7\n") == 0);
free(board169511566);
board169511566 = NULL;
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 80 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );


char* board617696346 = gamma_board(board);
assert( board617696346 != NULL );
assert( strcmp(board617696346, 
".2.9..1..\n"
"8358.35..\n"
".4....8.9\n"
".23....52\n"
"....62.11\n"
".39...2.8\n"
"5361.5925\n"
"84252..3.\n"
"6.595.7..\n"
"1...96389\n"
".7.7.6.14\n"
".2.8.29..\n"
"..4562.2.\n"
".24.687.4\n"
".6487...7\n") == 0);
free(board617696346);
board617696346 = NULL;
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_golden_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board858848649 = gamma_board(board);
assert( board858848649 != NULL );
assert( strcmp(board858848649, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"45..62.11\n"
".39..42.8\n"
"5361.5925\n"
"84252..3.\n"
"6.595.71.\n"
"1...96389\n"
"27.761814\n"
".2.8329.1\n"
"7.4562.27\n"
"224.687.4\n"
"46487...7\n") == 0);
free(board858848649);
board858848649 = NULL;
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );


char* board248826475 = gamma_board(board);
assert( board248826475 != NULL );
assert( strcmp(board248826475, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"45..62.11\n"
".39.742.8\n"
"5361.5925\n"
"84252..3.\n"
"6.595.71.\n"
"1...96389\n"
"273761814\n"
".228329.1\n"
"7.4562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board248826475);
board248826475 = NULL;
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );


char* board100203762 = gamma_board(board);
assert( board100203762 != NULL );
assert( strcmp(board100203762, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"45..62.11\n"
".39.742.8\n"
"5361.5925\n"
"84252..3.\n"
"6.595.71.\n"
"1...96389\n"
"273761814\n"
".228329.1\n"
"7.4562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board100203762);
board100203762 = NULL;
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );


char* board162703754 = gamma_board(board);
assert( board162703754 != NULL );
assert( strcmp(board162703754, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"456.62.11\n"
".39574258\n"
"5361.5925\n"
"84252..3.\n"
"6.595.71.\n"
"1...96389\n"
"273761814\n"
"1228329.1\n"
"7.4562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board162703754);
board162703754 = NULL;
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 14, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 33 );


char* board571450542 = gamma_board(board);
assert( board571450542 != NULL );
assert( strcmp(board571450542, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"456.62.11\n"
".39574258\n"
"5361.5925\n"
"84252..3.\n"
"6.595.71.\n"
"1...96389\n"
"273761814\n"
"1228329.1\n"
"7.4562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board571450542);
board571450542 = NULL;
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_golden_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_golden_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board188354497 = gamma_board(board);
assert( board188354497 != NULL );
assert( strcmp(board188354497, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23....52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252..3.\n"
"6.596.71.\n"
"1.9.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board188354497);
board188354497 = NULL;
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );


char* board803739121 = gamma_board(board);
assert( board803739121 != NULL );
assert( strcmp(board803739121, 
".269..1..\n"
"83581357.\n"
"34135.8.9\n"
".23..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board803739121);
board803739121 = NULL;
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 9, 14, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 8, 14) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );


char* board163542648 = gamma_board(board);
assert( board163542648 != NULL );
assert( strcmp(board163542648, 
".269..1.7\n"
"83581357.\n"
"34135.8.9\n"
".23..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board163542648);
board163542648 = NULL;
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );


char* board463964793 = gamma_board(board);
assert( board463964793 != NULL );
assert( strcmp(board463964793, 
".269..1.7\n"
"83581357.\n"
"34135.8.9\n"
".23..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board463964793);
board463964793 = NULL;
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );


char* board213906527 = gamma_board(board);
assert( board213906527 != NULL );
assert( strcmp(board213906527, 
".269..1.7\n"
"835813576\n"
"34135.8.9\n"
"523..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.6.7\n") == 0);
free(board213906527);
board213906527 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board740796235 = gamma_board(board);
assert( board740796235 != NULL );
assert( strcmp(board740796235, 
".269..1.7\n"
"835813576\n"
"34135.8.9\n"
"523..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"1228329.1\n"
"714562.27\n"
"224.687.4\n"
"46487.677\n") == 0);
free(board740796235);
board740796235 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_free_fields(board, 9) == 21 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board517541272 = gamma_board(board);
assert( board517541272 != NULL );
assert( strcmp(board517541272, 
".269..1.7\n"
"835813576\n"
"34135.8.9\n"
"523..3.52\n"
"456.62611\n"
".39574258\n"
"3361.5925\n"
"84252.53.\n"
"68596.71.\n"
"119.96389\n"
"273761814\n"
"122832981\n"
"714562.27\n"
"224.687.4\n"
"46487.677\n") == 0);
free(board517541272);
board517541272 = NULL;


gamma_delete(board);

    return 0;
}
