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
uuid: 843693044
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 24, 4, 45);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 5, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_free_fields(board, 3) == 282 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 4, 8, 20) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 10, 20) == 1 );
assert( gamma_move(board, 2, 0, 20) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 22) == 1 );
assert( gamma_move(board, 2, 7, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 2, 9, 23) == 1 );
assert( gamma_free_fields(board, 2) == 261 );
assert( gamma_move(board, 3, 20, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 261 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_free_fields(board, 4) == 261 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_free_fields(board, 1) == 260 );
assert( gamma_move(board, 2, 7, 3) == 1 );


char* board516931868 = gamma_board(board);
assert( board516931868 != NULL );
assert( strcmp(board516931868, 
".........2..\n"
"...2........\n"
"............\n"
"2.......4.2.\n"
"............\n"
"............\n"
".....34.....\n"
".......2....\n"
"..........33\n"
".......4....\n"
".....1......\n"
"............\n"
"..........2.\n"
"..12..3...1.\n"
"............\n"
".......1..4.\n"
"...........1\n"
"...1....3...\n"
"..........4.\n"
"1...........\n"
"..4.3..2....\n"
"............\n"
".1..........\n"
".....1......\n") == 0);
free(board516931868);
board516931868 = NULL;
assert( gamma_move(board, 3, 6, 17) == 0 );
assert( gamma_move(board, 4, 19, 10) == 0 );
assert( gamma_move(board, 4, 8, 21) == 1 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_move(board, 1, 2, 19) == 1 );
assert( gamma_free_fields(board, 1) == 253 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 0, 23) == 1 );
assert( gamma_free_fields(board, 3) == 251 );
assert( gamma_move(board, 1, 19, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_move(board, 3, 7, 20) == 1 );
assert( gamma_free_fields(board, 3) == 245 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 3, 7, 23) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 1, 22, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 4, 1, 23) == 1 );
assert( gamma_move(board, 1, 6, 21) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 19, 5) == 0 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 3, 15) == 1 );
assert( gamma_free_fields(board, 1) == 235 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 233 );


char* board145705706 = gamma_board(board);
assert( board145705706 != NULL );
assert( strcmp(board145705706, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"2......34.2.\n"
"..1.........\n"
"............\n"
".....34.1...\n"
".......2....\n"
"...1......33\n"
".......4....\n"
".....1..3...\n"
"2..1........\n"
".......3..2.\n"
"..123.3...12\n"
"....1...24..\n"
".....3.1..4.\n"
"...........1\n"
"...1....3...\n"
"....2...434.\n"
"1...32......\n"
"..4.3..2....\n"
"............\n"
".1..2.......\n"
"..4..1......\n") == 0);
free(board145705706);
board145705706 = NULL;
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );


char* board184045639 = gamma_board(board);
assert( board184045639 != NULL );
assert( strcmp(board184045639, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"2......34.2.\n"
"..1.........\n"
"............\n"
".....34.1...\n"
".......2....\n"
"...1......33\n"
".......4....\n"
".....1..3...\n"
"2..1........\n"
".......3..2.\n"
"..123.3...12\n"
"....1...24..\n"
".....3.1..4.\n"
"...........1\n"
"...1....34..\n"
"....2...434.\n"
"1...32......\n"
"..4.3..2....\n"
"............\n"
".1..2.......\n"
"..4..1......\n") == 0);
free(board184045639);
board184045639 = NULL;
assert( gamma_move(board, 1, 7, 18) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 1, 20) == 1 );
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_free_fields(board, 3) == 228 );


char* board543671946 = gamma_board(board);
assert( board543671946 != NULL );
assert( strcmp(board543671946, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"23.....34.2.\n"
"..1.........\n"
".......1....\n"
".....34.1...\n"
".......2....\n"
".4.1......33\n"
".......4....\n"
".....1..3...\n"
"2..1........\n"
".......3..2.\n"
"..123.3...12\n"
"...21...24..\n"
".....3.1..4.\n"
"...........1\n"
"...1....34..\n"
"....2...434.\n"
"1...32......\n"
"..4.3..2....\n"
"............\n"
".1..2.......\n"
"..4..1......\n") == 0);
free(board543671946);
board543671946 = NULL;
assert( gamma_move(board, 4, 23, 11) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 22, 11) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );


char* board291521496 = gamma_board(board);
assert( board291521496 != NULL );
assert( strcmp(board291521496, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"23.....34.2.\n"
"..1.........\n"
".......1....\n"
".....34.1...\n"
".......2....\n"
".4.1......33\n"
".......4....\n"
".....1..3...\n"
"2..1........\n"
".......3..2.\n"
"..123.3...12\n"
"...21...24..\n"
".....3.1..4.\n"
"...........1\n"
".4.1....34..\n"
"....2...434.\n"
"1...32......\n"
"..4.3.12....\n"
"............\n"
".1..2..1...4\n"
"2.4.211.....\n") == 0);
free(board291521496);
board291521496 = NULL;
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 6, 18) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_free_fields(board, 1) == 216 );


char* board865366652 = gamma_board(board);
assert( board865366652 != NULL );
assert( strcmp(board865366652, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"23.....34.2.\n"
"..1.........\n"
"......11....\n"
".....34.1...\n"
".......2....\n"
".4.1......33\n"
".......4....\n"
".....1..3...\n"
"2..1........\n"
".......3..2.\n"
"..123.33..12\n"
"...21...24..\n"
"..1..3.1..4.\n"
"...........1\n"
".4.1....34..\n"
"....2...434.\n"
"1...32.3....\n"
"..4.3.12....\n"
"..2.........\n"
".1..2..1...4\n"
"2.4.211.....\n") == 0);
free(board865366652);
board865366652 = NULL;
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 5, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 21, 0) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 19, 11) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 1, 23) == 0 );
assert( gamma_free_fields(board, 2) == 200 );
assert( gamma_golden_move(board, 2, 11, 7) == 1 );


char* board409998758 = gamma_board(board);
assert( board409998758 != NULL );
assert( strcmp(board409998758, 
"34.....3.2..\n"
"...2........\n"
"......1.4...\n"
"23.....34.2.\n"
"..1.........\n"
"......11....\n"
".....34.1...\n"
".....2.2....\n"
".4.1......33\n"
".......4....\n"
".....11.3...\n"
"2..1....2...\n"
"2......34.2.\n"
"2.123.33..12\n"
"4..21...24..\n"
"..1..311..4.\n"
"...........2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...32.3...2\n"
"..4.3.124...\n"
"..2......2..\n"
".1.32..1.4.4\n"
"2.4.211.....\n") == 0);
free(board409998758);
board409998758 = NULL;
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_free_fields(board, 3) == 199 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 23) == 1 );
assert( gamma_move(board, 3, 0, 21) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );


char* board835214581 = gamma_board(board);
assert( board835214581 != NULL );
assert( strcmp(board835214581, 
"34..3..3.2..\n"
"...2........\n"
"3.....1.4...\n"
"23.....34.2.\n"
"..1.........\n"
"......11....\n"
".....34.1...\n"
".....2.2....\n"
".4.1......33\n"
".......4....\n"
".....11.3...\n"
"2..1....2...\n"
"2......34.2.\n"
"23123.33..12\n"
"4..21...24..\n"
"..1..311..4.\n"
"...........2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...32.3...2\n"
"..4.3.124...\n"
"..2......2.2\n"
".1.32..1.4.4\n"
"244.211.....\n") == 0);
free(board835214581);
board835214581 = NULL;
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 3, 19) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 3, 22) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 19, 9) == 0 );
assert( gamma_move(board, 3, 6, 23) == 1 );
assert( gamma_move(board, 4, 21, 10) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_golden_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );


char* board628584486 = gamma_board(board);
assert( board628584486 != NULL );
assert( strcmp(board628584486, 
"34..3.33.2..\n"
"...2........\n"
"3.....1.4...\n"
"23.....34.2.\n"
"..11........\n"
"......11....\n"
".....34.1...\n"
".....2.2....\n"
".4.1......33\n"
".......4....\n"
".....11.3...\n"
"2..14...2...\n"
"2......34.2.\n"
"23123.33..12\n"
"4..21...24..\n"
"..1..311..4.\n"
"...........2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...32.3...2\n"
"3.4.3.124...\n"
"..2......2.2\n"
".1.32..1.4.4\n"
"244.211.....\n") == 0);
free(board628584486);
board628584486 = NULL;
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 4, 8, 19) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );


char* board647592197 = gamma_board(board);
assert( board647592197 != NULL );
assert( strcmp(board647592197, 
"34..3.33.2..\n"
"...2........\n"
"3.....1.4...\n"
"23.....34.2.\n"
"..11....4...\n"
"......11....\n"
".....34.1...\n"
".....2.2....\n"
".4.1.....133\n"
".......4....\n"
".....11.3...\n"
"2..14...2...\n"
"2....4.34.2.\n"
"23123.33..12\n"
"4..21...24..\n"
"..1..311..4.\n"
"...........2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...32.3...2\n"
"3.4.3.124...\n"
"..23.....2.2\n"
".1.32..1.4.4\n"
"244.211.....\n") == 0);
free(board647592197);
board647592197 = NULL;
assert( gamma_move(board, 3, 22, 9) == 0 );
assert( gamma_move(board, 3, 4, 17) == 1 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 3, 22, 10) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 4, 22) == 1 );
assert( gamma_free_fields(board, 3) == 183 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board923936929 = gamma_board(board);
assert( board923936929 != NULL );
assert( strcmp(board923936929, 
"34..3.33.2..\n"
"...23.......\n"
"3.....1.4...\n"
"23.....34.2.\n"
"..11....4...\n"
"......11....\n"
"....334.1...\n"
".....2.2....\n"
".4.1.....133\n"
".......4....\n"
".....11.3...\n"
"2..14...2...\n"
"2....4.34.2.\n"
"23123.33..12\n"
"4..21...24..\n"
"..1..311..4.\n"
"...........2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...3223...2\n"
"3.4.3.124.1.\n"
"..23.....2.2\n"
".1.32..1.4.4\n"
"244.211.....\n") == 0);
free(board923936929);
board923936929 = NULL;
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_free_fields(board, 2) == 182 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_golden_move(board, 1, 23, 4) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 8, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 4, 15) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 21) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 21) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_free_fields(board, 4) == 174 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_free_fields(board, 3) == 171 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 1, 11, 21) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );


char* board741931155 = gamma_board(board);
assert( board741931155 != NULL );
assert( strcmp(board741931155, 
"34..3.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....34.2.\n"
"..11....4...\n"
"......112...\n"
"....334.1...\n"
"4....2.23...\n"
".4.11....133\n"
".......4....\n"
"..4..11.3...\n"
"2.414...2...\n"
"2....4.34.2.\n"
"23123.33..12\n"
"4..21..124.3\n"
"..1..311..4.\n"
".....1.....2\n"
".4.1..2.34..\n"
"..4.2.2.434.\n"
"1...3223...2\n"
"3.4.3.12441.\n"
"..23.....2.2\n"
".1.322.1.4.4\n"
"244.211.....\n") == 0);
free(board741931155);
board741931155 = NULL;
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_free_fields(board, 3) == 168 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 3, 7, 19) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );


char* board646942918 = gamma_board(board);
assert( board646942918 != NULL );
assert( strcmp(board646942918, 
"34..3.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....34.2.\n"
"..11...34...\n"
"......112...\n"
"....334.1...\n"
"4....2.23...\n"
".4.11....133\n"
".......4....\n"
"..4..11.3...\n"
"2.414...2...\n"
"2....4.34.2.\n"
"23123.33..12\n"
"4..21..124.3\n"
"..1..311..4.\n"
"..4..1.1...2\n"
"24.1..2.34..\n"
"..4.2.2.434.\n"
"1...3223.432\n"
"3.4.3.124413\n"
"..23.....2.2\n"
".14322.1.4.4\n"
"244.211.....\n") == 0);
free(board646942918);
board646942918 = NULL;
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_free_fields(board, 2) == 160 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 3, 16) == 1 );
assert( gamma_free_fields(board, 1) == 158 );
assert( gamma_move(board, 2, 11, 21) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_free_fields(board, 4) == 158 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 3, 0, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 11, 21) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 23, 8) == 0 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_golden_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 20, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 23, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 155 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 4, 15) == 0 );
assert( gamma_free_fields(board, 3) == 155 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 22, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_free_fields(board, 2) == 147 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 146 );


char* board900924342 = gamma_board(board);
assert( board900924342 != NULL );
assert( strcmp(board900924342, 
"34..3.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....34.2.\n"
"..11...34...\n"
"......112...\n"
"....334.1.4.\n"
"4..1.2.23...\n"
".4.11....133\n"
".......4....\n"
"..43.11.3..4\n"
"2.414.4.2..1\n"
"2....4334.2.\n"
"23123.33..12\n"
"4..21..12433\n"
"..1..311..4.\n"
"..4.31.1...2\n"
"2431..2.34..\n"
"..4.2.2.434.\n"
"1...32231432\n"
"3.4.3.124413\n"
"..23.....2.2\n"
".14322.1.424\n"
"244.21113.2.\n") == 0);
free(board900924342);
board900924342 = NULL;
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 20, 5) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 4, 22) == 0 );
assert( gamma_move(board, 1, 10, 16) == 1 );
assert( gamma_free_fields(board, 1) == 143 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 1, 2, 19) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 9, 20) == 1 );
assert( gamma_golden_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 22, 11) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_free_fields(board, 4) == 142 );
assert( gamma_golden_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 23) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 8, 14) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 23) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_free_fields(board, 4) == 136 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 136 );
assert( gamma_golden_move(board, 1, 23, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 41 );


char* board555873010 = gamma_board(board);
assert( board555873010 != NULL );
assert( strcmp(board555873010, 
"34.33.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....3412.\n"
"..11...34...\n"
"......112...\n"
"....334.1.4.\n"
"4..1.2.23.1.\n"
".4.11....133\n"
"1......41...\n"
"..43.11.3..4\n"
"2.414.4.2..1\n"
"2....4334.2.\n"
"23123.33..12\n"
"4..21..12433\n"
"..1423113.4.\n"
"..4231.1...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.3.124413\n"
"..23....22.2\n"
".14322.1.424\n"
"244.21113.2.\n") == 0);
free(board555873010);
board555873010 = NULL;
assert( gamma_move(board, 2, 21, 10) == 0 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );


char* board953163164 = gamma_board(board);
assert( board953163164 != NULL );
assert( strcmp(board953163164, 
"34.33.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....3412.\n"
"..11...34...\n"
"......112...\n"
"....334.1.4.\n"
"4..1.2.23.1.\n"
".4.11....133\n"
"1......41...\n"
"..43.11.3..4\n"
"2.414.4.2..1\n"
"2.2..4334.2.\n"
"23123.33..12\n"
"4..21..12433\n"
"..1423113.4.\n"
"..423111...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.3.124413\n"
"..23....22.2\n"
".14322.1.424\n"
"244.21113.2.\n") == 0);
free(board953163164);
board953163164 = NULL;
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 20, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );


char* board213808090 = gamma_board(board);
assert( board213808090 != NULL );
assert( strcmp(board213808090, 
"34.33.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"23.....3412.\n"
"..11...34...\n"
"......112...\n"
"....334.1.4.\n"
"4..1.2.23.1.\n"
".4.11....133\n"
"1......41...\n"
"..43.11.3..4\n"
"2.414.4.2..1\n"
"2.2..4334.2.\n"
"23123.33..12\n"
"4..21..12433\n"
"..1423113.4.\n"
"..423111...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.3.124413\n"
"..23....22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board213808090);
board213808090 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 20) == 1 );
assert( gamma_free_fields(board, 1) == 131 );


char* board710744002 = gamma_board(board);
assert( board710744002 != NULL );
assert( strcmp(board710744002, 
"34.33.33.2..\n"
"...23.......\n"
"3.3.2.1.4..1\n"
"231....3412.\n"
"..11...34...\n"
"......112...\n"
"....334.1.4.\n"
"4..1.2.23.1.\n"
".4.11....133\n"
"1......41...\n"
"..43.11.3..4\n"
"2.414.4.2..1\n"
"2.2..4334.2.\n"
"23123.33..12\n"
"4..21..12433\n"
"..1423113.4.\n"
"..423111...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.3.124413\n"
"..23....22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board710744002);
board710744002 = NULL;
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 3, 21) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 3, 10, 20) == 0 );
assert( gamma_move(board, 3, 11, 18) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 1, 0, 19) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 7, 21) == 1 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 22, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 23, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 42 );


char* board369605322 = gamma_board(board);
assert( board369605322 != NULL );
assert( strcmp(board369605322, 
"34.33.33.2..\n"
"...23.......\n"
"3.332.134..1\n"
"231....3412.\n"
"1.11...34...\n"
"......112..3\n"
"....334.1.4.\n"
"4..1.2.2331.\n"
".4.11....133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.2..1\n"
"2.2..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.4.\n"
"4.423111...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"..231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board369605322);
board369605322 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 118 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 23) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 9, 23) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 1, 0, 23) == 0 );
assert( gamma_move(board, 1, 1, 21) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 11, 23) == 1 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );


char* board246460457 = gamma_board(board);
assert( board246460457 != NULL );
assert( strcmp(board246460457, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231....3412.\n"
"1.11...34...\n"
"......112..3\n"
"....334.134.\n"
"4..1.2.2331.\n"
".4.11....133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431..2.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"..231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board246460457);
board246460457 = NULL;
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 2, 4, 22) == 0 );
assert( gamma_golden_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 112 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 1, 19) == 1 );
assert( gamma_move(board, 4, 20, 3) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );


char* board726557884 = gamma_board(board);
assert( board726557884 != NULL );
assert( strcmp(board726557884, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231....3412.\n"
"1311...34...\n"
"......112..3\n"
"....334.134.\n"
"4..1.2.2331.\n"
".4.11....133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"..231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board726557884);
board726557884 = NULL;
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 23, 5) == 0 );
assert( gamma_free_fields(board, 1) == 109 );
assert( gamma_move(board, 2, 3, 23) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 1, 9, 20) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 22, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 1, 0, 17) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 11, 23) == 0 );
assert( gamma_free_fields(board, 2) == 107 );


char* board519277609 = gamma_board(board);
assert( board519277609 != NULL );
assert( strcmp(board519277609, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231....3412.\n"
"1311...34...\n"
"......112..3\n"
"1...334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"3.231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board519277609);
board519277609 = NULL;
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 23) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board395397416 = gamma_board(board);
assert( board395397416 != NULL );
assert( strcmp(board395397416, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231....3412.\n"
"1311...34...\n"
"......112..3\n"
"1...334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"3.231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board395397416);
board395397416 = NULL;
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 1, 17) == 1 );
assert( gamma_busy_fields(board, 2) == 47 );


char* board664748594 = gamma_board(board);
assert( board664748594 != NULL );
assert( strcmp(board664748594, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231....3412.\n"
"1311...34...\n"
"......112..3\n"
"12..334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"1..3...412..\n"
"..43.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"3.231...22.2\n"
"214322.1.424\n"
"244.21113.2.\n") == 0);
free(board664748594);
board664748594 = NULL;
assert( gamma_move(board, 3, 20, 11) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 20) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_free_fields(board, 4) == 101 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 21, 10) == 0 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 19) == 1 );
assert( gamma_move(board, 3, 3, 17) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );


char* board580262406 = gamma_board(board);
assert( board580262406 != NULL );
assert( strcmp(board580262406, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231...43412.\n"
"13112..34...\n"
"......112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"11.3...412..\n"
"3243.11.3..4\n"
"24414.4.24.1\n"
"222..4334.2.\n"
"23123.33..12\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"3.231...2212\n"
"234322.1.424\n"
"244.21113.21\n") == 0);
free(board580262406);
board580262406 = NULL;
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 0, 18) == 1 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 47 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 1, 21, 10) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 18) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 43 );


char* board204662641 = gamma_board(board);
assert( board204662641 != NULL );
assert( strcmp(board204662641, 
"34.33.33.2.2\n"
"...23.......\n"
"31332.134..1\n"
"231...43412.\n"
"13112..34...\n"
"4.1...112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"11.3...412..\n"
"3243.1133..4\n"
"2441424.24.1\n"
"222..4334.2.\n"
"23123.33.412\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4.31124413\n"
"3.2312..2212\n"
"234322.14424\n"
"244.21113.21\n") == 0);
free(board204662641);
board204662641 = NULL;
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 4, 20) == 1 );
assert( gamma_move(board, 3, 1, 21) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 23) == 1 );
assert( gamma_golden_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 1, 11, 20) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_busy_fields(board, 3) == 56 );


char* board544526444 = gamma_board(board);
assert( board544526444 != NULL );
assert( strcmp(board544526444, 
"34.33.33.232\n"
"...23.......\n"
"31332.134..1\n"
"231.2.434121\n"
"13112..34...\n"
"4.1...112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3..133\n"
"1113...412..\n"
"3243.1133..4\n"
"2441424.2421\n"
"222..4334.2.\n"
"23123.33.412\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431.22.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.23124.2212\n"
"234322.14424\n"
"244.21113.21\n") == 0);
free(board544526444);
board544526444 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 22, 8) == 0 );
assert( gamma_free_fields(board, 3) == 80 );
assert( gamma_move(board, 4, 11, 19) == 1 );
assert( gamma_busy_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 1, 5, 19) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 4, 0, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 47 );
assert( gamma_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );


char* board881286231 = gamma_board(board);
assert( board881286231 != NULL );
assert( strcmp(board881286231, 
"34.33.33.232\n"
"...23.......\n"
"31332.134..1\n"
"231.2.434121\n"
"131121.34..4\n"
"4.1...112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3.2133\n"
"1113...412..\n"
"3243.1133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"23123.331412\n"
"4.321..12433\n"
".21423113.42\n"
"4.423111...2\n"
"2431422.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.23124.2212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board881286231);
board881286231 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 22, 9) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_golden_move(board, 2, 17, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 21, 5) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 22, 6) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 23) == 0 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 10, 21) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 22, 11) == 0 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );


char* board890910553 = gamma_board(board);
assert( board890910553 != NULL );
assert( strcmp(board890910553, 
"34.33.33.232\n"
"...23.......\n"
"31332.134.31\n"
"231.2.434121\n"
"131121.34..4\n"
"4.1...112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3.2133\n"
"1113...4122.\n"
"3243.1133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"23123.331412\n"
"4.321..12433\n"
".21423113442\n"
"4.423111...2\n"
"2431422.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board890910553);
board890910553 = NULL;
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_move(board, 2, 12, 2) == 0 );


char* board756288909 = gamma_board(board);
assert( board756288909 != NULL );
assert( strcmp(board756288909, 
"34.33.33.232\n"
"...23.......\n"
"31332.134.31\n"
"231.2.434121\n"
"131121.34..4\n"
"4.1...112..3\n"
"12.3334.134.\n"
"4..1.2.2331.\n"
".4.11.3.2133\n"
"1113...4122.\n"
"3243.1133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"23123.331412\n"
"4.321..12433\n"
".21423113442\n"
"4.423111...2\n"
"2431422.34..\n"
"..4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board756288909);
board756288909 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 22, 7) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 1, 22, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 22, 5) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 4, 3, 21) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 23) == 0 );
assert( gamma_busy_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 21) == 1 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_golden_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 3, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 23, 2) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 53 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_move(board, 2, 20, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );


char* board566854532 = gamma_board(board);
assert( board566854532 != NULL );
assert( strcmp(board566854532, 
"34.33.33.232\n"
"...23.......\n"
"31332.134331\n"
"231.2.434121\n"
"131121.34..4\n"
"4.13..112..3\n"
"12.33343134.\n"
"4..1.2.2331.\n"
"14211.3.2133\n"
"1113..24122.\n"
"324331133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"23123.331412\n"
"4.321..12433\n"
"321423113442\n"
"4.423111...2\n"
"2431422.34..\n"
"2.4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board566854532);
board566854532 = NULL;
assert( gamma_move(board, 1, 22, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 20, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 23) == 1 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 1, 0, 22) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 20, 5) == 0 );
assert( gamma_move(board, 4, 11, 20) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board173852281 = gamma_board(board);
assert( board173852281 != NULL );
assert( strcmp(board173852281, 
"34233.33.232\n"
"1..23.......\n"
"31332.134331\n"
"231.2.434121\n"
"131121.34..4\n"
"4.13..112..3\n"
"12.33343134.\n"
"4..1.2.2331.\n"
"14211.3.2133\n"
"1113..24122.\n"
"324331133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"23123.331412\n"
"4.321..12433\n"
"321423113442\n"
"4.423111...2\n"
"2431422.34..\n"
"2.4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board173852281);
board173852281 = NULL;
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 23) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 22) == 1 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 22, 8) == 0 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 64 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 20, 3) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 9, 22) == 1 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_golden_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 22, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 1, 23, 8) == 0 );
assert( gamma_move(board, 1, 5, 20) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 4, 22, 6) == 0 );
assert( gamma_move(board, 4, 8, 22) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 1, 19) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );


char* board338770711 = gamma_board(board);
assert( board338770711 != NULL );
assert( strcmp(board338770711, 
"34233.33.232\n"
"1..231..41..\n"
"31332.134331\n"
"231.21434121\n"
"131121.34..4\n"
"4.13..112..3\n"
"12.33343134.\n"
"4..1.2.2331.\n"
"14211.3.2133\n"
"1113..24122.\n"
"324331133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"231231331412\n"
"4.321..12433\n"
"321423113442\n"
"4.423111...2\n"
"2431422434..\n"
"2.4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board338770711);
board338770711 = NULL;
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board281307504 = gamma_board(board);
assert( board281307504 != NULL );
assert( strcmp(board281307504, 
"34233.33.232\n"
"1..231..41..\n"
"31332.134331\n"
"231.21434121\n"
"131121.34..4\n"
"4.13..112..3\n"
"12.33343134.\n"
"4..1.2.2331.\n"
"14211.3.2133\n"
"1113..24122.\n"
"324331133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"231231331412\n"
"4.321..12433\n"
"321423113442\n"
"4.423111...2\n"
"2431422434..\n"
"2.4.242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322.14424\n"
"244.21113321\n") == 0);
free(board281307504);
board281307504 = NULL;
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_move(board, 3, 3, 21) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 1, 3, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_move(board, 2, 0, 19) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 21) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 4, 5, 21) == 0 );
assert( gamma_move(board, 1, 8, 22) == 0 );
assert( gamma_move(board, 2, 1, 18) == 1 );
assert( gamma_move(board, 2, 8, 20) == 0 );
assert( gamma_move(board, 3, 6, 16) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_move(board, 1, 11, 22) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );


char* board394819437 = gamma_board(board);
assert( board394819437 != NULL );
assert( strcmp(board394819437, 
"34233.33.232\n"
"1..231..41.1\n"
"313322134331\n"
"231.21434121\n"
"131121.34..4\n"
"4213..112..3\n"
"12.33343134.\n"
"4..1.232331.\n"
"14211.3.2133\n"
"1113..24122.\n"
"324331133..4\n"
"2441424.2421\n"
"222..4334.24\n"
"231231331412\n"
"4.321..12433\n"
"321423113442\n"
"4.423111...2\n"
"2431422434..\n"
"2.43242.434.\n"
"1...32231432\n"
"3.4231124413\n"
"3.2312432212\n"
"234322214424\n"
"244.21111321\n") == 0);
free(board394819437);
board394819437 = NULL;
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 1, 22, 6) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_move(board, 2, 3, 20) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 4, 9, 21) == 0 );
assert( gamma_move(board, 2, 7, 22) == 1 );
assert( gamma_move(board, 3, 9, 22) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 23, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 18, 10) == 0 );


gamma_delete(board);

    return 0;
}
