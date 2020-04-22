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
uuid: 939793269
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 12, 8, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 155 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_golden_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board537782696 = gamma_board(board);
assert( board537782696 != NULL );
assert( strcmp(board537782696, 
".............\n"
"..1..........\n"
".............\n"
".............\n"
"...7....7....\n"
".............\n"
".............\n"
"..2.1......8.\n"
"...........3.\n"
".............\n"
"......3....5.\n"
".............\n") == 0);
free(board537782696);
board537782696 = NULL;
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );


char* board295494069 = gamma_board(board);
assert( board295494069 != NULL );
assert( strcmp(board295494069, 
"..2..........\n"
"..1..........\n"
".............\n"
".............\n"
"...7....7....\n"
".............\n"
"............3\n"
"..2.1......8.\n"
"...........3.\n"
".............\n"
"......3....5.\n"
".............\n") == 0);
free(board295494069);
board295494069 = NULL;
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_free_fields(board, 4) == 145 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 124 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_free_fields(board, 2) == 122 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 118 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 6, 12) == 0 );


char* board528602468 = gamma_board(board);
assert( board528602468 != NULL );
assert( strcmp(board528602468, 
"..2...5......\n"
"6.1.........2\n"
".1...........\n"
"..........25.\n"
"8..723387....\n"
"5..7..4......\n"
".6.7763.7..73\n"
"..2.1.....48.\n"
"..4........3.\n"
"....8...2....\n"
".....438...51\n"
".6...........\n") == 0);
free(board528602468);
board528602468 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_free_fields(board, 8) == 107 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_free_fields(board, 1) == 106 );


char* board455175217 = gamma_board(board);
assert( board455175217 != NULL );
assert( strcmp(board455175217, 
"..2..55.4....\n"
"6.1.........2\n"
".1.....3.....\n"
"..........25.\n"
"8..723387...7\n"
"5..7..4..6...\n"
".6.7763.7..73\n"
"..2.1.....48.\n"
"..4.....8..3.\n"
"...68...2....\n"
"..17.438...51\n"
".6...1.......\n") == 0);
free(board455175217);
board455175217 = NULL;
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board661614463 = gamma_board(board);
assert( board661614463 != NULL );
assert( strcmp(board661614463, 
"..2..55.4....\n"
"6.1.........2\n"
".1.....3.2...\n"
"..........25.\n"
"8..723387...7\n"
"5..7..4..6...\n"
".6.7763.7..73\n"
"..2.1.3...48.\n"
"..4.....8..3.\n"
"...68...2....\n"
"..17.438...51\n"
".6...1.......\n") == 0);
free(board661614463);
board661614463 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 8, 9) == 0 );


char* board628819201 = gamma_board(board);
assert( board628819201 != NULL );
assert( strcmp(board628819201, 
".42..5514....\n"
"651.58.8..232\n"
".184.56362552\n"
"48..21..1.25.\n"
"8.472338743.7\n"
"5.77..4.5661.\n"
"76.7763.7..73\n"
"67211.3.8.486\n"
"..466..786.3.\n"
"676632..2...4\n"
"25175438.3851\n"
"8644.1..2..4.\n") == 0);
free(board628819201);
board628819201 = NULL;
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_golden_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board689960295 = gamma_board(board);
assert( board689960295 != NULL );
assert( strcmp(board689960295, 
".42..5514....\n"
"65155888.5232\n"
".184.56362552\n"
"48..21..1.25.\n"
"8.472338743.7\n"
"5.77..4.5661.\n"
"76.7763.7..73\n"
"67211.3.74486\n"
"..466..286.3.\n"
"676632..2...4\n"
"1517543823851\n"
"8644.1..28.4.\n") == 0);
free(board689960295);
board689960295 = NULL;
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );


char* board177615241 = gamma_board(board);
assert( board177615241 != NULL );
assert( strcmp(board177615241, 
".42..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"48..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"76.7763.7..73\n"
"6721133.74486\n"
"..4661.286.3.\n"
"676632..2..64\n"
"1517543823851\n"
"8644.1..28.4.\n") == 0);
free(board177615241);
board177615241 = NULL;
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );


char* board952797999 = gamma_board(board);
assert( board952797999 != NULL );
assert( strcmp(board952797999, 
".42..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"48..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"76.776327..73\n"
"6721133.74486\n"
"..4661.286.3.\n"
"676632..2..64\n"
"1517543823851\n"
"8644.1..28.4.\n") == 0);
free(board952797999);
board952797999 = NULL;
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );


char* board982988263 = gamma_board(board);
assert( board982988263 != NULL );
assert( strcmp(board982988263, 
".42..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"48..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"76.776327..73\n"
"6721133.74486\n"
"..4661.286.3.\n"
"676632..2..64\n"
"1517543823851\n"
"8644.1..28.4.\n") == 0);
free(board982988263);
board982988263 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_golden_move(board, 8, 1, 11) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );


char* board545392017 = gamma_board(board);
assert( board545392017 != NULL );
assert( strcmp(board545392017, 
".82..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"48..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"76.776327..73\n"
"6721133.74486\n"
"..4661.286.3.\n"
"676632..2.764\n"
"1517543823851\n"
"8644.1..28.4.\n") == 0);
free(board545392017);
board545392017 = NULL;
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );


char* board592340843 = gamma_board(board);
assert( board592340843 != NULL );
assert( strcmp(board592340843, 
".82..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"46..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"7667763271.73\n"
"6721133.74486\n"
"3.4661.28683.\n"
"676632..2.764\n"
"1517543823851\n"
"8644.1.82814.\n") == 0);
free(board592340843);
board592340843 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );


char* board580855729 = gamma_board(board);
assert( board580855729 != NULL );
assert( strcmp(board580855729, 
".82..5514..8.\n"
"65155848.5232\n"
".184.56362552\n"
"46..21..1.254\n"
"81472338743.7\n"
"5.77..4.5661.\n"
"7667763271.73\n"
"6721133.74486\n"
"3.4661828683.\n"
"676632..2.764\n"
"1517543823851\n"
"8644.1.82814.\n") == 0);
free(board580855729);
board580855729 = NULL;
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_move(board, 8, 2, 5) == 0 );


gamma_delete(board);

    return 0;
}
