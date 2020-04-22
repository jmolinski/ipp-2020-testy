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
uuid: 105036996
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(21, 11, 9, 40);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_free_fields(board, 2) == 231 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 229 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );


char* board357979148 = gamma_board(board);
assert( board357979148 != NULL );
assert( strcmp(board357979148, 
".....................\n"
".....................\n"
"......5..............\n"
".....................\n"
".....................\n"
".....................\n"
".....................\n"
".....................\n"
"..6..................\n"
"3....................\n"
"....4................\n") == 0);
free(board357979148);
board357979148 = NULL;
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 17, 9) == 1 );
assert( gamma_free_fields(board, 1) == 221 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 11, 10) == 1 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 9, 20, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 212 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 3, 18) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 5, 16, 8) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_free_fields(board, 9) == 202 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 0) == 1 );
assert( gamma_move(board, 2, 19, 9) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 19, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 8, 1, 18) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 9, 4, 19) == 0 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );


char* board679130013 = gamma_board(board);
assert( board679130013 != NULL );
assert( strcmp(board679130013, 
"6.9...5...26..4......\n"
"..7..............1.2.\n"
"...19.5...7.7...5....\n"
"8.4.6..6..3..........\n"
"9....25..7.........3.\n"
"...........4.........\n"
"......3..............\n"
"..4...9..4.........3.\n"
"..6.1......5.........\n"
"3...................9\n"
"..8.4.95..1.....2....\n") == 0);
free(board679130013);
board679130013 = NULL;
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 20, 9) == 1 );
assert( gamma_move(board, 1, 15, 1) == 1 );
assert( gamma_free_fields(board, 1) == 186 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_free_fields(board, 5) == 184 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 16, 10) == 1 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board547444090 = gamma_board(board);
assert( board547444090 != NULL );
assert( strcmp(board547444090, 
"6.9...5...26..4.9....\n"
"..7.8............1.29\n"
"...19.5.2.767...5....\n"
"8.4.6..6..3..........\n"
"9....25..7.........3.\n"
"...........4.........\n"
"......3..............\n"
"..4...9..4.........3.\n"
"..6.1....7.5.........\n"
"3.8........5...1....9\n"
"..8.4.95..1.....2....\n") == 0);
free(board547444090);
board547444090 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 178 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 16, 9) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 15, 9) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 17, 5) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_free_fields(board, 9) == 173 );
assert( gamma_move(board, 1, 18, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );


char* board308616932 = gamma_board(board);
assert( board308616932 != NULL );
assert( strcmp(board308616932, 
"6.9...5...26..4.9....\n"
".21.8.........4531.29\n"
"7..19.5.2.767...5....\n"
"8.4.6.96..3..........\n"
"92...25..7.........3.\n"
"....3......4.....7...\n"
"......3..............\n"
"..4...9..4.........3.\n"
"..4.1.2..7.5......1..\n"
"3.8........5...1....9\n"
"..8.4.95..1.....2....\n") == 0);
free(board308616932);
board308616932 = NULL;
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 9, 14, 0) == 1 );
assert( gamma_move(board, 9, 15, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 20, 4) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );


char* board317240257 = gamma_board(board);
assert( board317240257 != NULL );
assert( strcmp(board317240257, 
"6.9...5...26..4.9....\n"
".21.8.........4531.29\n"
"7..19.5.2.767...5....\n"
"8.4.6.96..3....9.....\n"
"92...25..7.........3.\n"
"....3......4.....7...\n"
"......3.............3\n"
"..4...9..4.........3.\n"
"..4.1.2..7.5......1..\n"
"3.83.5.....5...1....9\n"
"..864.95..1...9.2....\n") == 0);
free(board317240257);
board317240257 = NULL;
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 1, 16, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board710258862 = gamma_board(board);
assert( board710258862 != NULL );
assert( strcmp(board710258862, 
"6.9...5...26..4.9....\n"
".21.8...3.....4531.29\n"
"7..19.5.2.767...5....\n"
"8.4.6.96..3....9.....\n"
"92...25..7.........3.\n"
"....3...3..4.....7...\n"
"......3.........1...3\n"
".24...9..4.........3.\n"
"..4.1.2..7.5......1..\n"
"3.83.5.4...5...1....9\n"
"..864.95.81...9.2....\n") == 0);
free(board710258862);
board710258862 = NULL;
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 16) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 9, 4, 17) == 0 );
assert( gamma_move(board, 9, 17, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 16, 6) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 20, 6) == 1 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 145 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 19, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 17, 7) == 1 );
assert( gamma_golden_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 15, 3) == 1 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_free_fields(board, 7) == 140 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 16, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 7, 8, 15) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 8, 16, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 19, 2) == 0 );
assert( gamma_move(board, 1, 0, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board334813501 = gamma_board(board);
assert( board334813501 != NULL );
assert( strcmp(board334813501, 
"6.9...5.3.26..4.9....\n"
".21.8..93...6.4531.29\n"
"71.19.5.2.767...5....\n"
"884.6.96..3....9.5...\n"
"92...25..7..7...65.37\n"
"6...33..3..4.....7...\n"
"......34..75....1...3\n"
".249.69..42....6...3.\n"
"..4.1.2..7.5......14.\n"
"3.83.5.4...5...1....9\n"
".6864755.81...9.2....\n") == 0);
free(board334813501);
board334813501 = NULL;
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 15, 10) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 8, 17) == 0 );
assert( gamma_move(board, 7, 18, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 9, 13, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 18, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_free_fields(board, 7) == 125 );
assert( gamma_move(board, 8, 0, 18) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 6, 5, 20) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 1, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 18, 10) == 0 );
assert( gamma_free_fields(board, 9) == 124 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 18, 0) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 19, 7) == 1 );
assert( gamma_free_fields(board, 3) == 122 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_free_fields(board, 6) == 121 );
assert( gamma_move(board, 7, 8, 18) == 0 );
assert( gamma_move(board, 7, 16, 7) == 1 );
assert( gamma_move(board, 8, 4, 19) == 0 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 17, 8) == 1 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 17, 5) == 0 );
assert( gamma_move(board, 9, 19, 9) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_golden_move(board, 9, 9, 19) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_free_fields(board, 3) == 116 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 18, 6) == 1 );
assert( gamma_move(board, 8, 2, 17) == 0 );
assert( gamma_move(board, 8, 13, 5) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 20) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_free_fields(board, 2) == 112 );


char* board186377182 = gamma_board(board);
assert( board186377182 != NULL );
assert( strcmp(board186377182, 
"6.9...5.3.26..459.6..\n"
".21.89.93...6.4531.29\n"
"71.1965.2.767...52...\n"
"884.6.96.636...975.3.\n"
"92.5.25..7..7...65737\n"
"6...33..3.94.8...7...\n"
"...4..34..75.5..1...3\n"
".249.69..422...6...3.\n"
"..4.1.2..7.529....14.\n"
"3.83.5.4.475.4.1....9\n"
".6864755.81..29.2.1..\n") == 0);
free(board186377182);
board186377182 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_free_fields(board, 6) == 111 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );


char* board271425497 = gamma_board(board);
assert( board271425497 != NULL );
assert( strcmp(board271425497, 
"6.9...5.3.26..459.6..\n"
".21889.93...6.4531.29\n"
"71.1965.2.767...52...\n"
"884.6.96.636...975.3.\n"
"92.5.25..7..7...65737\n"
"6...33..3.9488...7...\n"
"...44.34..75.5..1...3\n"
".249.69..422...6...3.\n"
"..4.1.2..7.529....14.\n"
"3.83.5.4.475.4.1....9\n"
".6864755.81..29.2.1..\n") == 0);
free(board271425497);
board271425497 = NULL;
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_golden_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 104 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 5, 3, 18) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_free_fields(board, 7) == 102 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 17, 7) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 18, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 5, 17, 2) == 1 );
assert( gamma_free_fields(board, 5) == 99 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 18) == 0 );
assert( gamma_move(board, 9, 16, 4) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 18, 1) == 1 );


char* board780387350 = gamma_board(board);
assert( board780387350 != NULL );
assert( strcmp(board780387350, 
"669...5.3.26..459.6..\n"
".21889.93...6.4531.29\n"
"711196582.767..1521..\n"
"884.6.96.636...975.3.\n"
"92.5.25..72.7.1.65737\n"
"6...33.93.9488...7...\n"
"...44.34..75.5..1...3\n"
".249.69..422...6...3.\n"
".54.1.2..76529...514.\n"
"3883.5.4.475.4.1..2.9\n"
".6864755.81..29.2.1..\n") == 0);
free(board780387350);
board780387350 = NULL;
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 8, 0, 17) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );


char* board347795178 = gamma_board(board);
assert( board347795178 != NULL );
assert( strcmp(board347795178, 
"669...5.3.26..459.6..\n"
".21889.93...664531.29\n"
"711196582.767..1521..\n"
"884.6.96.636...975.3.\n"
"92.5.25.472.7.1.65737\n"
"6...33.93.9488...7...\n"
"...44.34..75.5..1...3\n"
".249.69..422...6...3.\n"
".54.152..76529...514.\n"
"3883.5.43475.4.1..2.9\n"
".6864755.81..29.2.1..\n") == 0);
free(board347795178);
board347795178 = NULL;
assert( gamma_move(board, 9, 7, 10) == 1 );
assert( gamma_free_fields(board, 9) == 91 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 7, 16, 3) == 1 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 17, 1) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 18, 0) == 0 );
assert( gamma_move(board, 7, 4, 15) == 0 );
assert( gamma_move(board, 7, 19, 10) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 5, 14) == 0 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 6, 1, 17) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_golden_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 3, 20, 7) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 20, 2) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 78 );
assert( gamma_move(board, 8, 11, 3) == 0 );


char* board282186324 = gamma_board(board);
assert( board282186324 != NULL );
assert( strcmp(board282186324, 
"66915.593.26..459.67.\n"
".21889.933..664531.29\n"
"711196582.767..1521..\n"
"884.6.961636...975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7...\n"
"...44.34..7555..1...3\n"
"9249.69..422...67..3.\n"
".54.152..76529...5146\n"
"388385.43475.4.1.92.9\n"
".6864755.81..29.2.1..\n") == 0);
free(board282186324);
board282186324 = NULL;
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_free_fields(board, 9) == 78 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 18, 9) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 15, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );


char* board201735935 = gamma_board(board);
assert( board201735935 != NULL );
assert( strcmp(board201735935, 
"66915.593.26..459.67.\n"
".21889.933..664531229\n"
"711196582.767..1521..\n"
"884.6.961636...975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7...\n"
"...44.34..7555.51...3\n"
"9249.69..422...67..3.\n"
".54.152..76529...5146\n"
"388385.43475.4.1.92.9\n"
".6864755.81..29.2.1..\n") == 0);
free(board201735935);
board201735935 = NULL;
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 8, 5, 16) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_golden_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 20, 10) == 1 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 0, 19) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 20, 7) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );


char* board991468630 = gamma_board(board);
assert( board991468630 != NULL );
assert( strcmp(board991468630, 
"66915.593.26..459.672\n"
".21889.933..664531229\n"
"711196582.767..1521..\n"
"884.6.961636...975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7...\n"
"...44.34..7555.51...3\n"
"9249.694.422...67..3.\n"
".54.152..76529...5146\n"
"388385.43475.451.92.9\n"
"66864755.81..29.2.1..\n") == 0);
free(board991468630);
board991468630 = NULL;
assert( gamma_move(board, 6, 9, 10) == 1 );


char* board738119899 = gamma_board(board);
assert( board738119899 != NULL );
assert( strcmp(board738119899, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.767..1521..\n"
"884.6.961636...975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7...\n"
"...44.34..7555.51...3\n"
"9249.694.422...67..3.\n"
".54.152..76529...5146\n"
"388385.43475.451.92.9\n"
"66864755.81..29.2.1..\n") == 0);
free(board738119899);
board738119899 = NULL;
assert( gamma_move(board, 7, 4, 17) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 71 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 17, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 20 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 1, 19) == 0 );


char* board868052874 = gamma_board(board);
assert( board868052874 != NULL );
assert( strcmp(board868052874, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.767..1521..\n"
"884.6.961636...975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7...\n"
"...44.34..7555.51...3\n"
"9249.694.422...67..3.\n"
".54.152..76529...5146\n"
"388385.43475.451.92.9\n"
"66864755.81..29.2.1..\n") == 0);
free(board868052874);
board868052874 = NULL;
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 19) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 4, 19) == 0 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 5, 19) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_golden_move(board, 9, 9, 16) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 6, 19, 8) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 19, 5) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 16, 2) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 65 );


char* board512155037 = gamma_board(board);
assert( board512155037 != NULL );
assert( strcmp(board512155037, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.767..15216.\n"
"884.6.9616365..975.33\n"
"92.5.25.472.7.1.65737\n"
"69..33.93.9488...7.9.\n"
"..544.34..7555.51...3\n"
"9249.694.422...67..3.\n"
".549152..76529..45146\n"
"388385.43475.451.92.9\n"
"66864755.81..29.2.1..\n") == 0);
free(board512155037);
board512155037 = NULL;
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 0, 17) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 18, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 8, 14, 7) == 1 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );


char* board443939208 = gamma_board(board);
assert( board443939208 != NULL );
assert( strcmp(board443939208, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.767..15216.\n"
"884.6.9616365.8975.33\n"
"92.5.25.472.761.65737\n"
"69..33.93.9488...7.9.\n"
"6.544.34..7555.51...3\n"
"9249.6941422...67..3.\n"
".549152..76529..45146\n"
"388385.43475.451.92.9\n"
"66864755.81..2922.1..\n") == 0);
free(board443939208);
board443939208 = NULL;
assert( gamma_move(board, 6, 1, 19) == 0 );
assert( gamma_move(board, 7, 19, 4) == 1 );
assert( gamma_golden_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 4, 17) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 1, 8, 20) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );


char* board621258228 = gamma_board(board);
assert( board621258228 != NULL );
assert( strcmp(board621258228, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.767..15216.\n"
"884.6.9616365.8975.33\n"
"92.5.25.472.761.65737\n"
"69..33.93.9488...7.9.\n"
"7.544.34..7555.51..73\n"
"9249.6941422...67..3.\n"
".549152..76529..45146\n"
"388385.43475.451.92.9\n"
"66864755681..2922.1..\n") == 0);
free(board621258228);
board621258228 = NULL;
assert( gamma_move(board, 7, 20, 4) == 0 );
assert( gamma_move(board, 7, 15, 6) == 1 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 9, 12, 3) == 1 );
assert( gamma_golden_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 9, 11, 6) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 10, 17) == 0 );
assert( gamma_move(board, 8, 14, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_golden_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 8, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 20, 10) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 17) == 0 );
assert( gamma_move(board, 9, 14, 3) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 18, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 17, 8) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 16, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );


char* board301473822 = gamma_board(board);
assert( board301473822 != NULL );
assert( strcmp(board301473822, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.7671.15216.\n"
"884.6.9616365.8975.33\n"
"92.5.25.4729761765737\n"
"69.333.93.9488...7.9.\n"
"7.544.34..7555851..73\n"
"9249.69414229.967..3.\n"
".549152..76529..45146\n"
"388385243475.451192.9\n"
"668647556813.2922.1..\n") == 0);
free(board301473822);
board301473822 = NULL;
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );


char* board922742085 = gamma_board(board);
assert( board922742085 != NULL );
assert( strcmp(board922742085, 
"66915.593626..459.672\n"
".21889.933..664531229\n"
"711196582.7671.15216.\n"
"884.6.9616365.8975.33\n"
"92.5.25.4729761765737\n"
"69.333.93.9488...7.9.\n"
"7.544.34..7555851..73\n"
"9249.69414229.967..3.\n"
".549152..76529..45146\n"
"388385243475.451192.9\n"
"668647556813.2922.1..\n") == 0);
free(board922742085);
board922742085 = NULL;
assert( gamma_move(board, 9, 10, 17) == 0 );
assert( gamma_busy_fields(board, 9) == 25 );
assert( gamma_move(board, 1, 3, 18) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 19, 8) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board394254579 = gamma_board(board);
assert( board394254579 != NULL );
assert( strcmp(board394254579, 
"66915.593626..459.672\n"
".218891933..664531229\n"
"71119658247671.15216.\n"
"884.6.9616365.8975.33\n"
"92.5325.4729761765737\n"
"69.336.93.9488...7.9.\n"
"7.544.34..7555851..73\n"
"9249.69414229.967..3.\n"
".542152..76529..45146\n"
"388385243475.451192.9\n"
"668647556813.2922.1..\n") == 0);
free(board394254579);
board394254579 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 16, 8) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 6, 14, 8) == 1 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board418528837 = gamma_board(board);
assert( board418528837 != NULL );
assert( strcmp(board418528837, 
"66915.593626..459.672\n"
".218891933..664531229\n"
"71119658247671615216.\n"
"884.6.9616365.8975.33\n"
"92.532564729761765737\n"
"69.336.93.9488...7.9.\n"
"7.544.34..7555851..73\n"
"9249.69414229.967..3.\n"
".542152..76529..45146\n"
"388385243475.451192.9\n"
"668647556813.2922.1..\n") == 0);
free(board418528837);
board418528837 = NULL;
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 20, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 10, 13) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_golden_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 19, 1) == 1 );
assert( gamma_free_fields(board, 9) == 38 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_golden_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 0, 19) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 16, 0) == 0 );
assert( gamma_move(board, 7, 19, 3) == 0 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
