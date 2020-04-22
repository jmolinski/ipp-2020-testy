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
uuid: 343665476
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 18, 8, 35);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_free_fields(board, 1) == 216 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_free_fields(board, 6) == 209 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_free_fields(board, 7) == 207 );
assert( gamma_move(board, 8, 5, 10) == 1 );


char* board959661249 = gamma_board(board);
assert( board959661249 != NULL );
assert( strcmp(board959661249, 
"............\n"
".......6....\n"
"............\n"
"............\n"
"............\n"
"..7.........\n"
"....3.......\n"
"..6..8......\n"
"............\n"
"..........2.\n"
".......5....\n"
".....2.....7\n"
"..4.........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board959661249);
board959661249 = NULL;
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 3, 1, 17) == 1 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 8, 12) == 1 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 10, 17) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 4, 6, 14) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );


char* board270059531 = gamma_board(board);
assert( board270059531 != NULL );
assert( strcmp(board270059531, 
".3........6.\n"
".......6....\n"
"............\n"
"......4.....\n"
".......41...\n"
"..7.....8...\n"
"...63.4.....\n"
".36.38......\n"
"............\n"
"1...2.....24\n"
"......15.2..\n"
"8.7..22..1.7\n"
"..4264.....5\n"
".3..........\n"
"............\n"
"...5......2.\n"
"6.7........3\n"
"...3.2....6.\n") == 0);
free(board270059531);
board270059531 = NULL;
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 7, 15) == 1 );
assert( gamma_free_fields(board, 7) == 169 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_free_fields(board, 1) == 168 );
assert( gamma_move(board, 2, 7, 8) == 1 );


char* board434547889 = gamma_board(board);
assert( board434547889 != NULL );
assert( strcmp(board434547889, 
".3........6.\n"
".......6....\n"
".......7....\n"
"......4.....\n"
"1......41...\n"
"..7.....8...\n"
"...63.4.....\n"
".36.38......\n"
"..........2.\n"
"1...2..25.24\n"
"......15.2..\n"
"8.7..22..1.7\n"
"..4264.....5\n"
"63.7........\n"
"............\n"
"...5......2.\n"
"6.7........3\n"
"...3.2....6.\n") == 0);
free(board434547889);
board434547889 = NULL;
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 2, 17) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_free_fields(board, 1) == 153 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 0, 17) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 152 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_free_fields(board, 5) == 151 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_golden_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_golden_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 1, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 140 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_free_fields(board, 8) == 134 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 15, 9) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_golden_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_free_fields(board, 6) == 126 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 5) == 1 );


char* board413387184 = gamma_board(board);
assert( board413387184 != NULL );
assert( strcmp(board413387184, 
"437....1..6.\n"
".4.....6....\n"
".......7..4.\n"
"......4.....\n"
"18....141...\n"
"..7.....8...\n"
"3..63.4265..\n"
".36638....63\n"
"26.74..1..2.\n"
"1...2..25124\n"
"72.7..15.25.\n"
"8674.22.21.7\n"
"..4264..6.25\n"
"63.7..5.....\n"
"51..8...41..\n"
"73.5..6.552.\n"
"6.7...2....3\n"
".5.3.2...16.\n") == 0);
free(board413387184);
board413387184 = NULL;
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 8, 2, 15) == 1 );
assert( gamma_golden_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 16, 5) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 17, 8) == 0 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 16, 4) == 0 );
assert( gamma_move(board, 8, 16, 6) == 0 );
assert( gamma_move(board, 8, 6, 14) == 0 );
assert( gamma_golden_move(board, 8, 17, 2) == 0 );
assert( gamma_move(board, 1, 5, 17) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_free_fields(board, 4) == 106 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );


char* board786320520 = gamma_board(board);
assert( board786320520 != NULL );
assert( strcmp(board786320520, 
"437..1.1..6.\n"
".4.....6....\n"
"4.8.4..7..4.\n"
".4....4.....\n"
"18....141...\n"
"7.7.....8...\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.74..1.62.\n"
"123.2..25124\n"
"72.7..15.258\n"
"8674.22.21.7\n"
"234264666.25\n"
"63.7..5.....\n"
"51..81..41..\n"
"73.5..6.5527\n"
"6.7...216.63\n"
"85.3.2...16.\n") == 0);
free(board786320520);
board786320520 = NULL;
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );


char* board676722401 = gamma_board(board);
assert( board676722401 != NULL );
assert( strcmp(board676722401, 
"437..1.1..6.\n"
".4.7...6....\n"
"4.8.4..7..4.\n"
".4....4.....\n"
"18....141...\n"
"7.7.....85..\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.743.1762.\n"
"123.2..25124\n"
"72.7..15.258\n"
"8674.22.2147\n"
"234264666.25\n"
"63.7..5.....\n"
"51.581..41..\n"
"73.5..6.5527\n"
"6.7...216.63\n"
"85.3.2...16.\n") == 0);
free(board676722401);
board676722401 = NULL;
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 4, 17) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_free_fields(board, 7) == 95 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_free_fields(board, 8) == 95 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 15) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_move(board, 8, 7, 17) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );


char* board251253504 = gamma_board(board);
assert( board251253504 != NULL );
assert( strcmp(board251253504, 
"437.61.1..6.\n"
".457...6....\n"
"4.864..7..4.\n"
".4....4.....\n"
"18..5.141...\n"
"7.7.....85.3\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.7..15.258\n"
"8674.22.2147\n"
"234264666.25\n"
"63.7..5.....\n"
"51.581..41..\n"
"73.5..6.5527\n"
"6.7...216.63\n"
"85.3.2...16.\n") == 0);
free(board251253504);
board251253504 = NULL;
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_free_fields(board, 8) == 89 );
assert( gamma_move(board, 1, 16, 10) == 0 );


char* board887699606 = gamma_board(board);
assert( board887699606 != NULL );
assert( strcmp(board887699606, 
"437.61.1..6.\n"
".457...6....\n"
"4.864..7..4.\n"
".4....4.....\n"
"18..5.141...\n"
"7.7.....85.3\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.78.15.258\n"
"8674.22.2147\n"
"234264666.25\n"
"63.7..5.....\n"
"51.581..41..\n"
"73.5..6.5527\n"
"6.7...216.63\n"
"85.3.2...16.\n") == 0);
free(board887699606);
board887699606 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );


char* board739886790 = gamma_board(board);
assert( board739886790 != NULL );
assert( strcmp(board739886790, 
"437.61.1..6.\n"
".457...6....\n"
"4.864437..4.\n"
"54....4.....\n"
"18..5.141...\n"
"7.7.....85.3\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.78.15.258\n"
"8674.22.2147\n"
"234264666.25\n"
"63.7..5.....\n"
"51.581..41..\n"
"73.5..6.5527\n"
"627...216.63\n"
"85.3.2...16.\n") == 0);
free(board739886790);
board739886790 = NULL;
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 8, 17, 9) == 0 );
assert( gamma_move(board, 8, 7, 14) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_golden_move(board, 8, 17, 4) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 11, 16) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );


char* board787541877 = gamma_board(board);
assert( board787541877 != NULL );
assert( strcmp(board787541877, 
"437.61.1..6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54....483...\n"
"18.45.141...\n"
"7.7.....8513\n"
"3..63.4265..\n"
"236638..3.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.78615.258\n"
"8674722.2147\n"
"234264666.25\n"
"6367..5....2\n"
"511581..41..\n"
"73.5..6.5527\n"
"627...216.63\n"
"85.3.2...16.\n") == 0);
free(board787541877);
board787541877 = NULL;
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 8, 17) == 1 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 4, 14) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );


char* board727608391 = gamma_board(board);
assert( board727608391 != NULL );
assert( strcmp(board727608391, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.45.141...\n"
"7.7.....8513\n"
"3..6334265..\n"
"236638.23.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.78615.258\n"
"8674722.2147\n"
"234264666.25\n"
"63672.5....2\n"
"511581..41..\n"
"7355..6.5527\n"
"627...216.63\n"
"85.3.2...162\n") == 0);
free(board727608391);
board727608391 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 6, 14) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 16, 8) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 17, 11) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );


char* board546305207 = gamma_board(board);
assert( board546305207 != NULL );
assert( strcmp(board546305207, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.45.141...\n"
"7.72....8513\n"
"3..6334265.2\n"
"236638723.63\n"
"26.74361762.\n"
"123.2..25124\n"
"72.78615.258\n"
"8674722.2147\n"
"234264666.25\n"
"63672.5....2\n"
"511581..41..\n"
"7355..6.5527\n"
"627...216.63\n"
"85.3.2...162\n") == 0);
free(board546305207);
board546305207 = NULL;
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_golden_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 2, 4, 4) == 0 );


char* board555794942 = gamma_board(board);
assert( board555794942 != NULL );
assert( strcmp(board555794942, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.45.141...\n"
"7.72....8513\n"
"3..6334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2..25124\n"
"72.78615.258\n"
"8674722.2147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.41..\n"
"7355..6.5527\n"
"627...216.63\n"
"85.3.2.3.162\n") == 0);
free(board555794942);
board555794942 = NULL;
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_golden_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_move(board, 8, 1, 17) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );


char* board834868810 = gamma_board(board);
assert( board834868810 != NULL );
assert( strcmp(board834868810, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.45.141...\n"
"7.72....8513\n"
"36.6334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"724786152258\n"
"8674722.2147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.41..\n"
"7355..6.5527\n"
"627...216.63\n"
"85.3.2.3.162\n") == 0);
free(board834868810);
board834868810 = NULL;
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board470449009 = gamma_board(board);
assert( board470449009 != NULL );
assert( strcmp(board470449009, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.45.141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754786152258\n"
"8674722.2147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.41..\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.2.3.162\n") == 0);
free(board470449009);
board470449009 = NULL;
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 2, 15) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_golden_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board279077041 = gamma_board(board);
assert( board279077041 != NULL );
assert( strcmp(board279077041, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754786152258\n"
"8674722.2147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board279077041);
board279077041 = NULL;
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );


char* board576065259 = gamma_board(board);
assert( board576065259 != NULL );
assert( strcmp(board576065259, 
"437.61.13.6.\n"
".457...6...7\n"
"4.864437..4.\n"
"54..7.483...\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754786152258\n"
"8674722.2147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board576065259);
board576065259 = NULL;
assert( gamma_move(board, 7, 8, 16) == 1 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 8, 3, 16) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 5, 16) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_golden_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 17) == 1 );
assert( gamma_golden_move(board, 6, 17, 0) == 0 );
assert( gamma_move(board, 7, 2, 17) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 12, 5) == 0 );


char* board567302749 = gamma_board(board);
assert( board567302749 != NULL );
assert( strcmp(board567302749, 
"437.6141366.\n"
".457.2.67..7\n"
"4.864437..4.\n"
"54..74483...\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754786152258\n"
"867472262147\n"
"234264666525\n"
"63672.5....2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board567302749);
board567302749 = NULL;
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_golden_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 10, 14) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );


char* board166642072 = gamma_board(board);
assert( board166642072 != NULL );
assert( strcmp(board166642072, 
"437.6141366.\n"
".457.2.67..7\n"
"4.864437..4.\n"
"547.74483.5.\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754786152258\n"
"867472262147\n"
"234264666525\n"
"63672.58...2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board166642072);
board166642072 = NULL;
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 6, 16) == 1 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


char* board171487652 = gamma_board(board);
assert( board171487652 != NULL );
assert( strcmp(board171487652, 
"437.6141366.\n"
".457.2567..7\n"
"4.864437..4.\n"
"547.74483.5.\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754746152258\n"
"867472262147\n"
"234264666525\n"
"63672.58...2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board171487652);
board171487652 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );


char* board433003790 = gamma_board(board);
assert( board433003790 != NULL );
assert( strcmp(board433003790, 
"437.6141366.\n"
".457.2567..7\n"
"4.864437..4.\n"
"547.74483.5.\n"
"18.458141..3\n"
"7.72....8513\n"
"3666334265.2\n"
"238638723.63\n"
"26174361762.\n"
"123.2.525124\n"
"754746152258\n"
"867472262147\n"
"234264666525\n"
"63672.58...2\n"
"5115818.411.\n"
"7355..6.5527\n"
"627...216.63\n"
"8543.273.162\n") == 0);
free(board433003790);
board433003790 = NULL;
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 6, 6, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 15) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 8, 6, 16) == 0 );


gamma_delete(board);

    return 0;
}
