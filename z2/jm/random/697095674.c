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
uuid: 697095674
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 9, 4, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );


char* board220018492 = gamma_board(board);
assert( board220018492 != NULL );
assert( strcmp(board220018492, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"..2...2........\n"
".......1.......\n"
"...............\n"
"...............\n") == 0);
free(board220018492);
board220018492 = NULL;
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 131 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_free_fields(board, 1) == 121 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 116 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );


char* board922447664 = gamma_board(board);
assert( board922447664 != NULL );
assert( strcmp(board922447664, 
"1..............\n"
"3.4............\n"
".....1.......3.\n"
"....34.....2124\n"
"2...4.....4....\n"
"..2...2..3.....\n"
".1....31.3..1..\n"
"...1...3.1.....\n"
"..42.12........\n") == 0);
free(board922447664);
board922447664 = NULL;
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 14, 7) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );


char* board567247597 = gamma_board(board);
assert( board567247597 != NULL );
assert( strcmp(board567247597, 
"1..............\n"
"3.4...........1\n"
"3...21.......3.\n"
"....34.....2124\n"
"2...4.....4....\n"
"..2...2..3.....\n"
".1....31.3..1..\n"
"...1...3.1.....\n"
"3442.12........\n") == 0);
free(board567247597);
board567247597 = NULL;
assert( gamma_move(board, 1, 14, 8) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 12, 7) == 1 );


char* board207254783 = gamma_board(board);
assert( board207254783 != NULL );
assert( strcmp(board207254783, 
"1...33..4..3..1\n"
"3.4.........3.1\n"
"3.2.21.......32\n"
"....34.3...2124\n"
"2...4.....4..1.\n"
"..2.4.2..3.....\n"
".11...31.3..1..\n"
".3.1...331.....\n"
"3442.12........\n") == 0);
free(board207254783);
board207254783 = NULL;
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 87 );


char* board532496513 = gamma_board(board);
assert( board532496513 != NULL );
assert( strcmp(board532496513, 
"1...33..4..3..1\n"
"3.4.........3.1\n"
"3.2.21.......32\n"
"....34.3...2124\n"
"2...4.....4..1.\n"
"..2.4.2..3.....\n"
".11...31.3..1..\n"
".3.1...331.....\n"
"3442.12........\n") == 0);
free(board532496513);
board532496513 = NULL;
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );


char* board352236926 = gamma_board(board);
assert( board352236926 != NULL );
assert( strcmp(board352236926, 
"1.2.33..4..3..1\n"
"3.424.4.1.4.311\n"
"322.21.......32\n"
"3...34.3...2124\n"
"2...4.....4..1.\n"
".12.4.2..3..4..\n"
"211...31.3..123\n"
".3.1...331.....\n"
"3442.12........\n") == 0);
free(board352236926);
board352236926 = NULL;
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_free_fields(board, 3) == 72 );


char* board288564002 = gamma_board(board);
assert( board288564002 != NULL );
assert( strcmp(board288564002, 
"1.2.33..4..3..1\n"
"3.424.431.4.311\n"
"322.21.......32\n"
"3...34.3...2124\n"
"2...4.....4..1.\n"
".12.4.2..3..4..\n"
"211...31.3..123\n"
".3.1...331.....\n"
"3442.12........\n") == 0);
free(board288564002);
board288564002 = NULL;
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board461169716 = gamma_board(board);
assert( board461169716 != NULL );
assert( strcmp(board461169716, 
"1.2.33..4..3..1\n"
"3.424.431.4.311\n"
"322.21...4...32\n"
"3.1.34.3...2124\n"
"2...4.....4..1.\n"
".12.4.2..3..4..\n"
"2111..31.3..123\n"
"13.1...331.....\n"
"3442.12........\n") == 0);
free(board461169716);
board461169716 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 61 );


char* board633862082 = gamma_board(board);
assert( board633862082 != NULL );
assert( strcmp(board633862082, 
"1.2.33..4..3..1\n"
"3.424.431.4.311\n"
"322.21..44...32\n"
"3.1.34.3...2124\n"
"22..4...4.4..11\n"
".1224.2..3..4..\n"
"2111..31.3..123\n"
"13.1...331...3.\n"
"3442.124.......\n") == 0);
free(board633862082);
board633862082 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_golden_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_move(board, 2, 2, 8) == 0 );


char* board775111697 = gamma_board(board);
assert( board775111697 != NULL );
assert( strcmp(board775111697, 
"132.33..4..3..1\n"
"3.424.431.4.311\n"
"322.21..44...32\n"
"311.34.3..42124\n"
"22..4..34.4..11\n"
".1224.2..32.4.4\n"
"2111..3143..123\n"
"13.13..331...3.\n"
"3442.1241......\n") == 0);
free(board775111697);
board775111697 = NULL;
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board595241132 = gamma_board(board);
assert( board595241132 != NULL );
assert( strcmp(board595241132, 
"132233..4.43..1\n"
"3.424.43114.311\n"
"322.21..44...32\n"
"311.34.3..42124\n"
"22..4..34.4..11\n"
".122422..32.4.4\n"
"2111..3133..123\n"
"13.13..331..133\n"
"344221241......\n") == 0);
free(board595241132);
board595241132 = NULL;
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board956795267 = gamma_board(board);
assert( board956795267 != NULL );
assert( strcmp(board956795267, 
"132233..4.434.1\n"
"3.424343114.311\n"
"322.21..44...32\n"
"311.34.3..42124\n"
"22.44..34.44.11\n"
".122422..32.4.4\n"
"2111..3133..123\n"
"13.13..331..133\n"
"3442212414.....\n") == 0);
free(board956795267);
board956795267 = NULL;
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );


char* board786620998 = gamma_board(board);
assert( board786620998 != NULL );
assert( strcmp(board786620998, 
"1322333.4.43431\n"
"3.424343114.311\n"
"322.211.44...32\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.32.4.4\n"
"1111..3133..123\n"
"13.13..331..133\n"
"34422124143....\n") == 0);
free(board786620998);
board786620998 = NULL;
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );


char* board571080580 = gamma_board(board);
assert( board571080580 != NULL );
assert( strcmp(board571080580, 
"1322333.4.43431\n"
"3.4243431142311\n"
"322.211.44..132\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.32.4.4\n"
"1111.1313331123\n"
"13.13..331..133\n"
"34422124143....\n") == 0);
free(board571080580);
board571080580 = NULL;
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );


char* board523476438 = gamma_board(board);
assert( board523476438 != NULL );
assert( strcmp(board523476438, 
"1322333.4.43431\n"
"3.4243431142311\n"
"322.211.44..132\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.32.4.4\n"
"1111.1313331123\n"
"13.13..331..133\n"
"34422124143....\n") == 0);
free(board523476438);
board523476438 = NULL;
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );


char* board749986732 = gamma_board(board);
assert( board749986732 != NULL );
assert( strcmp(board749986732, 
"1322333.4.43431\n"
"3.4243431142311\n"
"322.211.44..132\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.3214.4\n"
"1111.1313331123\n"
"13.13..331..133\n"
"34422124143....\n") == 0);
free(board749986732);
board749986732 = NULL;
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );


char* board570382758 = gamma_board(board);
assert( board570382758 != NULL );
assert( strcmp(board570382758, 
"1322333.4.43431\n"
"3.4243431142311\n"
"322.211.44..132\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.321434\n"
"1111.1313331123\n"
"13.13..331..133\n"
"34422124143....\n") == 0);
free(board570382758);
board570382758 = NULL;
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );


char* board527013556 = gamma_board(board);
assert( board527013556 != NULL );
assert( strcmp(board527013556, 
"1342333.4.43431\n"
"3.4243431142311\n"
"322.211.44..132\n"
"311.34.3..42124\n"
"22144.334.44.11\n"
".1224222.321434\n"
"1111.1313331123\n"
"13213..331..133\n"
"34422124143....\n") == 0);
free(board527013556);
board527013556 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_golden_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );


gamma_delete(board);

    return 0;
}
