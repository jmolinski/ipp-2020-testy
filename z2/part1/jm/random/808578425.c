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
uuid: 808578425
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 19, 7, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 2, 18) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 12, 16) == 1 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 3, 11, 17) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 229 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 9, 14) == 1 );
assert( gamma_free_fields(board, 7) == 225 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 2) == 213 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 10, 18) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_free_fields(board, 1) == 205 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_free_fields(board, 2) == 203 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 1, 16) == 1 );
assert( gamma_golden_move(board, 5, 16, 12) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_free_fields(board, 5) == 193 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_free_fields(board, 5) == 187 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_free_fields(board, 6) == 183 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 9, 17) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 7, 17) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 5, 16) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 5, 18) == 1 );
assert( gamma_move(board, 6, 8, 16) == 1 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 6, 17) == 1 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 15) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 4, 17) == 1 );
assert( gamma_free_fields(board, 5) == 160 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 11, 10) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_free_fields(board, 1) == 158 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_free_fields(board, 2) == 157 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 8, 15) == 1 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );


char* board836385457 = gamma_board(board);
assert( board836385457 != NULL );
assert( strcmp(board836385457, 
"..6..5....4..\n"
".4..5.6517.3.\n"
".5...4.66...4\n"
"53.....14.3..\n"
"3..7.....74..\n"
"....4........\n"
"54...22..6322\n"
".5647....3.5.\n"
".241....5.37.\n"
"......41225..\n"
"6.42.......1.\n"
"4.1.7.412.5..\n"
"...45.7...24.\n"
".77313.26....\n"
"...1..2..7...\n"
"4.2..7...7..2\n"
"41..6.....4..\n"
".2..6..56...5\n"
".7...6...1.3.\n") == 0);
free(board836385457);
board836385457 = NULL;
assert( gamma_move(board, 6, 12, 17) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 1, 13, 12) == 0 );


char* board813624159 = gamma_board(board);
assert( board813624159 != NULL );
assert( strcmp(board813624159, 
"..6..5....4..\n"
".4..5.6517.36\n"
".5...4.66...4\n"
"53.....14.3..\n"
"3..7.....74..\n"
"....4........\n"
"54...22..6322\n"
".5647....3.5.\n"
".241....5.37.\n"
"......41225..\n"
"6.42.......1.\n"
"4.1.7.412.5..\n"
"...45.7...24.\n"
".77313.26....\n"
"...1.72..7...\n"
"4.2..7...7..2\n"
"41..6.....4..\n"
".2..6..56...5\n"
".7...6...1.3.\n") == 0);
free(board813624159);
board813624159 = NULL;
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_move(board, 7, 18, 5) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 7, 8, 17) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_free_fields(board, 5) == 145 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 16) == 1 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 7, 18, 8) == 0 );


char* board229114913 = gamma_board(board);
assert( board229114913 != NULL );
assert( strcmp(board229114913, 
"..6..5....4..\n"
".4..5.6517.36\n"
".5...4.66..64\n"
"53.....14.3..\n"
"3..7...3.74..\n"
"....4.....5..\n"
"54...22..6322\n"
".5647....3.5.\n"
".241..2.5.37.\n"
".1....41225..\n"
"6.423......1.\n"
"4.1.7.412.5..\n"
"...45.7...24.\n"
".77313.26....\n"
"...1.72..7...\n"
"4.2..7...7..2\n"
"41..6.....4..\n"
".2..6..56...5\n"
".7...6...153.\n") == 0);
free(board229114913);
board229114913 = NULL;
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 4) == 139 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );


char* board975394973 = gamma_board(board);
assert( board975394973 != NULL );
assert( strcmp(board975394973, 
"3.6..5....4..\n"
".4..5.6517.36\n"
".5...4.66..64\n"
"53.....14.3..\n"
"3..7...3374..\n"
"....4.2.135..\n"
"54...22..6322\n"
".5647....3.5.\n"
".241..2.5.37.\n"
".1....41225..\n"
"6.423.7....1.\n"
"4.1.7.412257.\n"
"...4547...24.\n"
".77313.264...\n"
"5..1.72..71..\n"
"4.2..7...7..2\n"
"41..6...3.4..\n"
".2.36..56.6.5\n"
"27...6...153.\n") == 0);
free(board975394973);
board975394973 = NULL;
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 128 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 1, 18) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );


char* board450960840 = gamma_board(board);
assert( board450960840 != NULL );
assert( strcmp(board450960840, 
"376..5....4..\n"
".4..5.6517.36\n"
".5...4.66..64\n"
"53.....14.3..\n"
"3..7...3374..\n"
"....4.2.135..\n"
"54...22..6322\n"
".5647...63.5.\n"
".241..2.5.37.\n"
".1....41225..\n"
"6.423.7....1.\n"
"4.1.7.412257.\n"
".4.4547...24.\n"
".77313.264...\n"
"5..1.72..71..\n"
"4.2..7...7..2\n"
"41..6.1.3.4..\n"
".2.36..56.6.5\n"
"27...6...153.\n") == 0);
free(board450960840);
board450960840 = NULL;
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 1, 9, 15) == 1 );


char* board499351222 = gamma_board(board);
assert( board499351222 != NULL );
assert( strcmp(board499351222, 
"376..5....4..\n"
".4..5.6517.36\n"
".5...4.66..64\n"
"53.....1413..\n"
"3..7...3374..\n"
"....4.2.135..\n"
"54...22..6322\n"
".5647...63.5.\n"
".241..2.5.37.\n"
".1....41225..\n"
"6.423.7....1.\n"
"4.1.7.412257.\n"
".4.4547...24.\n"
".77313.264...\n"
"5..1.72..71..\n"
"4.2..7...7..2\n"
"41..6.1.3.4..\n"
".2.36..56.6.5\n"
"27...6...153.\n") == 0);
free(board499351222);
board499351222 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );


char* board877210124 = gamma_board(board);
assert( board877210124 != NULL );
assert( strcmp(board877210124, 
"376..5....4..\n"
".4..5.6517.36\n"
".5...4.66..64\n"
"53.....1413..\n"
"3..7...3374..\n"
"....4.2.135..\n"
"54...22..6322\n"
".5647...63.5.\n"
".241..2.5.37.\n"
".1....412253.\n"
"6.423.7....1.\n"
"4.1.7.412257.\n"
".4.4547...24.\n"
".77313.264...\n"
"5..1.72..71..\n"
"4.2..7...7..2\n"
"41..6.1.3.4..\n"
".2.36..56.6.5\n"
"27...6...153.\n") == 0);
free(board877210124);
board877210124 = NULL;
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_golden_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_golden_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 10, 17) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 15, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_move(board, 7, 17, 4) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_golden_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 104 );
assert( gamma_move(board, 5, 12, 15) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 7, 18, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 11, 12) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_free_fields(board, 1) == 96 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );


char* board308468750 = gamma_board(board);
assert( board308468750 != NULL );
assert( strcmp(board308468750, 
"376..5....4..\n"
".4..5.6517636\n"
".52..4.66..64\n"
"53.....1413.5\n"
"3..7..63374..\n"
"....4.2.135.3\n"
"5425422..6322\n"
".5647...63.5.\n"
"6241..2.5.37.\n"
".1...4412253.\n"
"6.423.7....13\n"
"441.7.412752.\n"
"44.4547...24.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.3.7..2\n"
"41..661.37447\n"
".2.36..56.6.5\n"
"27.1.673.153.\n") == 0);
free(board308468750);
board308468750 = NULL;
assert( gamma_move(board, 7, 18, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );


char* board940774305 = gamma_board(board);
assert( board940774305 != NULL );
assert( strcmp(board940774305, 
"376..5....4..\n"
".4..5.6517636\n"
".52..4.66..64\n"
"53.....1413.5\n"
"3.17..63374..\n"
"....4.2.135.3\n"
"5425422..6322\n"
".5647...63.5.\n"
"6241..2.5.37.\n"
".1...4412253.\n"
"6.423.7....13\n"
"441.7.412752.\n"
"44.4547...24.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.3.7..2\n"
"41..661.37447\n"
".2.36..56.6.5\n"
"27.1.673.153.\n") == 0);
free(board940774305);
board940774305 = NULL;
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 10, 16) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 18) == 1 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 7, 15) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_move(board, 3, 6, 16) == 1 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 17, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board362102228 = gamma_board(board);
assert( board362102228 != NULL );
assert( strcmp(board362102228, 
"376..51...4..\n"
".4..5.6517636\n"
".52..4366.564\n"
"53.....1413.5\n"
"3.17..63374..\n"
"..5.4623135.3\n"
"54254221.6322\n"
"65647..263.5.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7...413\n"
"441.7.4127523\n"
"44.4547...24.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.3.7..2\n"
"41..661.37447\n"
".2.366.56.6.5\n"
"27.1.6737153.\n") == 0);
free(board362102228);
board362102228 = NULL;
assert( gamma_move(board, 3, 4, 16) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_golden_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 18, 12) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );


char* board668283845 = gamma_board(board);
assert( board668283845 != NULL );
assert( strcmp(board668283845, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"53.....1413.5\n"
"3.17..63374..\n"
"7.5.4623135.3\n"
"54254221.6322\n"
"65647..263.5.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.4547..224.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.367..2\n"
"41..661.37447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board668283845);
board668283845 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );


char* board182694877 = gamma_board(board);
assert( board182694877 != NULL );
assert( strcmp(board182694877, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"53.....1413.5\n"
"3.17..63374..\n"
"7.5.4623135.3\n"
"54254221.6322\n"
"65647..263.5.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.4547..224.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.367..2\n"
"41..661.37447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board182694877);
board182694877 = NULL;
assert( gamma_free_fields(board, 6) == 71 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 17, 0) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 18, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_free_fields(board, 7) == 70 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );


char* board249894359 = gamma_board(board);
assert( board249894359 != NULL );
assert( strcmp(board249894359, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"53.....1413.5\n"
"3.17..63374..\n"
"7.5.4623135.3\n"
"54254221.6322\n"
"65647..26315.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.4547.2224.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.367..2\n"
"41..661637447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board249894359);
board249894359 = NULL;
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );


char* board318898762 = gamma_board(board);
assert( board318898762 != NULL );
assert( strcmp(board318898762, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"53.....1413.5\n"
"3.17..63374..\n"
"7.5.4623135.3\n"
"54254221.6322\n"
"65647..26315.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.4547.2224.\n"
".773137264543\n"
"5..1.72..71..\n"
"4521.7.367..2\n"
"41..661637447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board318898762);
board318898762 = NULL;
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );


char* board463960879 = gamma_board(board);
assert( board463960879 != NULL );
assert( strcmp(board463960879, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"532....1413.5\n"
"3.17..63374..\n"
"7.5.4623135.3\n"
"54254221.6322\n"
"65647..26315.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..1372..71..\n"
"452167.367..2\n"
"41..661637447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board463960879);
board463960879 = NULL;
assert( gamma_move(board, 7, 18, 9) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );


char* board126644894 = gamma_board(board);
assert( board126644894 != NULL );
assert( strcmp(board126644894, 
"376..51...4..\n"
".4..5.6517636\n"
".52.34366.564\n"
"532....1413.5\n"
"3.17..63374.1\n"
"7.574623135.3\n"
"54254221.6322\n"
"656476.26315.\n"
"6241.12.5.37.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..1372..71..\n"
"452167.367..2\n"
"41..661657447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board126644894);
board126644894 = NULL;
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 17) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 7, 0, 16) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 17, 3) == 0 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 18, 12) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 12, 11) == 1 );


char* board686479114 = gamma_board(board);
assert( board686479114 != NULL );
assert( strcmp(board686479114, 
"376..51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"532....141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"656476.263155\n"
"6241.12.5437.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..13726.71..\n"
"452167.367..2\n"
"416.661657447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board686479114);
board686479114 = NULL;
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 25 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board414613270 = gamma_board(board);
assert( board414613270 != NULL );
assert( strcmp(board414613270, 
"376..51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"532....141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"656476.263155\n"
"6241.12.5437.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..13726.71..\n"
"452167.367..2\n"
"416.661657447\n"
".2.366.56.6.5\n"
"2741.6737153.\n") == 0);
free(board414613270);
board414613270 = NULL;
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, 3, 18) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board625945008 = gamma_board(board);
assert( board625945008 != NULL );
assert( strcmp(board625945008, 
"3767.51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"532....141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"656476.263155\n"
"6241.12.5437.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..13726.71..\n"
"452167.3674.2\n"
"416.661657447\n"
".21366.564665\n"
"2741.6737153.\n") == 0);
free(board625945008);
board625945008 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 3, 15) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );


char* board147831995 = gamma_board(board);
assert( board147831995 != NULL );
assert( strcmp(board147831995, 
"3767.51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"5324...141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"656476.263155\n"
"6241.12.5437.\n"
"41.3.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".773137264543\n"
"5..13726.71..\n"
"452167.3674.2\n"
"416.661657447\n"
".21366.564665\n"
"2741.6737153.\n") == 0);
free(board147831995);
board147831995 = NULL;
assert( gamma_move(board, 6, 18, 8) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 7, 3, 18) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 18, 12) == 0 );
assert( gamma_move(board, 7, 7, 17) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_golden_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 18, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 12, 15) == 0 );
assert( gamma_golden_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 18) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 18, 4) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board516413297 = gamma_board(board);
assert( board516413297 != NULL );
assert( strcmp(board516413297, 
"3767.51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"5324...141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"656476.263155\n"
"6241.12.54376\n"
"4163.4412253.\n"
"6.423.7.4.413\n"
"44137.4127523\n"
"44.454732224.\n"
".733137264543\n"
"54213726.71..\n"
"452167.3674.2\n"
"416.661657447\n"
"221366.564665\n"
"2741.6737153.\n") == 0);
free(board516413297);
board516413297 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_golden_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 16) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 8, 17) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );


char* board764374956 = gamma_board(board);
assert( board764374956 != NULL );
assert( strcmp(board764374956, 
"3767.51...4..\n"
"54..5.6517636\n"
"752.34366.564\n"
"5324...141335\n"
"3317..63374.1\n"
"7.574623135.3\n"
"5425422126322\n"
"6564761263155\n"
"6241.12.54376\n"
"4163.4412253.\n"
"66423.714.413\n"
"44137.4127523\n"
"44.454732224.\n"
".733137264543\n"
"54213726371..\n"
"452167.3674.2\n"
"416.661657447\n"
"221366.564665\n"
"274146737153.\n") == 0);
free(board764374956);
board764374956 = NULL;
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
