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
uuid: 992735081
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 18, 6, 38);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 1, 2, 16) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 188 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_free_fields(board, 2) == 183 );
assert( gamma_move(board, 3, 7, 3) == 1 );


char* board191272284 = gamma_board(board);
assert( board191272284 != NULL );
assert( strcmp(board191272284, 
"...........\n"
"..1........\n"
"...........\n"
"...........\n"
"...........\n"
"........2..\n"
"...........\n"
".........1.\n"
".......11..\n"
".32....6...\n"
"...........\n"
"...........\n"
"........2..\n"
"6..........\n"
".......3...\n"
"...........\n"
"........2..\n"
"6....524...\n") == 0);
free(board191272284);
board191272284 = NULL;
assert( gamma_free_fields(board, 4) == 182 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 16) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 17, 4) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_free_fields(board, 2) == 155 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 5, 16) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_free_fields(board, 1) == 151 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 10, 17) == 1 );
assert( gamma_free_fields(board, 1) == 141 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 6, 1, 17) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );


char* board330456656 = gamma_board(board);
assert( board330456656 != NULL );
assert( strcmp(board330456656, 
".6........6\n"
"..1..5.1...\n"
"54.........\n"
"...2.......\n"
"..6........\n"
".......62..\n"
".1...2.3..3\n"
".5....2..11\n"
".314...11.2\n"
".323.2.6..6\n"
"..6.2.5..54\n"
".......1...\n"
"......5.2.6\n"
"64.64.5.5..\n"
"....2.63...\n"
".4.4...1...\n"
"..1...5.2..\n"
"6....524.3.\n") == 0);
free(board330456656);
board330456656 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 136 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 10, 15) == 1 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 2, 0, 16) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 127 );
assert( gamma_move(board, 4, 9, 16) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );


char* board473258776 = gamma_board(board);
assert( board473258776 != NULL );
assert( strcmp(board473258776, 
".6.......46\n"
"2.1..5.1.4.\n"
"54....4...6\n"
"...2.......\n"
"..6......1.\n"
".......625.\n"
".1.2.2.3..3\n"
".55...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
"..6.2.5..54\n"
"...5...16..\n"
"......5.2.6\n"
"64.64.5.5..\n"
"....2.63...\n"
".4346..1...\n"
"4.1...5.2..\n"
"6....524.3.\n") == 0);
free(board473258776);
board473258776 = NULL;
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 17) == 1 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );


char* board936696937 = gamma_board(board);
assert( board936696937 != NULL );
assert( strcmp(board936696937, 
".6..5....46\n"
"2.1..5.1.4.\n"
"54....4...6\n"
"...2.......\n"
"..6......1.\n"
".......625.\n"
".1.2.2.3..3\n"
".55...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
"..6.2.5..54\n"
"...5...16..\n"
"......5.2.6\n"
"64.64.5.5..\n"
"....2.63...\n"
".4346..1...\n"
"4.1...5.2..\n"
"6....524.3.\n") == 0);
free(board936696937);
board936696937 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );


char* board140963885 = gamma_board(board);
assert( board140963885 != NULL );
assert( strcmp(board140963885, 
".6..5....46\n"
"2.1..5.1.4.\n"
"54....4...6\n"
"...2.......\n"
"..6....4.1.\n"
".......625.\n"
".1.2.2.3..3\n"
".55...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
"..6.2.5..54\n"
"...5...16..\n"
"......5.2.6\n"
"64.64.5.5..\n"
"....2.63...\n"
".4346..1...\n"
"4.1...5.2..\n"
"6....524.3.\n") == 0);
free(board140963885);
board140963885 = NULL;
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_free_fields(board, 1) == 118 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_golden_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_free_fields(board, 6) == 111 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board121786236 = gamma_board(board);
assert( board121786236 != NULL );
assert( strcmp(board121786236, 
"26..5....46\n"
"2.1..5.1.4.\n"
"54....41..6\n"
"...2.......\n"
"..65...4.1.\n"
".......625.\n"
".1.2.2.3..3\n"
".55...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
".56.2.5..54\n"
"..35...16.5\n"
"......5.2.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"24346..1...\n"
"4.1...5.2.1\n"
"6..5.52413.\n") == 0);
free(board121786236);
board121786236 = NULL;
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 1, 6, 17) == 1 );
assert( gamma_move(board, 1, 3, 16) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_golden_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_move(board, 5, 3, 15) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board352485927 = gamma_board(board);
assert( board352485927 != NULL );
assert( strcmp(board352485927, 
"26..5.1..46\n"
"2.11.5.1.4.\n"
"54.5..41..6\n"
".6.2....4..\n"
"..65...4.1.\n"
"23....5625.\n"
".1.2.2.3..3\n"
".55...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
".56.2.5.354\n"
"..35...16.5\n"
".2..2.562.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"24346..1...\n"
"4.1...5.1.1\n"
"6..5652413.\n") == 0);
free(board352485927);
board352485927 = NULL;
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );


char* board411054941 = gamma_board(board);
assert( board411054941 != NULL );
assert( strcmp(board411054941, 
"26..5.1..46\n"
"2.11.5.1.4.\n"
"54.5..41..6\n"
".6.2....4..\n"
"..65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"655...2..11\n"
".3141..1112\n"
".323.2.6..6\n"
".56.2.5.354\n"
"..35...16.5\n"
".2..2.562.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"24346..1...\n"
"4.1...5.1.1\n"
"6..5652413.\n") == 0);
free(board411054941);
board411054941 = NULL;
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_golden_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 17) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );


char* board927721110 = gamma_board(board);
assert( board927721110 != NULL );
assert( strcmp(board927721110, 
"26.15.1..46\n"
"2.11.5.1.4.\n"
"54.5..41..6\n"
".6.2.4..4..\n"
"..65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"655...2..11\n"
".31413.1112\n"
".323.2.6..6\n"
".56.2.5.354\n"
"..35...16.5\n"
".2..2.562.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"24346..1...\n"
"4.12..5.1.1\n"
"6..5652413.\n") == 0);
free(board927721110);
board927721110 = NULL;
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );


char* board208585453 = gamma_board(board);
assert( board208585453 != NULL );
assert( strcmp(board208585453, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.5..41..6\n"
".6.2.4..4..\n"
"..65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"631413.1112\n"
".323.2.64.6\n"
".56.2.5.354\n"
"..35...16.5\n"
".2..2.562.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"243462.1...\n"
"4.12..5.1.1\n"
"6..5652413.\n") == 0);
free(board208585453);
board208585453 = NULL;
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 5) == 80 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 13) == 1 );


char* board864984393 = gamma_board(board);
assert( board864984393 != NULL );
assert( strcmp(board864984393, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.5..41..6\n"
".6.2.4..4..\n"
"1.65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"631413.1112\n"
".323.2364.6\n"
".56.2.53354\n"
"6.35...16.5\n"
".2..2.562.6\n"
"64.64.5.5..\n"
".5..2.63..6\n"
"243462.1.5.\n"
"4.12..5.141\n"
"6..5652413.\n") == 0);
free(board864984393);
board864984393 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );


char* board567281966 = gamma_board(board);
assert( board567281966 != NULL );
assert( strcmp(board567281966, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.5..41..6\n"
".6.2.4..4..\n"
"1.65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2.53354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5..2.63..6\n"
"243462.1.5.\n"
"4.12..55141\n"
"61.5652413.\n") == 0);
free(board567281966);
board567281966 = NULL;
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );


char* board556658875 = gamma_board(board);
assert( board556658875 != NULL );
assert( strcmp(board556658875, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.5..41..6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23....5625.\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2.53354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5..2.63.46\n"
"243462.1.5.\n"
"4.12..55141\n"
"61.5652413.\n") == 0);
free(board556658875);
board556658875 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );


char* board260668230 = gamma_board(board);
assert( board260668230 != NULL );
assert( strcmp(board260668230, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.53141..6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".56.2.63.46\n"
"243462.3.5.\n"
"4.12..55141\n"
"61.5652413.\n") == 0);
free(board260668230);
board260668230 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );


char* board868018500 = gamma_board(board);
assert( board868018500 != NULL );
assert( strcmp(board868018500, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.53141..6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".56.2.63.46\n"
"243462.3.5.\n"
"4612..55141\n"
"61.5652413.\n") == 0);
free(board868018500);
board868018500 = NULL;
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 11, 8) == 0 );


char* board183894445 = gamma_board(board);
assert( board183894445 != NULL );
assert( strcmp(board183894445, 
"26.15.1..46\n"
"2.11.5.114.\n"
"54.53141..6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652.63.46\n"
"243462.3.5.\n"
"4612..55141\n"
"61.5652413.\n") == 0);
free(board183894445);
board183894445 = NULL;
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 15) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 5, 17) == 1 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );


char* board759518371 = gamma_board(board);
assert( board759518371 != NULL );
assert( strcmp(board759518371, 
"26.1551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652563.46\n"
"243462.3.5.\n"
"4612..55141\n"
"61.56524136\n") == 0);
free(board759518371);
board759518371 = NULL;
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board659645559 = gamma_board(board);
assert( board659645559 != NULL );
assert( strcmp(board659645559, 
"26.1551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3.63\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355..16.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652563.46\n"
"243462.3.5.\n"
"4612..55141\n"
"61.56524136\n") == 0);
free(board659645559);
board659645559 = NULL;
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board118211895 = gamma_board(board);
assert( board118211895 != NULL );
assert( strcmp(board118211895, 
"26.1551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65...4.1.\n"
"23..2.56252\n"
".1.2.2.3263\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355.616.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652563.46\n"
"243462.3.5.\n"
"4612..55141\n"
"61.56524136\n") == 0);
free(board118211895);
board118211895 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_move(board, 5, 2, 17) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );


char* board552992334 = gamma_board(board);
assert( board552992334 != NULL );
assert( strcmp(board552992334, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65.5.4.1.\n"
"23..2.56252\n"
".1.232.3263\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355.616.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61.56524136\n") == 0);
free(board552992334);
board552992334 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board203488702 = gamma_board(board);
assert( board203488702 != NULL );
assert( strcmp(board203488702, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65.5.4.1.\n"
"23..2.56252\n"
".1.232.3263\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355.616.5\n"
".2..2.562.6\n"
"64.64.5.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61156524136\n") == 0);
free(board203488702);
board203488702 = NULL;
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 31 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 5, 11) == 0 );


char* board179534558 = gamma_board(board);
assert( board179534558 != NULL );
assert( strcmp(board179534558, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.254..4..\n"
"1.65.5.4.1.\n"
"23..2.56252\n"
".12232.3263\n"
"6555..2..11\n"
"63141341112\n"
".323.2364.6\n"
".56.2353354\n"
"6.355.616.5\n"
".2..2.562.6\n"
"64.6445.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61156524136\n") == 0);
free(board179534558);
board179534558 = NULL;
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 6, 8, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 8, 16) == 0 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );


char* board727061914 = gamma_board(board);
assert( board727061914 != NULL );
assert( strcmp(board727061914, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.2546.4..\n"
"1.65.5.4.1.\n"
"23.32.56252\n"
".12232.3263\n"
"6555..2..11\n"
"63141341112\n"
"3323.2364.6\n"
"656.2353354\n"
"6.355.616.5\n"
".2.421562.6\n"
"64.6445.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61156524136\n") == 0);
free(board727061914);
board727061914 = NULL;
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_golden_move(board, 6, 17, 5) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );


char* board406753661 = gamma_board(board);
assert( board406753661 != NULL );
assert( strcmp(board406753661, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.2546.4..\n"
"1.65.5.4.1.\n"
"23.32.56252\n"
".12232.3263\n"
"6555..2..11\n"
"63141341112\n"
"3323.2364.6\n"
"656.2353354\n"
"6.355.616.5\n"
".2.421562.6\n"
"64.6445.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61156524136\n") == 0);
free(board406753661);
board406753661 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_golden_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_golden_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 6, 9) == 0 );


char* board802841417 = gamma_board(board);
assert( board802841417 != NULL );
assert( strcmp(board802841417, 
"2651551..46\n"
"2.11.5.114.\n"
"54.531416.6\n"
".6.2546.4..\n"
"1.65.5.4.1.\n"
"23.32.56252\n"
".12232.3263\n"
"6555..2..11\n"
"63141341112\n"
"332352364.6\n"
"65232353354\n"
"6.355.616.5\n"
".2.421562.6\n"
"6466445.5.6\n"
".5652563646\n"
"243462.3.5.\n"
"4612..55141\n"
"61156524136\n") == 0);
free(board802841417);
board802841417 = NULL;
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );


gamma_delete(board);

    return 0;
}
