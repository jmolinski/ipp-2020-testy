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
uuid: 163028547
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(22, 23, 9, 47);
assert( board != NULL );


assert( gamma_move(board, 1, 22, 20) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 19, 4) == 1 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_move(board, 6, 15, 2) == 1 );
assert( gamma_move(board, 7, 10, 20) == 1 );
assert( gamma_free_fields(board, 7) == 498 );
assert( gamma_move(board, 8, 21, 10) == 1 );
assert( gamma_move(board, 8, 7, 21) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 12) == 1 );
assert( gamma_move(board, 9, 15, 19) == 1 );
assert( gamma_move(board, 1, 18, 5) == 1 );
assert( gamma_move(board, 2, 3, 21) == 1 );
assert( gamma_move(board, 2, 18, 15) == 1 );
assert( gamma_free_fields(board, 2) == 491 );
assert( gamma_move(board, 3, 15, 10) == 1 );
assert( gamma_move(board, 3, 21, 11) == 1 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 21, 13) == 1 );
assert( gamma_move(board, 7, 18, 4) == 1 );
assert( gamma_free_fields(board, 7) == 484 );
assert( gamma_move(board, 8, 20, 0) == 1 );
assert( gamma_move(board, 9, 3, 12) == 1 );
assert( gamma_move(board, 1, 21, 8) == 1 );
assert( gamma_free_fields(board, 1) == 481 );


char* board453034101 = gamma_board(board);
assert( board453034101 != NULL );
assert( strcmp(board453034101, 
"......................\n"
"...2...8..............\n"
"..........7...........\n"
"...............9......\n"
"......................\n"
"..........5...........\n"
"......................\n"
"..................2...\n"
".........5............\n"
".....................7\n"
"...9.....9............\n"
".....................3\n"
"...............3.....8\n"
"......................\n"
".....................1\n"
"......................\n"
"......................\n"
".........6........1...\n"
".......2..........73..\n"
"...65........4........\n"
"....4..........6......\n"
"......................\n"
"....................8.\n") == 0);
free(board453034101);
board453034101 = NULL;
assert( gamma_move(board, 2, 15, 21) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 9, 18) == 1 );
assert( gamma_free_fields(board, 4) == 476 );
assert( gamma_move(board, 5, 21, 20) == 1 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 6, 13, 10) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 7, 13, 14) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 15, 12) == 1 );
assert( gamma_move(board, 9, 16, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 18) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 15, 14) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 19, 0) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_free_fields(board, 5) == 461 );
assert( gamma_move(board, 6, 4, 15) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );


char* board677708265 = gamma_board(board);
assert( board677708265 != NULL );
assert( strcmp(board677708265, 
"......................\n"
"...2...8.......2......\n"
"..........7..........5\n"
"...............9......\n"
".1.......4............\n"
"..........5...........\n"
"......................\n"
"....6...5.........2...\n"
".........5...7.3......\n"
".....................7\n"
"...9.7...9.....9......\n"
"..6..................3\n"
".............6.3.....8\n"
"....2.................\n"
"..8..................1\n"
"...3..................\n"
"..5...................\n"
".........6........1...\n"
".......2..........73..\n"
"...65........4........\n"
"....4.....7....6......\n"
"2.........3...........\n"
".....3..........9..48.\n") == 0);
free(board677708265);
board677708265 = NULL;
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 9, 16, 3) == 1 );
assert( gamma_move(board, 1, 0, 17) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 3, 20) == 1 );
assert( gamma_move(board, 3, 13, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 22, 11) == 0 );
assert( gamma_move(board, 5, 11, 14) == 1 );
assert( gamma_move(board, 6, 21, 4) == 1 );
assert( gamma_move(board, 7, 13, 15) == 1 );
assert( gamma_free_fields(board, 7) == 450 );


char* board152164849 = gamma_board(board);
assert( board152164849 != NULL );
assert( strcmp(board152164849, 
"......................\n"
"...2...8.......2......\n"
"...3......7..........5\n"
"...............9......\n"
".1.......4...3........\n"
"1.........5...........\n"
"......................\n"
"....6...5....7....2...\n"
".........5.5.7.3......\n"
".....................7\n"
"...9.7...9.....9......\n"
"..6........8.........3\n"
".............6.3.....8\n"
"....2.................\n"
"..8..................1\n"
"...3..................\n"
".85...................\n"
".........6........1...\n"
".......2..........73.6\n"
"...65........4..9.....\n"
"....4.....7....6......\n"
"2.........3...........\n"
".....3..........9..48.\n") == 0);
free(board152164849);
board152164849 = NULL;
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 14, 18) == 1 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 3, 21, 11) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 8, 16) == 1 );
assert( gamma_move(board, 5, 18, 18) == 1 );
assert( gamma_move(board, 6, 19, 9) == 1 );
assert( gamma_move(board, 6, 18, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 5, 21) == 1 );
assert( gamma_move(board, 7, 19, 1) == 1 );
assert( gamma_golden_move(board, 7, 12, 15) == 0 );
assert( gamma_move(board, 8, 17, 3) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 22, 16) == 0 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 17) == 1 );
assert( gamma_move(board, 3, 5, 20) == 1 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board829575343 = gamma_board(board);
assert( board829575343 != NULL );
assert( strcmp(board829575343, 
"......................\n"
"...2.7.8.......2......\n"
"...3.3....7..........5\n"
"...............9......\n"
".1.......4...39...5...\n"
"1.........52..........\n"
"........5.......3.....\n"
"....6...5....7....2...\n"
".........5.5.7.3..6...\n"
".........2...........7\n"
"...9.7...9.....9......\n"
"1.6........8.........3\n"
".............6.3.....8\n"
"....2..............6..\n"
"..8..................1\n"
"...3..................\n"
".85...................\n"
"...8.1...6........1...\n"
".......2.9...1....73.6\n"
".4.65........4..98....\n"
"....4.....7....6......\n"
"2.....8...3........7..\n"
".....3..........9..48.\n") == 0);
free(board829575343);
board829575343 = NULL;
assert( gamma_move(board, 6, 20, 9) == 1 );
assert( gamma_move(board, 6, 8, 17) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_free_fields(board, 7) == 428 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 10, 16) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_move(board, 1, 8, 19) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 19) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_free_fields(board, 2) == 422 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 11, 16) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 16, 20) == 1 );
assert( gamma_move(board, 6, 7, 17) == 1 );
assert( gamma_move(board, 6, 14, 1) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 12, 6) == 1 );
assert( gamma_move(board, 8, 9, 15) == 1 );
assert( gamma_move(board, 9, 20, 15) == 1 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_free_fields(board, 1) == 412 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 16) == 1 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 5, 19, 16) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_free_fields(board, 6) == 407 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );


char* board910895077 = gamma_board(board);
assert( board910895077 != NULL );
assert( strcmp(board910895077, 
"......................\n"
"...2.7.8.......2......\n"
"...3.3....7.....5....5\n"
"........1......9..2...\n"
".1.......4...39...5...\n"
"1......66.52..........\n"
"2.......5.94....3..5..\n"
"....6..358...7....2.9.\n"
".........5.5.7.3..6...\n"
".........2...........7\n"
"...9.7...9.....9......\n"
"1.6........8.........3\n"
".............6.3.....8\n"
"....2..............66.\n"
"..8..7..6............1\n"
"...3..................\n"
".85.........83........\n"
"...8.1...6.8......1...\n"
".......2.9...1....73.6\n"
".4.65...7..3.42.98....\n"
"....4.....79...6......\n"
"2..9..8...3...6....7..\n"
".....3...7......9..48.\n") == 0);
free(board910895077);
board910895077 = NULL;
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 14, 18) == 0 );
assert( gamma_free_fields(board, 8) == 405 );
assert( gamma_move(board, 9, 10, 0) == 1 );
assert( gamma_move(board, 9, 2, 18) == 1 );
assert( gamma_move(board, 1, 21, 11) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 21, 15) == 1 );
assert( gamma_move(board, 4, 21, 8) == 0 );
assert( gamma_free_fields(board, 4) == 402 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 1, 22) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 14) == 1 );
assert( gamma_move(board, 9, 22, 11) == 0 );
assert( gamma_move(board, 9, 14, 2) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 14, 17) == 1 );
assert( gamma_move(board, 2, 21, 9) == 1 );
assert( gamma_free_fields(board, 2) == 393 );
assert( gamma_move(board, 3, 1, 18) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_free_fields(board, 5) == 391 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 17, 21) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_free_fields(board, 7) == 388 );
assert( gamma_move(board, 8, 13, 16) == 1 );
assert( gamma_move(board, 9, 18, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 16 );
assert( gamma_move(board, 1, 14, 11) == 1 );
assert( gamma_move(board, 2, 22, 0) == 0 );
assert( gamma_move(board, 2, 15, 19) == 0 );
assert( gamma_move(board, 3, 12, 20) == 1 );
assert( gamma_move(board, 3, 16, 7) == 1 );
assert( gamma_move(board, 4, 20, 4) == 1 );
assert( gamma_move(board, 4, 20, 3) == 1 );
assert( gamma_free_fields(board, 4) == 381 );
assert( gamma_move(board, 6, 14, 16) == 1 );
assert( gamma_move(board, 6, 18, 1) == 1 );
assert( gamma_move(board, 7, 14, 21) == 1 );
assert( gamma_move(board, 7, 12, 19) == 1 );
assert( gamma_move(board, 8, 17, 13) == 1 );
assert( gamma_move(board, 9, 16, 4) == 1 );
assert( gamma_move(board, 9, 5, 19) == 1 );
assert( gamma_move(board, 1, 18, 20) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 20, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 11, 20) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 17) == 1 );


char* board702449325 = gamma_board(board);
assert( board702449325 != NULL );
assert( strcmp(board702449325, 
".7....................\n"
"...2.7.8......72.7....\n"
"...3.3....753...5.1..5\n"
".....9..1...7..9..2...\n"
".19......4...39...5...\n"
"1....7.66.52..2.......\n"
"2.......5.94.86.3..5..\n"
"....6..358...7....2.92\n"
"....8....5.5.7.3..6.4.\n"
".........2.......8...7\n"
"...9.7..39.....9......\n"
"1.6.1......8..1......3\n"
".........6...6.3.....8\n"
"....2..5.5.........662\n"
"..8.67..6............1\n"
".3.3............3.....\n"
".85.2...5..683........\n"
"...8.1...6.8......1...\n"
".......2.9.7.1..9.7346\n"
".4.65...7..3.42.989.4.\n"
"....4.....79..96......\n"
"2..9..8...3...6...67..\n"
".....3.8.79.....9..48.\n") == 0);
free(board702449325);
board702449325 = NULL;
assert( gamma_move(board, 8, 19, 0) == 0 );
assert( gamma_move(board, 9, 17, 17) == 1 );
assert( gamma_move(board, 9, 17, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 2, 2, 21) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 3, 21, 7) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 5, 0, 20) == 1 );
assert( gamma_move(board, 6, 15, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board584276220 = gamma_board(board);
assert( board584276220 != NULL );
assert( strcmp(board584276220, 
".7....................\n"
"..22.7.8......72.7....\n"
"5..3.3....753...5.1..5\n"
".....9..1...7..9..2...\n"
".19......4...39...5...\n"
"1....7.66.52..2..9....\n"
"2.......5.94.86.3..5..\n"
"....6..358...7....2.92\n"
"....8....5.5.7.3..6.4.\n"
".........2.3.....8...7\n"
"2..9.7..39.....9......\n"
"1.6.1......8..1..9...3\n"
".........6...6.3.....8\n"
"....2..5.5....4....662\n"
"..8.67..6............1\n"
".3.3............3....3\n"
".85.2...5..683.6......\n"
"...8.1...6.8......1...\n"
".......2.9.7.1..9.7346\n"
".4.65...7..3.42.989.4.\n"
"..4.4.....79..96......\n"
"2..9..8...3...6...67..\n"
".....3.8.79.....9..48.\n") == 0);
free(board584276220);
board584276220 = NULL;
assert( gamma_move(board, 7, 14, 8) == 1 );
assert( gamma_free_fields(board, 7) == 356 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board870172769 = gamma_board(board);
assert( board870172769 != NULL );
assert( strcmp(board870172769, 
".7....................\n"
"..22.7.8......72.7....\n"
"5..3.3....753...5.1..5\n"
".....9..1...7..9..2...\n"
".19......4...39...5...\n"
"1....7.66.52..2..9....\n"
"2.......5.94.86.3..5..\n"
"....6..358...7....2.92\n"
"....8....5.5.7.3..6.4.\n"
".........2.3.....8...7\n"
"2..9.7..39.....9......\n"
"1.6.1......8..1..9...3\n"
".........6...6.3.....8\n"
"....2..5.5....4....662\n"
"..8.67..6.....7......1\n"
".3.3............3....3\n"
".85.2...5..683.6......\n"
"...8.1...6.8......1...\n"
".......2.9.7.1..9.7346\n"
".4.65...7..3.42.989.4.\n"
"..4.4.....79..96......\n"
"2..9..8...3...6...67..\n"
".....3.8.79.....9..48.\n") == 0);
free(board870172769);
board870172769 = NULL;
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_golden_move(board, 9, 13, 11) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 18, 9) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 19, 20) == 1 );
assert( gamma_move(board, 6, 16, 18) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 19, 16) == 0 );
assert( gamma_move(board, 8, 19, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 18 );
assert( gamma_move(board, 9, 13, 22) == 1 );
assert( gamma_move(board, 9, 14, 14) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 6, 21) == 1 );
assert( gamma_move(board, 3, 20, 17) == 1 );
assert( gamma_move(board, 3, 20, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 4, 20, 3) == 0 );
assert( gamma_golden_move(board, 4, 18, 1) == 1 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 7, 14) == 1 );
assert( gamma_move(board, 6, 7, 13) == 1 );
assert( gamma_move(board, 7, 11, 19) == 1 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_free_fields(board, 7) == 339 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 18 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_free_fields(board, 2) == 336 );


char* board813741591 = gamma_board(board);
assert( board813741591 != NULL );
assert( strcmp(board813741591, 
".7...........9........\n"
"..22.728......72.7....\n"
"5..3.3....753...5.14.5\n"
".....9..1..77..9..2...\n"
".19......4...39.6.5...\n"
"1....7.66.52..2..9..3.\n"
"2.......5.94.86.3..5..\n"
"....6..358...7....2.92\n"
"....8..6.5.5.793..6.4.\n"
".......6.2.3.....8...7\n"
"2..9.7..39.....9......\n"
"116.1......82.1..9...3\n"
"......7.36...6.3.....8\n"
"....2..5.5....4...3662\n"
"..8167..6.....7......1\n"
".3.3............3..8.3\n"
".85.2...5..683.6......\n"
"...8.1.8.6.8......1...\n"
"6....9.2.9.7.1..9.7346\n"
".4.65...7..3.42.989.4.\n"
"..4.4.....79..96......\n"
"2..9..8...3..46...47..\n"
".....3.8.79.....9..48.\n") == 0);
free(board813741591);
board813741591 = NULL;
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 2, 15) == 1 );


char* board498185927 = gamma_board(board);
assert( board498185927 != NULL );
assert( strcmp(board498185927, 
".7...........9........\n"
"..22.728......72.7....\n"
"5..3.3....753...5.14.5\n"
".....9..1..77..9..2...\n"
".19......4...39.6.5...\n"
"1....7.66.52..2..9..3.\n"
"2.......5.94.86.3..5..\n"
"..3.6..358...7....2.92\n"
"....8..6.5.5.793..6.4.\n"
".......6.2.3.....8...7\n"
"2..9.7..39.....9......\n"
"116.1......82.1..9...3\n"
"......7.36...6.3.....8\n"
"....2..5.5....4...3662\n"
"..8167..6.....7......1\n"
".3.3............3..8.3\n"
".85.2...5..683.6......\n"
"...8.1.8.6.8......1...\n"
"6....9.2.9.7.1..9.7346\n"
".4.65...7..3.42.989.4.\n"
"..4.4.....79..96......\n"
"2..9..8...3..46...47..\n"
".....3.8.79.....9..48.\n") == 0);
free(board498185927);
board498185927 = NULL;
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 20, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 7, 18) == 1 );
assert( gamma_move(board, 8, 1, 16) == 1 );
assert( gamma_move(board, 9, 22, 6) == 0 );
assert( gamma_move(board, 1, 19, 17) == 1 );
assert( gamma_move(board, 3, 2, 19) == 1 );
assert( gamma_move(board, 4, 13, 19) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 6, 14, 19) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 24 );
assert( gamma_golden_move(board, 9, 5, 18) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 4, 20, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 3, 22) == 1 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_move(board, 6, 5, 20) == 0 );
assert( gamma_move(board, 6, 3, 22) == 0 );
assert( gamma_free_fields(board, 6) == 317 );
assert( gamma_move(board, 7, 13, 13) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 16, 10) == 1 );
assert( gamma_move(board, 9, 13, 5) == 1 );
assert( gamma_move(board, 1, 18, 19) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 21, 21) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_free_fields(board, 3) == 311 );
assert( gamma_move(board, 4, 21, 1) == 1 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 12, 16) == 1 );
assert( gamma_move(board, 7, 1, 15) == 1 );
assert( gamma_move(board, 8, 16, 14) == 1 );
assert( gamma_move(board, 9, 18, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 11, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 7, 13, 18) == 0 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_free_fields(board, 7) == 302 );
assert( gamma_move(board, 8, 20, 7) == 1 );
assert( gamma_free_fields(board, 8) == 301 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 16, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 20, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 9, 18, 0) == 1 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 22, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 22, 18) == 0 );
assert( gamma_move(board, 3, 15, 4) == 1 );
assert( gamma_move(board, 4, 22, 4) == 0 );
assert( gamma_move(board, 4, 20, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 20, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 22, 10) == 0 );


char* board897195739 = gamma_board(board);
assert( board897195739 != NULL );
assert( strcmp(board897195739, 
".7.5.........9........\n"
"..22.728......72.7...3\n"
"5..3.3....753...5.14.5\n"
"..3..9..1..774693.2...\n"
".19....7.4...39.6.5...\n"
"1.2..7.66.52..2..9.13.\n"
"28......5.94686.3..54.\n"
".73.6..358...7....2.92\n"
"....8..6.5.5.7938.6.4.\n"
"5...7..6.2.3.7...8...7\n"
"2..9.7..39.....9....4.\n"
"116.1..8...82.1..9...3\n"
"..2...7736...6.38....8\n"
"...12.25.5..4.4...3662\n"
"3.8167..6.....7......1\n"
".3.3............3..883\n"
".85.2...5..68356......\n"
"1.98.188.6.8.9....1...\n"
"6....9.2.9.7.1.39.7346\n"
".4.6575.7..3.42.989.4.\n"
"..4.4.....79..96......\n"
"2..9..8...3..46...4754\n"
"4....3.8.79.....9.948.\n") == 0);
free(board897195739);
board897195739 = NULL;
assert( gamma_move(board, 7, 5, 21) == 0 );
assert( gamma_move(board, 7, 16, 10) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_free_fields(board, 8) == 296 );
assert( gamma_move(board, 9, 16, 2) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 28 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 15, 16) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, 21, 3) == 1 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_move(board, 6, 17, 9) == 1 );
assert( gamma_move(board, 7, 12, 21) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 7, 17) == 0 );
assert( gamma_move(board, 1, 19, 10) == 1 );
assert( gamma_move(board, 1, 13, 21) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_move(board, 6, 6, 22) == 1 );
assert( gamma_free_fields(board, 6) == 282 );
assert( gamma_move(board, 7, 17, 7) == 1 );
assert( gamma_move(board, 9, 11, 7) == 1 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 10, 20) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_free_fields(board, 5) == 276 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 19, 19) == 1 );
assert( gamma_move(board, 8, 10, 18) == 1 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 1, 20, 21) == 1 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 19, 20) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 7, 6, 20) == 1 );
assert( gamma_move(board, 8, 22, 9) == 0 );
assert( gamma_move(board, 8, 18, 17) == 1 );
assert( gamma_move(board, 9, 20, 20) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );


char* board411209328 = gamma_board(board);
assert( board411209328 != NULL );
assert( strcmp(board411209328, 
".7.5..6......9........\n"
"..22.728....7172.7..13\n"
"5..3.37...753...5.1495\n"
"..3..9..1..774693.27..\n"
".19....7.48..39.6.5...\n"
"1.2..7.66.52..2..9813.\n"
"28......5.9468623..54.\n"
".73.6..358...7....2.92\n"
"....8..6.5.5.7938.6.4.\n"
"5...7..6.2.3.7...8...7\n"
"2.69.7.339.....9....4.\n"
"116.1..8..98251..9...3\n"
"..2...7736...6.38..1.8\n"
"..712.25.5.54.4..63662\n"
"3.8167.46.7...7......1\n"
".3.3.......9....37.883\n"
".85.2...5..68356......\n"
"1.98.188.6.8.9....1...\n"
"6....9.2.937.1.39.7346\n"
".4.6575.7..3.42.989.45\n"
"..4.4.....79..969.....\n"
"2..99.8...3..46...4754\n"
"4.34.3.8.79.....9.948.\n") == 0);
free(board411209328);
board411209328 = NULL;
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 5, 4, 18) == 1 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 22, 20) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 1, 1, 20) == 1 );
assert( gamma_move(board, 2, 20, 17) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_free_fields(board, 4) == 260 );
assert( gamma_move(board, 6, 2, 19) == 0 );
assert( gamma_move(board, 6, 17, 21) == 0 );
assert( gamma_move(board, 7, 12, 16) == 0 );
assert( gamma_move(board, 7, 21, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 15, 16) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 1, 4, 21) == 1 );
assert( gamma_move(board, 2, 0, 21) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_golden_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 6, 8, 20) == 1 );
assert( gamma_move(board, 7, 17, 1) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 18, 11) == 1 );
assert( gamma_move(board, 8, 21, 12) == 1 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 14) == 1 );
assert( gamma_free_fields(board, 1) == 250 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 0, 20) == 0 );
assert( gamma_move(board, 4, 22, 4) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_move(board, 6, 15, 3) == 1 );
assert( gamma_move(board, 8, 11, 20) == 0 );


char* board633248811 = gamma_board(board);
assert( board633248811 != NULL );
assert( strcmp(board633248811, 
".7.5..6......9........\n"
"2.221728....7172.7..13\n"
"51.3.37.6.753...5.1495\n"
"..3..9..1..774693.27..\n"
".19.5..7.48..39.6.5...\n"
"1.2..7.66.52..2..9813.\n"
"28......5.9468623..54.\n"
".73.6..358...7....2.92\n"
"....8..615.5.7938.6.4.\n"
"512.7..6.2.3.74..8...7\n"
"2.69.7.339.....9....48\n"
"11691..85.98251..98..3\n"
"..2...7736...6.38..1.8\n"
".9712.25.5.54.4..63662\n"
"3.8167.46.7..57......1\n"
".3.3.......9....37.883\n"
".85.2...5..68356......\n"
"1.98.188.6.8.9....1...\n"
"6....932.937.1.39.7346\n"
".4.6575.7..3.426989.45\n"
"..464..2..79.7969.....\n"
"2..99.8...3..46..74754\n"
"4.34.3.8.79.....9.948.\n") == 0);
free(board633248811);
board633248811 = NULL;
assert( gamma_move(board, 9, 17, 16) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 1, 21, 9) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 4, 12, 14) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 18) == 1 );
assert( gamma_move(board, 5, 20, 19) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 18, 11) == 0 );
assert( gamma_move(board, 7, 12, 18) == 1 );
assert( gamma_move(board, 7, 17, 12) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_move(board, 1, 21, 16) == 1 );
assert( gamma_move(board, 2, 22, 9) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 20, 15) == 0 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 8, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 30 );
assert( gamma_golden_move(board, 5, 9, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 31 );
assert( gamma_free_fields(board, 6) == 234 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_free_fields(board, 8) == 234 );
assert( gamma_golden_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 9, 18, 0) == 0 );
assert( gamma_move(board, 9, 17, 15) == 1 );
assert( gamma_move(board, 1, 5, 16) == 1 );
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 19, 22) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 13, 16) == 0 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 8, 20, 2) == 1 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 5, 14, 14) == 0 );
assert( gamma_move(board, 6, 17, 10) == 1 );
assert( gamma_move(board, 7, 16, 6) == 1 );
assert( gamma_move(board, 7, 19, 14) == 1 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 3, 17) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );


char* board848106842 = gamma_board(board);
assert( board848106842 != NULL );
assert( strcmp(board848106842, 
".7.5..6......9.....3..\n"
"2.221728....7172.7..13\n"
"51.3.37.6.753...5.1495\n"
"..3..9..1..774693.275.\n"
".19.5.57.48.739.6.5...\n"
"1.29.7.66.52..2..9813.\n"
"28...1..5.94686239.541\n"
".73.6..358...7...92.92\n"
"....8..615.547938.674.\n"
"512.7.26.2.3.74..8...7\n"
"2.69.72339...1.9.7..48\n"
"11691..85.98251..98..3\n"
"..2...7736...64386.1.8\n"
"39712.25.5.54.4..63662\n"
"3.8167.46.7..57......1\n"
".3.3.9.....9....37.883\n"
".85.2...5..683567.....\n"
"1.98.188.6.8.9....1...\n"
"6....932.937.3.39.7346\n"
".4.657537..3.426989.45\n"
"..4645.2..79.7969...8.\n"
"22.99.8...3..46..74754\n"
"4.34.338.79.....9.948.\n") == 0);
free(board848106842);
board848106842 = NULL;
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_golden_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 15, 21) == 0 );


char* board878767218 = gamma_board(board);
assert( board878767218 != NULL );
assert( strcmp(board878767218, 
".7.5..6......9.....3..\n"
"2.221728....7172.7..13\n"
"51.3.37.6.753...5.1495\n"
"..3..9..1..774693.275.\n"
".19.5.57.48.739.6.5...\n"
"1.29.7.66.52..2..9813.\n"
"28...1..5.94686239.541\n"
".73.6..358...7...92.92\n"
"....8..615.547938.674.\n"
"512.7.26.2.3.74..8...7\n"
"2.69.72339...1.9.7..48\n"
"11691..85.98251..98..3\n"
"..2...7736...64386.1.8\n"
"59712.25.5.54.4..63662\n"
"3.8167.46.7..57......1\n"
".3.3.9.....9....37.883\n"
".85.2...5..683567.....\n"
"1.98.188.6.8.9....1...\n"
"6....932.937.3.39.7346\n"
".4.657537..3.426989.45\n"
"..4645.2..79.7969...8.\n"
"22.99.8...3..46..74754\n"
"4.34.338.79..5..9.948.\n") == 0);
free(board878767218);
board878767218 = NULL;
assert( gamma_move(board, 8, 4, 17) == 1 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_golden_move(board, 1, 12, 5) == 0 );


char* board417802914 = gamma_board(board);
assert( board417802914 != NULL );
assert( strcmp(board417802914, 
".7.5..6......9.....3..\n"
"2.221728....7172.7..13\n"
"51.3.37.6.753...5.1495\n"
"..3..9..1..774693.275.\n"
".19.5.57.48.739.6.5...\n"
"1.2987.66.52..2..9813.\n"
"28...1..5.94686239.541\n"
".73.61.358...7...92.92\n"
"....8..615.547938.674.\n"
"512.7.26.213.74..8...7\n"
"2.69.72339...1.9.7..48\n"
"11691..85.98251..98..3\n"
"..2...7736...64386.1.8\n"
"59712.25.5.54.4..63662\n"
"3.8167.46.7..57......1\n"
".3.3.9.....9....37.883\n"
".85.2...5..683567.....\n"
"1.98.188.6.8.9....1...\n"
"6....932.937.3.39.7346\n"
".4.657537..3.426989.45\n"
"..4645.2..79.7969...8.\n"
"22.99.8...3..46..74754\n"
"4.34.338.79..5..9.948.\n") == 0);
free(board417802914);
board417802914 = NULL;
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_move(board, 3, 22, 11) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 4, 18, 19) == 0 );
assert( gamma_move(board, 4, 21, 13) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_move(board, 7, 18, 2) == 1 );
assert( gamma_golden_move(board, 7, 10, 16) == 1 );
assert( gamma_move(board, 8, 6, 19) == 1 );
assert( gamma_move(board, 8, 9, 18) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 3, 16, 15) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 19, 9) == 0 );
assert( gamma_move(board, 8, 18, 18) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 36 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 22, 5) == 0 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 13, 20) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 6, 8, 21) == 1 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 19, 20) == 0 );
assert( gamma_move(board, 8, 18, 19) == 0 );
assert( gamma_move(board, 9, 16, 3) == 0 );
assert( gamma_move(board, 9, 16, 9) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 5, 0, 19) == 1 );
assert( gamma_move(board, 6, 19, 13) == 1 );
assert( gamma_free_fields(board, 6) == 200 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 15, 10) == 0 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_move(board, 9, 18, 21) == 1 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 22, 18) == 0 );
assert( gamma_move(board, 2, 20, 19) == 0 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 13, 22) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 15, 14) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_free_fields(board, 7) == 197 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_free_fields(board, 8) == 197 );
assert( gamma_move(board, 9, 0, 17) == 0 );
assert( gamma_move(board, 1, 20, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 5, 21, 11) == 0 );
assert( gamma_move(board, 6, 5, 19) == 0 );
assert( gamma_move(board, 6, 14, 17) == 0 );
assert( gamma_free_fields(board, 6) == 196 );
assert( gamma_golden_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 8, 17, 15) == 0 );
assert( gamma_move(board, 8, 18, 3) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 10, 19) == 1 );
assert( gamma_golden_move(board, 9, 21, 20) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_move(board, 6, 20, 19) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 7, 18, 17) == 0 );
assert( gamma_move(board, 8, 6, 17) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 21, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 15, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 10, 20) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 11, 19) == 0 );
assert( gamma_move(board, 8, 17, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 32 );
assert( gamma_move(board, 9, 15, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_golden_move(board, 5, 15, 17) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );


char* board945784003 = gamma_board(board);
assert( board945784003 != NULL );
assert( strcmp(board945784003, 
".7.5..6......9.....3..\n"
"2.2217286...7172.79.13\n"
"51.3.37.6.7534..5.1499\n"
"5.3..98.1.9774693.275.\n"
".19.5.57148.739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73.61.358...7..392.92\n"
"....8..615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"11691.685.982515.98..3\n"
"952...7736...64386.1.8\n"
"59712.25.5.54.4.963662\n"
"3.8167.4667..57......1\n"
".3.3.9.....9..3.37.883\n"
"48512...5..683567.....\n"
"1.98.188.658.9....1...\n"
"6....932.937.3.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7.83\n"
"22.9958...3.246..74754\n"
"6.34.338.791.5.29.948.\n") == 0);
free(board945784003);
board945784003 = NULL;
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 19, 7) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 1, 20, 21) == 0 );
assert( gamma_move(board, 2, 16, 20) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 11, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 22, 8) == 0 );
assert( gamma_free_fields(board, 6) == 185 );
assert( gamma_move(board, 7, 20, 7) == 0 );
assert( gamma_move(board, 7, 2, 22) == 1 );
assert( gamma_free_fields(board, 7) == 184 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_free_fields(board, 9) == 184 );
assert( gamma_move(board, 1, 12, 22) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 3, 4, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 5, 11) == 1 );


char* board864251590 = gamma_board(board);
assert( board864251590 != NULL );
assert( strcmp(board864251590, 
".775..6.....19.....3..\n"
"2.2217286...7172.79.13\n"
"51.3.37.6.7534..5.1499\n"
"5.3.398.1.9774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73.61.358...7..392.92\n"
"....8..615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"116914685.982515.98..3\n"
"952...7736...64386.1.8\n"
"59712.25.5.54.4.963662\n"
"3.8167.4667..57......1\n"
".3.3.9.....9.23.37.883\n"
"48512...5..683567.....\n"
"1.98.188.658.9....1...\n"
"6....932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7.83\n"
"22.9958...3.246..74754\n"
"6.34.338.791.5.29.948.\n") == 0);
free(board864251590);
board864251590 = NULL;
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_move(board, 5, 8, 20) == 0 );
assert( gamma_free_fields(board, 6) == 180 );
assert( gamma_move(board, 7, 0, 21) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 17, 1) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 3, 19) == 1 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 2, 20, 9) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 22, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 22, 4) == 0 );
assert( gamma_free_fields(board, 4) == 178 );
assert( gamma_move(board, 5, 22, 18) == 0 );
assert( gamma_move(board, 5, 12, 22) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_move(board, 7, 18, 17) == 0 );
assert( gamma_move(board, 8, 15, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 1, 21, 4) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_golden_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 3, 11, 22) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_free_fields(board, 6) == 175 );
assert( gamma_move(board, 7, 13, 15) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 22, 20) == 0 );
assert( gamma_busy_fields(board, 9) == 41 );
assert( gamma_free_fields(board, 9) == 175 );
assert( gamma_move(board, 2, 10, 4) == 0 );


char* board650382417 = gamma_board(board);
assert( board650382417 != NULL );
assert( strcmp(board650382417, 
".775..6....319.....3..\n"
"2.2217286...7172.79.13\n"
"51.3.37.6.7534..5.1499\n"
"5.31398.1.9774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73261.358...7..392.92\n"
"....8..615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"116914685.982515.98..3\n"
"952...7736...64386.1.8\n"
"59712.25.5.54.4.963662\n"
"3.8167.4667..57......1\n"
".3.3.9.....9.23.37.883\n"
"48512...5..683567.....\n"
"1.98.188.658.9....1...\n"
"6.4..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7.83\n"
"22.9958...3.246..74754\n"
"6.34.338.79185.29.948.\n") == 0);
free(board650382417);
board650382417 = NULL;
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_golden_move(board, 1, 19, 12) == 0 );
assert( gamma_move(board, 2, 16, 22) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 11, 20) == 0 );
assert( gamma_move(board, 6, 5, 14) == 1 );
assert( gamma_move(board, 6, 14, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 21, 10) == 0 );
assert( gamma_free_fields(board, 8) == 169 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 22, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 3, 22) == 0 );
assert( gamma_free_fields(board, 4) == 168 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_free_fields(board, 5) == 168 );
assert( gamma_move(board, 7, 21, 1) == 0 );
assert( gamma_move(board, 7, 2, 20) == 1 );


char* board349400002 = gamma_board(board);
assert( board349400002 != NULL );
assert( strcmp(board349400002, 
".775..6....319..2..3..\n"
"2.2217286...7172.79.13\n"
"5173.37.6.7534..5.1499\n"
"5.31398.1.9774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73261.358...7..392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"116914685.982515.98..3\n"
"952..87736...64386.1.8\n"
"59712.25.5.54.4.963662\n"
"398167.4667..57......1\n"
".3.3.9.....9.23.37.883\n"
"48512...5.6683567.....\n"
"1.98.188.658.9....1...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7.83\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.948.\n") == 0);
free(board349400002);
board349400002 = NULL;
assert( gamma_move(board, 8, 19, 2) == 1 );
assert( gamma_move(board, 8, 21, 0) == 1 );
assert( gamma_move(board, 9, 11, 19) == 0 );
assert( gamma_busy_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 22, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 21, 8) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );


char* board369900033 = gamma_board(board);
assert( board369900033 != NULL );
assert( strcmp(board369900033, 
".775..6....319..2..3..\n"
"2.2217286...7172.79.13\n"
"5173.37.6.7534..5.1499\n"
"5.31398.1.9774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73261.358...7..392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"116914685.982515.98..3\n"
"952..87736...64386.1.8\n"
"59712.25.5.54.4.963662\n"
"398167.4667..57......1\n"
".3.3.9.....9.23.37.883\n"
"48512...5.6683567.....\n"
"1.98.188.658.9....1...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board369900033);
board369900033 = NULL;
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 16, 15) == 0 );
assert( gamma_move(board, 9, 8, 19) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 165 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_move(board, 5, 13, 14) == 0 );
assert( gamma_golden_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 18, 19) == 0 );
assert( gamma_move(board, 8, 9, 19) == 1 );
assert( gamma_move(board, 9, 4, 17) == 0 );
assert( gamma_move(board, 9, 17, 17) == 0 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_move(board, 3, 15, 20) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 17, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 20, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );


char* board290509932 = gamma_board(board);
assert( board290509932 != NULL );
assert( strcmp(board290509932, 
".775..6....319..2..3..\n"
"2.2217286...7172.79.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73261.358...7..392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213.74..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"1169146852982515.98..3\n"
"952..87736...64386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667..57......1\n"
"33.3.9.5...9.23.37.883\n"
"485124.25.6683567.....\n"
"1.98.188.658.9...81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board290509932);
board290509932 = NULL;
assert( gamma_move(board, 5, 10, 22) == 1 );
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 7, 18, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 8, 17) == 0 );
assert( gamma_busy_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 18, 21) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 154 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 14, 15) == 1 );


char* board151023914 = gamma_board(board);
assert( board151023914 != NULL );
assert( strcmp(board151023914, 
".775..6...5319..2..3..\n"
"2.2217286...7172.79.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52..2..9813.\n"
"28...1..5374686239.541\n"
".73261.358...74.392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213574..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"1169146852982515.98..3\n"
"952..87736...64386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667..57......1\n"
"33.3.9.5...9.23.37.883\n"
"485124.25.6683567.....\n"
"1.98.188.658.9...81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board151023914);
board151023914 = NULL;
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 13, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 40 );


char* board265625242 = gamma_board(board);
assert( board265625242 != NULL );
assert( strcmp(board265625242, 
".775..6...5319..2..3..\n"
"2.2217286...7172.79.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52.52..9813.\n"
"28...1..5374686239.541\n"
".73261.358...74.392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213574..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"1169146852982515.98..3\n"
"952..87736...64386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667..57......1\n"
"33.3.9.5...9.23.37.883\n"
"485124.25.6683567.....\n"
"1.98.188.658.9...81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board265625242);
board265625242 = NULL;
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 8, 15, 19) == 0 );
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_free_fields(board, 8) == 150 );
assert( gamma_move(board, 9, 16, 21) == 1 );
assert( gamma_move(board, 1, 5, 21) == 0 );
assert( gamma_move(board, 1, 21, 7) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 22, 9) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 15, 15) == 1 );
assert( gamma_golden_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 6, 19) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 7, 14, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 12, 8) == 1 );


char* board607417148 = gamma_board(board);
assert( board607417148 != NULL );
assert( strcmp(board607417148, 
".775..6...5319..2..3..\n"
"2.2217286...7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52.52..9813.\n"
"28...1..5374686239.541\n"
".73261.358...745392.92\n"
"....86.615.547938.674.\n"
"512.7.26.213574..8.6.7\n"
"2.69.72339.2.1.9.7..48\n"
"1169146852982515.98..3\n"
"952..877368..64386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667.857......1\n"
"33.3.9.5...9.23.37.883\n"
"485124.2576683567.....\n"
"1398.188.658.97..81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.9958...3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board607417148);
board607417148 = NULL;
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_golden_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 4, 21) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_move(board, 5, 17, 21) == 0 );
assert( gamma_move(board, 6, 18, 0) == 0 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 17, 15) == 0 );
assert( gamma_busy_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_free_fields(board, 9) == 141 );
assert( gamma_move(board, 1, 17, 21) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board802598020 = gamma_board(board);
assert( board802598020 != NULL );
assert( strcmp(board802598020, 
".775..6...5319..2..3..\n"
"2.2217286...7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52.52..9813.\n"
"28...1..5374686239.541\n"
".73261.358...745392.92\n"
"....86.615.547938.674.\n"
"51227.26.213574..8.6.7\n"
"2.69.72339.221.9.7..48\n"
"1169146852982515.98..3\n"
"952..877368.664386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667.857......1\n"
"33.3.9.5...9.23.37.883\n"
"48512482576683567.....\n"
"1398.188.658.97..81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board802598020);
board802598020 = NULL;
assert( gamma_move(board, 5, 16, 17) == 1 );
assert( gamma_move(board, 6, 10, 14) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 16, 20) == 0 );
assert( gamma_free_fields(board, 7) == 138 );
assert( gamma_move(board, 8, 8, 16) == 0 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_move(board, 9, 12, 19) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_free_fields(board, 3) == 136 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 22, 21) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 7, 6, 22) == 0 );
assert( gamma_free_fields(board, 7) == 136 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 13, 19) == 0 );


char* board796300223 = gamma_board(board);
assert( board796300223 != NULL );
assert( strcmp(board796300223, 
".775..6...5319..2..3..\n"
"2.2217286...7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.571483739.6.5...\n"
"1.2987866.52.52.59813.\n"
"28...1..5374686239.541\n"
".73261.358...745392.92\n"
"....86.6156547938.674.\n"
"51227.26.213574..8.6.7\n"
"2.69872339.221.9.7..48\n"
"1169146852982515.98..3\n"
"952..877368.664386.1.8\n"
"59712.25.5.54.44963662\n"
"398167.4667.857......1\n"
"33.3.9.5...9.23.37.883\n"
"48512482576683567.....\n"
"1398.188.658297..81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
".14645.2.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board796300223);
board796300223 = NULL;
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_free_fields(board, 9) == 135 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 7, 22) == 1 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_free_fields(board, 3) == 132 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 15, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 8, 19) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 19, 1) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 13, 15) == 0 );
assert( gamma_move(board, 9, 10, 21) == 1 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_golden_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 22, 15) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 18) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_golden_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 6, 17, 6) == 1 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_golden_move(board, 8, 12, 12) == 1 );
assert( gamma_move(board, 9, 16, 18) == 0 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_free_fields(board, 3) == 127 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_move(board, 6, 13, 18) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 6) == 126 );
assert( gamma_move(board, 7, 5, 13) == 1 );
assert( gamma_move(board, 8, 17, 3) == 0 );


char* board988377365 = gamma_board(board);
assert( board988377365 != NULL );
assert( strcmp(board988377365, 
".775..61..5319..2..3..\n"
"2.2217286.9.7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.57148373946.5...\n"
"1.2987866352.52.59813.\n"
"28...1..5374686239.541\n"
".73261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.69872339.281.9.7..48\n"
"1169146852982515.98..3\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.857......1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676....\n"
"13985188.658297..81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
"614645.2.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board988377365);
board988377365 = NULL;
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_golden_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 3, 19) == 0 );
assert( gamma_move(board, 8, 20, 11) == 1 );
assert( gamma_move(board, 9, 4, 18) == 0 );
assert( gamma_move(board, 1, 22, 0) == 0 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 20, 6) == 1 );


char* board589678183 = gamma_board(board);
assert( board589678183 != NULL );
assert( strcmp(board589678183, 
".775..61..5319..2..3..\n"
"2.2217286.9.7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.57148373946.5...\n"
"1.2987866352.52.59813.\n"
"28...1..5374686239.541\n"
".73261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.69872339.281.9.7..48\n"
"1169146852982515.98.83\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.857......1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676..2.\n"
"13985188.658297..81...\n"
"624..932.93713.39.7346\n"
".4.6575373.3.426989.45\n"
"61464532.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board589678183);
board589678183 = NULL;
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 5, 8, 21) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 7, 20, 5) == 1 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 8, 18, 21) == 0 );
assert( gamma_move(board, 9, 17, 15) == 0 );
assert( gamma_free_fields(board, 9) == 121 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 9, 22) == 1 );
assert( gamma_busy_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 19, 8) == 1 );
assert( gamma_move(board, 3, 21, 17) == 1 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 7, 16, 4) == 0 );
assert( gamma_move(board, 7, 0, 15) == 1 );
assert( gamma_busy_fields(board, 7) == 48 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 19, 7) == 0 );
assert( gamma_move(board, 9, 10, 12) == 1 );


char* board601949612 = gamma_board(board);
assert( board601949612 != NULL );
assert( strcmp(board601949612, 
".775..61.25319..2..3..\n"
"2.2217286.9.7172979.13\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".19.5.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..5374686239.541\n"
"773261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7..48\n"
"1169146852982515.98.83\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.857....3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676..2.\n"
"13985188.658297..81.7.\n"
"624..932193713.39.7346\n"
".4.6575373.3.426989.45\n"
"61464532.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6.34.338.79185829.9488\n") == 0);
free(board601949612);
board601949612 = NULL;
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 20, 6) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 7, 22) == 0 );
assert( gamma_move(board, 8, 19, 21) == 1 );
assert( gamma_busy_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 16, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 47 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 8, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 18, 21) == 0 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_move(board, 8, 22, 21) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 18, 17) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 22, 18) == 0 );
assert( gamma_move(board, 3, 15, 12) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 18, 16) == 1 );
assert( gamma_move(board, 6, 22, 8) == 0 );
assert( gamma_free_fields(board, 6) == 112 );
assert( gamma_move(board, 7, 22, 8) == 0 );
assert( gamma_free_fields(board, 7) == 112 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 11, 16) == 0 );
assert( gamma_move(board, 8, 3, 18) == 1 );
assert( gamma_move(board, 9, 20, 16) == 0 );
assert( gamma_move(board, 1, 3, 20) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 19, 12) == 1 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 5, 10, 20) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 7, 9, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 47 );
assert( gamma_move(board, 1, 21, 22) == 1 );
assert( gamma_move(board, 2, 19, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 7, 6, 18) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 17, 22) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );


char* board857806257 = gamma_board(board);
assert( board857806257 != NULL );
assert( strcmp(board857806257, 
".775..61.25319..29.3.1\n"
"2.2217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..53746862395541\n"
"773261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515.98.83\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.857.9..3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676..2.\n"
"13985188.658297..81.7.\n"
"624..932193713.39.7346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board857806257);
board857806257 = NULL;
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 16, 5) == 1 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_move(board, 6, 15, 19) == 0 );
assert( gamma_move(board, 6, 6, 22) == 0 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );


char* board569293983 = gamma_board(board);
assert( board569293983 != NULL );
assert( strcmp(board569293983, 
".775..61.25319..29.3.1\n"
"2.2217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..53746862395541\n"
"773261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515.98.83\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676..2.\n"
"13985188.658297.281.7.\n"
"624..932193713.39.7346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..3.246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board569293983);
board569293983 = NULL;
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 16, 19) == 0 );
assert( gamma_move(board, 8, 12, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 15, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 48 );
assert( gamma_free_fields(board, 9) == 104 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 13, 18) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 19, 6) == 1 );
assert( gamma_free_fields(board, 6) == 103 );
assert( gamma_move(board, 7, 17, 1) == 0 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_move(board, 8, 18, 20) == 0 );
assert( gamma_free_fields(board, 8) == 103 );
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_free_fields(board, 2) == 103 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 20, 17) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 6, 20, 6) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 7, 21, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 21) == 0 );
assert( gamma_move(board, 9, 11, 19) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 22, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_move(board, 3, 15, 18) == 0 );
assert( gamma_move(board, 4, 21, 1) == 0 );
assert( gamma_move(board, 5, 22, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 21) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 20, 9) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 8, 20, 16) == 0 );
assert( gamma_move(board, 8, 19, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_move(board, 9, 10, 20) == 0 );
assert( gamma_golden_move(board, 1, 14, 5) == 1 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_move(board, 4, 21, 21) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 14, 22) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 21, 11) == 0 );
assert( gamma_move(board, 8, 17, 15) == 0 );
assert( gamma_free_fields(board, 8) == 100 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 13, 15) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 6, 10, 18) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 19, 6) == 0 );
assert( gamma_move(board, 8, 14, 0) == 0 );
assert( gamma_move(board, 8, 11, 22) == 0 );
assert( gamma_move(board, 9, 21, 15) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );


char* board635900424 = gamma_board(board);
assert( board635900424 != NULL );
assert( strcmp(board635900424, 
".775..61.253195.29.3.1\n"
"2.2217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..53746862395541\n"
"773261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515.98.83\n"
"9521.877368.664386.1.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676.62.\n"
"13985188.658291.281.7.\n"
"624.4932193713.39.7346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board635900424);
board635900424 = NULL;
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 5, 19, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_golden_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 7, 21, 13) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 8, 21) == 0 );
assert( gamma_busy_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 18, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 49 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 19, 18) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_move(board, 4, 21, 1) == 0 );
assert( gamma_move(board, 4, 20, 21) == 0 );
assert( gamma_move(board, 5, 22, 5) == 0 );
assert( gamma_move(board, 6, 18, 20) == 0 );
assert( gamma_move(board, 7, 14, 17) == 0 );
assert( gamma_move(board, 7, 17, 22) == 0 );
assert( gamma_move(board, 8, 10, 20) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 21) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_free_fields(board, 3) == 98 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 21, 11) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 1, 15) == 0 );
assert( gamma_move(board, 6, 15, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 20, 16) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 9, 18, 0) == 0 );


char* board822564567 = gamma_board(board);
assert( board822564567 != NULL );
assert( strcmp(board822564567, 
".775..61.253195.29.3.1\n"
"2.2217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..53746862395541\n"
"773261.358...745392.92\n"
"....86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515.98.83\n"
"9521.877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.39.7346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board822564567);
board822564567 = NULL;
assert( gamma_move(board, 1, 12, 19) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 22, 18) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 18, 17) == 0 );
assert( gamma_move(board, 9, 19, 9) == 0 );
assert( gamma_move(board, 9, 1, 22) == 0 );
assert( gamma_busy_fields(board, 9) == 49 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 22, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 17) == 0 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 3, 1, 21) == 1 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 19, 16) == 0 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 18, 21) == 0 );
assert( gamma_move(board, 9, 11, 19) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 6, 17, 4) == 1 );
assert( gamma_move(board, 7, 20, 17) == 0 );
assert( gamma_move(board, 8, 8, 20) == 0 );
assert( gamma_golden_move(board, 8, 15, 4) == 0 );
assert( gamma_move(board, 9, 17, 1) == 0 );
assert( gamma_move(board, 9, 6, 15) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 21, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 93 );
assert( gamma_move(board, 5, 8, 11) == 0 );


char* board643953024 = gamma_board(board);
assert( board643953024 != NULL );
assert( strcmp(board643953024, 
".775..61.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1..53746862395541\n"
"7732619358..2745392.92\n"
"4...86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515.98.83\n"
"9521.877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.995...9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board643953024);
board643953024 = NULL;
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 13, 20) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 9, 21, 13) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 22) == 1 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_golden_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_move(board, 6, 21, 20) == 0 );
assert( gamma_move(board, 7, 8, 18) == 0 );
assert( gamma_move(board, 7, 17, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 19, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 3, 7, 21) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 15, 19) == 0 );
assert( gamma_move(board, 6, 0, 19) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 7, 15) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 8, 19, 21) == 0 );
assert( gamma_move(board, 9, 5, 19) == 0 );
assert( gamma_move(board, 9, 17, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 20, 14) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 7, 20, 17) == 0 );
assert( gamma_move(board, 8, 16, 11) == 1 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 13, 21) == 0 );
assert( gamma_move(board, 1, 15, 19) == 0 );
assert( gamma_move(board, 2, 11, 19) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 13, 16) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 22, 20) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 8, 20) == 0 );
assert( gamma_move(board, 9, 16, 7) == 0 );
assert( gamma_move(board, 9, 10, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 20, 17) == 0 );
assert( gamma_move(board, 2, 12, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_golden_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 18, 20) == 0 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_free_fields(board, 7) == 88 );
assert( gamma_move(board, 8, 15, 10) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 22, 15) == 0 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_free_fields(board, 1) == 88 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 16) == 1 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 18, 4) == 0 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_free_fields(board, 8) == 87 );
assert( gamma_move(board, 9, 22, 15) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 16, 22) == 0 );
assert( gamma_move(board, 1, 5, 22) == 1 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 20, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 20, 16) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 9, 12, 16) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 50 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_free_fields(board, 4) == 86 );


char* board134449046 = gamma_board(board);
assert( board134449046 != NULL );
assert( strcmp(board134449046, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1.553746862395541\n"
"7732619358..2745392.92\n"
"4...86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board134449046);
board134449046 = NULL;
assert( gamma_move(board, 5, 22, 8) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 7, 20, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_move(board, 9, 16, 18) == 0 );


char* board560082509 = gamma_board(board);
assert( board560082509 != NULL );
assert( strcmp(board560082509, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1.553746862395541\n"
"7732619358..2745392.92\n"
"4...86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board560082509);
board560082509 = NULL;
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 21, 0) == 0 );
assert( gamma_free_fields(board, 7) == 85 );


char* board772379717 = gamma_board(board);
assert( board772379717 != NULL );
assert( strcmp(board772379717, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.275.\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1.553746862395541\n"
"7732619358..2745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board772379717);
board772379717 = NULL;
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 15, 11) == 0 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_free_fields(board, 9) == 85 );
assert( gamma_golden_move(board, 9, 3, 21) == 0 );
assert( gamma_move(board, 1, 21, 19) == 1 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 22, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 17, 17) == 0 );


char* board284823504 = gamma_board(board);
assert( board284823504 != NULL );
assert( strcmp(board284823504, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.2751\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1.553746862395541\n"
"7732619358..2745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.6.7\n"
"2.698723399281.9.7.448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board284823504);
board284823504 = NULL;
assert( gamma_move(board, 8, 20, 14) == 0 );
assert( gamma_move(board, 9, 20, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 0, 21) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 4, 20, 13) == 1 );
assert( gamma_golden_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 7, 20, 14) == 0 );
assert( gamma_free_fields(board, 7) == 83 );
assert( gamma_move(board, 8, 16, 4) == 0 );
assert( gamma_move(board, 8, 18, 17) == 0 );
assert( gamma_move(board, 9, 15, 19) == 0 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 1, 20, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 45 );
assert( gamma_golden_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 16, 2) == 0 );
assert( gamma_free_fields(board, 7) == 83 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 21, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 1, 20, 17) == 0 );
assert( gamma_move(board, 2, 17, 15) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_free_fields(board, 4) == 83 );


char* board878605355 = gamma_board(board);
assert( board878605355 != NULL );
assert( strcmp(board878605355, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.2751\n"
".1985.57148373946.5...\n"
"1.2987866352.52.598133\n"
"28...1.553746862395541\n"
"7732619358..2745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.647\n"
"2.698723399281.9.7.448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..3.1\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board878605355);
board878605355 = NULL;
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 21, 16) == 0 );
assert( gamma_move(board, 7, 8, 18) == 0 );
assert( gamma_move(board, 8, 8, 17) == 0 );
assert( gamma_move(board, 8, 13, 13) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 2, 15) == 0 );
assert( gamma_busy_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 18, 12) == 1 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 5, 22, 15) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 20, 17) == 0 );
assert( gamma_free_fields(board, 7) == 82 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_golden_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 20, 8) == 1 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 13, 15) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 9, 16, 4) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 4, 20, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 20, 9) == 0 );
assert( gamma_move(board, 5, 8, 20) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 1, 16) == 0 );
assert( gamma_move(board, 8, 9, 16) == 0 );
assert( gamma_move(board, 9, 18, 0) == 0 );
assert( gamma_move(board, 2, 15, 19) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 21, 1) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 12, 17) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 9, 21, 11) == 0 );
assert( gamma_move(board, 9, 11, 15) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );


char* board355237207 = gamma_board(board);
assert( board355237207 != NULL );
assert( strcmp(board355237207, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.2751\n"
".1985.57148373946.5...\n"
"1.2987866352452.598133\n"
"28...1.553746862395541\n"
"7732619358.92745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.647\n"
"2.698723399281.9.71448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..391\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board355237207);
board355237207 = NULL;
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 20, 8) == 0 );
assert( gamma_move(board, 6, 22, 15) == 0 );
assert( gamma_move(board, 6, 20, 18) == 1 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_move(board, 9, 13, 15) == 0 );
assert( gamma_free_fields(board, 9) == 78 );


char* board224440604 = gamma_board(board);
assert( board224440604 != NULL );
assert( strcmp(board224440604, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534.35.1499\n"
"5.31398.189774693.2751\n"
".1985.57148373946.5.6.\n"
"1.2987866352452.598133\n"
"28...1.553746862395541\n"
"7732619358.92745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.647\n"
"2.698723399281.9.71448\n"
"1169146852982515898.83\n"
"95213877368.66438631.8\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..391\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board224440604);
board224440604 = NULL;
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 1, 14, 20) == 1 );
assert( gamma_move(board, 2, 22, 18) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 4, 20, 10) == 1 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );


char* board609269064 = gamma_board(board);
assert( board609269064 != NULL );
assert( strcmp(board609269064, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534135.1499\n"
"5.31398.189774693.2751\n"
".1985.57148373946.5.6.\n"
"1.2987866352452.598133\n"
"28...1.553746862395541\n"
"7732619358.92745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.647\n"
"2.698723399281.9.71448\n"
"1169146852982515898.83\n"
"95213877368.6643863148\n"
"59712.25.5.54.24963662\n"
"398167.4667.85719..391\n"
"33.3.99566.9.23.37.883\n"
"485124825766835676962.\n"
"13985188.658291.281.7.\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board609269064);
board609269064 = NULL;
assert( gamma_move(board, 6, 5, 21) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 20, 13) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_golden_move(board, 9, 17, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_move(board, 4, 22, 15) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 6, 21) == 0 );
assert( gamma_move(board, 6, 5, 21) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 14, 16) == 0 );
assert( gamma_move(board, 8, 16, 6) == 0 );
assert( gamma_move(board, 8, 18, 5) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 2, 18, 10) == 0 );
assert( gamma_move(board, 3, 20, 7) == 0 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 6, 8, 17) == 0 );
assert( gamma_move(board, 6, 16, 16) == 0 );
assert( gamma_move(board, 7, 21, 5) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 5, 19) == 0 );
assert( gamma_busy_fields(board, 9) == 52 );
assert( gamma_move(board, 1, 1, 19) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 18, 5) == 0 );
assert( gamma_move(board, 5, 19, 5) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 18, 18) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 9, 11, 19) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 5, 15, 7) == 1 );


char* board347192732 = gamma_board(board);
assert( board347192732 != NULL );
assert( strcmp(board347192732, 
"1775.161.253195.29.3.1\n"
"232217286.9.7172979813\n"
"5173.37.6.7534135.1499\n"
"5131398.189774693.2751\n"
".1985.57148373946.5.6.\n"
"1.2987866352452.598133\n"
"282..1.553746862395541\n"
"7732619358.92745392.92\n"
"41..86.6156547938.674.\n"
"512277266213574..8.647\n"
"2.698723399281.9.71448\n"
"1169146852982515898.83\n"
"95213877368.6643863148\n"
"59712825.5.54.24963662\n"
"398167.4667.85719..391\n"
"33.3.99566.9.23537.883\n"
"485124825766835676962.\n"
"13985188.658291.281577\n"
"624.4932193713.3967346\n"
".4.6575373.3.426989245\n"
"61464532.179.7969.7883\n"
"22.99582..36246..74754\n"
"6634.338.79185829.9488\n") == 0);
free(board347192732);
board347192732 = NULL;
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 7, 14, 18) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 18, 5) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_golden_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 16, 17) == 0 );
assert( gamma_golden_move(board, 6, 9, 20) == 0 );
assert( gamma_move(board, 7, 11, 19) == 0 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 9, 17, 18) == 1 );
assert( gamma_move(board, 1, 14, 20) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 16, 4) == 0 );


gamma_delete(board);

    return 0;
}
