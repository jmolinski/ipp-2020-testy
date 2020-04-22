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
uuid: 335584987
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 13, 6, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 177 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );


char* board455913148 = gamma_board(board);
assert( board455913148 != NULL );
assert( strcmp(board455913148, 
"..........6...\n"
"..............\n"
".........1....\n"
"........6.....\n"
".....4........\n"
"........1.6...\n"
".......1.....4\n"
"2.2...........\n"
"......5....5..\n"
"........2.....\n"
".....3........\n"
"..............\n"
".............1\n") == 0);
free(board455913148);
board455913148 = NULL;
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );


char* board429646565 = gamma_board(board);
assert( board429646565 != NULL );
assert( strcmp(board429646565, 
"..........6...\n"
"..............\n"
".........1....\n"
"........6.....\n"
".....4........\n"
"........1.6...\n"
".......1.....4\n"
"2.2...2.......\n"
"......5....5..\n"
"........23....\n"
".....3........\n"
"..............\n"
".............1\n") == 0);
free(board429646565);
board429646565 = NULL;
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board114722614 = gamma_board(board);
assert( board114722614 != NULL );
assert( strcmp(board114722614, 
"..........6...\n"
".1............\n"
".4.1.....1....\n"
"........6.....\n"
".....4....6...\n"
"...1....1.6...\n"
".......1...1.4\n"
"2.23..2....4.2\n"
"......5...65..\n"
"....1...23....\n"
".....3...5.6..\n"
"..........4...\n"
"4............1\n") == 0);
free(board114722614);
board114722614 = NULL;
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board857344564 = gamma_board(board);
assert( board857344564 != NULL );
assert( strcmp(board857344564, 
"..........6...\n"
".1............\n"
"54.1.....1....\n"
"........6.....\n"
".....4....6...\n"
"...1....1.6.6.\n"
".......1...1.4\n"
"2.23..2....4.2\n"
"......5...65..\n"
"....1...23....\n"
".1..53...5.6..\n"
"..........4...\n"
"4............1\n") == 0);
free(board857344564);
board857344564 = NULL;
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );


char* board757401687 = gamma_board(board);
assert( board757401687 != NULL );
assert( strcmp(board757401687, 
"..........6...\n"
".1............\n"
"54.1.....1....\n"
"........6.....\n"
".....4....6...\n"
"...1....1.6.6.\n"
"......61...1.4\n"
"2.23..2....4.2\n"
"......5...65..\n"
"....1...23....\n"
".1..53...5.6..\n"
"..........4.6.\n"
"4............1\n") == 0);
free(board757401687);
board757401687 = NULL;
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 143 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_free_fields(board, 1) == 137 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 130 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 125 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );


char* board457564115 = gamma_board(board);
assert( board457564115 != NULL );
assert( strcmp(board457564115, 
"..3..3....6..2\n"
"61.46.....1...\n"
"54.1.....1...5\n"
".13.1...61....\n"
"4....46..463..\n"
"...1....1.6.64\n"
"..5...61..31.4\n"
"2.532.2.25.4.2\n"
"2.15..5.2.654.\n"
"....122.23.5.1\n"
".14.53.1.5.6.2\n"
".55.6.....4.6.\n"
"4.23...432...1\n") == 0);
free(board457564115);
board457564115 = NULL;
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_free_fields(board, 6) == 96 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );


char* board837977092 = gamma_board(board);
assert( board837977092 != NULL );
assert( strcmp(board837977092, 
"..3..32...6..2\n"
"61.46.....1...\n"
"54.1.....1..55\n"
".13.1...61..3.\n"
"4....46..463..\n"
"...1....1.6.64\n"
"..5...61..31.4\n"
"2.53262.25.422\n"
"2.155.5.2.654.\n"
"....12222365.1\n"
".14.53.1.5.6.2\n"
".55.6.43..4.6.\n"
"4.23...432...1\n") == 0);
free(board837977092);
board837977092 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 89 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_free_fields(board, 4) == 83 );


char* board984429528 = gamma_board(board);
assert( board984429528 != NULL );
assert( strcmp(board984429528, 
"..3..324..6..2\n"
"61.46.....1...\n"
"5421.3.3.1..55\n"
".13.1...61..3.\n"
"44...46.6463..\n"
"...1....1.6.64\n"
"..5...61..31.4\n"
"2.53262.25.422\n"
"2.155.5.2.654.\n"
"....12222365.1\n"
".14.53.1.5.6.2\n"
"355.6.43..4.64\n"
"4.23..2432...1\n") == 0);
free(board984429528);
board984429528 = NULL;
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );


char* board290856432 = gamma_board(board);
assert( board290856432 != NULL );
assert( strcmp(board290856432, 
"..36.324..62.2\n"
"61.46.....1...\n"
"5421.3.3.16.55\n"
".13.1...61..31\n"
"44...46.6463..\n"
"...1....166.64\n"
"..5...611.31.4\n"
"2.53262.25.422\n"
"22155.562.654.\n"
"....12222365.1\n"
"414.53.1.5.6.2\n"
"355.6.43..4.64\n"
"4.23..2432.5.1\n") == 0);
free(board290856432);
board290856432 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );


char* board210296521 = gamma_board(board);
assert( board210296521 != NULL );
assert( strcmp(board210296521, 
"..36.324..62.2\n"
"61.46....11..3\n"
"5421.3.3.16.55\n"
".13.1...61..31\n"
"44...46.6463..\n"
"...1....166664\n"
"..5...611.31.4\n"
"2.53262.25.422\n"
"22155.562.654.\n"
"....12222365.1\n"
"414.53.1.5.6.2\n"
"355.6343..4.64\n"
"4.23..2432.5.1\n") == 0);
free(board210296521);
board210296521 = NULL;
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_golden_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );


char* board694787823 = gamma_board(board);
assert( board694787823 != NULL );
assert( strcmp(board694787823, 
"..36.3244.62.2\n"
"61.46....11..3\n"
"5421.3.3216.55\n"
"513.1...61..31\n"
"445..46.6463.4\n"
"5..11...166664\n"
"..5...611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..2.1222236551\n"
"414653.1.5.6.2\n"
"35536343..4.64\n"
"4.23..24321511\n") == 0);
free(board694787823);
board694787823 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 24 );


char* board579050283 = gamma_board(board);
assert( board579050283 != NULL );
assert( strcmp(board579050283, 
"..36.3244.62.2\n"
"61.46....11..3\n"
"5421.3.3216.55\n"
"513.1...615.31\n"
"445..46.6463.4\n"
"5..11...166664\n"
"..5...611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"414653.1.5.6.2\n"
"35536343..4.64\n"
"4.23..24321511\n") == 0);
free(board579050283);
board579050283 = NULL;
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );


char* board418820128 = gamma_board(board);
assert( board418820128 != NULL );
assert( strcmp(board418820128, 
"..36.3244.62.2\n"
"61.46....11..3\n"
"5421.3.3216.55\n"
"513.1...615.31\n"
"445..46.6463.4\n"
"5..11...166664\n"
"..5...611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"414653.1.5.6.2\n"
"35536343..4.64\n"
"4.23..24321511\n") == 0);
free(board418820128);
board418820128 = NULL;
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board971384504 = gamma_board(board);
assert( board971384504 != NULL );
assert( strcmp(board971384504, 
"..36.3244.62.2\n"
"61.46....11..3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"..5.5.611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"414653.1.5.6.2\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board971384504);
board971384504 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board984668651 = gamma_board(board);
assert( board984668651 != NULL );
assert( strcmp(board984668651, 
"..36.3244262.2\n"
"61.46....11..3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"..5.5.611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"414653.1.5.6.2\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board984668651);
board984668651 = NULL;
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );


char* board292046893 = gamma_board(board);
assert( board292046893 != NULL );
assert( strcmp(board292046893, 
"..36.3244262.2\n"
"61.46....11..3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"414653.1.5.6.2\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board292046893);
board292046893 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board209691177 = gamma_board(board);
assert( board209691177 != NULL );
assert( strcmp(board209691177, 
"..36.3244262.2\n"
"61.46....11..3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
"..221222236551\n"
"444653.1.5.6.2\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board209691177);
board209691177 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 2, 8) == 0 );


char* board909475950 = gamma_board(board);
assert( board909475950 != NULL );
assert( strcmp(board909475950, 
"..36.3244262.2\n"
"61.46.4..11..3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"22155.562.654.\n"
".2121222236551\n"
"444653.1.5.6.2\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board909475950);
board909475950 = NULL;
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_golden_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_golden_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );


char* board354626743 = gamma_board(board);
assert( board354626743 != NULL );
assert( strcmp(board354626743, 
"..36.3244262.2\n"
"61.46.4..112.3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"22155.5625654.\n"
"22121222236551\n"
"444653.1.5.662\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board354626743);
board354626743 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 13 );


char* board134709565 = gamma_board(board);
assert( board134709565 != NULL );
assert( strcmp(board134709565, 
"..36.3244262.2\n"
"61.46.4..112.3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11...166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"2215515625654.\n"
"22121222236551\n"
"444653.1.5.662\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board134709565);
board134709565 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );


char* board482427413 = gamma_board(board);
assert( board482427413 != NULL );
assert( strcmp(board482427413, 
"..36.3244262.2\n"
"61.46.4..112.3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11..6166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"2215515625654.\n"
"22121222236551\n"
"444653.1.5.662\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board482427413);
board482427413 = NULL;
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );


char* board887871206 = gamma_board(board);
assert( board887871206 != NULL );
assert( strcmp(board887871206, 
"..36.3244262.2\n"
"61.46.4..112.3\n"
"542113.3216.55\n"
"513.1...615.31\n"
"445..46.646364\n"
"5..11..6166664\n"
"2.5.5.611631.4\n"
"2.53262625.422\n"
"2215515625654.\n"
"22121222236551\n"
"444653.1.5.662\n"
"35536343..4464\n"
"4.235124321511\n") == 0);
free(board887871206);
board887871206 = NULL;
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_golden_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


gamma_delete(board);

    return 0;
}
