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
uuid: 908501185
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board151385808 = gamma_board(board);
assert( board151385808 != NULL );
assert( strcmp(board151385808, 
"2..5.......\n"
"1.1........\n"
"..........2\n"
"....1..1.1.\n"
"45....4....\n"
".......4...\n"
".344.5.....\n"
"...5...3...\n"
"2522.......\n") == 0);
free(board151385808);
board151385808 = NULL;
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );


char* board205119501 = gamma_board(board);
assert( board205119501 != NULL );
assert( strcmp(board205119501, 
"2..5.......\n"
"1.1........\n"
"4.......2.2\n"
"....1..1.1.\n"
"45....43..4\n"
"......54...\n"
"3344.5.....\n"
"...5...31..\n"
"2522.......\n") == 0);
free(board205119501);
board205119501 = NULL;
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );


char* board540289978 = gamma_board(board);
assert( board540289978 != NULL );
assert( strcmp(board540289978, 
"2..5.......\n"
"1.1.3...3..\n"
"4...1...2.2\n"
"....1..1.1.\n"
"45....43..4\n"
"......54..3\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board540289978);
board540289978 = NULL;
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );


char* board913321507 = gamma_board(board);
assert( board913321507 != NULL );
assert( strcmp(board913321507, 
"2..5.......\n"
"1.1.3...3..\n"
"4..41...2.2\n"
"4...1..1.1.\n"
"45....43..4\n"
"......54..3\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board913321507);
board913321507 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board991204119 = gamma_board(board);
assert( board991204119 != NULL );
assert( strcmp(board991204119, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"4...1..1.1.\n"
"45....43..4\n"
"3.....54.33\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board991204119);
board991204119 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );


char* board365391192 = gamma_board(board);
assert( board365391192 != NULL );
assert( strcmp(board365391192, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"4...1..1.1.\n"
"45....43..4\n"
"3.....54.33\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board365391192);
board365391192 = NULL;
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board565278864 = gamma_board(board);
assert( board565278864 != NULL );
assert( strcmp(board565278864, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"4...1..1.1.\n"
"45....43..4\n"
"3.....54.33\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board565278864);
board565278864 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 13 );


char* board708534118 = gamma_board(board);
assert( board708534118 != NULL );
assert( strcmp(board708534118, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"4...1..1.1.\n"
"45....43..4\n"
"4.....54.33\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board708534118);
board708534118 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 15 );


char* board641244387 = gamma_board(board);
assert( board641244387 != NULL );
assert( strcmp(board641244387, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"4..11.11.1.\n"
"45.1.443..4\n"
"4..4..54333\n"
"3344.5.....\n"
"...5...31..\n"
"2522.2.....\n") == 0);
free(board641244387);
board641244387 = NULL;
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );


char* board342784072 = gamma_board(board);
assert( board342784072 != NULL );
assert( strcmp(board342784072, 
"2..5.......\n"
"1.1.3..33..\n"
"44.41...2.2\n"
"44.11.11.1.\n"
"45.1.443..4\n"
"4..4..54333\n"
"3344.5.....\n"
"...5...31..\n"
"2525.2.....\n") == 0);
free(board342784072);
board342784072 = NULL;
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );


char* board657673203 = gamma_board(board);
assert( board657673203 != NULL );
assert( strcmp(board657673203, 
"2..5.......\n"
"1.153..33..\n"
"44.41...2.2\n"
"44.11.11.1.\n"
"45.11443.14\n"
"4..4.554333\n"
"334445...5.\n"
"...5...31..\n"
"2525.2.....\n") == 0);
free(board657673203);
board657673203 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );


char* board360232960 = gamma_board(board);
assert( board360232960 != NULL );
assert( strcmp(board360232960, 
"2..5.......\n"
"1.153..33..\n"
"44.41...2.2\n"
"44.11.11.1.\n"
"45.11443.14\n"
"4..4.554333\n"
"334445...5.\n"
"...5...31..\n"
"2525.2.....\n") == 0);
free(board360232960);
board360232960 = NULL;
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );


char* board740505665 = gamma_board(board);
assert( board740505665 != NULL );
assert( strcmp(board740505665, 
"2..5.......\n"
"1.153..33..\n"
"44.41...2.2\n"
"44.11.11.1.\n"
"45.11443.14\n"
"4..4.554333\n"
"334445...5.\n"
"...5...31..\n"
"2525.2.....\n") == 0);
free(board740505665);
board740505665 = NULL;
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
