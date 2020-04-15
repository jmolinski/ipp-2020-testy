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
uuid: 184098891
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 20, 9, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_free_fields(board, 1) == 220 );
assert( gamma_move(board, 2, 6, 19) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 9, 18) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_move(board, 5, 9, 16) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_move(board, 7, 11, 14) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 19, 4) == 0 );
assert( gamma_move(board, 8, 1, 18) == 1 );
assert( gamma_move(board, 9, 16, 7) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );


char* board626166535 = gamma_board(board);
assert( board626166535 != NULL );
assert( strcmp(board626166535, 
"......2.....\n"
".8.......3..\n"
"...........4\n"
".........5..\n"
"............\n"
"...........7\n"
"1...82.1.1..\n"
"6.2.........\n"
"..7....1..6.\n"
".5......3..9\n"
"...2......4.\n"
"..2........1\n"
"8.....4.7.3.\n"
"...45.2.5.98\n"
"......491..8\n"
".3.6......1.\n"
"....3.......\n"
"....95......\n"
"7..96.......\n"
"..4.......7.\n") == 0);
free(board626166535);
board626166535 = NULL;
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 7, 19, 5) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 11) == 0 );
assert( gamma_move(board, 9, 1, 19) == 1 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 8, 19) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 10, 19) == 1 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_golden_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 172 );
assert( gamma_golden_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 6, 5, 19) == 1 );
assert( gamma_free_fields(board, 6) == 171 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 9, 14) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 169 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 19, 3) == 0 );
assert( gamma_move(board, 7, 18, 8) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_free_fields(board, 8) == 166 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 165 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 5, 3, 17) == 1 );


char* board402131818 = gamma_board(board);
assert( board402131818 != NULL );
assert( strcmp(board402131818, 
".9...62.5.9.\n"
".8.......3..\n"
"...5.......4\n"
".........5..\n"
"........1...\n"
".........8.7\n"
"1...82.1.1..\n"
"642.3.7.....\n"
"4.7....1..63\n"
".5......3..9\n"
".9.29...1.4.\n"
"..2.....9..1\n"
"8.....4.7.33\n"
".6.45.2.5798\n"
".2.85.491..8\n"
".3.5..8...1.\n"
"...73.......\n"
"..4195...3..\n"
"7..92...1...\n"
"..4.......7.\n") == 0);
free(board402131818);
board402131818 = NULL;
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 11, 12) == 1 );
assert( gamma_golden_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 17, 2) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_free_fields(board, 5) == 154 );
assert( gamma_move(board, 6, 13, 11) == 0 );


char* board843830632 = gamma_board(board);
assert( board843830632 != NULL );
assert( strcmp(board843830632, 
".9...62.5.9.\n"
".8.......3..\n"
"...5.......4\n"
".........5..\n"
"........1...\n"
"....4....827\n"
"1...82.1.1..\n"
"642.3.7....8\n"
"447....1..63\n"
".5......3..9\n"
".9.29...134.\n"
"..2.....9..1\n"
"8.....4.7.33\n"
".6.45.2.5798\n"
".2.857491..8\n"
".3.5..8...1.\n"
"...73.......\n"
"5.41953..3.9\n"
"7..92...1...\n"
".14.......7.\n") == 0);
free(board843830632);
board843830632 = NULL;
assert( gamma_move(board, 7, 17, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 17, 1) == 0 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_free_fields(board, 2) == 149 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 4, 18) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 8, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 7) == 147 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_golden_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_free_fields(board, 2) == 144 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 144 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 7, 18) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 15) == 1 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 11, 19) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_free_fields(board, 2) == 137 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board717330312 = gamma_board(board);
assert( board717330312 != NULL );
assert( strcmp(board717330312, 
".9...62.5.92\n"
".8..5..5.32.\n"
"...5.......4\n"
".........5..\n"
".......71...\n"
"...44....827\n"
"1.4.82.1.1..\n"
"642.3.7....8\n"
"447...31..63\n"
".5...8..3..9\n"
".9.29...134.\n"
".52.....9..1\n"
"84....4.7833\n"
".6.45.2.5798\n"
"12.857491..8\n"
".3.59.8...1.\n"
"..273.8.....\n"
"5.41953..319\n"
"7..92...1...\n"
".14.9.....7.\n") == 0);
free(board717330312);
board717330312 = NULL;
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 6, 17) == 1 );
assert( gamma_free_fields(board, 6) == 134 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_free_fields(board, 8) == 133 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 18, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 15) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_free_fields(board, 4) == 126 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_free_fields(board, 5) == 126 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_move(board, 7, 10, 17) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );


char* board837521808 = gamma_board(board);
assert( board837521808 != NULL );
assert( strcmp(board837521808, 
".9...62.5.92\n"
".8..5..5.32.\n"
"...5..6...74\n"
"........45..\n"
".......71.1.\n"
"...44....827\n"
"1.4.82.1.1..\n"
"642.3.7....8\n"
"447...31..63\n"
".5...8..3..9\n"
".9.29...134.\n"
".528....9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.8574912.8\n"
"53.59.8...1.\n"
"..273.8.....\n"
"5.41953..319\n"
"7..92...1...\n"
".14993...17.\n") == 0);
free(board837521808);
board837521808 = NULL;
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_free_fields(board, 2) == 124 );
assert( gamma_golden_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 8, 19) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 19, 3) == 0 );
assert( gamma_free_fields(board, 8) == 123 );
assert( gamma_move(board, 9, 18, 2) == 0 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 120 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 2, 16) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_free_fields(board, 8) == 117 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 15) == 1 );
assert( gamma_move(board, 6, 9, 19) == 1 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 19, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_golden_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_golden_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 17, 0) == 0 );
assert( gamma_move(board, 9, 18, 0) == 0 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 8, 19) == 0 );
assert( gamma_move(board, 8, 18, 2) == 0 );
assert( gamma_free_fields(board, 8) == 110 );


char* board685846704 = gamma_board(board);
assert( board685846704 != NULL );
assert( strcmp(board685846704, 
".9...62.5692\n"
".8..5..5.32.\n"
"...5..6...74\n"
"4.7.....45..\n"
".....6.71.1.\n"
"...44....827\n"
"1.4.82.1.1..\n"
"642.3.7.2..8\n"
"447...31..63\n"
".5..18223..9\n"
".9.29...134.\n"
"1528....9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.857491298\n"
"53.59.7...12\n"
"..273.8....2\n"
"5.419534.319\n"
"7.892...1...\n"
"614993...17.\n") == 0);
free(board685846704);
board685846704 = NULL;
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 0, 17) == 1 );
assert( gamma_busy_fields(board, 9) == 16 );


char* board992962469 = gamma_board(board);
assert( board992962469 != NULL );
assert( strcmp(board992962469, 
".9...62.5692\n"
".8..5..5.32.\n"
"9..5..6...74\n"
"4.7.....45..\n"
".....6.71.1.\n"
"...44....827\n"
"1.4.82.1.1..\n"
"642.3.7.2..8\n"
"447...31..63\n"
".5..18223..9\n"
".9.29...134.\n"
"1528....9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.857491298\n"
"53.59.7...12\n"
"..273.8....2\n"
"5.419534.319\n"
"7.892...1...\n"
"614993...17.\n") == 0);
free(board992962469);
board992962469 = NULL;
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 109 );
assert( gamma_move(board, 5, 8, 14) == 1 );
assert( gamma_free_fields(board, 5) == 108 );
assert( gamma_move(board, 6, 2, 15) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 9, 18, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 6, 18) == 1 );


char* board871589583 = gamma_board(board);
assert( board871589583 != NULL );
assert( strcmp(board871589583, 
".9...62.5692\n"
".8..5.15.32.\n"
"9..5..6...74\n"
"4.7.....45..\n"
"..6..6.71.1.\n"
"...44...5827\n"
"1.4.82.1.1..\n"
"642.3.7.2..8\n"
"447...31..63\n"
".5..18223..9\n"
".9.29...134.\n"
"1528....9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.857491298\n"
"53.59.7.8.12\n"
"..273.81...2\n"
"5.419534.319\n"
"7.892...1...\n"
"614993...17.\n") == 0);
free(board871589583);
board871589583 = NULL;
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );


char* board366548906 = gamma_board(board);
assert( board366548906 != NULL );
assert( strcmp(board366548906, 
".9...62.5692\n"
".8..5.15.32.\n"
"9..5..6...74\n"
"4.7.....45..\n"
"..6..6.71.1.\n"
"...44...5827\n"
"1.4.82.1.1..\n"
"642.3.7.2..8\n"
"447...31..63\n"
".5..18223..9\n"
".9.29...134.\n"
"1528....9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.857491298\n"
"53.59.7.8.12\n"
"..273.81...2\n"
"5.419534.319\n"
"7.892...1...\n"
"614993...17.\n") == 0);
free(board366548906);
board366548906 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 5, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 18) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 9, 17, 5) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_free_fields(board, 9) == 101 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 6, 11, 17) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 16, 6) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );


char* board608448467 = gamma_board(board);
assert( board608448467 != NULL );
assert( strcmp(board608448467, 
".9...62.5692\n"
".8..5615.32.\n"
"9..5..6...74\n"
"4.7..4..45..\n"
"..6..6.71.1.\n"
"...44...5827\n"
"1.4.82.1.1..\n"
"642.3.7.2..8\n"
"447...31..63\n"
".5..18223..9\n"
".9.29...134.\n"
"1528..7.9..1\n"
"84...34.7833\n"
".6.45.2.5798\n"
"12.857491298\n"
"53.59.7.8.12\n"
"..273.81...2\n"
"5.419534.319\n"
"7.892...1...\n"
"614993...17.\n") == 0);
free(board608448467);
board608448467 = NULL;
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 12) == 1 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_golden_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_free_fields(board, 6) == 94 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 8, 17, 1) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 0) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_golden_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_free_fields(board, 8) == 90 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 7, 6, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 6, 19) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 18, 0) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 5, 14) == 1 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 4, 19) == 1 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_free_fields(board, 7) == 78 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 19) == 1 );
assert( gamma_move(board, 1, 7, 14) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 17) == 1 );
assert( gamma_golden_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 1, 14) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 11, 15) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_free_fields(board, 8) == 68 );
assert( gamma_move(board, 9, 17, 9) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 4, 15) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 18) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 7, 4, 18) == 0 );
assert( gamma_move(board, 8, 9, 18) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 9, 15) == 1 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 8, 3, 18) == 1 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );


char* board675549589 = gamma_board(board);
assert( board675549589 != NULL );
assert( strcmp(board675549589, 
"19..762.5692\n"
".8485615.32.\n"
"9..5.66..474\n"
"4.7..4.645..\n"
"..6.26.71516\n"
".75443.15827\n"
"11458271.1..\n"
"64283.732..8\n"
"44716431..63\n"
".5.618223.79\n"
".9.292.91349\n"
"152883729..1\n"
"844.43434833\n"
"66645.2.5798\n"
"12.857491298\n"
"53.5911.8812\n"
"..273.81...2\n"
"5.419534.319\n"
"78892.1.1..1\n"
"614993..5177\n") == 0);
free(board675549589);
board675549589 = NULL;
assert( gamma_move(board, 9, 10, 15) == 0 );
assert( gamma_free_fields(board, 9) == 59 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 3, 19) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 6, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 16) == 1 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_golden_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 18, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 9, 16, 3) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 10, 18) == 0 );
assert( gamma_golden_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 9, 10, 18) == 0 );
assert( gamma_move(board, 9, 0, 19) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 18, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 29 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );


char* board387621176 = gamma_board(board);
assert( board387621176 != NULL );
assert( strcmp(board387621176, 
"19.7762.5692\n"
".8485615132.\n"
"9..5466..474\n"
"4.7.84.645..\n"
"..6.26.71516\n"
".75443.15827\n"
"11458271.1..\n"
"64283.732.38\n"
"44716431..63\n"
".5.618223.79\n"
".9.292.91349\n"
"152883729..1\n"
"844.43434833\n"
"66645.2.5798\n"
"12.857491298\n"
"53.5911.8812\n"
"..273681...2\n"
"58419534.319\n"
"78892.1.1..1\n"
"614993.25177\n") == 0);
free(board387621176);
board387621176 = NULL;
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 7, 11, 17) == 0 );
assert( gamma_move(board, 8, 3, 16) == 1 );
assert( gamma_busy_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 8, 3, 16) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 13, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board172376732 = gamma_board(board);
assert( board172376732 != NULL );
assert( strcmp(board172376732, 
"19.7762.5692\n"
".8485615132.\n"
"9..5466..474\n"
"4.7884.645..\n"
"..6.26.71516\n"
".75443.15827\n"
"1145827161..\n"
"64283.732.38\n"
"44716431..63\n"
"15.618223.79\n"
".9.292.91349\n"
"152883729..1\n"
"844.43434833\n"
"66645.2.5798\n"
"12.857491298\n"
"53.5911.8812\n"
"..273681...2\n"
"58419534.319\n"
"78892.1.1..1\n"
"614993.25177\n") == 0);
free(board172376732);
board172376732 = NULL;
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 8, 6, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board994159593 = gamma_board(board);
assert( board994159593 != NULL );
assert( strcmp(board994159593, 
"19.7762.5692\n"
".8485615132.\n"
"9..5466..474\n"
"4.7884.645..\n"
"..6.26.71516\n"
".75443815827\n"
"1145827161..\n"
"64283.732.38\n"
"44716431..63\n"
"15.618223.79\n"
".9.292.91349\n"
"152883729..1\n"
"844.43434833\n"
"66645.2.5798\n"
"12.857491298\n"
"53.5911.8812\n"
"..273681...2\n"
"58419534.319\n"
"78892.1.1..1\n"
"614993.25177\n") == 0);
free(board994159593);
board994159593 = NULL;
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 4, 11, 18) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 15) == 1 );
assert( gamma_move(board, 8, 3, 15) == 1 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 19, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );


char* board279088363 = gamma_board(board);
assert( board279088363 != NULL );
assert( strcmp(board279088363, 
"19.7762.5692\n"
".84856151324\n"
"9..5466..474\n"
"4.7884.645..\n"
".86826.71516\n"
".75443815827\n"
"1145827161..\n"
"64283.732.38\n"
"44716431..63\n"
"15.618223.79\n"
".9.292.91349\n"
"152883729..1\n"
"844.43434833\n"
"6664562.5798\n"
"121857491298\n"
"53.5911.8812\n"
"..273681...2\n"
"58419534.319\n"
"78892.1.1..1\n"
"614993.25177\n") == 0);
free(board279088363);
board279088363 = NULL;
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 6, 15) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_golden_move(board, 3, 16, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 16, 6) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 5, 11, 16) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 8, 16, 6) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 9, 14, 0) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );


gamma_delete(board);

    return 0;
}
