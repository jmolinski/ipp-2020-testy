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
uuid: 230234456
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 5, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_free_fields(board, 1) == 224 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 216 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 2, 7, 14) == 1 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 187 );
assert( gamma_move(board, 3, 14, 12) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_golden_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );


char* board868166787 = gamma_board(board);
assert( board868166787 != NULL );
assert( strcmp(board868166787, 
"..1..2.2.......\n"
".......3..5.2..\n"
"...4.2..5252..3\n"
"........4......\n"
".51..1....4....\n"
"....5.33.......\n"
"....4.....5.4..\n"
"....4..11......\n"
"....4.....5....\n"
"11..3.......1..\n"
"....4...5..53.1\n"
"5.1..2..42...2.\n"
"..2..2.3.......\n"
"....4..........\n"
"...........2...\n") == 0);
free(board868166787);
board868166787 = NULL;
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 171 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 5, 14, 13) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 159 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );


char* board880699144 = gamma_board(board);
assert( board880699144 != NULL );
assert( strcmp(board880699144, 
"..1..2.2...3...\n"
"..45.4.3.15.2.5\n"
"5..4.2..52522.3\n"
".....1..4.2...3\n"
".51..1....4.3.4\n"
"....5.33...1...\n"
"....4...3.5.4.4\n"
".2..4.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"5..243..5..53.1\n"
"5.1..25.424..2.\n"
"..2..233.3.2...\n"
"1.4.4......22..\n"
"5.4.5......2.3.\n") == 0);
free(board880699144);
board880699144 = NULL;
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_free_fields(board, 1) == 132 );
assert( gamma_golden_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 118 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );


char* board823079912 = gamma_board(board);
assert( board823079912 != NULL );
assert( strcmp(board823079912, 
"..1..2.2...3..1\n"
"..45.4.331532.5\n"
"5..4.2..52522.3\n"
"...3.1.44.2...3\n"
".51..1....43344\n"
".5..5533...1..1\n"
".2..4.3.3.5.4.4\n"
".2..4.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5..53.1\n"
"5.1.425.424..21\n"
"..2..233.3.21..\n"
"1.4.4......22..\n"
"5.4.5...3..2.3.\n") == 0);
free(board823079912);
board823079912 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board558554591 = gamma_board(board);
assert( board558554591 != NULL );
assert( strcmp(board558554591, 
"..1..2.2...3..1\n"
"..45.4.331532.5\n"
"5..4.2..52522.3\n"
"...3.1.44.2...3\n"
".51..1....43344\n"
".5..5533...1..1\n"
".2..4.3.3.5.4.4\n"
".2.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5..53.1\n"
"5.1.425.424..21\n"
"..2..233.3.21..\n"
"1.4.4......22..\n"
"5.4.5...3..2.3.\n") == 0);
free(board558554591);
board558554591 = NULL;
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 14) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );


char* board736183921 = gamma_board(board);
assert( board736183921 != NULL );
assert( strcmp(board736183921, 
"..15.2.2...3..1\n"
"544554.331532.5\n"
"5..4.2..5252223\n"
"...3.1.44.2...3\n"
".51..1....43344\n"
".5..5533...1..1\n"
".2..4.3.3.5.4.4\n"
".2.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5..53.1\n"
"5.14425.424..21\n"
"..2..233.3.21..\n"
"1.4.4......22..\n"
"5.4.5...3..233.\n") == 0);
free(board736183921);
board736183921 = NULL;
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_free_fields(board, 5) == 33 );


char* board442934208 = gamma_board(board);
assert( board442934208 != NULL );
assert( strcmp(board442934208, 
"5.15.2.2...3..1\n"
"544554.331532.5\n"
"5..4.2..5252223\n"
"...3.1.44.23..3\n"
".51..1....43344\n"
".5..5533..11..1\n"
".2..4.3.3.5.4.4\n"
".2.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5.453.1\n"
"5.14425.424..21\n"
"..2..233.3.21..\n"
"1.4.4......22..\n"
"5.4.5...3..233.\n") == 0);
free(board442934208);
board442934208 = NULL;
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );


char* board405551363 = gamma_board(board);
assert( board405551363 != NULL );
assert( strcmp(board405551363, 
"5.15.2.2...3..1\n"
"544554.331532.5\n"
"5..442..5252223\n"
"...3.1.44.23..3\n"
".51..1....43444\n"
".5..5533..11..1\n"
".22.4.3.355.4.4\n"
"22.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5.45311\n"
"5.14425.424.221\n"
"..2..233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board405551363);
board405551363 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );


char* board216801081 = gamma_board(board);
assert( board216801081 != NULL );
assert( strcmp(board216801081, 
"5.15.2.2...3..1\n"
"544554.331532.5\n"
"5..442..5252223\n"
"...3.1144.23..3\n"
".51..1....43444\n"
".5..5533..11..1\n"
".22.4.3.355.4.4\n"
"22.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5.45311\n"
"5.14425.424.221\n"
".42..233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board216801081);
board216801081 = NULL;
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );


char* board171178941 = gamma_board(board);
assert( board171178941 != NULL );
assert( strcmp(board171178941, 
"5115.2.2...3..1\n"
"544554.331532.5\n"
"5..542..5252223\n"
"...3.1144.23..3\n"
".51..1....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243..5.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board171178941);
board171178941 = NULL;
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_golden_move(board, 1, 13, 10) == 0 );


char* board283857503 = gamma_board(board);
assert( board283857503 != NULL );
assert( strcmp(board283857503, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542..5252223\n"
"...3.1144.23..3\n"
".51..1....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.311.2.5..\n"
"....41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board283857503);
board283857503 = NULL;
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_golden_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_golden_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );


char* board467593077 = gamma_board(board);
assert( board467593077 != NULL );
assert( strcmp(board467593077, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542..5252223\n"
".5.3.1144.23..3\n"
".51..1....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board467593077);
board467593077 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );


char* board226561284 = gamma_board(board);
assert( board226561284 != NULL );
assert( strcmp(board226561284, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542..5252223\n"
".5.3.1144.23..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board226561284);
board226561284 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 11) == 1 );


char* board625835729 = gamma_board(board);
assert( board625835729 != NULL );
assert( strcmp(board625835729, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board625835729);
board625835729 = NULL;
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );


char* board359486536 = gamma_board(board);
assert( board359486536 != NULL );
assert( strcmp(board359486536, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board359486536);
board359486536 = NULL;
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );


char* board874427887 = gamma_board(board);
assert( board874427887 != NULL );
assert( strcmp(board874427887, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board874427887);
board874427887 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );


char* board914281059 = gamma_board(board);
assert( board914281059 != NULL );
assert( strcmp(board914281059, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board914281059);
board914281059 = NULL;
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


char* board591303925 = gamma_board(board);
assert( board591303925 != NULL );
assert( strcmp(board591303925, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board591303925);
board591303925 = NULL;
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_free_fields(board, 4) == 33 );


char* board738156144 = gamma_board(board);
assert( board738156144 != NULL );
assert( strcmp(board738156144, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board738156144);
board738156144 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board964907541 = gamma_board(board);
assert( board964907541 != NULL );
assert( strcmp(board964907541, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5..5533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board964907541);
board964907541 = NULL;
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 30 );


char* board799280519 = gamma_board(board);
assert( board799280519 != NULL );
assert( strcmp(board799280519, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5.55533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board799280519);
board799280519 = NULL;
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 5) == 30 );


char* board470982928 = gamma_board(board);
assert( board470982928 != NULL );
assert( strcmp(board470982928, 
"5115.2.2...3..1\n"
"544554.33153225\n"
"5..542.35252223\n"
".5.3.1144423..3\n"
".51.51....43444\n"
".5.55533..11.11\n"
".22.4.3.355.4.4\n"
"22.34.31112.5..\n"
"1...41....5.4.4\n"
"11..32.21...1..\n"
"53.243.45.45311\n"
"5.14425.424.221\n"
".42.4233.3.21..\n"
"144.443....22..\n"
"5.4.55..3..2333\n") == 0);
free(board470982928);
board470982928 = NULL;
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );


gamma_delete(board);

    return 0;
}
