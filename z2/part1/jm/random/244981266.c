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
uuid: 244981266
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(24, 20, 9, 45);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 20) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 23, 2) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_golden_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 1, 15) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 8, 23) == 0 );
assert( gamma_free_fields(board, 7) == 473 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 8, 6, 15) == 1 );
assert( gamma_move(board, 9, 3, 15) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_free_fields(board, 9) == 469 );
assert( gamma_move(board, 1, 14, 8) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 20, 2) == 1 );
assert( gamma_move(board, 2, 21, 9) == 1 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );


char* board435358745 = gamma_board(board);
assert( board435358745 != NULL );
assert( strcmp(board435358745, 
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"15.9..8.................\n"
"........................\n"
"........................\n"
"........................\n"
"........4...............\n"
"........................\n"
".....................2..\n"
"....6.........1.........\n"
"........................\n"
"........................\n"
"........................\n"
"...........2............\n"
"...1.....8..............\n"
"..9.......5.........2..4\n"
"........................\n"
"........................\n") == 0);
free(board435358745);
board435358745 = NULL;
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_free_fields(board, 4) == 463 );
assert( gamma_move(board, 5, 16, 10) == 1 );
assert( gamma_move(board, 6, 9, 19) == 1 );
assert( gamma_move(board, 7, 16, 9) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 8, 14, 8) == 0 );
assert( gamma_move(board, 8, 22, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 19, 1) == 1 );
assert( gamma_move(board, 9, 19, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 15, 0) == 1 );
assert( gamma_move(board, 2, 23, 15) == 1 );


char* board359054447 = gamma_board(board);
assert( board359054447 != NULL );
assert( strcmp(board359054447, 
".........6..............\n"
"........................\n"
"........................\n"
"........................\n"
"15.9..8................2\n"
"........................\n"
"......................8.\n"
"........................\n"
".......34...............\n"
"................5.......\n"
"................7....2..\n"
"....6.........1.........\n"
"........................\n"
".........7.........9....\n"
"........................\n"
"...........2............\n"
"...1.....8...3..........\n"
"..9.1.....5.........2..4\n"
"...................9....\n"
"...............1........\n") == 0);
free(board359054447);
board359054447 = NULL;
assert( gamma_move(board, 3, 23, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 0, 19) == 1 );
assert( gamma_move(board, 5, 23, 0) == 1 );
assert( gamma_move(board, 6, 21, 16) == 1 );


char* board889198944 = gamma_board(board);
assert( board889198944 != NULL );
assert( strcmp(board889198944, 
"5........6..............\n"
"........................\n"
"........................\n"
".....................6..\n"
"15.9..8................2\n"
"........................\n"
"......................8.\n"
"........................\n"
".......34...............\n"
"................5.......\n"
"................7....2..\n"
"....6.........1.........\n"
"........................\n"
".........7.........9....\n"
"........................\n"
"...........2...........3\n"
"...1.....8...3..........\n"
"..9.1.4...5.........2..4\n"
".3.................9....\n"
"...............1.......5\n") == 0);
free(board889198944);
board889198944 = NULL;
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 12, 16) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 9, 14, 11) == 1 );
assert( gamma_move(board, 9, 3, 17) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 17, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 19) == 1 );
assert( gamma_move(board, 3, 21, 15) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 16, 1) == 1 );
assert( gamma_move(board, 5, 15, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 6, 19, 0) == 1 );
assert( gamma_free_fields(board, 6) == 433 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 23, 2) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 0, 18) == 1 );
assert( gamma_move(board, 3, 14, 16) == 1 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 6, 13, 19) == 1 );
assert( gamma_move(board, 6, 20, 2) == 0 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_free_fields(board, 7) == 423 );
assert( gamma_move(board, 9, 9, 14) == 1 );
assert( gamma_move(board, 9, 8, 13) == 1 );
assert( gamma_move(board, 1, 15, 15) == 1 );
assert( gamma_move(board, 1, 17, 9) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 15, 8) == 1 );
assert( gamma_move(board, 4, 17, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_free_fields(board, 5) == 414 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_move(board, 7, 3, 17) == 0 );
assert( gamma_move(board, 8, 7, 17) == 1 );
assert( gamma_move(board, 9, 10, 10) == 1 );
assert( gamma_move(board, 1, 17, 4) == 1 );
assert( gamma_move(board, 2, 20, 2) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 16, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 16, 5) == 1 );
assert( gamma_move(board, 5, 14, 13) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 16, 9) == 0 );


char* board164884136 = gamma_board(board);
assert( board164884136 != NULL );
assert( strcmp(board164884136, 
"5......3.6...6..........\n"
"2.......................\n"
"...9...8................\n"
"............8.3......6..\n"
"15.9..8........1.....3.2\n"
".........9..............\n"
"........9...7.55......8.\n"
"........................\n"
".......34.....9.3.......\n"
"..........9.....52......\n"
".......1..5.....71...2..\n"
"....6....2....14........\n"
".......6..7......4......\n"
".......8.7.........9....\n"
"9.3..........3..4.......\n"
"1......4...2.....1.....3\n"
".4.1.....8...3..........\n"
"..9.1.4...57........2..4\n"
".3...2.7........4..9....\n"
".6..........6..1...6...5\n") == 0);
free(board164884136);
board164884136 = NULL;
assert( gamma_move(board, 7, 20, 7) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 14) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 21, 8) == 1 );
assert( gamma_move(board, 2, 23, 15) == 0 );
assert( gamma_move(board, 2, 21, 16) == 0 );


char* board628034603 = gamma_board(board);
assert( board628034603 != NULL );
assert( strcmp(board628034603, 
"5......3.6...6..........\n"
"2.......................\n"
"...9...8................\n"
"............8.3......6..\n"
"15.9..8........1.....3.2\n"
"..9......9..............\n"
"........9...7.55......8.\n"
"........................\n"
".......34.....9.3.......\n"
"..........9.....52......\n"
".......1..5.....71...2..\n"
"....6....2....14.....1..\n"
".......6..7......4..7...\n"
"7...9..8.7.........9....\n"
"9.3..........3..4.......\n"
"1......4...2.....1.....3\n"
".4.1.....8...3..........\n"
"..9.1.4...57........2..4\n"
".3...2.7........4..9....\n"
".6..........6..1...6...5\n") == 0);
free(board628034603);
board628034603 = NULL;
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 22, 10) == 1 );
assert( gamma_move(board, 6, 15, 5) == 1 );
assert( gamma_move(board, 7, 23, 13) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 14) == 1 );
assert( gamma_golden_move(board, 8, 15, 15) == 1 );
assert( gamma_move(board, 9, 2, 18) == 1 );
assert( gamma_move(board, 9, 3, 15) == 0 );
assert( gamma_move(board, 1, 21, 19) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_move(board, 3, 20, 9) == 1 );
assert( gamma_move(board, 4, 16, 4) == 1 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 8, 17) == 1 );
assert( gamma_move(board, 7, 3, 12) == 1 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_golden_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 22, 5) == 1 );
assert( gamma_free_fields(board, 1) == 382 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 4, 19, 12) == 1 );
assert( gamma_move(board, 4, 21, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 17, 18) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 18, 19) == 1 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 7, 1, 12) == 1 );
assert( gamma_move(board, 9, 13, 16) == 1 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 21, 18) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_free_fields(board, 4) == 370 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 5, 20, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board729290149 = gamma_board(board);
assert( board729290149 != NULL );
assert( strcmp(board729290149, 
"5......3.6...6....6..1..\n"
"2.9..............5...2..\n"
"...9...86...............\n"
"..5.........893......6..\n"
"15.93.8........8.....3.2\n"
"..9.8.1..9..............\n"
"........9...7.55......87\n"
".7.72..............4....\n"
".......34.....9.3.......\n"
"..........9..5..52....5.\n"
"5......1..5.....71..32..\n"
"....6...82....14.....1..\n"
".......6..7......4..7...\n"
"7...9..8.7.........9....\n"
"9.3.23.1.....3.64...5.1.\n"
"1......4...2....41.....3\n"
"14.1.....8...3..........\n"
"..9.1.4...57........2..4\n"
".3...2.7......5.4..9....\n"
".6.4...9....6..1...6...5\n") == 0);
free(board729290149);
board729290149 = NULL;
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 1, 17, 3) == 1 );
assert( gamma_move(board, 1, 15, 16) == 1 );
assert( gamma_move(board, 2, 11, 22) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 5, 18, 6) == 1 );


char* board715507253 = gamma_board(board);
assert( board715507253 != NULL );
assert( strcmp(board715507253, 
"5......3.6...6....6..1..\n"
"2.9..............5...2..\n"
"...9...86...............\n"
"..5.........8931.....6..\n"
"15.93.8........8.....3.2\n"
"..9.8.1..9..............\n"
"........9...7.55......87\n"
".7.72..............4....\n"
".......34.....9.3.......\n"
"..........9..55.52....5.\n"
"5......1.75.....71..32..\n"
"....6...82....14.....1..\n"
".......69.7......4..7...\n"
"7...9..8.7........59....\n"
"9.3.23.1.....3.64...5.1.\n"
"1......4...2....41.....3\n"
"14.1.....8...3...1......\n"
"..9.1.4...57........2..4\n"
".3...2.7...8..5.4..9....\n"
".6.4...9....6..1...6...5\n") == 0);
free(board715507253);
board715507253 = NULL;
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_move(board, 6, 16, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 2, 15) == 1 );
assert( gamma_move(board, 8, 17, 1) == 1 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 6, 21) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board919853930 = gamma_board(board);
assert( board919853930 != NULL );
assert( strcmp(board919853930, 
"5......3.6...6....6..1..\n"
"2.9..............5...2..\n"
"...9...86...............\n"
"..5.........8931.....6..\n"
"15793.8........8.....3.2\n"
"..9.8.1..9..............\n"
"........9...7.55......87\n"
".7.72..............4....\n"
".......34..8..9.3.......\n"
"..........9..55.52....5.\n"
"5......1.75.....71..32..\n"
"....6...82....14.....1..\n"
".......69.7......4..7...\n"
"7...9..8.7........59....\n"
"9.3.23.1.....3.64...5.1.\n"
"1......4...2....41.....3\n"
"14.1.....8...3...1......\n"
"..9.1.4...57........2..4\n"
".3...2.7...8..5.48.9....\n"
".6.4...9....6..1...6...5\n") == 0);
free(board919853930);
board919853930 = NULL;
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 19) == 1 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_free_fields(board, 2) == 355 );
assert( gamma_move(board, 3, 19, 5) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 16) == 1 );
assert( gamma_move(board, 5, 19, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 8, 20) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 9, 6, 11) == 1 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 15, 14) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 17, 19) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 19, 22) == 0 );
assert( gamma_move(board, 7, 18, 6) == 0 );
assert( gamma_move(board, 8, 22, 16) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 19, 0) == 0 );
assert( gamma_golden_move(board, 9, 3, 0) == 1 );


char* board517661915 = gamma_board(board);
assert( board517661915 != NULL );
assert( strcmp(board517661915, 
"5......3.6...6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...9...86...............\n"
"..5.........8931.5...68.\n"
"15793.8........8.....3.2\n"
"..9.8.13.9.....3........\n"
"..6.....9...7.55......87\n"
".7.72.......1......4....\n"
"......9346.8..9.3.......\n"
"........4.9.255.52....5.\n"
"5......1.75.....71..32..\n"
"....6...82....14.....1..\n"
".......69.7......4..7...\n"
"7...9..8.7.4.....159....\n"
"9.3.23.1.....3.64..35.1.\n"
"1......4...2....41.5...3\n"
"14.1.....89..3...1......\n"
"..9.1.4..757........2..4\n"
".3...2.7...8..5.48.9....\n"
".6.9...9....6..1...6...5\n") == 0);
free(board517661915);
board517661915 = NULL;
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 4, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 6, 17, 18) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 18, 19) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_free_fields(board, 9) == 335 );


char* board630319899 = gamma_board(board);
assert( board630319899 != NULL );
assert( strcmp(board630319899, 
"5......3.6...6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86...............\n"
"..5.........8931.5...68.\n"
"15793.8........8.....3.2\n"
"..9.8.13.9.....3........\n"
"..6.....9...7.55......87\n"
".7.72.......1......4....\n"
"......9346.8..9.3.......\n"
"........4.9.255.52....5.\n"
"5......1.75.....71..32..\n"
"....6...82....14.....1..\n"
".......69.7......4..7...\n"
"7..99..8.784.....159....\n"
"9.3.2331.....3.64..35.1.\n"
"1......4...2....41.5...3\n"
"14.1.....89..3...1......\n"
"..9.1.4..757........2..4\n"
".3...2.7...8..5.48.9....\n"
".6.9...9....6..1...6...5\n") == 0);
free(board630319899);
board630319899 = NULL;
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 21, 16) == 0 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_move(board, 9, 11, 12) == 1 );
assert( gamma_move(board, 9, 21, 11) == 1 );
assert( gamma_golden_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 19, 13) == 1 );
assert( gamma_move(board, 3, 18, 9) == 1 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 8, 22) == 0 );
assert( gamma_move(board, 8, 18, 1) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_golden_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 1, 10, 23) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 7, 23) == 0 );
assert( gamma_move(board, 2, 6, 16) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 14, 15) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 317 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 13, 16) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 23, 14) == 1 );
assert( gamma_move(board, 9, 19, 16) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 8, 19) == 1 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 4, 22, 10) == 0 );
assert( gamma_move(board, 5, 18, 7) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );


char* board918733164 = gamma_board(board);
assert( board918733164 != NULL );
assert( strcmp(board918733164, 
"5......336...6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86...............\n"
"..5...2.....8931.5.9.68.\n"
"15793.8.......48.....3.2\n"
"..9.8113.9.....3.......8\n"
"..68....9...7.55...2..87\n"
".7.72......91......4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5......1.75.....713.32..\n"
"..8.6..782....14.....1..\n"
".......69.7......45.7...\n"
"7..99..8.784.....159....\n"
"9.3.2331.46..3.64..35.1.\n"
"12.....4...2....41.5...3\n"
"14.1.35..89..3...1......\n"
"..9.1.46.757........2..4\n"
".3...2.71..8..5.4889....\n"
".6.9...9....63.1...6...5\n") == 0);
free(board918733164);
board918733164 = NULL;
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 7, 16, 13) == 1 );
assert( gamma_move(board, 8, 15, 7) == 1 );
assert( gamma_move(board, 8, 14, 17) == 1 );
assert( gamma_free_fields(board, 9) == 305 );
assert( gamma_move(board, 1, 11, 3) == 1 );


char* board417806608 = gamma_board(board);
assert( board417806608 != NULL );
assert( strcmp(board417806608, 
"5......336...6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86.....8.........\n"
"..5...2.....8931.5.9.68.\n"
"15793.8.......48.....3.2\n"
"..9.8113.9.....3.......8\n"
"..68....9...7.557..2..87\n"
".7.72......91......4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5......1.75.....713.32..\n"
"..8.6..782....14.....1..\n"
".......69.7....8.45.7...\n"
"7..99..8.784.....159....\n"
"9.3.2331.46..3.64..35.1.\n"
"12.....4...2....41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757........2..4\n"
".3...2.71..8..5.4889....\n"
".6.9...9....63.1...6...5\n") == 0);
free(board417806608);
board417806608 = NULL;
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 21) == 0 );
assert( gamma_move(board, 5, 18, 5) == 1 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 10, 19) == 1 );
assert( gamma_move(board, 7, 5, 19) == 1 );
assert( gamma_busy_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 18, 8) == 1 );
assert( gamma_move(board, 9, 12, 12) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 1, 17, 18) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 4, 10, 21) == 0 );
assert( gamma_move(board, 4, 22, 17) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 15, 2) == 1 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_move(board, 7, 16, 15) == 1 );
assert( gamma_move(board, 8, 4, 22) == 0 );
assert( gamma_move(board, 9, 3, 14) == 1 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_free_fields(board, 1) == 289 );
assert( gamma_move(board, 2, 18, 13) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_free_fields(board, 3) == 288 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );


char* board288090635 = gamma_board(board);
assert( board288090635 != NULL );
assert( strcmp(board288090635, 
"5....7.3367..6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86.4...8.......4.\n"
"..5...2.....8931.5.9.68.\n"
"15793.8.......487....3.2\n"
"..998113.9.....3.......8\n"
"..68....9...7.557.22..87\n"
".7.72.1....91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5...8..1.75.....713.32..\n"
"..8.6..782....14..9..1..\n"
".......69.7....8.45.7...\n"
"7..99.28.784.....159....\n"
"9.3.2331.46..3.64.535.1.\n"
"12.....4..32....41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757...5....2..4\n"
".3...2.71..8..5.4889....\n"
".6.9.2.9....63.1...6...5\n") == 0);
free(board288090635);
board288090635 = NULL;
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 22) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_free_fields(board, 6) == 286 );


char* board410018469 = gamma_board(board);
assert( board410018469 != NULL );
assert( strcmp(board410018469, 
"5....7.3367..6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86.4...8.......4.\n"
"..5...2.....8931.5.9.68.\n"
"15793.8.......487....3.2\n"
"..998113.9.....3.......8\n"
"..68....9...7.557.22..87\n"
".7.72.1....91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5...8..1.75.....713.32..\n"
"..8.6..782....14..9..1..\n"
".......69.7....8.45.7...\n"
"7..99.28.784.....159....\n"
"9.3.2331.46..3.64.535.1.\n"
"12...6.4..32....41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757...5....2..4\n"
".35..2.71..8..5.4889....\n"
".6.9.2.9....63.1...6...5\n") == 0);
free(board410018469);
board410018469 = NULL;
assert( gamma_move(board, 7, 0, 14) == 1 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 20, 16) == 1 );
assert( gamma_move(board, 9, 10, 15) == 1 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 1, 18, 13) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );


char* board894336213 = gamma_board(board);
assert( board894336213 != NULL );
assert( strcmp(board894336213, 
"5....7.3367..6.2.46..1..\n"
"2.9.......2......5...2..\n"
"...93..86.4...8.......4.\n"
"..5...2.....8931.5.9868.\n"
"15793.8...9...487....3.2\n"
"7.998113.9.....3.......8\n"
"..68....9...7.557.22..87\n"
".7.72.13...91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5...8..1.75.....713.32..\n"
"..8.6..782....14..9..1..\n"
".......69.7....8.45.7...\n"
"7..99.28.784.....159....\n"
"9.3.2331.46..3.64.535.1.\n"
"12...6.4..32.1..41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757...5....2..4\n"
".35..2.71..8.25.4889....\n"
".6.9.2.9....63.1...6...5\n") == 0);
free(board894336213);
board894336213 = NULL;
assert( gamma_move(board, 4, 4, 22) == 0 );
assert( gamma_move(board, 5, 17, 13) == 1 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 12, 19) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 12, 16) == 0 );
assert( gamma_busy_fields(board, 9) == 26 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 22, 0) == 1 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 2, 18, 17) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 18) == 1 );


char* board596383704 = gamma_board(board);
assert( board596383704 != NULL );
assert( strcmp(board596383704, 
"5....7.3367.86.2.46..1..\n"
"2.9.......23.....5...2..\n"
"...93..86.4...8...2...4.\n"
"..5...2.....8931.5.9868.\n"
"15793.8...9...487....3.2\n"
"7.998113.9.....3.......8\n"
"..68....9...7.557522..87\n"
".7.72.13...91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14......4.9.255.52....5.\n"
"5...8..1.75.....713.32..\n"
"..8.6..782....14..9..1..\n"
".......69.7....8.45.7...\n"
"7..99.281784.....159....\n"
"9.3.2331.46..3.64.535.1.\n"
"12...6.4.732.1..41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757...5....2..4\n"
"835..2.71..8.25.4889....\n"
".6.9.2.9....63.1...6..15\n") == 0);
free(board596383704);
board596383704 = NULL;
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 18, 5) == 0 );
assert( gamma_move(board, 7, 9, 19) == 0 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );


char* board735912336 = gamma_board(board);
assert( board735912336 != NULL );
assert( strcmp(board735912336, 
"5....7.3367.86.2.46..1..\n"
"2.9.......23.....5...2..\n"
"...93..86.4...8...2...4.\n"
"..5...2.....8931.5.9868.\n"
"15793.8...9...487....3.2\n"
"7.998113.9.....3.......8\n"
"..68....9...7.557522..87\n"
".7.72.13...91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14....9.4.9.255.52....5.\n"
"5...8..1.75.....713.32..\n"
"..8.6..782....14..9..1..\n"
".......69.7....8.45.7...\n"
"7..99.281784.....159....\n"
"9.3.2331.46..3.64.535.1.\n"
"12...6.4.732.1..41.5...3\n"
"14.1735..891.3...1......\n"
"..9.1.46.757...5....2..4\n"
"835..2.71..8.25.4889....\n"
"46.9.2.9....6381...6..15\n") == 0);
free(board735912336);
board735912336 = NULL;
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 2, 1, 21) == 0 );
assert( gamma_move(board, 2, 22, 18) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 16, 13) == 0 );
assert( gamma_move(board, 5, 18, 16) == 1 );
assert( gamma_move(board, 6, 23, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 3, 6, 18) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 6, 14, 16) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 14, 14) == 1 );
assert( gamma_move(board, 8, 11, 20) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_free_fields(board, 9) == 254 );
assert( gamma_move(board, 1, 21, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 3, 19) == 1 );
assert( gamma_move(board, 5, 6, 19) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 15, 22) == 0 );
assert( gamma_free_fields(board, 7) == 250 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 15, 18) == 1 );
assert( gamma_free_fields(board, 8) == 249 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 9, 12, 8) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 23, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 11, 23) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_free_fields(board, 5) == 245 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 17, 19) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 9, 16, 3) == 1 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 1, 5, 21) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 21, 7) == 1 );


char* board800819183 = gamma_board(board);
assert( board800819183 != NULL );
assert( strcmp(board800819183, 
"5..5.753367.86.2.46..1..\n"
"2.9...3...23...8.5...22.\n"
"...93..86.4...8...2...4.\n"
"..5...2.....8931.559868.\n"
"15793.8..49...487....3.2\n"
"7.998113.9....73.......8\n"
"..687...95..7.557522..87\n"
".7472.13.3.91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14....9.4.9.255.52....5.\n"
"52.68..1.75...1.713.32..\n"
"..8.6..782..9414..9..1..\n"
".......69.7....8.45.72..\n"
"7..999281784.....159....\n"
"9.3.2331246..3.64.535.16\n"
"12...6.4.732.1..41.5...3\n"
"14.17359.891.3..91...1..\n"
"..9.1.46.757...5.3..2..4\n"
"835..2.71..8.25.4889...1\n"
"46.9.2.9....6381.3.6..15\n") == 0);
free(board800819183);
board800819183 = NULL;
assert( gamma_move(board, 3, 19, 18) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_free_fields(board, 4) == 240 );


char* board750544858 = gamma_board(board);
assert( board750544858 != NULL );
assert( strcmp(board750544858, 
"5..5.753367.86.2.46..1..\n"
"2.9...3...23...8.5.3.22.\n"
"...93..86.4...8...2...4.\n"
"..5...2.....8931.559868.\n"
"15793.8..49...487....3.2\n"
"7.998113.9....73.......8\n"
"..687...95..7.557522..87\n"
".7472.13.3.91.6....4....\n"
".7....9346.8..9.3....9..\n"
"14....9.4.9.255.52....5.\n"
"52.68..1.75...1.713.32..\n"
"..8.6..782..9414..9..1..\n"
".......69.7....8.45.72..\n"
"7..999281784.....159....\n"
"9.3.2331246..3.64.535.16\n"
"12...6.4.732.14.41.5...3\n"
"14.17359.891.3..91...1..\n"
"..9.1.46.757...5.3..2..4\n"
"835..2.71..8.25.4889...1\n"
"46.9.2.9....6381.3.6..15\n") == 0);
free(board750544858);
board750544858 = NULL;
assert( gamma_move(board, 5, 15, 22) == 0 );
assert( gamma_move(board, 5, 23, 7) == 1 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 6, 22, 1) == 1 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_golden_move(board, 8, 4, 17) == 0 );
assert( gamma_move(board, 9, 6, 22) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_free_fields(board, 1) == 238 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 14, 18) == 1 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_free_fields(board, 5) == 235 );
assert( gamma_move(board, 6, 11, 19) == 1 );
assert( gamma_move(board, 7, 16, 7) == 1 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 19, 8) == 1 );
assert( gamma_move(board, 9, 18, 13) == 0 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_free_fields(board, 1) == 231 );
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_move(board, 2, 22, 9) == 1 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_busy_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 19, 9) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_free_fields(board, 5) == 225 );
assert( gamma_move(board, 6, 20, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 2, 21) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 11, 13) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 22, 7) == 1 );
assert( gamma_free_fields(board, 4) == 221 );
assert( gamma_move(board, 5, 17, 11) == 1 );
assert( gamma_move(board, 6, 2, 22) == 0 );
assert( gamma_move(board, 7, 12, 22) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 19, 19) == 1 );
assert( gamma_move(board, 9, 2, 18) == 0 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 6, 21, 19) == 0 );
assert( gamma_move(board, 6, 22, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 16, 16) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 8, 22) == 0 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 6, 3, 23) == 0 );
assert( gamma_move(board, 6, 19, 8) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 19, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 33 );
assert( gamma_move(board, 1, 12, 15) == 1 );
assert( gamma_free_fields(board, 1) == 213 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 4, 23, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_free_fields(board, 4) == 213 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 211 );
assert( gamma_move(board, 6, 15, 19) == 0 );
assert( gamma_move(board, 6, 11, 16) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 3, 15) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 17, 20) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 13, 18) == 1 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 6, 4, 18) == 1 );
assert( gamma_move(board, 6, 22, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 13, 19) == 0 );
assert( gamma_move(board, 8, 16, 13) == 0 );
assert( gamma_move(board, 8, 19, 9) == 0 );
assert( gamma_move(board, 9, 13, 2) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 18, 1) == 0 );
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 8, 17, 10) == 0 );
assert( gamma_move(board, 9, 17, 2) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 2, 22, 11) == 1 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 3, 21, 13) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 22, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 37 );
assert( gamma_free_fields(board, 5) == 199 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 11, 19) == 0 );
assert( gamma_move(board, 7, 20, 0) == 1 );
assert( gamma_move(board, 8, 17, 20) == 0 );
assert( gamma_move(board, 8, 2, 17) == 1 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 9, 21, 9) == 0 );
assert( gamma_golden_move(board, 9, 16, 15) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_free_fields(board, 1) == 196 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 16, 6) == 1 );
assert( gamma_move(board, 5, 1, 17) == 1 );
assert( gamma_move(board, 6, 17, 20) == 0 );
assert( gamma_free_fields(board, 6) == 193 );
assert( gamma_move(board, 7, 17, 0) == 0 );
assert( gamma_move(board, 8, 14, 15) == 0 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 9, 7, 16) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_move(board, 2, 17, 17) == 1 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 6, 23) == 0 );
assert( gamma_move(board, 5, 1, 19) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 21) == 0 );
assert( gamma_move(board, 7, 12, 22) == 0 );
assert( gamma_busy_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 19, 14) == 1 );
assert( gamma_move(board, 9, 12, 16) == 0 );
assert( gamma_move(board, 9, 12, 5) == 1 );
assert( gamma_golden_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 1, 15, 20) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );


char* board252945205 = gamma_board(board);
assert( board252945205 != NULL );
assert( strcmp(board252945205, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3...23.338.5.3.22.\n"
".58934.86.4...8..22...4.\n"
"..5...29...689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
"..687...95.972557522.387\n"
".7472.13.3.91.6..5.4....\n"
".7...39346.83.9.35...92.\n"
"14..9.9.4.9.255.52....5.\n"
"52.68..1.75...1.7134322.\n"
"..8.6..782..9414..98.1..\n"
".....296947....8745.7245\n"
"72.999281784.5..5159..5.\n"
"9.3.2331246.93.64.535.16\n"
"12..36.4.732.14.41.5...3\n"
"141173591891.3..91...1..\n"
"..9.1546.75729.5.3..2.64\n"
"835..2.71..8.25.4889..61\n"
"4659.2.9....6381.3.67.15\n") == 0);
free(board252945205);
board252945205 = NULL;
assert( gamma_move(board, 3, 18, 18) == 1 );
assert( gamma_move(board, 4, 14, 22) == 0 );
assert( gamma_move(board, 5, 18, 1) == 0 );
assert( gamma_move(board, 6, 8, 18) == 1 );
assert( gamma_move(board, 6, 20, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 2, 16) == 0 );
assert( gamma_move(board, 9, 19, 17) == 1 );
assert( gamma_move(board, 9, 22, 9) == 0 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 21, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 17, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 17, 21) == 0 );
assert( gamma_move(board, 4, 20, 18) == 1 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 6, 19, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 12, 18) == 1 );
assert( gamma_move(board, 9, 6, 15) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 179 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 22) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_golden_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 22, 9) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 13, 20) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );


char* board300592311 = gamma_board(board);
assert( board300592311 != NULL );
assert( strcmp(board300592311, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3.6.239338.533422.\n"
".58934.86.4...8..229..4.\n"
"..5...29...689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
"..687...95.972557522.387\n"
".7472.13.3.91.6..5.4....\n"
".7...39346.83.9.35...92.\n"
"14..9.9.4.9.255.52....5.\n"
"52.68..1.75...1.7134322.\n"
"..8.6..7822.9414..98.1..\n"
".....226947..1.8745.7245\n"
"72.999281784.5..5159..5.\n"
"9.3.2331246.93.64.535.16\n"
"12..36.4.732.14.41.5...3\n"
"141173591891.3..91...1..\n"
"..931546.75729.5.3.62.64\n"
"835..2.71..8.25.4889..61\n"
"4659.2.9.6.96381.3.67.15\n") == 0);
free(board300592311);
board300592311 = NULL;
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 15, 19) == 0 );
assert( gamma_move(board, 8, 22, 4) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 17, 9) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_free_fields(board, 4) == 174 );
assert( gamma_move(board, 5, 17, 11) == 0 );


char* board686593405 = gamma_board(board);
assert( board686593405 != NULL );
assert( strcmp(board686593405, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3.6.239338.533422.\n"
".58934486.4...8..229..4.\n"
"..5...29...689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
"..687...95.972557522.387\n"
".7472.13.3.91.6..5.4....\n"
".7...39346.83.9.35...92.\n"
"14..9.9.4.9.255.52....5.\n"
"52.68..1.75...1.7134322.\n"
"..8.6..7822.9414..98.1..\n"
".....226947..1.8745.7245\n"
"72.999281784.5..5159..5.\n"
"9.3.2331246.93.64.535.16\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91...1..\n"
"..931546.75729.5.3.62.64\n"
"835..2.71..8.25.4889..61\n"
"4659.2.9.6.96381.3.67.15\n") == 0);
free(board686593405);
board686593405 = NULL;
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_free_fields(board, 7) == 173 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_move(board, 2, 23, 17) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 10, 23) == 0 );
assert( gamma_move(board, 3, 21, 12) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 3, 22) == 0 );
assert( gamma_move(board, 6, 15, 13) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 13, 9) == 1 );


char* board227327308 = gamma_board(board);
assert( board227327308 != NULL );
assert( strcmp(board227327308, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3.6.239338.533422.\n"
".58934486.4...8..229..42\n"
"..5...291..689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
"..687...95.972557522.387\n"
".7472.13.3.91.6..5.4.3..\n"
".7...39346883.9.35...92.\n"
"14..9.9.4.9.255.52....5.\n"
"52.68..1.75..71.7134322.\n"
"..8.6..7822.9414..98.1..\n"
".....226947..1.8745.7245\n"
"72.999281784.5..5159..5.\n"
"9.3.2331246.93.64.535.16\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91...1..\n"
"..931546.75729.5.3.62.64\n"
"8357.2.71..8.25.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board227327308);
board227327308 = NULL;
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 9, 8, 17) == 0 );
assert( gamma_free_fields(board, 9) == 167 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 15, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 3, 19) == 0 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_move(board, 9, 16, 3) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 3, 12, 23) == 0 );
assert( gamma_move(board, 4, 14, 22) == 0 );
assert( gamma_move(board, 4, 19, 12) == 0 );
assert( gamma_move(board, 5, 19, 6) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 5, 17) == 0 );
assert( gamma_move(board, 9, 12, 22) == 0 );
assert( gamma_golden_move(board, 9, 6, 17) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 21, 12) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 21) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 17, 2) == 0 );
assert( gamma_free_fields(board, 8) == 164 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 22, 18) == 0 );
assert( gamma_golden_move(board, 9, 0, 17) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 21, 5) == 1 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 15, 8) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_move(board, 6, 20, 16) == 0 );
assert( gamma_move(board, 7, 15, 17) == 0 );


char* board196891350 = gamma_board(board);
assert( board196891350 != NULL );
assert( strcmp(board196891350, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3.6.239338.533422.\n"
".58934486.4...85.229..42\n"
"..5...291..689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
"..687..395.972557522.387\n"
".7472.13.3.91.6..5.4.3..\n"
".7...39346883.9.35...92.\n"
"14..9.9.459.255.52....5.\n"
"52.68..1.75..71.7134322.\n"
"..8.6..7822.9413..98.1..\n"
".....226947..1.8745.7245\n"
"72.999281784.5..5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91...1..\n"
"..931546.75729.5.3.62.64\n"
"8357.2.71..8.25.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board196891350);
board196891350 = NULL;
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 18, 12) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_free_fields(board, 1) == 161 );
assert( gamma_move(board, 2, 19, 20) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 21, 15) == 0 );
assert( gamma_free_fields(board, 3) == 161 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 19) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 3, 15) == 0 );
assert( gamma_move(board, 7, 9, 13) == 0 );
assert( gamma_move(board, 8, 17, 9) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 41 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 11, 20) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 6, 22, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_move(board, 8, 10, 15) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 12, 9) == 1 );
assert( gamma_free_fields(board, 9) == 158 );
assert( gamma_move(board, 1, 15, 18) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 19, 3) == 1 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_move(board, 6, 9, 23) == 0 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 7, 19, 16) == 0 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 9, 15) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 13, 19) == 0 );
assert( gamma_free_fields(board, 3) == 154 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_free_fields(board, 4) == 154 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 18, 17) == 0 );
assert( gamma_move(board, 9, 18, 13) == 0 );
assert( gamma_move(board, 1, 19, 22) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 18, 16) == 0 );
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 9, 18, 5) == 0 );
assert( gamma_move(board, 9, 14, 12) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 19) == 0 );
assert( gamma_free_fields(board, 5) == 153 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_free_fields(board, 6) == 153 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 8, 16) == 0 );
assert( gamma_move(board, 8, 23, 10) == 1 );
assert( gamma_free_fields(board, 8) == 152 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 16, 10) == 0 );
assert( gamma_move(board, 9, 18, 16) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 16) == 1 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 23) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 19) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_free_fields(board, 7) == 150 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 35 );
assert( gamma_move(board, 9, 12, 23) == 0 );
assert( gamma_move(board, 1, 8, 23) == 0 );
assert( gamma_move(board, 1, 18, 19) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );


char* board826580783 = gamma_board(board);
assert( board826580783 != NULL );
assert( strcmp(board826580783, 
"55.5.753367686.2.468.1..\n"
"2.9.6.3.6.239338.533422.\n"
".58934486.4...85.229..42\n"
"..5.2.291..689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
".1687..395.972557522.387\n"
".7472.13.3.91.6..594.3..\n"
".7...39346883.9.35...92.\n"
"14..9.9.459.255.52....58\n"
"52.688.1.75.971.7134322.\n"
".58.6..7822.9413..98.1..\n"
".....2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8.25.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board826580783);
board826580783 = NULL;
assert( gamma_move(board, 7, 17, 12) == 0 );
assert( gamma_move(board, 7, 12, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 12, 16) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 15, 13) == 0 );
assert( gamma_free_fields(board, 9) == 149 );
assert( gamma_move(board, 1, 18, 16) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 4, 4, 21) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_free_fields(board, 5) == 149 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 18, 19) == 0 );
assert( gamma_move(board, 7, 21, 13) == 0 );
assert( gamma_move(board, 7, 20, 13) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 10, 21) == 0 );
assert( gamma_move(board, 9, 8, 19) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_golden_move(board, 1, 6, 18) == 1 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 3, 1, 22) == 0 );
assert( gamma_move(board, 4, 18, 11) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 2, 21) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 145 );


char* board407147901 = gamma_board(board);
assert( board407147901 != NULL );
assert( strcmp(board407147901, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
".58934486.4...85.229..42\n"
"..5.2.291..689319559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
".1687..395.9725575227387\n"
".7472.13.3.91.6..594.3..\n"
".7..439346883.9.354..92.\n"
"14..9.9.459.255.52....58\n"
"52.688.1.75.971.7134322.\n"
"158.6..7822.9413..98.1..\n"
".....2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8825.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board407147901);
board407147901 = NULL;
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_move(board, 8, 23, 15) == 0 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_move(board, 9, 4, 17) == 0 );
assert( gamma_busy_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 16, 12) == 1 );
assert( gamma_golden_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 4, 0, 17) == 1 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_golden_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 5, 13) == 1 );
assert( gamma_golden_move(board, 7, 16, 16) == 1 );
assert( gamma_move(board, 8, 6, 20) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );


char* board312048875 = gamma_board(board);
assert( board312048875 != NULL );
assert( strcmp(board312048875, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...85.229..42\n"
"..5.2.2913.689317559868.\n"
"15793.8314931.487....3.2\n"
"7599811339....73...8...8\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3..\n"
".7..439346883.9.354..92.\n"
"14..9.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"158.6..7822.9413..98.1..\n"
".....2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36.4.732.14.41.5..83\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8825.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board312048875);
board312048875 = NULL;
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 20, 15) == 1 );
assert( gamma_move(board, 4, 23, 12) == 1 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 8, 17) == 0 );
assert( gamma_golden_move(board, 6, 17, 6) == 0 );
assert( gamma_move(board, 7, 18, 5) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 19, 14) == 0 );
assert( gamma_move(board, 8, 8, 17) == 0 );
assert( gamma_golden_move(board, 8, 15, 9) == 0 );
assert( gamma_move(board, 9, 19, 22) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_free_fields(board, 1) == 137 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 10, 16) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 21, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 22, 16) == 0 );
assert( gamma_move(board, 6, 6, 23) == 0 );
assert( gamma_move(board, 6, 22, 14) == 1 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_move(board, 7, 17, 15) == 1 );
assert( gamma_move(board, 9, 14, 13) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 18, 12) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 16, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 42 );
assert( gamma_free_fields(board, 2) == 131 );
assert( gamma_move(board, 3, 21, 19) == 0 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 18) == 0 );
assert( gamma_move(board, 5, 18, 19) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 6) == 131 );
assert( gamma_move(board, 7, 19, 20) == 0 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 8, 10, 18) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 17, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 1, 23, 14) == 0 );
assert( gamma_move(board, 2, 20, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 3, 17, 15) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 14, 17) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 11, 23) == 0 );
assert( gamma_move(board, 7, 18, 9) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 9, 19, 14) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 23, 7) == 0 );


char* board365612158 = gamma_board(board);
assert( board365612158 != NULL );
assert( strcmp(board365612158, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...85.229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..33.2\n"
"7599811339....73...8..68\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.9413..98.1..\n"
"..2..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36.4.732.14.41.52483\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8825.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board365612158);
board365612158 = NULL;
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 5) == 129 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 21, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 8, 18, 5) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_golden_move(board, 8, 4, 21) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );


char* board261421377 = gamma_board(board);
assert( board261421377 != NULL );
assert( strcmp(board261421377, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...85.229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..33.2\n"
"7599811339....73...8..68\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.9413..98.1..\n"
"..2..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..3664.732.14.41.52483\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8825.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board261421377);
board261421377 = NULL;
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 14, 18) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 16, 17) == 1 );


char* board216059307 = gamma_board(board);
assert( board216059307 != NULL );
assert( strcmp(board216059307, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...857229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..33.2\n"
"7599811339....73...8..68\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.9413..98.1..\n"
"..2..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..3664.732.14.41.52483\n"
"141173591891.3..91.3.1..\n"
"..931546.75729.5.3.62.64\n"
"835712.71..8825.4889..61\n"
"465922.9.6.96381.3.67.15\n") == 0);
free(board216059307);
board216059307 = NULL;
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 15, 14) == 0 );
assert( gamma_move(board, 2, 17, 21) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 16, 0) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_golden_move(board, 8, 9, 20) == 0 );
assert( gamma_move(board, 9, 4, 15) == 0 );
assert( gamma_move(board, 9, 3, 15) == 0 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 42 );
assert( gamma_golden_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 2, 18, 14) == 1 );
assert( gamma_move(board, 2, 23, 7) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 20, 1) == 1 );
assert( gamma_golden_move(board, 4, 18, 21) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );


char* board512949558 = gamma_board(board);
assert( board512949558 != NULL );
assert( strcmp(board512949558, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...857229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..33.2\n"
"7599811339....73..28..68\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
"..2..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..3664.732.14.41.52483\n"
"141173591891.3..91.3.1..\n"
"8.931546.7572985.3.62.64\n"
"835712.71..8825.48894.61\n"
"465922.9.6.9638173.67.15\n") == 0);
free(board512949558);
board512949558 = NULL;
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 19, 9) == 0 );
assert( gamma_move(board, 7, 19, 18) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 2, 21) == 0 );
assert( gamma_golden_move(board, 9, 14, 14) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 19, 23) == 0 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 23, 4) == 0 );
assert( gamma_move(board, 7, 16, 23) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 8, 9, 15) == 0 );
assert( gamma_free_fields(board, 8) == 121 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_free_fields(board, 9) == 121 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 21, 2) == 1 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 3, 9, 23) == 0 );
assert( gamma_move(board, 4, 19, 20) == 0 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 18, 5) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 22, 11) == 0 );
assert( gamma_move(board, 9, 10, 18) == 0 );
assert( gamma_move(board, 1, 17, 21) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 3, 19, 23) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 20) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_free_fields(board, 6) == 119 );
assert( gamma_move(board, 7, 15, 15) == 0 );
assert( gamma_move(board, 8, 6, 20) == 0 );
assert( gamma_move(board, 8, 21, 13) == 0 );
assert( gamma_move(board, 9, 6, 15) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );


char* board649643026 = gamma_board(board);
assert( board649643026 != NULL );
assert( strcmp(board649643026, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.533422.\n"
"458934486.4...857229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..33.2\n"
"7599811339....73..28..68\n"
".16877.395.9725575227387\n"
".7472.13.3.91.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..3664.732.14.41.52483\n"
"141173591891.3..91.3.1..\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173.67.15\n") == 0);
free(board649643026);
board649643026 = NULL;
assert( gamma_move(board, 2, 18, 0) == 1 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_golden_move(board, 3, 19, 17) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 22, 3) == 1 );
assert( gamma_golden_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 6, 22, 15) == 1 );
assert( gamma_free_fields(board, 6) == 114 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 6, 23) == 0 );
assert( gamma_move(board, 8, 19, 8) == 0 );
assert( gamma_golden_move(board, 8, 18, 11) == 0 );
assert( gamma_move(board, 9, 2, 17) == 0 );
assert( gamma_move(board, 9, 12, 19) == 0 );
assert( gamma_move(board, 1, 11, 23) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 4, 23, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 18, 6) == 0 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 6, 21, 13) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 22, 0) == 0 );
assert( gamma_move(board, 8, 16, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board561820457 = gamma_board(board);
assert( board561820457 != NULL );
assert( strcmp(board561820457, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..5.2.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
".16877.355.9725575227387\n"
".7472.13.3391.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173267.15\n") == 0);
free(board561820457);
board561820457 = NULL;
assert( gamma_move(board, 9, 8, 20) == 0 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_move(board, 1, 9, 23) == 0 );
assert( gamma_move(board, 1, 3, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 3, 11, 20) == 0 );
assert( gamma_move(board, 3, 15, 2) == 0 );


char* board713913950 = gamma_board(board);
assert( board713913950 != NULL );
assert( strcmp(board713913950, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
".16877.355.9725575227387\n"
".7472.13.3391.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255.52....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173267.15\n") == 0);
free(board713913950);
board713913950 = NULL;
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_free_fields(board, 5) == 111 );
assert( gamma_move(board, 6, 11, 23) == 0 );
assert( gamma_move(board, 7, 1, 21) == 0 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 8, 15, 10) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 12, 20) == 0 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board764236892 = gamma_board(board);
assert( board764236892 != NULL );
assert( strcmp(board764236892, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
".16877.355.9725575227387\n"
".7472.13.3391.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255852....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173267.15\n") == 0);
free(board764236892);
board764236892 = NULL;
assert( gamma_move(board, 4, 14, 17) == 0 );


char* board395706017 = gamma_board(board);
assert( board395706017 != NULL );
assert( strcmp(board395706017, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
".16877.355.9725575227387\n"
".7472.13.3391.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255852....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173267.15\n") == 0);
free(board395706017);
board395706017 = NULL;
assert( gamma_move(board, 5, 3, 12) == 0 );


char* board429360687 = gamma_board(board);
assert( board429360687 != NULL );
assert( strcmp(board429360687, 
"55.5.753367686.2.468.1..\n"
"2.9.6.1.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
".16877.355.9725575227387\n"
".7472.13.3391.6.1594.3.4\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255852....58\n"
"52.66871.756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.8745.7245\n"
"72.999281784756.5159..5.\n"
"9.322331246.93.64.535216\n"
"12..36643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71.18825.48894.61\n"
"465922.9.6.9638173267.15\n") == 0);
free(board429360687);
board429360687 = NULL;
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 16, 0) == 0 );
assert( gamma_move(board, 9, 21, 19) == 0 );
assert( gamma_busy_fields(board, 9) == 40 );
assert( gamma_move(board, 1, 19, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 21, 18) == 0 );
assert( gamma_move(board, 2, 22, 12) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 17, 13) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 6, 15) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_move(board, 7, 5, 18) == 1 );
assert( gamma_free_fields(board, 7) == 105 );
assert( gamma_move(board, 9, 1, 21) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 8, 20) == 0 );
assert( gamma_move(board, 6, 21, 11) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 18, 7) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 19, 7) == 1 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 19, 22) == 0 );
assert( gamma_move(board, 5, 14, 20) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 6, 21, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 6, 23) == 0 );
assert( gamma_free_fields(board, 2) == 102 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 19, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );


char* board955944440 = gamma_board(board);
assert( board955944440 != NULL );
assert( strcmp(board955944440, 
"55.5.753367686.2.468.1..\n"
"2.9.671.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
"416877.355.9725575227387\n"
".7472.13.3391.6.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255852....58\n"
"52.668715756971.7134322.\n"
"15886..7822.94131.98.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..91.3.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board955944440);
board955944440 = NULL;
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 17, 9) == 0 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_move(board, 2, 17, 21) == 0 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 17, 20) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 7, 12, 20) == 0 );
assert( gamma_move(board, 8, 9, 15) == 0 );
assert( gamma_move(board, 8, 7, 17) == 0 );
assert( gamma_move(board, 9, 18, 3) == 1 );
assert( gamma_move(board, 9, 17, 8) == 1 );
assert( gamma_free_fields(board, 9) == 99 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 19, 14) == 0 );
assert( gamma_move(board, 2, 23, 9) == 1 );


char* board118663094 = gamma_board(board);
assert( board118663094 != NULL );
assert( strcmp(board118663094, 
"55.5.753367686.2.468.1..\n"
"2.9.671.6.239338.5334224\n"
"458934486.4...857229..42\n"
"..512.29138689317559868.\n"
"15793.8314931.4877..3362\n"
"7599811339....73..28..68\n"
"416877.355.9725575227387\n"
".7472.13.3391.6.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29.9.459.255852....58\n"
"52.668715756971.71343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.931546.7572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board118663094);
board118663094 = NULL;
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 6, 4, 18) == 0 );
assert( gamma_move(board, 7, 15, 19) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_move(board, 9, 19, 4) == 0 );
assert( gamma_move(board, 9, 22, 11) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 16, 23) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 5, 0, 21) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 6, 15, 7) == 0 );
assert( gamma_move(board, 7, 13, 15) == 1 );
assert( gamma_move(board, 7, 19, 18) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 18, 12) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 14, 13) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 16, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 22, 0) == 0 );
assert( gamma_move(board, 2, 14, 19) == 1 );
assert( gamma_move(board, 2, 19, 10) == 1 );
assert( gamma_move(board, 3, 19, 20) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 20, 5) == 0 );
assert( gamma_move(board, 5, 16, 18) == 1 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_move(board, 8, 18, 9) == 0 );
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 3, 0, 16) == 1 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 23) == 0 );
assert( gamma_move(board, 5, 7, 18) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 19, 23) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );


char* board919654931 = gamma_board(board);
assert( board919654931 != NULL );
assert( strcmp(board919654931, 
"55.5.75336768622.468.1..\n"
"2.9.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339....73..28..68\n"
"416877.355.9725575227387\n"
".7472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.2..58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board919654931);
board919654931 = NULL;
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 17) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );


char* board921632921 = gamma_board(board);
assert( board921632921 != NULL );
assert( strcmp(board921632921, 
"55.5.75336768622.468.1..\n"
"2.9.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339....73..28..68\n"
"416877.355.9725575227387\n"
".7472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.2..58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board921632921);
board921632921 = NULL;
assert( gamma_move(board, 8, 12, 20) == 0 );
assert( gamma_move(board, 9, 18, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );


char* board225278480 = gamma_board(board);
assert( board225278480 != NULL );
assert( strcmp(board225278480, 
"55.5.75336768622.468.1..\n"
"2.9.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339....73..28..68\n"
"416877.355.9725575227387\n"
".7472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.2..58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board225278480);
board225278480 = NULL;
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 6, 19) == 0 );
assert( gamma_move(board, 6, 14, 20) == 0 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_move(board, 7, 19, 3) == 0 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_move(board, 8, 14, 13) == 0 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_move(board, 9, 16, 14) == 1 );
assert( gamma_move(board, 1, 10, 20) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 5, 1, 19) == 0 );
assert( gamma_free_fields(board, 5) == 86 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 6, 21, 13) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 11, 13) == 0 );


char* board532178058 = gamma_board(board);
assert( board532178058 != NULL );
assert( strcmp(board532178058, 
"55.5.75336768622.468.1..\n"
"2.9.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339....739.28..68\n"
"416877.355.9725575227387\n"
".7472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.2..58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.1.874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"465922.9.6.9638173267.15\n") == 0);
free(board532178058);
board532178058 = NULL;
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 1, 18) == 1 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_busy_fields(board, 7) == 39 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 23, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 8, 20) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 6, 23, 9) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 12, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 10, 20) == 0 );
assert( gamma_move(board, 8, 20, 10) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 4, 23, 18) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 6, 17) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );


char* board436300726 = gamma_board(board);
assert( board436300726 != NULL );
assert( strcmp(board436300726, 
"55.5.75336768622.468.1..\n"
"259.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339..7.739.28..68\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board436300726);
board436300726 = NULL;
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 23) == 0 );
assert( gamma_move(board, 7, 23, 13) == 0 );
assert( gamma_move(board, 8, 10, 18) == 0 );
assert( gamma_move(board, 9, 0, 21) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_free_fields(board, 9) == 80 );


char* board424501569 = gamma_board(board);
assert( board424501569 != NULL );
assert( strcmp(board424501569, 
"55.5.75336768622.468.1..\n"
"259.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339..7.739.28..68\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14.29295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board424501569);
board424501569 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 17, 21) == 0 );
assert( gamma_move(board, 2, 20, 19) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 17, 21) == 0 );
assert( gamma_move(board, 4, 17, 4) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 14, 17) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board250209891 = gamma_board(board);
assert( board250209891 != NULL );
assert( strcmp(board250209891, 
"55.5.75336768622.46821..\n"
"259.67156.23933855334224\n"
"458934486.4...857229..42\n"
"3.512.29138689317559868.\n"
"15793.831493174877..3362\n"
"7599811339..7.739.28..68\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354..92.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.999281784756.5159..5.\n"
"96322331246.93.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board250209891);
board250209891 = NULL;
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 9, 13, 16) == 0 );
assert( gamma_busy_fields(board, 9) == 43 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 13, 17) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_golden_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 4, 15) == 0 );
assert( gamma_move(board, 8, 23, 7) == 0 );
assert( gamma_move(board, 9, 12, 15) == 0 );
assert( gamma_move(board, 9, 21, 14) == 1 );
assert( gamma_move(board, 1, 20, 11) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 20, 14) == 1 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 15, 6) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 10, 18) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 1, 23, 16) == 1 );
assert( gamma_move(board, 2, 6, 21) == 0 );
assert( gamma_move(board, 3, 17, 20) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 5, 19, 19) == 0 );
assert( gamma_move(board, 6, 0, 21) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 2, 15, 16) == 0 );
assert( gamma_golden_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 17, 21) == 0 );
assert( gamma_busy_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 19, 23) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 8, 17, 21) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 17, 20) == 0 );
assert( gamma_move(board, 1, 22, 14) == 0 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 18, 9) == 0 );


char* board275445560 = gamma_board(board);
assert( board275445560 != NULL );
assert( strcmp(board275445560, 
"55.5.75336768622.46821..\n"
"259.67156.23933855334224\n"
"458934486.4..2857229..42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board275445560);
board275445560 = NULL;
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_free_fields(board, 7) == 71 );


char* board990734587 = gamma_board(board);
assert( board990734587 != NULL );
assert( strcmp(board990734587, 
"55.5.75336768622.46821..\n"
"259.67156.23933855334224\n"
"458934486.4..2857229..42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732.14.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board990734587);
board990734587 = NULL;
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 17, 7) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_golden_move(board, 1, 15, 15) == 0 );
assert( gamma_move(board, 2, 8, 23) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_golden_move(board, 3, 18, 12) == 0 );
assert( gamma_move(board, 4, 16, 19) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );


char* board149823105 = gamma_board(board);
assert( board149823105 != NULL );
assert( strcmp(board149823105, 
"55.5.75336768622446821..\n"
"259.67156.23933855334224\n"
"458934486.4..2857229..42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.1594.324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732214.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board149823105);
board149823105 = NULL;
assert( gamma_move(board, 5, 22, 4) == 0 );
assert( gamma_move(board, 5, 20, 12) == 1 );
assert( gamma_move(board, 6, 6, 23) == 0 );
assert( gamma_move(board, 7, 17, 11) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 19, 4) == 0 );
assert( gamma_move(board, 8, 3, 16) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 16, 18) == 0 );


char* board504616005 = gamma_board(board);
assert( board504616005 != NULL );
assert( strcmp(board504616005, 
"55.5.75336768622446821..\n"
"259.67156.23933855334224\n"
"458934486.4..2857229..42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.15945324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12..2269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732214.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board504616005);
board504616005 = NULL;
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 9, 18, 14) == 0 );
assert( gamma_free_fields(board, 9) == 68 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 22, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 20, 17) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 15) == 0 );
assert( gamma_move(board, 6, 15, 14) == 0 );
assert( gamma_golden_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 23, 13) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 20, 13) == 0 );
assert( gamma_move(board, 3, 20, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 6, 20) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 16, 5) == 0 );
assert( gamma_move(board, 9, 15, 5) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );


char* board586586970 = gamma_board(board);
assert( board586586970 != NULL );
assert( strcmp(board586586970, 
"55.5.75336768622446821..\n"
"259.67156.23933855334224\n"
"458934486.4..28572295.42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.15945324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12.42269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732214.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board586586970);
board586586970 = NULL;
assert( gamma_move(board, 1, 17, 21) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );


char* board543799696 = gamma_board(board);
assert( board543799696 != NULL );
assert( strcmp(board543799696, 
"55.5.75336768622446821..\n"
"259.67156.23933855334224\n"
"458934486.4..28572295.42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.15945324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12.42269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732214.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board543799696);
board543799696 = NULL;
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 58 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 17) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 6, 21) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 8, 22) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 41 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_busy_fields(board, 9) == 44 );
assert( gamma_free_fields(board, 9) == 66 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 22, 1) == 0 );
assert( gamma_move(board, 3, 15, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 50 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 15, 19) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 8, 20) == 0 );
assert( gamma_move(board, 8, 18, 7) == 0 );


char* board112549947 = gamma_board(board);
assert( board112549947 != NULL );
assert( strcmp(board112549947, 
"55.5.75336768622446821..\n"
"259.67156.23933855334224\n"
"458934486.4..28572295.42\n"
"3.512.291386893175598681\n"
"15793.831493174877..3362\n"
"7599811339..7.739.282968\n"
"416877.355.9725575227387\n"
"17472.13.339126.15945324\n"
".7..439346883.9.354.192.\n"
"14729295459.255852.28.58\n"
"52.668715756971471343222\n"
"15886..7822.94131998.1..\n"
".12.42269478.13874527245\n"
"72.99928178475665159..5.\n"
"96322331246593.64.535216\n"
"12.636643732214.41.52483\n"
"141173591891.3..9193.15.\n"
"8.93154627572985.3.62264\n"
"835712.71618825.48894661\n"
"46592279.6.9638173267.15\n") == 0);
free(board112549947);
board112549947 = NULL;
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_free_fields(board, 8) == 65 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 22, 1) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 5, 0, 21) == 0 );
assert( gamma_move(board, 6, 18, 15) == 1 );
assert( gamma_move(board, 6, 10, 19) == 0 );


gamma_delete(board);

    return 0;
}
