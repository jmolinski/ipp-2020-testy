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
uuid: 194397301
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 7, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_free_fields(board, 5) == 218 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_free_fields(board, 1) == 215 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_golden_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 14) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 13, 14) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_golden_move(board, 7, 8, 14) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_free_fields(board, 5) == 153 );
assert( gamma_move(board, 6, 3, 7) == 0 );


char* board502874741 = gamma_board(board);
assert( board502874741 != NULL );
assert( strcmp(board502874741, 
".1.7....77...6.\n"
"2...2.1.......4\n"
".4.5......15...\n"
"3..5...726.5...\n"
"6.......4....55\n"
"....4.276273...\n"
".17...3..4..4.5\n"
"...276....6....\n"
".............4.\n"
"..6.53..5.4...3\n"
"...7.....46....\n"
".....42.4.4...6\n"
".6.3..21...7...\n"
"3...1....5.2.3.\n"
"...66.124.2..3.\n") == 0);
free(board502874741);
board502874741 = NULL;
assert( gamma_move(board, 7, 6, 14) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board378814856 = gamma_board(board);
assert( board378814856 != NULL );
assert( strcmp(board378814856, 
".1.7..7.77...6.\n"
"2...2.1.......4\n"
".4.5......15...\n"
"3..5...726.5...\n"
"61......4....55\n"
"....4.276273...\n"
".17...3..4..4.5\n"
"...276....6....\n"
".............4.\n"
"..6.53..5.4...3\n"
"...7.....46....\n"
".....42.4.4...6\n"
".6.3..21...7...\n"
"3...1....5.2.3.\n"
"...66.124.2..3.\n") == 0);
free(board378814856);
board378814856 = NULL;
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_free_fields(board, 3) == 149 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 146 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 12, 9) == 1 );
assert( gamma_free_fields(board, 7) == 144 );


char* board746915093 = gamma_board(board);
assert( board746915093 != NULL );
assert( strcmp(board746915093, 
".1.7..7.77...6.\n"
"2...2.12......4\n"
".4.5......15...\n"
"3..5...726.5...\n"
"61......4....55\n"
"....4.2762737..\n"
".17...3.74..4.5\n"
"...276....6....\n"
"....5........4.\n"
"..6.53..5.4...3\n"
"...7.....46.3..\n"
".....42.4.4..46\n"
".6.3..21.6.7...\n"
"3...1....5.2.3.\n"
"...66.124.2..3.\n") == 0);
free(board746915093);
board746915093 = NULL;
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_free_fields(board, 7) == 136 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 133 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 2) == 130 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_free_fields(board, 7) == 129 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_free_fields(board, 1) == 122 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_free_fields(board, 2) == 122 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_free_fields(board, 2) == 112 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_golden_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_free_fields(board, 6) == 94 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_free_fields(board, 3) == 85 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );


char* board243523518 = gamma_board(board);
assert( board243523518 != NULL );
assert( strcmp(board243523518, 
".1.7..7.77.3361\n"
"2.5.2.12.15...4\n"
"44.5.2.35.1562.\n"
"3.45251726251..\n"
"61...3..4..4.55\n"
"..224.2762737..\n"
".1757.3.74..475\n"
"1..2761.5.6..24\n"
"..3.534...6.44.\n"
".66153..5742.63\n"
"..576422.46.3.1\n"
"31.2.42.454..46\n"
"76.3.121.6476.7\n"
"3.451..435.2.3.\n"
"63366.12452..32\n") == 0);
free(board243523518);
board243523518 = NULL;
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_golden_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 14, 12) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board212818473 = gamma_board(board);
assert( board212818473 != NULL );
assert( strcmp(board212818473, 
".1.7..7.77.3361\n"
"2.5.2.12.15...4\n"
"44.5.2.35.15627\n"
"3.45251726251..\n"
"61...3..4..4.55\n"
"..124.2762737..\n"
".1757.3.74..475\n"
"1..2761.5.6..24\n"
"..3.534...6.44.\n"
".66153..5742.63\n"
"..576422.46.3.1\n"
"31.2.42.454..46\n"
"76.3.121.6476.7\n"
"3.451..435.2.3.\n"
"63366.12452..32\n") == 0);
free(board212818473);
board212818473 = NULL;
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );


char* board844376238 = gamma_board(board);
assert( board844376238 != NULL );
assert( strcmp(board844376238, 
".1.7..7.77.3361\n"
"2.5.2.12.15...4\n"
"44.552.35.15627\n"
"3.45251726251..\n"
"61...3..4..4.55\n"
"..124.2762737..\n"
".1757.3.74..475\n"
"1..2761.5.6..24\n"
"..3.534...6.44.\n"
".66153..5742.63\n"
"..576422.46.3.1\n"
"31.2.42.454..46\n"
"76.3.121.6476.7\n"
"3.451..435.233.\n"
"63366.12452..32\n") == 0);
free(board844376238);
board844376238 = NULL;
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 7, 12, 2) == 0 );


char* board919802298 = gamma_board(board);
assert( board919802298 != NULL );
assert( strcmp(board919802298, 
".1.7..7.77.3361\n"
"2.5.2.12.15...4\n"
"44.552.35.15627\n"
"3.45251726251..\n"
"61...3..4..4.55\n"
"..124.2766737..\n"
"11757.3.74..475\n"
"1..2761.5.6..24\n"
"..3.534...6444.\n"
".66153..5742.63\n"
"..576422.46.3.1\n"
"31.2.42.454..46\n"
"76.3.121.6476.7\n"
"31451..435.233.\n"
"63366.12452..32\n") == 0);
free(board919802298);
board919802298 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );


char* board247592005 = gamma_board(board);
assert( board247592005 != NULL );
assert( strcmp(board247592005, 
".1.7..7.77.3361\n"
"2.5.2.12.15...4\n"
"44.552.35.15627\n"
"3.45251726251..\n"
"61...3..4..4.55\n"
"..124.2766737..\n"
"11757.3.74..475\n"
"1..2761.5.6..24\n"
"..3.534...6444.\n"
".66153..5742.63\n"
"..576422.46.3.1\n"
"31.2142.454..46\n"
"76.3.121.6476.7\n"
"31451..435.233.\n"
"63366.12452..32\n") == 0);
free(board247592005);
board247592005 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 14, 1) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 11, 13) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 9, 13) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board811395335 = gamma_board(board);
assert( board811395335 != NULL );
assert( strcmp(board811395335, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737..\n"
"11757.3.74..475\n"
"17.2761.5.6..24\n"
"..3.534...6444.\n"
"766153..5742.63\n"
"..576422.46.3.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366.12452..32\n") == 0);
free(board811395335);
board811395335 = NULL;
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );


char* board388427293 = gamma_board(board);
assert( board388427293 != NULL );
assert( strcmp(board388427293, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737..\n"
"11757.3.74..475\n"
"17.2761.5.6..24\n"
"..3.534...6444.\n"
"766153..5742.63\n"
"..576422.46.3.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366.12452..32\n") == 0);
free(board388427293);
board388427293 = NULL;
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board514379213 = gamma_board(board);
assert( board514379213 != NULL );
assert( strcmp(board514379213, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737..\n"
"11757.3.74..475\n"
"17.2761.5.6..24\n"
"..3.534...6444.\n"
"766153..5742763\n"
"..576422.46.3.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366512452..32\n") == 0);
free(board514379213);
board514379213 = NULL;
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 11) == 0 );


char* board310401538 = gamma_board(board);
assert( board310401538 != NULL );
assert( strcmp(board310401538, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737..\n"
"11757.3674..475\n"
"17.2761.5.6.424\n"
"..3.534...6444.\n"
"766153..5742763\n"
"..576422.4633.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366512452..32\n") == 0);
free(board310401538);
board310401538 = NULL;
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );


char* board292771561 = gamma_board(board);
assert( board292771561 != NULL );
assert( strcmp(board292771561, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737..\n"
"11757.36746.475\n"
"17.2761.5.6.424\n"
"..3.534...6444.\n"
"766153..5742763\n"
"..576422.4633.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366512452..32\n") == 0);
free(board292771561);
board292771561 = NULL;
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_golden_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_golden_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );


char* board355630471 = gamma_board(board);
assert( board355630471 != NULL );
assert( strcmp(board355630471, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251..\n"
"61.1.3..43.4.55\n"
"..12462766737.4\n"
"11757.36746.475\n"
"17.2761.5.6.424\n"
"..3.534...6444.\n"
"7661534.5742763\n"
"..576422.4633.1\n"
"3132142.4547446\n"
"76.3.121.6476.7\n"
"31451..435.2336\n"
"63366512452..32\n") == 0);
free(board355630471);
board355630471 = NULL;
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board221061980 = gamma_board(board);
assert( board221061980 != NULL );
assert( strcmp(board221061980, 
".157..7.77.3361\n"
"2.5.2312.155.34\n"
"44.552.35.15627\n"
"3.45252726251.7\n"
"61.1.3..43.4.55\n"
"..12462766737.4\n"
"11757.36746.475\n"
"17.2761.5.6.424\n"
"..3.534...64445\n"
"7661534.5742763\n"
"..576422.4633.1\n"
"3132142.4547446\n"
"76.3.121.647667\n"
"31451.5435.2336\n"
"63366512452..32\n") == 0);
free(board221061980);
board221061980 = NULL;
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );


gamma_delete(board);

    return 0;
}
