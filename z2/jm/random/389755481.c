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
uuid: 389755481
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 22, 8, 47);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 240 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 18) == 1 );
assert( gamma_move(board, 5, 7, 15) == 1 );
assert( gamma_move(board, 6, 19, 10) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 8, 20) == 1 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_free_fields(board, 4) == 226 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 0, 17) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_free_fields(board, 3) == 219 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 4, 16) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 2, 16) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 20, 7) == 0 );
assert( gamma_golden_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 19) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 5, 20) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 1, 17) == 1 );
assert( gamma_free_fields(board, 5) == 195 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 190 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 7, 17, 7) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 2, 20) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 0, 21) == 1 );
assert( gamma_free_fields(board, 2) == 186 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board595568195 = gamma_board(board);
assert( board595568195 != NULL );
assert( strcmp(board595568195, 
"2..........\n"
"..1..3..4..\n"
"1..........\n"
"......4....\n"
"75........4\n"
"..7.4......\n"
".......5...\n"
"...........\n"
"........3..\n"
"...4.......\n"
".6..34.....\n"
"3.1..3..6..\n"
"11..8272...\n"
".87.7....27\n"
"5...6.3..5.\n"
"......7.3..\n"
"3....5.5...\n"
".3........2\n"
".......71..\n"
"...8....8..\n"
"2...18.8..6\n"
"2...7..83..\n") == 0);
free(board595568195);
board595568195 = NULL;
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 6, 7, 18) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_golden_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );


char* board210133873 = gamma_board(board);
assert( board210133873 != NULL );
assert( strcmp(board210133873, 
"2..........\n"
"..1..3..4..\n"
"1..........\n"
"......46...\n"
"75........4\n"
"..7.4......\n"
".......5...\n"
"...........\n"
"....8...3..\n"
"...4.5....4\n"
".6..34.....\n"
"3.1..3..6..\n"
"11..8272..3\n"
".87.77...23\n"
"5...6.3..5.\n"
"......7.3..\n"
"3...15.5...\n"
".3..3.....2\n"
".2....7712.\n"
"...8....8..\n"
"2...18.8..6\n"
"2...7..83..\n") == 0);
free(board210133873);
board210133873 = NULL;
assert( gamma_move(board, 4, 21, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_free_fields(board, 5) == 175 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 9, 20) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 168 );
assert( gamma_move(board, 4, 1, 21) == 1 );
assert( gamma_move(board, 4, 7, 17) == 1 );
assert( gamma_move(board, 5, 19, 10) == 0 );
assert( gamma_move(board, 6, 21, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 9, 13) == 1 );


char* board901971658 = gamma_board(board);
assert( board901971658 != NULL );
assert( strcmp(board901971658, 
"24.........\n"
"..1..3..42.\n"
"1..........\n"
"......46...\n"
"75.....4..4\n"
"..7.4......\n"
".......5...\n"
"...........\n"
"....8...34.\n"
"...4.5....4\n"
".6..34.....\n"
"3.1..3..6..\n"
"11..8272..3\n"
".87.77...23\n"
"5...6.3115.\n"
".4....7.3..\n"
"3...15.5...\n"
".3.73.....2\n"
".2..8.77126\n"
"...8..8.8..\n"
"2...18.8..6\n"
"2...7..83..\n") == 0);
free(board901971658);
board901971658 = NULL;
assert( gamma_move(board, 5, 19, 10) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 7, 1, 20) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 21) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 20) == 1 );
assert( gamma_move(board, 6, 20, 3) == 0 );
assert( gamma_free_fields(board, 6) == 158 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 1, 15) == 1 );
assert( gamma_move(board, 8, 17, 8) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 155 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 8, 14) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 150 );
assert( gamma_move(board, 3, 3, 17) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 19, 9) == 0 );


char* board228991147 = gamma_board(board);
assert( board228991147 != NULL );
assert( strcmp(board228991147, 
"24...4.....\n"
".71.53..42.\n"
"1..........\n"
"......46...\n"
"75.3...4..4\n"
"..7.4......\n"
".7.....5...\n"
".....1..8..\n"
"....8.2.34.\n"
"...4.5....4\n"
".6..34.....\n"
"3.1..3..6..\n"
"11.482725.3\n"
".87.77..423\n"
"5...6.3115.\n"
".4....7.3..\n"
"3...15.5...\n"
".3.73.....2\n"
"32..8.77126\n"
".888..8.8..\n"
"2...18.8..6\n"
"2...78283..\n") == 0);
free(board228991147);
board228991147 = NULL;
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_free_fields(board, 7) == 148 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 8, 1, 19) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 3, 6, 20) == 1 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 10, 20) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 16, 0) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );


char* board749522020 = gamma_board(board);
assert( board749522020 != NULL );
assert( strcmp(board749522020, 
"24...4.....\n"
".71.533.426\n"
"18.........\n"
"......46...\n"
"75.3...4..4\n"
"..7.4......\n"
".7.....5...\n"
".....1..8..\n"
"....8.2.34.\n"
"...4453...4\n"
".6..34....3\n"
"3.1..3..62.\n"
"11.48272583\n"
".87.77..423\n"
"5...6.3115.\n"
".4....7.3..\n"
"3...15.5...\n"
".3.73.....2\n"
"32..8.77126\n"
".888..8.8..\n"
"21..18.8..6\n"
"2...78283..\n") == 0);
free(board749522020);
board749522020 = NULL;
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 17, 5) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 19, 2) == 0 );


char* board227132917 = gamma_board(board);
assert( board227132917 != NULL );
assert( strcmp(board227132917, 
"24...4.....\n"
".71.533.426\n"
"18.........\n"
"......46...\n"
"75.3...4..4\n"
"..7.4......\n"
".7.....5...\n"
".....1..8..\n"
"....8.2.34.\n"
"...4453...4\n"
".6..34....3\n"
"3.1..3..62.\n"
"11.48272583\n"
".87.77..423\n"
"5..86.3115.\n"
".4....7.3..\n"
"3...15.5...\n"
".3.73.....2\n"
"32..8.77126\n"
".888..8.8..\n"
"21..18.8..6\n"
"2...78283..\n") == 0);
free(board227132917);
board227132917 = NULL;
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_golden_move(board, 3, 21, 5) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_move(board, 6, 6, 18) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 21, 10) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_golden_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_free_fields(board, 3) == 131 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 4, 6, 16) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 16, 10) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board673904400 = gamma_board(board);
assert( board673904400 != NULL );
assert( strcmp(board673904400, 
"24...4.....\n"
".71.533.426\n"
"18.........\n"
"......46...\n"
"75.3..44..4\n"
"..7.4.4....\n"
".7.....5...\n"
".....1..8..\n"
"....8.2.34.\n"
".3.4453...4\n"
".6..34....3\n"
"3.1.73.462.\n"
"11.48272583\n"
".87.77..423\n"
"5..86.3115.\n"
".4..2.7.3.1\n"
"3...15.5..6\n"
".3.73.....2\n"
"32..8.77126\n"
".888..8.87.\n"
"21..1868.56\n"
"2...78283..\n") == 0);
free(board673904400);
board673904400 = NULL;
assert( gamma_move(board, 3, 19, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 4, 2, 21) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 16, 5) == 0 );
assert( gamma_move(board, 7, 3, 19) == 1 );
assert( gamma_move(board, 8, 10, 14) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 20, 3) == 0 );
assert( gamma_move(board, 7, 8, 17) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 120 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 116 );


char* board468653783 = gamma_board(board);
assert( board468653783 != NULL );
assert( strcmp(board468653783, 
"244..4.....\n"
".71.533.426\n"
"18.7.......\n"
"......46...\n"
"75.3..447.4\n"
".47.4.4....\n"
".7.....5...\n"
"..3..1..8.8\n"
"....8.2.34.\n"
".3.4453...4\n"
".6..34.2..3\n"
"3.1.73.4624\n"
"11.48272583\n"
".87.77..423\n"
"5..86.3115.\n"
".4..267.3.1\n"
"31..15.5..6\n"
".3.73..7..2\n"
"32..8.77126\n"
".888..8.87.\n"
"21..1868.56\n"
"2...78283..\n") == 0);
free(board468653783);
board468653783 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 0, 16) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 6, 4, 20) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 17, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 21, 10) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_golden_move(board, 4, 18, 7) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 19, 4) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 21) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_move(board, 6, 10, 15) == 1 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 8, 20, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 9, 18) == 1 );
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_free_fields(board, 4) == 105 );
assert( gamma_move(board, 5, 17, 2) == 0 );
assert( gamma_move(board, 6, 19, 9) == 0 );
assert( gamma_move(board, 6, 10, 13) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 18, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_free_fields(board, 3) == 102 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_free_fields(board, 4) == 102 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 15, 3) == 0 );
assert( gamma_move(board, 8, 4, 17) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 21, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 6, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 6, 3, 16) == 1 );
assert( gamma_move(board, 6, 9, 15) == 1 );
assert( gamma_move(board, 7, 6, 21) == 1 );
assert( gamma_move(board, 8, 20, 7) == 0 );
assert( gamma_move(board, 8, 2, 19) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_free_fields(board, 6) == 95 );
assert( gamma_golden_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 92 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 21) == 0 );
assert( gamma_move(board, 7, 18, 0) == 0 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 1, 10, 19) == 1 );


char* board950885677 = gamma_board(board);
assert( board950885677 != NULL );
assert( strcmp(board950885677, 
"244..47....\n"
".71.533.426\n"
"1887......1\n"
"......46.2.\n"
"75.38.447.4\n"
"84764.4....\n"
"57.....5.66\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".6..34.2.33\n"
"3.1.73.4624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"74..267.3.1\n"
"31..15.5.26\n"
".3.73..72.2\n"
"32..8.77126\n"
"48882.8.87.\n"
"21..1868.56\n"
"2.8.7828377\n") == 0);
free(board950885677);
board950885677 = NULL;
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 21) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_golden_move(board, 5, 20, 6) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 21, 10) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_move(board, 5, 9, 20) == 0 );


char* board219026172 = gamma_board(board);
assert( board219026172 != NULL );
assert( strcmp(board219026172, 
"244.247....\n"
".71.533.426\n"
"1887......1\n"
"......46.2.\n"
"75.38.447.4\n"
"84764.4....\n"
"57.....5.66\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".6..34.2.33\n"
"3.1.73.4624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"74..26773.1\n"
"31..15.5.26\n"
".3.73..72.2\n"
"32..8.77126\n"
"48882.8.87.\n"
"21..1868.56\n"
"2.8.7828377\n") == 0);
free(board219026172);
board219026172 = NULL;
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 21 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 9, 19) == 1 );
assert( gamma_move(board, 3, 5, 15) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 5, 9, 17) == 1 );
assert( gamma_free_fields(board, 5) == 80 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 1, 3, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_free_fields(board, 3) == 79 );


char* board108204358 = gamma_board(board);
assert( board108204358 != NULL );
assert( strcmp(board108204358, 
"244.247....\n"
".71.533.426\n"
"1887.....31\n"
"......46.2.\n"
"75.38.44754\n"
"84764.4....\n"
"57.1.3.5.66\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".6..34.2.33\n"
"3.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"74..26773.1\n"
"314.15.5.26\n"
".3.73..72.2\n"
"32..8.77126\n"
"48882.8287.\n"
"21..1868.56\n"
"2.8.7828377\n") == 0);
free(board108204358);
board108204358 = NULL;
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 20, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 19, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 8, 20) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 6, 17) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 75 );


char* board325035362 = gamma_board(board);
assert( board325035362 != NULL );
assert( strcmp(board325035362, 
"244.247....\n"
".71.533.426\n"
"1887.....31\n"
"......46.2.\n"
"75.38.44754\n"
"84764.4....\n"
"57.1.3.5.66\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".66.34.2.33\n"
"3.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"74..26773.1\n"
"314415.5.26\n"
".3.73..72.2\n"
"32..8377126\n"
"4888278287.\n"
"21..1868.56\n"
"2.8.7828377\n") == 0);
free(board325035362);
board325035362 = NULL;
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );


char* board462089409 = gamma_board(board);
assert( board462089409 != NULL );
assert( strcmp(board462089409, 
"244.247....\n"
".71.533.426\n"
"1887.....31\n"
"......46.2.\n"
"75.38.44754\n"
"84764.4....\n"
"57.1.3.5.66\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".66.34.2.33\n"
"3.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"74..2677321\n"
"314415.5.26\n"
".3.73..72.2\n"
"32..8377126\n"
"4888278287.\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board462089409);
board462089409 = NULL;
assert( gamma_move(board, 8, 1, 18) == 1 );
assert( gamma_busy_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 4, 0, 21) == 0 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_golden_move(board, 8, 0, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );


char* board272729061 = gamma_board(board);
assert( board272729061 != NULL );
assert( strcmp(board272729061, 
"244.247....\n"
".71.533.426\n"
"1887.....31\n"
".8....46.2.\n"
"75.38.44754\n"
"84764.4..3.\n"
"57.1.3.5266\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453...4\n"
".66834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"314415.5.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board272729061);
board272729061 = NULL;
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 7, 19, 4) == 0 );
assert( gamma_move(board, 7, 6, 19) == 1 );
assert( gamma_move(board, 8, 18, 2) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 5, 17) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_move(board, 6, 21, 7) == 0 );
assert( gamma_move(board, 7, 18, 5) == 0 );
assert( gamma_golden_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 19, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 19, 8) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );


char* board357392081 = gamma_board(board);
assert( board357392081 != NULL );
assert( strcmp(board357392081, 
"244.247....\n"
".71.533.426\n"
"1887..7..31\n"
".8....46.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"57.1.3.5266\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453..24\n"
".66834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"314415.5.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board357392081);
board357392081 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 19) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 21, 3) == 0 );
assert( gamma_free_fields(board, 7) == 63 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 2, 19, 5) == 0 );
assert( gamma_move(board, 2, 3, 20) == 1 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );


char* board431538564 = gamma_board(board);
assert( board431538564 != NULL );
assert( strcmp(board431538564, 
"244.247....\n"
".712533.426\n"
"1887..7.331\n"
".8....46.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"57.1.3.5266\n"
"..32.1..828\n"
"7.5.8.2.346\n"
".374453..24\n"
".66834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"314415.5.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board431538564);
board431538564 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 15, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 8, 2, 15) == 1 );
assert( gamma_move(board, 1, 5, 18) == 1 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 18, 8) == 0 );
assert( gamma_move(board, 1, 19, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 7, 21, 10) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 9, 19) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 5, 13) == 1 );
assert( gamma_move(board, 8, 21, 10) == 0 );
assert( gamma_move(board, 8, 5, 20) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );


char* board472687105 = gamma_board(board);
assert( board472687105 != NULL );
assert( strcmp(board472687105, 
"244.247....\n"
".712533.426\n"
"1887..7.331\n"
"38...146.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"5781.3.5266\n"
".632.16.828\n"
"7.5.872.346\n"
".374453..24\n"
".66834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"31441545.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board472687105);
board472687105 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 5, 21, 8) == 0 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 11, 6) == 0 );


char* board357420539 = gamma_board(board);
assert( board357420539 != NULL );
assert( strcmp(board357420539, 
"244.247....\n"
".712533.426\n"
"1887..7.331\n"
"38...146.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"5781.3.5266\n"
".632.16.828\n"
"7.5.872.346\n"
".374453..24\n"
".66834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"31441545.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board357420539);
board357420539 = NULL;
assert( gamma_move(board, 7, 16, 5) == 0 );
assert( gamma_move(board, 8, 7, 19) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 2, 16) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 20, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_golden_move(board, 5, 21, 1) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board497074414 = gamma_board(board);
assert( board497074414 != NULL );
assert( strcmp(board497074414, 
"244.247....\n"
".712533.426\n"
"1887..78331\n"
"38...146.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"5781.3.5266\n"
".632.16.828\n"
"7.52872.346\n"
".374453..24\n"
"666834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"31441545.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board497074414);
board497074414 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );


char* board963921140 = gamma_board(board);
assert( board963921140 != NULL );
assert( strcmp(board963921140, 
"244.247....\n"
".712533.426\n"
"1887..78331\n"
"38...146.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"5781.3.5266\n"
".632.16.828\n"
"7.528722346\n"
".374453..24\n"
"666834.2.33\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"31441545.26\n"
".3.73..72.2\n"
"32..8377126\n"
"48882782874\n"
"21..1868.56\n"
"2.847828377\n") == 0);
free(board963921140);
board963921140 = NULL;
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 18, 4) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 21, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 18, 10) == 0 );
assert( gamma_golden_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 0, 20) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 21, 8) == 0 );
assert( gamma_move(board, 5, 17, 2) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 4, 16) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 21, 10) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 1, 21, 3) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 9, 21) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 17) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 21, 8) == 0 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 1, 9, 17) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );


char* board133860127 = gamma_board(board);
assert( board133860127 != NULL );
assert( strcmp(board133860127, 
"244.247..3.\n"
"5712533.426\n"
"1887..78331\n"
"38...146.2.\n"
"75.38444754\n"
"84764.4..3.\n"
"5781.3.5266\n"
"8632.162828\n"
"7.528722346\n"
"5374453..24\n"
"666834.2533\n"
"8.1.7344624\n"
"11.48272543\n"
".87.77.3423\n"
"5.18613115.\n"
"741.2677321\n"
"31441545.26\n"
".3.73..72.2\n"
"32.88377126\n"
"48882782874\n"
"21.31868.56\n"
"23847828377\n") == 0);
free(board133860127);
board133860127 = NULL;
assert( gamma_move(board, 1, 10, 20) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 2, 0, 21) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 21, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 9, 21) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 21, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 21, 8) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_golden_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 21, 3) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 19, 4) == 0 );


gamma_delete(board);

    return 0;
}
