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
uuid: 579735667
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 14, 4, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 138 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 128 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_free_fields(board, 1) == 126 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 125 );


char* board956245219 = gamma_board(board);
assert( board956245219 != NULL );
assert( strcmp(board956245219, 
".....1....\n"
"4........3\n"
"...1......\n"
"...1.2....\n"
"....3.....\n"
"..1.......\n"
"..........\n"
"....1.4..3\n"
"......1...\n"
"...3......\n"
"........1.\n"
".2........\n"
"..........\n"
"..........\n") == 0);
free(board956245219);
board956245219 = NULL;
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 111 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_free_fields(board, 1) == 92 );


char* board518271326 = gamma_board(board);
assert( board518271326 != NULL );
assert( strcmp(board518271326, 
".....1....\n"
"4........3\n"
"12.1..2...\n"
"...1.2.41.\n"
"..4.3..1..\n"
"..1...21..\n"
"........3.\n"
"33211444.3\n"
".....314.1\n"
".4434.....\n"
".313..421.\n"
".2.....3..\n"
"........21\n"
".4.1.....1\n") == 0);
free(board518271326);
board518271326 = NULL;
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );


char* board808286580 = gamma_board(board);
assert( board808286580 != NULL );
assert( strcmp(board808286580, 
".....1....\n"
"4.2......3\n"
"12.1..2...\n"
"...1.2.41.\n"
"..4.3..13.\n"
"4.1...21..\n"
"........3.\n"
"33211444.3\n"
".....314.1\n"
"14434.....\n"
".313..421.\n"
".2.....34.\n"
".3.....321\n"
".4.1.....1\n") == 0);
free(board808286580);
board808286580 = NULL;
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 65 );


char* board403692311 = gamma_board(board);
assert( board403692311 != NULL );
assert( strcmp(board403692311, 
"..34.12...\n"
"4.2......3\n"
"12.1..2.4.\n"
".2.1.2.41.\n"
".34.32.13.\n"
"441...21.3\n"
"2.1.3..23.\n"
"33211444.3\n"
"..1.231421\n"
"14434.....\n"
".313..4212\n"
".2.....343\n"
".3.....321\n"
"4431.....1\n") == 0);
free(board403692311);
board403692311 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board205853548 = gamma_board(board);
assert( board205853548 != NULL );
assert( strcmp(board205853548, 
"..34.12...\n"
"4.2.22...3\n"
"12.1.12.4.\n"
".2.1.2241.\n"
".34332.13.\n"
"441.2221.3\n"
"221.33.23.\n"
"33211444.3\n"
"..1.231421\n"
"14434...31\n"
".313..4212\n"
".24..4.343\n"
".3....4321\n"
"4431...2.1\n") == 0);
free(board205853548);
board205853548 = NULL;
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );


char* board955953298 = gamma_board(board);
assert( board955953298 != NULL );
assert( strcmp(board955953298, 
"..34212...\n"
"4.2.22...3\n"
"12.1.12.4.\n"
".2.132241.\n"
".34332.13.\n"
"441.2221.3\n"
"221.33.23.\n"
"33211444.3\n"
"4.1.231421\n"
"14434...31\n"
".313..4212\n"
".24..4.343\n"
".3...14321\n"
"4431...2.1\n") == 0);
free(board955953298);
board955953298 = NULL;
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board282041153 = gamma_board(board);
assert( board282041153 != NULL );
assert( strcmp(board282041153, 
"..34212...\n"
"4.2122...3\n"
"12.1.1214.\n"
".2.132241.\n"
".34332.13.\n"
"441.2221.3\n"
"221.33.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
".313..4212\n"
".24..4.343\n"
".3...14321\n"
"4431...2.1\n") == 0);
free(board282041153);
board282041153 = NULL;
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board919230111 = gamma_board(board);
assert( board919230111 != NULL );
assert( strcmp(board919230111, 
"..34212...\n"
"4.21223..3\n"
"12.1.1214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221.33.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
".3133.4212\n"
".24..4.343\n"
".2...14321\n"
"4431.4.2.1\n") == 0);
free(board919230111);
board919230111 = NULL;
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );


char* board428944419 = gamma_board(board);
assert( board428944419 != NULL );
assert( strcmp(board428944419, 
"..34212...\n"
"4.21223..3\n"
"12.1.1214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221333.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..4.343\n"
".2...14321\n"
"4431.4.2.1\n") == 0);
free(board428944419);
board428944419 = NULL;
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );


char* board254684409 = gamma_board(board);
assert( board254684409 != NULL );
assert( strcmp(board254684409, 
"..34212..3\n"
"4.21223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221333.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
".2...14321\n"
"4431.4.2.1\n") == 0);
free(board254684409);
board254684409 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board278492055 = gamma_board(board);
assert( board278492055 != NULL );
assert( strcmp(board278492055, 
"..34212..3\n"
"4.21223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221333.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
".2.1.14321\n"
"4431.4.2.1\n") == 0);
free(board278492055);
board278492055 = NULL;
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );


char* board498285775 = gamma_board(board);
assert( board498285775 != NULL );
assert( strcmp(board498285775, 
"..34212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221333.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
".2.1.14321\n"
"4431.4.2.1\n") == 0);
free(board498285775);
board498285775 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 29 );


char* board282064318 = gamma_board(board);
assert( board282064318 != NULL );
assert( strcmp(board282064318, 
"..34212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.2221.3\n"
"221333.23.\n"
"33211444.3\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
"22.1.14321\n"
"4431.4.2.1\n") == 0);
free(board282064318);
board282064318 = NULL;
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_golden_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );


char* board959007099 = gamma_board(board);
assert( board959007099 != NULL );
assert( strcmp(board959007099, 
"..34212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.222133\n"
"221333.23.\n"
"3321144433\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
"22.1.14321\n"
"443134.2.1\n") == 0);
free(board959007099);
board959007099 = NULL;
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_free_fields(board, 3) == 27 );


char* board841371004 = gamma_board(board);
assert( board841371004 != NULL );
assert( strcmp(board841371004, 
"..34212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.222133\n"
"221333.23.\n"
"3321144433\n"
"4.13231421\n"
"14434...31\n"
"43133.4212\n"
".24..43343\n"
"22.1.14321\n"
"443134.231\n") == 0);
free(board841371004);
board841371004 = NULL;
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );


char* board325175335 = gamma_board(board);
assert( board325175335 != NULL );
assert( strcmp(board325175335, 
".434212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.222133\n"
"221333.23.\n"
"3321144433\n"
"4.13231421\n"
"14434.3.31\n"
"43133.4212\n"
".24..43343\n"
"22.1.14321\n"
"443134.231\n") == 0);
free(board325175335);
board325175335 = NULL;
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 11 );


char* board298837389 = gamma_board(board);
assert( board298837389 != NULL );
assert( strcmp(board298837389, 
".434212..3\n"
"4421223..3\n"
"12.121214.\n"
".2.132241.\n"
".34332.132\n"
"441.222133\n"
"221333.23.\n"
"3321144433\n"
"4.13231421\n"
"14434.3.31\n"
"43133.4212\n"
".24..43343\n"
"22.1.14321\n"
"443134.231\n") == 0);
free(board298837389);
board298837389 = NULL;
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 10, 9) == 0 );


gamma_delete(board);

    return 0;
}
