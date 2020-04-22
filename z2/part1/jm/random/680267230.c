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
uuid: 680267230
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(25, 24, 9, 35);
assert( board != NULL );


assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 5, 15) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 3, 20, 17) == 1 );
assert( gamma_free_fields(board, 3) == 596 );
assert( gamma_move(board, 4, 20, 12) == 1 );
assert( gamma_move(board, 5, 21, 1) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 593 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 7, 19, 5) == 1 );
assert( gamma_move(board, 7, 3, 20) == 1 );
assert( gamma_move(board, 8, 21, 13) == 1 );
assert( gamma_move(board, 8, 21, 23) == 1 );
assert( gamma_move(board, 9, 22, 17) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 1, 21, 10) == 1 );
assert( gamma_free_fields(board, 1) == 585 );
assert( gamma_move(board, 2, 20, 5) == 1 );
assert( gamma_move(board, 2, 16, 7) == 1 );
assert( gamma_move(board, 3, 20, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 6, 21) == 1 );
assert( gamma_move(board, 4, 3, 23) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 21) == 1 );
assert( gamma_golden_move(board, 6, 5, 19) == 0 );
assert( gamma_move(board, 7, 17, 11) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 8, 14) == 1 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_move(board, 9, 17, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 2, 11, 16) == 1 );
assert( gamma_move(board, 3, 20, 22) == 1 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 18, 16) == 1 );
assert( gamma_move(board, 6, 20, 17) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 8, 22, 8) == 1 );
assert( gamma_move(board, 9, 4, 22) == 1 );
assert( gamma_free_fields(board, 9) == 563 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 14, 22) == 1 );
assert( gamma_move(board, 2, 20, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_move(board, 3, 24, 4) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 18, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 13, 14) == 1 );
assert( gamma_move(board, 8, 14, 10) == 1 );
assert( gamma_move(board, 8, 16, 13) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 1, 13, 17) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 2, 22, 7) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 19, 14) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 15, 7) == 0 );
assert( gamma_move(board, 7, 12, 14) == 1 );
assert( gamma_move(board, 8, 12, 6) == 1 );
assert( gamma_move(board, 8, 23, 0) == 1 );
assert( gamma_move(board, 9, 15, 24) == 0 );
assert( gamma_move(board, 1, 4, 20) == 1 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 23, 7) == 1 );
assert( gamma_move(board, 3, 15, 23) == 1 );
assert( gamma_move(board, 4, 6, 22) == 1 );
assert( gamma_move(board, 4, 20, 15) == 1 );
assert( gamma_free_fields(board, 4) == 533 );
assert( gamma_move(board, 5, 12, 22) == 1 );
assert( gamma_golden_move(board, 5, 23, 15) == 0 );
assert( gamma_move(board, 6, 13, 23) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 16, 24) == 0 );
assert( gamma_move(board, 8, 5, 18) == 1 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_move(board, 3, 14, 18) == 1 );
assert( gamma_move(board, 4, 24, 14) == 1 );
assert( gamma_move(board, 4, 6, 20) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_free_fields(board, 5) == 522 );
assert( gamma_move(board, 6, 13, 24) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_free_fields(board, 8) == 520 );
assert( gamma_move(board, 9, 9, 15) == 0 );
assert( gamma_free_fields(board, 9) == 520 );
assert( gamma_golden_move(board, 1, 17, 22) == 0 );
assert( gamma_move(board, 2, 23, 18) == 1 );
assert( gamma_move(board, 3, 15, 3) == 1 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 4, 11, 23) == 1 );


char* board239377841 = gamma_board(board);
assert( board239377841 != NULL );
assert( strcmp(board239377841, 
"...4.......4.6.3.....8...\n"
"....9.4.....5.1.....3....\n"
"......4.6................\n"
"...71.4..................\n"
".........................\n"
".....8........3........2.\n"
".............1......3.9..\n"
"...........2......6......\n"
".....2...4......2...4....\n"
"........8...77.....52...4\n"
".........3......8....8...\n"
"...........2..6.....4....\n"
"4..2.............7.......\n"
"...8.1....7...8......1...\n"
".1.....8.................\n"
"...5.....2............8..\n"
".58....1.......32.....23.\n"
"...5......3.83...........\n"
"....59...........9.72....\n"
".........9.2.6..........3\n"
"...............3.........\n"
".........................\n"
"........4...2.....6..5...\n"
"....734....5........3..8.\n") == 0);
free(board239377841);
board239377841 = NULL;
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_free_fields(board, 6) == 515 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 8, 16, 0) == 1 );
assert( gamma_move(board, 8, 23, 0) == 0 );
assert( gamma_move(board, 9, 23, 10) == 1 );
assert( gamma_move(board, 9, 23, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 14, 23) == 1 );
assert( gamma_move(board, 1, 23, 6) == 1 );
assert( gamma_move(board, 2, 6, 15) == 1 );
assert( gamma_move(board, 3, 19, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_golden_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 15, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 16, 21) == 1 );
assert( gamma_move(board, 7, 2, 15) == 1 );
assert( gamma_move(board, 8, 15, 8) == 1 );


char* board195261000 = gamma_board(board);
assert( board195261000 != NULL );
assert( strcmp(board195261000, 
"...4.......4.613.....8...\n"
"....9.4.....5.1.....3....\n"
"......4.6.......7........\n"
"...71.4..................\n"
".........................\n"
".....8........3........2.\n"
".............1......3.9..\n"
"...........2......6......\n"
"..7..22..4......2...4....\n"
".4......8...77.6...52...4\n"
".........3......8....8...\n"
"..7........2..6.....4....\n"
"4..2.............7.......\n"
"...8.1....7...8......1.9.\n"
".1.....8.................\n"
"...5.....2.....8...3..8..\n"
".58....1.......32.....23.\n"
"...5......3.83.........1.\n"
"....59...........9.72....\n"
".4......6952.6..........3\n"
"......3........3.........\n"
".........................\n"
"........4...2.....6..5.9.\n"
"....734....5.6..8...3..8.\n") == 0);
free(board195261000);
board195261000 = NULL;
assert( gamma_move(board, 1, 21, 5) == 1 );
assert( gamma_free_fields(board, 1) == 498 );


char* board551274722 = gamma_board(board);
assert( board551274722 != NULL );
assert( strcmp(board551274722, 
"...4.......4.613.....8...\n"
"....9.4.....5.1.....3....\n"
"......4.6.......7........\n"
"...71.4..................\n"
".........................\n"
".....8........3........2.\n"
".............1......3.9..\n"
"...........2......6......\n"
"..7..22..4......2...4....\n"
".4......8...77.6...52...4\n"
".........3......8....8...\n"
"..7........2..6.....4....\n"
"4..2.............7.......\n"
"...8.1....7...8......1.9.\n"
".1.....8.................\n"
"...5.....2.....8...3..8..\n"
".58....1.......32.....23.\n"
"...5......3.83.........1.\n"
"....59...........9.721...\n"
".4......6952.6..........3\n"
"......3........3.........\n"
".........................\n"
"........4...2.....6..5.9.\n"
"....734....5.6..8...3..8.\n") == 0);
free(board551274722);
board551274722 = NULL;
assert( gamma_move(board, 2, 15, 17) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 0) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_free_fields(board, 4) == 494 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 22, 15) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 3, 21) == 1 );
assert( gamma_move(board, 8, 2, 15) == 0 );
assert( gamma_free_fields(board, 8) == 490 );
assert( gamma_move(board, 9, 12, 7) == 1 );
assert( gamma_move(board, 9, 15, 17) == 0 );
assert( gamma_free_fields(board, 9) == 489 );
assert( gamma_move(board, 1, 21, 23) == 0 );
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 6, 24) == 0 );
assert( gamma_move(board, 5, 17, 2) == 1 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 14) == 1 );


char* board468240205 = gamma_board(board);
assert( board468240205 != NULL );
assert( strcmp(board468240205, 
"...4.......4.613.....8...\n"
"....9.4.....5.1.....3....\n"
"...8..4.6.......7........\n"
"...71.4..................\n"
".........................\n"
".....8........3........2.\n"
".............1.2....3.9..\n"
".......6...2......6......\n"
"..7..22..4......2...4.6..\n"
".4.....78...77.6...52...4\n"
".........3......8....8...\n"
"..7........2..6.....4....\n"
"4..2..4..........7.......\n"
"...861....7...8......1.9.\n"
".1.....8.................\n"
"...5.....2.....8...3..8..\n"
".58....1....9..32.....23.\n"
"...5...3..3.83.........1.\n"
"....59...........9.721...\n"
".44.....6952.6..........3\n"
"......3........3.........\n"
".................5.......\n"
"....4...4...2.....6..5.9.\n"
"...5734..7.5.6.38...3..8.\n") == 0);
free(board468240205);
board468240205 = NULL;
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 9, 18, 19) == 1 );
assert( gamma_move(board, 9, 15, 21) == 1 );
assert( gamma_move(board, 1, 10, 16) == 1 );
assert( gamma_move(board, 2, 14, 18) == 0 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 15, 1) == 1 );
assert( gamma_move(board, 4, 22, 17) == 0 );
assert( gamma_move(board, 4, 2, 21) == 1 );
assert( gamma_move(board, 5, 11, 19) == 1 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 7, 18, 7) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_move(board, 8, 16, 17) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 9, 20, 6) == 1 );
assert( gamma_free_fields(board, 9) == 468 );
assert( gamma_move(board, 1, 19, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 24) == 0 );
assert( gamma_move(board, 2, 1, 21) == 1 );
assert( gamma_move(board, 3, 1, 17) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 22, 10) == 1 );
assert( gamma_move(board, 6, 17, 13) == 1 );
assert( gamma_move(board, 7, 17, 17) == 1 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 8, 13, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 4, 22) == 0 );
assert( gamma_move(board, 1, 10, 21) == 1 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 2, 11, 22) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 22, 22) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );


char* board342007713 = gamma_board(board);
assert( board342007713 != NULL );
assert( strcmp(board342007713, 
"...4.......4.613.....8...\n"
"....9.4....25.1.....3.3..\n"
".248..4.6.1....97........\n"
"...71.4..................\n"
"...........5......9......\n"
".....8........3........2.\n"
".3...........1.287..3.9..\n"
".......6..12......6......\n"
"..7..22..4......2...4.6..\n"
".4.....78...77.6...52...4\n"
"2..8....632.....86.1.8...\n"
"..7........2..6.....4....\n"
"4..2784..........7.......\n"
"...861....7...8......159.\n"
".1.....8.................\n"
"...5.....2.....8...3..8..\n"
".58....1....9..32.7...23.\n"
"...5...3..34835.....9..1.\n"
"....59.......8...9.721...\n"
".44.9...6952.6..........3\n"
"......3........3.........\n"
".....9...........5.......\n"
"....4...4...2..3..6..5.9.\n"
"...5734..7.5.6.38...3..8.\n") == 0);
free(board342007713);
board342007713 = NULL;
assert( gamma_move(board, 6, 24, 14) == 0 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_move(board, 7, 24, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 15, 18) == 1 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 2, 16) == 1 );
assert( gamma_free_fields(board, 9) == 450 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 20) == 1 );
assert( gamma_free_fields(board, 1) == 448 );
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 3, 23, 12) == 1 );


char* board674400144 = gamma_board(board);
assert( board674400144 != NULL );
assert( strcmp(board674400144, 
"...4.......4.613.....8...\n"
"....9.4....25.1.....3.3..\n"
".248..4.6.1....97........\n"
"...71.4.1................\n"
"...........5......9......\n"
".....8........38.......2.\n"
".3...........1.287..3.9..\n"
"..9....63.12......6......\n"
"..7..22..4......2...4.6..\n"
".46....78...77.6...52...4\n"
"2..8....632.....86.1.8...\n"
"..7........2..6.....4..3.\n"
"4..2784..........7.......\n"
"...861....7...8......1597\n"
".1.....8.................\n"
"...5.....2.....8...3..8..\n"
".58....1....9..32.7...23.\n"
"...5...3..34835.....9..1.\n"
"....59.......8...9.721...\n"
".44.9...6952.6..........3\n"
"......3........3.........\n"
".....9...........5.......\n"
".1..4...4...2..3..6..5.9.\n"
"...5734..7.5.6.38...3..8.\n") == 0);
free(board674400144);
board674400144 = NULL;
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_free_fields(board, 4) == 445 );
assert( gamma_move(board, 5, 5, 16) == 1 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 17, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 21, 7) == 1 );
assert( gamma_move(board, 8, 11, 9) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 6, 19) == 1 );
assert( gamma_move(board, 9, 23, 18) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 16, 20) == 1 );
assert( gamma_golden_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 15, 13) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 22, 1) == 1 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 23, 14) == 1 );
assert( gamma_move(board, 5, 3, 21) == 0 );
assert( gamma_move(board, 6, 15, 11) == 1 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_move(board, 7, 16, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 5, 16) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 1, 23, 13) == 1 );
assert( gamma_move(board, 2, 17, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );


char* board492192602 = gamma_board(board);
assert( board492192602 != NULL );
assert( strcmp(board492192602, 
"...4.......4.613.....8...\n"
"....9.4....25.1.....3.3..\n"
".248..4.6.1....97........\n"
"...71.4.1.......1........\n"
"......9....5......9......\n"
".....8........38.......2.\n"
".3...........1.287..3.9..\n"
"..9..5.63.12......6......\n"
"..7..22..4......2...4.6..\n"
".46....78...77.6...52..44\n"
"2..8....632....286.1.8.1.\n"
"6.7........2..6.....4..3.\n"
"4..2784........6.7.......\n"
"...861....7...8.7....1597\n"
".1.....8...8.....2.......\n"
"...5.....2.....8...3..8..\n"
".58...31.4..9..32.7..723.\n"
"...5...3..34835.....9..1.\n"
"....59.......8...9.721...\n"
".44.9...6952.6..........3\n"
"......3..9.....3.........\n"
".....9...........5.......\n"
".1..4.1.4...2..3..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board492192602);
board492192602 = NULL;


char* board674154516 = gamma_board(board);
assert( board674154516 != NULL );
assert( strcmp(board674154516, 
"...4.......4.613.....8...\n"
"....9.4....25.1.....3.3..\n"
".248..4.6.1....97........\n"
"...71.4.1.......1........\n"
"......9....5......9......\n"
".....8........38.......2.\n"
".3...........1.287..3.9..\n"
"..9..5.63.12......6......\n"
"..7..22..4......2...4.6..\n"
".46....78...77.6...52..44\n"
"2..8....632....286.1.8.1.\n"
"6.7........2..6.....4..3.\n"
"4..2784........6.7.......\n"
"...861....7...8.7....1597\n"
".1.....8...8.....2.......\n"
"...5.....2.....8...3..8..\n"
".58...31.4..9..32.7..723.\n"
"...5...3..34835.....9..1.\n"
"....59.......8...9.721...\n"
".44.9...6952.6..........3\n"
"......3..9.....3.........\n"
".....9...........5.......\n"
".1..4.1.4...2..3..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board674154516);
board674154516 = NULL;
assert( gamma_move(board, 4, 22, 13) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 6, 18, 12) == 1 );
assert( gamma_move(board, 6, 16, 8) == 1 );
assert( gamma_move(board, 7, 22, 7) == 0 );
assert( gamma_move(board, 8, 17, 23) == 1 );
assert( gamma_move(board, 8, 12, 14) == 0 );
assert( gamma_move(board, 9, 14, 1) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_free_fields(board, 1) == 422 );
assert( gamma_move(board, 2, 15, 17) == 0 );
assert( gamma_move(board, 2, 21, 11) == 1 );
assert( gamma_golden_move(board, 2, 15, 16) == 0 );
assert( gamma_move(board, 3, 20, 2) == 1 );
assert( gamma_move(board, 3, 3, 23) == 0 );
assert( gamma_move(board, 4, 16, 19) == 1 );
assert( gamma_move(board, 5, 16, 4) == 1 );
assert( gamma_move(board, 6, 16, 16) == 1 );
assert( gamma_move(board, 6, 17, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 17, 12) == 1 );
assert( gamma_move(board, 9, 4, 19) == 1 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 1, 2, 17) == 1 );
assert( gamma_move(board, 1, 10, 20) == 1 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 14, 16) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 24, 3) == 1 );
assert( gamma_move(board, 4, 4, 19) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board880389336 = gamma_board(board);
assert( board880389336 != NULL );
assert( strcmp(board880389336, 
"...4.......4.613.8...8...\n"
"....9.4....25.1.....3.3..\n"
".248..4.6.1....97........\n"
"...71.4.1.1.....1........\n"
"....9.9....5....4.9......\n"
".....8........38.......2.\n"
".31..........1.287..3.9..\n"
"..9..5.63.12..2.6.6......\n"
"..7..22..4......26..4.6..\n"
".46....78...77.6...52..44\n"
"2..8....632....286.1.841.\n"
"6.7........2..6..76.4..3.\n"
"4..2784....2...6.7...2...\n"
"...861....7...8.7....1597\n"
".1.....8...8.....2.......\n"
"...5.....2.....86..3..8..\n"
".58...31.4..9..32.7..723.\n"
"...5...3..34835.....9..1.\n"
"....59.9.....8...9.721...\n"
".44.9...6952.6..5.......3\n"
"......3..9.....3........3\n"
".....9...........5..3....\n"
".13.4.1.4...2.93..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board880389336);
board880389336 = NULL;
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 5, 10, 18) == 1 );
assert( gamma_move(board, 6, 19, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 11, 17) == 1 );
assert( gamma_busy_fields(board, 8) == 22 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 15, 8) == 0 );
assert( gamma_move(board, 9, 5, 21) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_move(board, 3, 19, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 23, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 4, 18) == 1 );
assert( gamma_move(board, 8, 16, 19) == 0 );
assert( gamma_move(board, 9, 17, 24) == 0 );
assert( gamma_move(board, 9, 10, 19) == 1 );


char* board630995790 = gamma_board(board);
assert( board630995790 != NULL );
assert( strcmp(board630995790, 
"...4.......4.613.8...8...\n"
"....9.4....25.1.....3.3..\n"
".248.94.6.1....97........\n"
"...71.4.1.1.....1........\n"
"....9.9...95....4.9......\n"
"....78....5...38.......2.\n"
"231........7.1.287..3.9..\n"
"..9..5.63.12..2.6.6......\n"
"..7..22..4......26.64.6..\n"
".46....78...77.6...52..44\n"
"2..8....632....286.1.841.\n"
"6.7........2..6..76.4..3.\n"
"4..2784....2...6.7...2...\n"
"..6861....7...8.7....1597\n"
".1.....8...8.....2.3.....\n"
"...5.....2.....86..3..8..\n"
".58...31.4..9..32.7..723.\n"
"...5...31.34835.....9..1.\n"
"....59.9.....8...9.721.5.\n"
".44.9...6952.6..5.......3\n"
"......3..9.....3........3\n"
".1...9...........5..3....\n"
".13.4.1.4...2.93..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board630995790);
board630995790 = NULL;
assert( gamma_move(board, 2, 24, 17) == 1 );
assert( gamma_move(board, 2, 1, 20) == 1 );
assert( gamma_move(board, 3, 0, 21) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_move(board, 4, 12, 20) == 0 );
assert( gamma_move(board, 5, 13, 20) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 7, 19, 2) == 1 );
assert( gamma_move(board, 7, 21, 8) == 1 );
assert( gamma_free_fields(board, 7) == 390 );
assert( gamma_move(board, 8, 13, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 23 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 12) == 1 );
assert( gamma_free_fields(board, 9) == 388 );
assert( gamma_move(board, 1, 22, 5) == 1 );
assert( gamma_move(board, 2, 17, 4) == 1 );
assert( gamma_move(board, 2, 24, 8) == 1 );
assert( gamma_move(board, 3, 22, 16) == 1 );
assert( gamma_move(board, 3, 15, 16) == 1 );
assert( gamma_free_fields(board, 3) == 383 );
assert( gamma_move(board, 4, 22, 18) == 1 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 13) == 1 );
assert( gamma_move(board, 6, 22, 1) == 0 );
assert( gamma_move(board, 8, 4, 15) == 1 );
assert( gamma_move(board, 9, 17, 23) == 0 );
assert( gamma_move(board, 1, 21, 21) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 17, 8) == 1 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_move(board, 4, 14, 11) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 15) == 0 );
assert( gamma_move(board, 5, 20, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board703894120 = gamma_board(board);
assert( board703894120 != NULL );
assert( strcmp(board703894120, 
"...4.......4.613.8...8...\n"
"....9.4....25.1.....3.3..\n"
"3248.94.6.1....97....1...\n"
".2.71.4.1.1..5..1........\n"
"....9.9...95....4.9......\n"
"....78....5...38......42.\n"
"231........7.1.287..3.9.2\n"
"..9..5.63.12..236.6...3..\n"
"..7.8223.4......26.64.6..\n"
".46....78...77.6...52..44\n"
"2..8...6632....286.15841.\n"
"6.7...9....2.86..76.4..3.\n"
"4..2784....2..46.7...2...\n"
"..6861....7...8.7....1597\n"
".1.....8...8.....2.3.....\n"
"...5.....2.....863.3.78.2\n"
".58...31.4..9..32.7..723.\n"
"...5...31.34835.....9..1.\n"
"....59.9.....8...9.72115.\n"
".44.9..26952.6..52......3\n"
"......3..9.....3........3\n"
".1...9...........5.73....\n"
".13.4.1.4...2.93..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board703894120);
board703894120 = NULL;


char* board906017825 = gamma_board(board);
assert( board906017825 != NULL );
assert( strcmp(board906017825, 
"...4.......4.613.8...8...\n"
"....9.4....25.1.....3.3..\n"
"3248.94.6.1....97....1...\n"
".2.71.4.1.1..5..1........\n"
"....9.9...95....4.9......\n"
"....78....5...38......42.\n"
"231........7.1.287..3.9.2\n"
"..9..5.63.12..236.6...3..\n"
"..7.8223.4......26.64.6..\n"
".46....78...77.6...52..44\n"
"2..8...6632....286.15841.\n"
"6.7...9....2.86..76.4..3.\n"
"4..2784....2..46.7...2...\n"
"..6861....7...8.7....1597\n"
".1.....8...8.....2.3.....\n"
"...5.....2.....863.3.78.2\n"
".58...31.4..9..32.7..723.\n"
"...5...31.34835.....9..1.\n"
"....59.9.....8...9.72115.\n"
".44.9..26952.6..52......3\n"
"......3..9.....3........3\n"
".1...9...........5.73....\n"
".13.4.1.4...2.93..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board906017825);
board906017825 = NULL;
assert( gamma_move(board, 7, 16, 21) == 0 );
assert( gamma_move(board, 7, 8, 22) == 1 );
assert( gamma_free_fields(board, 7) == 373 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 20, 20) == 1 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 20, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 16, 24) == 0 );
assert( gamma_move(board, 7, 22, 21) == 1 );
assert( gamma_move(board, 7, 24, 11) == 1 );
assert( gamma_move(board, 8, 6, 21) == 0 );
assert( gamma_move(board, 9, 11, 18) == 1 );
assert( gamma_move(board, 1, 15, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 19, 19) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 18) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 5, 24, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 9, 17) == 1 );
assert( gamma_move(board, 7, 23, 19) == 1 );
assert( gamma_move(board, 8, 15, 21) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 18, 12) == 0 );


char* board637158507 = gamma_board(board);
assert( board637158507 != NULL );
assert( strcmp(board637158507, 
"...4.......4.613.8...8...\n"
"....9.4.7..25.1.....3.3..\n"
"3248.94.6.1....97....17..\n"
".2.71.4.1.1..5..1...2....\n"
"....9.9...95....4.92...7.\n"
"....78....59..38......42.\n"
"231......6.7.1.287..3.9.2\n"
"..9..5.63.12..236.6...3..\n"
"..7.8223.4......26.64.6..\n"
".46....78...77.6...52..44\n"
"21.8...6632....286.15841.\n"
"6.7...9....2.86..76.4..3.\n"
"4..2784....2..46.7...2..7\n"
"..6861....7...8.7....1597\n"
".1.....8...8.....2.3.....\n"
"...5.....2.5...863.3.78.2\n"
".58...31.4..9..32.7..7235\n"
"...5...31.34835.....9..1.\n"
"....59.9.4...8...9.72115.\n"
".44.9..26952.6..52......3\n"
"......3..9.....3........3\n"
".1...9.......5...5.73....\n"
".13.4.1.4...2.93..6..539.\n"
".7.5734..7.5.6.38...3..8.\n") == 0);
free(board637158507);
board637158507 = NULL;
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 20, 22) == 0 );
assert( gamma_move(board, 3, 11, 20) == 1 );
assert( gamma_move(board, 4, 14, 21) == 1 );
assert( gamma_golden_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 3, 22) == 1 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 9, 19, 11) == 1 );
assert( gamma_move(board, 1, 6, 23) == 1 );
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 2, 18, 17) == 1 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_free_fields(board, 4) == 351 );
assert( gamma_move(board, 5, 23, 13) == 0 );
assert( gamma_move(board, 5, 20, 9) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 4, 18) == 0 );
assert( gamma_move(board, 8, 9, 17) == 0 );
assert( gamma_move(board, 9, 4, 21) == 1 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 1, 22, 21) == 0 );
assert( gamma_move(board, 1, 16, 22) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 20, 0) == 0 );
assert( gamma_free_fields(board, 2) == 346 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 17, 16) == 1 );
assert( gamma_move(board, 5, 22, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 18, 19) == 0 );
assert( gamma_move(board, 6, 24, 2) == 1 );
assert( gamma_golden_move(board, 6, 23, 14) == 1 );
assert( gamma_move(board, 7, 19, 10) == 1 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 9, 3, 17) == 1 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_free_fields(board, 2) == 339 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_free_fields(board, 4) == 339 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 21, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 30 );


char* board456543747 = gamma_board(board);
assert( board456543747 != NULL );
assert( strcmp(board456543747, 
"...4..1....4.613.8...8...\n"
"...79.4.7..25.1.1...3.3..\n"
"3248994.6.1...497....17..\n"
".2.71.4.1.13.5..1...2....\n"
"....9.9...95....4.92...7.\n"
"....78....59..38......42.\n"
"2319.....6.7.1.2872.3.9.2\n"
"..9..5.63.12..23646...3..\n"
"..7.8223.4......26.64.6..\n"
".46....78...77.6...52..64\n"
"21.8..86632....286.15841.\n"
"6.7...9....2.86..76.46.3.\n"
"4..2784....2..46.7.9.2..7\n"
"..6861....7...8.7..7.1597\n"
".1.....8..78.....2.35....\n"
"...52....2.5...863.3.78.2\n"
".585..31.4..9..32.7..7235\n"
"...5...31.34835.....9..1.\n"
"...659.9.4...8...9.72115.\n"
".44.9.626942.6..52......3\n"
".....33..9.....3........3\n"
".1...9..9....5...5.73...6\n"
".13.4.1.4...2.93..6..539.\n"
"57.5734..7.526.38...3..8.\n") == 0);
free(board456543747);
board456543747 = NULL;
assert( gamma_move(board, 7, 21, 23) == 0 );
assert( gamma_move(board, 7, 19, 15) == 0 );
assert( gamma_busy_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 13, 7) == 1 );
assert( gamma_golden_move(board, 8, 17, 18) == 0 );
assert( gamma_move(board, 9, 12, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 13, 15) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 24, 11) == 0 );
assert( gamma_move(board, 6, 6, 20) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 15, 15) == 1 );
assert( gamma_busy_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 17, 19) == 1 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 30 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_free_fields(board, 2) == 324 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_move(board, 3, 15, 19) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 15, 23) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 19) == 1 );
assert( gamma_move(board, 7, 8, 15) == 1 );
assert( gamma_free_fields(board, 7) == 321 );
assert( gamma_move(board, 8, 6, 19) == 0 );
assert( gamma_move(board, 9, 0, 17) == 0 );
assert( gamma_free_fields(board, 9) == 321 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 320 );
assert( gamma_move(board, 3, 19, 3) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 10, 21) == 0 );
assert( gamma_move(board, 5, 17, 21) == 1 );
assert( gamma_move(board, 5, 21, 11) == 0 );
assert( gamma_move(board, 6, 22, 11) == 1 );
assert( gamma_move(board, 7, 6, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 9, 15, 11) == 0 );
assert( gamma_move(board, 1, 21, 1) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 5, 20, 10) == 1 );
assert( gamma_move(board, 6, 23, 16) == 1 );
assert( gamma_move(board, 6, 21, 22) == 1 );
assert( gamma_move(board, 7, 17, 4) == 0 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 8, 22) == 0 );
assert( gamma_free_fields(board, 9) == 311 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 3, 19, 13) == 0 );
assert( gamma_move(board, 4, 17, 14) == 1 );
assert( gamma_free_fields(board, 4) == 310 );
assert( gamma_golden_move(board, 4, 19, 24) == 0 );
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 20) == 0 );
assert( gamma_move(board, 7, 8, 22) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 1, 8, 23) == 1 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_golden_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 23, 5) == 0 );
assert( gamma_move(board, 5, 18, 19) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 17, 23) == 0 );
assert( gamma_move(board, 6, 3, 18) == 1 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 11, 19) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 21) == 0 );
assert( gamma_move(board, 2, 8, 23) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 19, 0) == 1 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 4, 19, 23) == 1 );
assert( gamma_move(board, 5, 14, 17) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 3, 22) == 0 );
assert( gamma_free_fields(board, 7) == 299 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 17, 16) == 0 );
assert( gamma_move(board, 9, 13, 17) == 0 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 20) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 6, 6, 21) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 1, 21) == 0 );
assert( gamma_move(board, 7, 5, 22) == 1 );
assert( gamma_move(board, 8, 16, 14) == 1 );
assert( gamma_move(board, 8, 9, 23) == 1 );
assert( gamma_move(board, 9, 5, 22) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 1, 17, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 16, 22) == 0 );
assert( gamma_move(board, 3, 24, 6) == 1 );
assert( gamma_move(board, 3, 16, 17) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 35 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 23, 23) == 1 );
assert( gamma_move(board, 8, 3, 16) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 16, 21) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 4, 11, 20) == 0 );
assert( gamma_move(board, 5, 17, 21) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_move(board, 6, 20, 13) == 0 );
assert( gamma_move(board, 7, 14, 13) == 1 );
assert( gamma_move(board, 8, 16, 21) == 0 );
assert( gamma_move(board, 8, 8, 19) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_golden_move(board, 9, 21, 16) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 13, 18) == 0 );
assert( gamma_move(board, 2, 16, 23) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 6, 19) == 0 );
assert( gamma_move(board, 6, 16, 9) == 1 );
assert( gamma_move(board, 7, 14, 18) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 9, 22) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 22, 12) == 1 );
assert( gamma_busy_fields(board, 9) == 32 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_golden_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_move(board, 3, 24, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 12, 16) == 1 );
assert( gamma_move(board, 5, 16, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 7, 16) == 0 );
assert( gamma_move(board, 7, 0, 22) == 1 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 22, 10) == 0 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 3, 22, 3) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_move(board, 4, 19, 7) == 1 );
assert( gamma_move(board, 5, 4, 21) == 0 );
assert( gamma_move(board, 5, 15, 17) == 0 );
assert( gamma_move(board, 6, 13, 13) == 0 );
assert( gamma_move(board, 7, 5, 17) == 1 );
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 38 );


char* board120028584 = gamma_board(board);
assert( board120028584 != NULL );
assert( strcmp(board120028584, 
"...4..1.18.4.613.8.4.8.8.\n"
"7..7974.78.25.1.1...363..\n"
"3248994.6.1...4975...17..\n"
".2.71.4.1.13.5..1...2....\n"
".7..9.9.8.95....4992...7.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..9865.63.125.23646...36.\n"
"..7.822374..25.826.64.6..\n"
".46....78...77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2.86..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...8.7..751597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835.....9..13\n"
"...65929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..939...3...3....3\n"
".1...9..94...5.1.5.73...6\n"
".1344.1.4.6.2393..6..539.\n"
"57.5734.274526.38..33..8.\n") == 0);
free(board120028584);
board120028584 = NULL;
assert( gamma_move(board, 8, 12, 12) == 1 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 21) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 9, 23) == 0 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 4, 21, 11) == 0 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_golden_move(board, 5, 8, 15) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );


char* board189609434 = gamma_board(board);
assert( board189609434 != NULL );
assert( strcmp(board189609434, 
"...4..1.18.4.613.8.4.8.8.\n"
"7..7974.78.25.1.1...363..\n"
"3248994.6.1...4975...17..\n"
".2.71.4.1.13.5..1...2....\n"
".7..9.9.8.95....4992...7.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..9865.63.125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...78...77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...8.7..751597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..939...3...3....3\n"
".1...9..94...5.1.5.73...6\n"
".1344.1.4.6.2393..6..539.\n"
"57.5734.274526.38..33..8.\n") == 0);
free(board189609434);
board189609434 = NULL;
assert( gamma_move(board, 7, 20, 9) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 11, 9) == 0 );
assert( gamma_move(board, 1, 22, 15) == 0 );
assert( gamma_golden_move(board, 1, 19, 10) == 1 );
assert( gamma_move(board, 2, 6, 16) == 1 );
assert( gamma_move(board, 2, 24, 20) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 22, 19) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 19, 1) == 1 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 11, 16) == 0 );
assert( gamma_move(board, 8, 2, 14) == 0 );


char* board733484308 = gamma_board(board);
assert( board733484308 != NULL );
assert( strcmp(board733484308, 
"...4..1.18.4.613.8.4.8.8.\n"
"7..7974.78.25.1.1...363..\n"
"3248994.6.1...4975...17..\n"
".2.71.4.1.13.5..1...2....\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..9865263.125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...78...77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...8.7..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..939...3...3....3\n"
".1...9..94...5.1.5.73...6\n"
".1344.1.4.6.2393..65.539.\n"
"57.5734.274526.38..33..8.\n") == 0);
free(board733484308);
board733484308 = NULL;
assert( gamma_move(board, 9, 17, 11) == 0 );
assert( gamma_move(board, 9, 23, 20) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 5, 18, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 23, 12) == 0 );
assert( gamma_move(board, 6, 23, 21) == 0 );
assert( gamma_golden_move(board, 6, 7, 24) == 0 );
assert( gamma_busy_fields(board, 7) == 36 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 1, 15, 10) == 1 );
assert( gamma_move(board, 1, 13, 22) == 1 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 4, 20, 23) == 1 );


char* board808907877 = gamma_board(board);
assert( board808907877 != NULL );
assert( strcmp(board808907877, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...363..\n"
"3248994.6.1...4975...17..\n"
".2.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..939...3...3....3\n"
".1...9..94...5.1.5.73...6\n"
".1344.1.4.6.2393..65.539.\n"
"57.5734.274526.38..33..8.\n") == 0);
free(board808907877);
board808907877 = NULL;
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 24, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 10) == 0 );


char* board556705911 = gamma_board(board);
assert( board556705911 != NULL );
assert( strcmp(board556705911, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...363..\n"
"3248994.6.1...4975...17..\n"
".2.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..939...3...3....3\n"
".1...9..94...5.1.5.73...6\n"
".1344.1.4.6.2393..65.5395\n"
"57.5734.274526.38..33..8.\n") == 0);
free(board556705911);
board556705911 = NULL;
assert( gamma_move(board, 6, 21, 18) == 0 );
assert( gamma_move(board, 7, 5, 22) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_free_fields(board, 9) == 259 );
assert( gamma_golden_move(board, 9, 23, 21) == 0 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_free_fields(board, 1) == 259 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 4, 6, 18) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 22, 9) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_golden_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 18, 0) == 1 );
assert( gamma_move(board, 9, 18, 21) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 1, 23, 1) == 0 );
assert( gamma_move(board, 2, 20, 13) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 20) == 1 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 6, 17, 4) == 0 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_golden_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 7, 11, 19) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 12, 3) == 1 );
assert( gamma_move(board, 1, 20, 1) == 1 );
assert( gamma_move(board, 1, 21, 23) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 3, 10, 22) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 3, 20) == 0 );
assert( gamma_move(board, 6, 11, 17) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 12, 16) == 0 );


char* board599368242 = gamma_board(board);
assert( board599368242 != NULL );
assert( strcmp(board599368242, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...363..\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38......42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....7...817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.833..8.\n") == 0);
free(board599368242);
board599368242 = NULL;
assert( gamma_move(board, 8, 11, 18) == 0 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_move(board, 9, 8, 22) == 0 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 23, 22) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 21, 7) == 0 );
assert( gamma_move(board, 4, 11, 23) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 18, 18) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board759549118 = gamma_board(board);
assert( board759549118 != NULL );
assert( strcmp(board759549118, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...3633.\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38..7...42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.833..8.\n") == 0);
free(board759549118);
board759549118 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );


char* board578138970 = gamma_board(board);
assert( board578138970 != NULL );
assert( strcmp(board578138970, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...3633.\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38..7...42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3.78.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.833..8.\n") == 0);
free(board578138970);
board578138970 = NULL;
assert( gamma_move(board, 3, 20, 8) == 1 );
assert( gamma_move(board, 4, 18, 24) == 0 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_free_fields(board, 4) == 58 );


char* board286971542 = gamma_board(board);
assert( board286971542 != NULL );
assert( strcmp(board286971542, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...3633.\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678....59..38..7...42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.3378.2\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.833..8.\n") == 0);
free(board286971542);
board286971542 = NULL;
assert( gamma_move(board, 5, 16, 20) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 22, 1) == 0 );
assert( gamma_move(board, 8, 18, 6) == 0 );
assert( gamma_move(board, 8, 23, 21) == 0 );
assert( gamma_move(board, 9, 19, 3) == 0 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_move(board, 2, 6, 21) == 0 );
assert( gamma_move(board, 2, 24, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 15, 21) == 0 );
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 24, 22) == 1 );
assert( gamma_move(board, 5, 23, 8) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 21, 0) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 17, 17) == 0 );
assert( gamma_free_fields(board, 8) == 51 );


char* board365203769 = gamma_board(board);
assert( board365203769 != NULL );
assert( strcmp(board365203769, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...36335\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"...678...159..38..7...42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.337852\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.8337.8.\n") == 0);
free(board365203769);
board365203769 = NULL;
assert( gamma_move(board, 9, 21, 24) == 0 );
assert( gamma_move(board, 1, 20, 14) == 0 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 12, 24) == 0 );
assert( gamma_move(board, 3, 20, 20) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_move(board, 7, 2, 18) == 1 );
assert( gamma_move(board, 7, 8, 18) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 9, 20, 18) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 6, 18, 17) == 0 );
assert( gamma_move(board, 6, 8, 16) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 19) == 0 );
assert( gamma_move(board, 7, 22, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 22, 18) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );


char* board642536023 = gamma_board(board);
assert( board642536023 != NULL );
assert( strcmp(board642536023, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...36335\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.337852\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.8337.8.\n") == 0);
free(board642536023);
board642536023 = NULL;
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 21, 13) == 0 );


char* board174520739 = gamma_board(board);
assert( board174520739 != NULL );
assert( strcmp(board174520739, 
"...4..1.18.4.613.8.448.8.\n"
"7..7974.78.2511.1...36335\n"
"3248994.6.1...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.95....4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.337852\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
"..665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.8337.8.\n") == 0);
free(board174520739);
board174520739 = NULL;
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 9, 21) == 1 );
assert( gamma_move(board, 8, 2, 23) == 0 );
assert( gamma_move(board, 9, 15, 11) == 0 );
assert( gamma_move(board, 1, 22, 18) == 0 );
assert( gamma_move(board, 2, 14, 18) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 20) == 0 );
assert( gamma_busy_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 9, 22) == 0 );
assert( gamma_move(board, 9, 23, 23) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 22, 19) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 3, 21, 12) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 23, 8) == 0 );
assert( gamma_golden_move(board, 4, 15, 16) == 0 );
assert( gamma_move(board, 5, 8, 22) == 0 );
assert( gamma_move(board, 6, 24, 11) == 0 );
assert( gamma_move(board, 7, 2, 22) == 1 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 9, 12, 19) == 1 );
assert( gamma_move(board, 9, 20, 6) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 21, 24) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 23, 12) == 0 );


char* board195648291 = gamma_board(board);
assert( board195648291 != NULL );
assert( strcmp(board195648291, 
"...4..1.18.4.613.8.448.8.\n"
"7.77974.78.2511.1...36335\n"
"3248994.671...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...98...2886..76.4693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.337852\n"
".585..3194..98.32174.7235\n"
"..15...21.34835..5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.62694246..52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.8337.8.\n") == 0);
free(board195648291);
board195648291 = NULL;
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 15, 6) == 1 );
assert( gamma_move(board, 6, 21, 6) == 0 );
assert( gamma_move(board, 7, 3, 16) == 0 );
assert( gamma_move(board, 7, 12, 16) == 0 );
assert( gamma_move(board, 8, 21, 7) == 0 );
assert( gamma_move(board, 9, 20, 24) == 0 );
assert( gamma_move(board, 9, 9, 21) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 1, 0, 23) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 20, 5) == 0 );
assert( gamma_move(board, 3, 20, 4) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 13, 22) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 6, 2, 21) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 21, 19) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 14, 4) == 1 );
assert( gamma_move(board, 9, 8, 12) == 1 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 0, 24) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 6, 19, 12) == 1 );
assert( gamma_free_fields(board, 6) == 36 );


char* board745699288 = gamma_board(board);
assert( board745699288 != NULL );
assert( strcmp(board745699288, 
"1..4..1.18.4.613.8.448.8.\n"
"7.77974.78.2511.1...36335\n"
"3248994.671...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
".464...784..77.684.52..64\n"
"21.88.86632...7286.15841.\n"
"6.7...989..2886..7664693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1.....8.878....62.35....\n"
"...5243432.54..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94...5.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"57.5734.274526.38.8337.8.\n") == 0);
free(board745699288);
board745699288 = NULL;
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 2, 16) == 0 );
assert( gamma_move(board, 9, 13, 13) == 1 );
assert( gamma_move(board, 9, 22, 7) == 0 );
assert( gamma_move(board, 1, 21, 23) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 7, 22) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_move(board, 6, 15, 12) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 6, 23) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 9, 4, 23) == 1 );
assert( gamma_move(board, 9, 5, 21) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 16, 1) == 0 );
assert( gamma_move(board, 9, 2, 15) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_move(board, 3, 3, 23) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 22, 10) == 0 );
assert( gamma_move(board, 5, 9, 23) == 0 );
assert( gamma_move(board, 6, 14, 18) == 0 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 7, 10, 18) == 0 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 22, 15) == 0 );
assert( gamma_move(board, 9, 16, 16) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 12, 15) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 24, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 0, 14) == 1 );
assert( gamma_move(board, 3, 5, 21) == 0 );
assert( gamma_move(board, 3, 22, 11) == 0 );
assert( gamma_move(board, 4, 22, 6) == 0 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 5, 0, 21) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 23, 10) == 0 );
assert( gamma_move(board, 7, 21, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 21, 12) == 0 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_move(board, 9, 17, 6) == 0 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 42 );


char* board948607542 = gamma_board(board);
assert( board948607542 != NULL );
assert( strcmp(board948607542, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..7.822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21.88.86632..97286.15841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1..6..8.878....62.35....\n"
"...5243432454..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board948607542);
board948607542 = NULL;
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 14, 21) == 0 );
assert( gamma_move(board, 5, 21, 7) == 0 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 6, 22) == 0 );
assert( gamma_move(board, 8, 5, 22) == 0 );
assert( gamma_move(board, 8, 3, 15) == 1 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 16, 22) == 0 );
assert( gamma_move(board, 3, 23, 18) == 0 );
assert( gamma_move(board, 3, 2, 20) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 5, 22, 7) == 0 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


char* board955278155 = gamma_board(board);
assert( board955278155 != NULL );
assert( strcmp(board955278155, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.7.152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21.88.86632..97286.15841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....2..46.7.9.26.7\n"
"..6861....79..817..151597\n"
".1..6..8.878....62.35....\n"
"...5243432454..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board955278155);
board955278155 = NULL;
assert( gamma_move(board, 7, 20, 22) == 0 );
assert( gamma_move(board, 8, 17, 12) == 0 );
assert( gamma_free_fields(board, 8) == 219 );
assert( gamma_move(board, 9, 13, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 44 );
assert( gamma_move(board, 1, 12, 17) == 1 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 3, 19, 13) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 2, 22) == 0 );
assert( gamma_move(board, 5, 24, 16) == 0 );
assert( gamma_move(board, 6, 23, 14) == 0 );
assert( gamma_move(board, 7, 12, 19) == 0 );
assert( gamma_move(board, 9, 12, 23) == 0 );
assert( gamma_move(board, 1, 8, 18) == 0 );
assert( gamma_free_fields(board, 1) == 218 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 20, 5) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 6, 18, 21) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 14, 18) == 0 );
assert( gamma_move(board, 9, 11, 12) == 0 );


char* board686848573 = gamma_board(board);
assert( board686848573 != NULL );
assert( strcmp(board686848573, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759..17..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.8.959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21.88.86632..97286.15841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....2.446.7.9.26.7\n"
"..6861....79..817..151597\n"
".1..6..8.878....62.35....\n"
"...5243432454..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board686848573);
board686848573 = NULL;
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 16, 19) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 7, 17, 8) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 9, 14, 12) == 0 );
assert( gamma_move(board, 9, 19, 12) == 0 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 4, 24, 7) == 0 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 19, 15) == 0 );
assert( gamma_move(board, 8, 19, 12) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 2, 23, 10) == 0 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 22, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 7, 14, 21) == 0 );
assert( gamma_move(board, 8, 19, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 9, 19) == 1 );
assert( gamma_move(board, 9, 10, 23) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 20, 21) == 1 );
assert( gamma_move(board, 1, 24, 8) == 0 );
assert( gamma_move(board, 2, 20, 16) == 0 );
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_golden_move(board, 2, 20, 11) == 0 );


char* board751447664 = gamma_board(board);
assert( board751447664 != NULL );
assert( strcmp(board751447664, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21.88.86632..97286.15841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....2.446.7.9.26.7\n"
"..6861....79..817..151597\n"
".1..6..8.8784...62.35....\n"
"...5243432454..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
"..55933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.446.2393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board751447664);
board751447664 = NULL;
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 4, 9, 21) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 22) == 0 );
assert( gamma_move(board, 6, 24, 23) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_free_fields(board, 8) == 214 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_free_fields(board, 9) == 58 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 5, 23, 24) == 0 );
assert( gamma_move(board, 6, 18, 13) == 1 );
assert( gamma_move(board, 6, 11, 20) == 0 );
assert( gamma_free_fields(board, 6) == 213 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 8, 0, 17) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 16, 22) == 0 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 7, 22, 10) == 0 );
assert( gamma_move(board, 7, 22, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 15, 21) == 0 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 17, 17) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_free_fields(board, 1) == 210 );
assert( gamma_move(board, 2, 23, 12) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 14, 18) == 0 );
assert( gamma_busy_fields(board, 8) == 41 );


char* board397378218 = gamma_board(board);
assert( board397378218 != NULL );
assert( strcmp(board397378218, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21.88.86632..97286615841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....79..817..151597\n"
"11..6..8.8784...62.35....\n"
"...5243432454..863.337852\n"
".585..31944.98532174.7235\n"
"..15..521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board397378218);
board397378218 = NULL;
assert( gamma_move(board, 1, 15, 18) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_move(board, 3, 23, 24) == 0 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 0, 24) == 0 );
assert( gamma_move(board, 6, 19, 15) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 13, 23) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 20, 24) == 0 );
assert( gamma_move(board, 5, 23, 5) == 0 );
assert( gamma_move(board, 6, 23, 18) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 20, 24) == 0 );
assert( gamma_move(board, 7, 22, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 24, 10) == 0 );
assert( gamma_move(board, 9, 9, 11) == 0 );
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 3, 15, 21) == 0 );
assert( gamma_move(board, 4, 6, 22) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 6, 6, 21) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 9, 3, 22) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 41 );
assert( gamma_golden_move(board, 1, 19, 23) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_move(board, 5, 9, 23) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 0, 21) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 20, 7) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 19, 14) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 13, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 18, 19) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 4, 16, 23) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 6, 22) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 12, 23) == 0 );
assert( gamma_busy_fields(board, 8) == 41 );
assert( gamma_move(board, 9, 6, 19) == 0 );
assert( gamma_move(board, 9, 20, 21) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );


char* board150473857 = gamma_board(board);
assert( board150473857 != NULL );
assert( strcmp(board150473857, 
"1..49.1.18.4.613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....79.1817..151597\n"
"11..6..8.8784...62.35....\n"
"...5243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399..3...3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board150473857);
board150473857 = NULL;
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 23) == 1 );
assert( gamma_move(board, 5, 16, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 23) == 0 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 7, 17, 19) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_golden_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 17, 19) == 0 );
assert( gamma_move(board, 1, 12, 16) == 0 );
assert( gamma_move(board, 1, 17, 3) == 1 );


char* board420346619 = gamma_board(board);
assert( board420346619 != NULL );
assert( strcmp(board420346619, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.4.1.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....79.1817..151597\n"
"11..6..8.8784...62.35....\n"
"...5243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399..3.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board420346619);
board420346619 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 5, 21, 23) == 0 );
assert( gamma_move(board, 5, 5, 22) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 11, 16) == 0 );
assert( gamma_move(board, 8, 5, 16) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 12, 24) == 0 );
assert( gamma_move(board, 9, 13, 10) == 0 );
assert( gamma_move(board, 1, 22, 19) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 21, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_golden_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 9, 15) == 0 );
assert( gamma_move(board, 8, 16, 11) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 18, 13) == 0 );
assert( gamma_move(board, 3, 20, 9) == 0 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 4, 7, 20) == 1 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 9, 16) == 0 );


char* board480340385 = gamma_board(board);
assert( board480340385 != NULL );
assert( strcmp(board480340385, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399..3.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board480340385);
board480340385 = NULL;
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 11, 21) == 0 );
assert( gamma_move(board, 8, 20, 19) == 0 );
assert( gamma_move(board, 8, 2, 18) == 0 );
assert( gamma_free_fields(board, 8) == 41 );
assert( gamma_move(board, 9, 14, 3) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 18, 16) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 3, 21, 0) == 0 );
assert( gamma_move(board, 4, 24, 1) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );


char* board925787776 = gamma_board(board);
assert( board925787776 != NULL );
assert( strcmp(board925787776, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...36.\n"
"..78822354..25.826.64.6..\n"
"2464...784..77.684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..28866.7664693.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board925787776);
board925787776 = NULL;
assert( gamma_move(board, 6, 21, 21) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 1, 21) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 24, 7) == 0 );
assert( gamma_free_fields(board, 8) == 41 );
assert( gamma_move(board, 9, 2, 20) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 24, 16) == 1 );
assert( gamma_move(board, 2, 22, 2) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 4, 6, 22) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 5, 21, 7) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 10, 19) == 0 );
assert( gamma_golden_move(board, 6, 14, 20) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_move(board, 8, 13, 12) == 0 );
assert( gamma_move(board, 8, 22, 15) == 0 );
assert( gamma_move(board, 9, 1, 19) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 6, 22) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 23) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, 19, 7) == 0 );
assert( gamma_move(board, 7, 14, 14) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 21) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 1, 23, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_golden_move(board, 3, 22, 12) == 1 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 7, 23) == 0 );
assert( gamma_move(board, 6, 14, 14) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 15, 0) == 0 );
assert( gamma_move(board, 9, 17, 13) == 0 );
assert( gamma_move(board, 1, 16, 21) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 18, 21) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );


char* board194717448 = gamma_board(board);
assert( board194717448 != NULL );
assert( strcmp(board194717448, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..28866.7664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board194717448);
board194717448 = NULL;
assert( gamma_move(board, 7, 16, 12) == 1 );
assert( gamma_move(board, 7, 16, 12) == 0 );


char* board211197150 = gamma_board(board);
assert( board211197150 != NULL );
assert( strcmp(board211197150, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..31944.9853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board211197150);
board211197150 = NULL;
assert( gamma_move(board, 8, 17, 5) == 0 );
assert( gamma_move(board, 9, 4, 21) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 19, 7) == 0 );
assert( gamma_move(board, 1, 15, 19) == 0 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 3, 24, 23) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 5, 16, 20) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 16, 13) == 0 );
assert( gamma_move(board, 7, 13, 20) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 8, 18, 0) == 0 );
assert( gamma_move(board, 9, 11, 20) == 0 );


char* board410434303 = gamma_board(board);
assert( board410434303 != NULL );
assert( strcmp(board410434303, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94..65.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board410434303);
board410434303 = NULL;
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 20, 24) == 0 );
assert( gamma_move(board, 8, 11, 20) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 1, 23, 2) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 2, 20, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 22) == 0 );
assert( gamma_move(board, 3, 9, 23) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );


char* board657880861 = gamma_board(board);
assert( board657880861 != NULL );
assert( strcmp(board657880861, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board657880861);
board657880861 = NULL;
assert( gamma_move(board, 7, 17, 15) == 0 );
assert( gamma_move(board, 7, 2, 21) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_golden_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 19, 13) == 0 );
assert( gamma_move(board, 9, 15, 3) == 0 );


char* board995432924 = gamma_board(board);
assert( board995432924 != NULL );
assert( strcmp(board995432924, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board995432924);
board995432924 = NULL;
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 4, 23) == 0 );


char* board891027931 = gamma_board(board);
assert( board891027931 != NULL );
assert( strcmp(board891027931, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.71.441.13.5..1...2..9.\n"
".7..9.9.89959...4992..47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..25.826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board891027931);
board891027931 = NULL;
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 15, 19) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 23, 16) == 0 );
assert( gamma_move(board, 8, 23, 10) == 0 );
assert( gamma_move(board, 8, 14, 15) == 1 );
assert( gamma_move(board, 9, 17, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 1, 5, 20) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 20, 19) == 1 );


char* board400029188 = gamma_board(board);
assert( board400029188 != NULL );
assert( strcmp(board400029188, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117..\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38..7.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35....\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board400029188);
board400029188 = NULL;
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 21, 7) == 0 );
assert( gamma_move(board, 7, 22, 14) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_move(board, 9, 10, 19) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 2, 9, 19) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 21, 8) == 0 );
assert( gamma_golden_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 24, 21) == 1 );
assert( gamma_move(board, 4, 19, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 0, 19) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 21) == 0 );
assert( gamma_move(board, 8, 14, 18) == 0 );
assert( gamma_move(board, 9, 9, 15) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 23, 10) == 0 );
assert( gamma_free_fields(board, 2) == 190 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 22, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 1, 17) == 0 );
assert( gamma_move(board, 7, 18, 24) == 0 );
assert( gamma_move(board, 8, 10, 17) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 15, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 45 );
assert( gamma_free_fields(board, 9) == 189 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 2, 20, 17) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 4, 17, 20) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 9, 23) == 0 );
assert( gamma_move(board, 7, 17, 18) == 1 );


char* board710253668 = gamma_board(board);
assert( board710253668 != NULL );
assert( strcmp(board710253668, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62.35.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board710253668);
board710253668 = NULL;
assert( gamma_move(board, 9, 23, 22) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 4, 13, 24) == 0 );
assert( gamma_move(board, 5, 3, 23) == 0 );
assert( gamma_move(board, 5, 24, 19) == 0 );
assert( gamma_golden_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 21, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 16, 19) == 0 );
assert( gamma_busy_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 14, 7) == 0 );
assert( gamma_move(board, 9, 17, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 12, 17) == 0 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_golden_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_move(board, 3, 17, 17) == 0 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_move(board, 4, 22, 4) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 14, 22) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 7, 18, 9) == 1 );
assert( gamma_move(board, 8, 21, 19) == 0 );
assert( gamma_move(board, 8, 24, 20) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 15, 13) == 0 );


char* board879142749 = gamma_board(board);
assert( board879142749 != NULL );
assert( strcmp(board879142749, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board879142749);
board879142749 = NULL;
assert( gamma_move(board, 3, 19, 21) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_move(board, 8, 11, 20) == 0 );
assert( gamma_move(board, 8, 18, 11) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 5, 5, 24) == 0 );
assert( gamma_move(board, 5, 8, 23) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 21, 10) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 9, 19) == 0 );


char* board913759338 = gamma_board(board);
assert( board913759338 != NULL );
assert( strcmp(board913759338, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.52..64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....21446.7.9.26.7\n"
"..6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526.38.8337.8.\n") == 0);
free(board913759338);
board913759338 = NULL;
assert( gamma_move(board, 9, 14, 21) == 0 );
assert( gamma_move(board, 9, 21, 14) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 21, 21) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 1, 15) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 16, 6) == 0 );
assert( gamma_move(board, 7, 0, 18) == 0 );
assert( gamma_move(board, 8, 20, 19) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 17, 15) == 0 );
assert( gamma_move(board, 9, 23, 14) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 5, 22, 19) == 0 );
assert( gamma_move(board, 5, 13, 23) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_move(board, 6, 10, 19) == 0 );
assert( gamma_move(board, 7, 23, 22) == 0 );
assert( gamma_move(board, 8, 2, 23) == 0 );
assert( gamma_move(board, 8, 21, 9) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 21, 3) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 3, 18, 24) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 20, 12) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 7, 16, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 23) == 0 );
assert( gamma_busy_fields(board, 8) == 43 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 2, 20) == 0 );
assert( gamma_move(board, 1, 0, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 23, 7) == 0 );
assert( gamma_move(board, 3, 22, 20) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 5, 11, 18) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 18) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_move(board, 7, 20, 14) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 20, 12) == 0 );
assert( gamma_move(board, 1, 19, 7) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );


char* board385249856 = gamma_board(board);
assert( board385249856 != NULL );
assert( strcmp(board385249856, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7...6.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72784....2144677.9.26.7\n"
"4.6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board385249856);
board385249856 = NULL;
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 22, 22) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 8, 17) == 1 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_golden_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 1, 16, 20) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 4, 20) == 0 );


char* board641155578 = gamma_board(board);
assert( board641155578 != NULL );
assert( strcmp(board641155578, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".1..99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board641155578);
board641155578 = NULL;
assert( gamma_move(board, 4, 23, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 11, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 2, 1) == 0 );


char* board799730748 = gamma_board(board);
assert( board799730748 != NULL );
assert( strcmp(board799730748, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
"..7678..7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73...6\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board799730748);
board799730748 = NULL;
assert( gamma_move(board, 8, 6, 18) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 20, 15) == 0 );
assert( gamma_move(board, 9, 2, 20) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_golden_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 24, 1) == 0 );
assert( gamma_move(board, 5, 3, 18) == 0 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_golden_move(board, 7, 10, 16) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 23, 23) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_move(board, 4, 17, 17) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 6, 23, 2) == 1 );
assert( gamma_move(board, 6, 2, 23) == 0 );
assert( gamma_busy_fields(board, 6) == 46 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 3, 16) == 0 );
assert( gamma_move(board, 7, 16, 23) == 0 );
assert( gamma_move(board, 8, 19, 13) == 0 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 1, 22, 12) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 18, 21) == 0 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 7, 17, 23) == 0 );
assert( gamma_move(board, 8, 12, 21) == 0 );
assert( gamma_move(board, 9, 1, 17) == 0 );
assert( gamma_golden_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 1, 16, 19) == 0 );
assert( gamma_move(board, 1, 18, 22) == 0 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 3, 19, 24) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 23, 13) == 0 );
assert( gamma_move(board, 5, 19, 17) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 46 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 2, 18) == 0 );
assert( gamma_move(board, 7, 7, 17) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 23, 5) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 19, 5) == 0 );
assert( gamma_move(board, 9, 18, 0) == 0 );
assert( gamma_move(board, 1, 5, 24) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 19, 24) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 21, 13) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 19, 8) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 3, 18, 19) == 0 );
assert( gamma_move(board, 3, 24, 16) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 1, 18) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_move(board, 9, 23, 19) == 0 );
assert( gamma_move(board, 1, 4, 22) == 0 );
assert( gamma_move(board, 1, 24, 12) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 23, 16) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 9, 21) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 15, 23) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 3, 18) == 0 );


char* board423823297 = gamma_board(board);
assert( board423823297 != NULL );
assert( strcmp(board423823297, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73..66\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board423823297);
board423823297 = NULL;
assert( gamma_move(board, 6, 21, 11) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 7, 3, 24) == 0 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_golden_move(board, 3, 17, 17) == 0 );


char* board861838685 = gamma_board(board);
assert( board861838685 != NULL );
assert( strcmp(board861838685, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....7941817..151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73..66\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board861838685);
board861838685 = NULL;
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 20, 18) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 21, 8) == 0 );
assert( gamma_golden_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 11, 18) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_move(board, 1, 4, 23) == 0 );
assert( gamma_move(board, 2, 17, 10) == 1 );
assert( gamma_move(board, 2, 23, 14) == 0 );
assert( gamma_move(board, 3, 18, 19) == 0 );
assert( gamma_move(board, 3, 19, 20) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 23, 20) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_move(board, 7, 6, 15) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 6, 23) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board476998767 = gamma_board(board);
assert( board476998767 != NULL );
assert( strcmp(board476998767, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73..66\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board476998767);
board476998767 = NULL;
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 23, 22) == 0 );
assert( gamma_move(board, 4, 22, 17) == 0 );
assert( gamma_move(board, 5, 21, 23) == 0 );


char* board921180515 = gamma_board(board);
assert( board921180515 != NULL );
assert( strcmp(board921180515, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73..66\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board921180515);
board921180515 = NULL;
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_move(board, 8, 23, 15) == 0 );
assert( gamma_move(board, 9, 5, 18) == 0 );
assert( gamma_move(board, 9, 6, 23) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board897033036 = gamma_board(board);
assert( board897033036 != NULL );
assert( strcmp(board897033036, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..777684.529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.26.7\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5..\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.521.348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..94.765.1.5.73..66\n"
".1344.1.44652393..6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board897033036);
board897033036 = NULL;
assert( gamma_move(board, 3, 21, 11) == 0 );
assert( gamma_move(board, 5, 2, 22) == 0 );
assert( gamma_move(board, 5, 18, 14) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 4, 23) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 20, 17) == 0 );
assert( gamma_move(board, 9, 16, 21) == 0 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 19, 3) == 0 );
assert( gamma_move(board, 7, 24, 9) == 1 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 8, 18, 13) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_golden_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 5, 16, 23) == 0 );
assert( gamma_move(board, 5, 14, 15) == 0 );
assert( gamma_move(board, 6, 19, 24) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 19, 15) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 18, 21) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 20, 18) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 21, 6) == 0 );
assert( gamma_move(board, 6, 18, 21) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 52 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 20, 17) == 0 );
assert( gamma_move(board, 9, 15, 24) == 0 );
assert( gamma_move(board, 9, 16, 15) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 3, 22) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 22) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 20, 19) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 18, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 46 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 19, 21) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 24, 3) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 0, 24) == 0 );
assert( gamma_move(board, 8, 21, 11) == 0 );
assert( gamma_move(board, 8, 21, 2) == 0 );
assert( gamma_move(board, 9, 6, 21) == 0 );
assert( gamma_move(board, 9, 14, 17) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 23, 5) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_golden_move(board, 2, 16, 15) == 0 );
assert( gamma_move(board, 3, 16, 1) == 1 );
assert( gamma_move(board, 3, 5, 21) == 0 );
assert( gamma_move(board, 4, 22, 17) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 6, 19, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 23, 11) == 1 );
assert( gamma_move(board, 8, 12, 24) == 0 );


char* board705237311 = gamma_board(board);
assert( board705237311 != NULL );
assert( strcmp(board705237311, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6..\n"
"2464...784..7776845529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.2677\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5.7\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.5211348355.5..9..13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..946765.1.5.73..66\n"
".1344.1.446523933.6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board705237311);
board705237311 = NULL;
assert( gamma_move(board, 9, 21, 13) == 0 );
assert( gamma_move(board, 1, 22, 17) == 0 );
assert( gamma_move(board, 1, 21, 6) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 24) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 8, 23, 16) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 9, 10, 18) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_move(board, 1, 9, 21) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 21) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_golden_move(board, 5, 21, 24) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 1, 22) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 11, 18) == 0 );
assert( gamma_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 8, 5, 16) == 0 );
assert( gamma_move(board, 8, 4, 14) == 1 );
assert( gamma_move(board, 9, 6, 16) == 0 );
assert( gamma_move(board, 9, 23, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 9, 21) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 15, 21) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 4, 19) == 0 );
assert( gamma_move(board, 7, 3, 23) == 0 );
assert( gamma_move(board, 8, 20, 9) == 0 );
assert( gamma_free_fields(board, 8) == 169 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 15, 13) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 1, 18, 17) == 0 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 24, 15) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 23, 1) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 6, 3, 22) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );


char* board173136593 = gamma_board(board);
assert( board173136593 != NULL );
assert( strcmp(board173136593, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6.4\n"
"24648..784..7776845529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.2677\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5.7\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.5211348355.5..91.13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..946765.1.5.73..66\n"
".1344.1.446523933.6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board173136593);
board173136593 = NULL;
assert( gamma_move(board, 7, 23, 24) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );


char* board420978967 = gamma_board(board);
assert( board420978967 != NULL );
assert( strcmp(board420978967, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6.4\n"
"24648..784..7776845529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.2677\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5.7\n"
"..85243432454..863.337852\n"
".585..3194449853217477235\n"
"..156.5211348355.5..91.13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..946765.1.5.73..66\n"
".1344.1.446523933.6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board420978967);
board420978967 = NULL;
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 46 );
assert( gamma_golden_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 5, 16) == 0 );
assert( gamma_move(board, 9, 21, 20) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 14, 22) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 5, 23, 7) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 6, 13, 21) == 0 );
assert( gamma_golden_move(board, 6, 18, 9) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 53 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 2, 22) == 0 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 21, 7) == 0 );
assert( gamma_move(board, 9, 11, 15) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );


char* board135188528 = gamma_board(board);
assert( board135188528 != NULL );
assert( strcmp(board135188528, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6.4\n"
"24648..784..7776845529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.2677\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5.7\n"
"..85243432454..863.337852\n"
"8585..3194449853217477235\n"
"..156.5211348355.5..91.13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..946765.1.5.73..66\n"
".1344.1.446523933.6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board135188528);
board135188528 = NULL;
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 4, 8, 19) == 0 );
assert( gamma_golden_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 16, 21) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 18, 0) == 0 );
assert( gamma_move(board, 6, 15, 17) == 0 );


char* board166257687 = gamma_board(board);
assert( board166257687 != NULL );
assert( strcmp(board166257687, 
"1..49.1.18.44613.8.448.8.\n"
"7.77974478.2511.1...36335\n"
"3248994.671...49759.117.4\n"
"42.711441.13.5..1...2..9.\n"
".7..9.9.89959...49922.47.\n"
".476788.7159..38.77.9.42.\n"
"2319.7..66.71152872.3.9.2\n"
"..98652633125.23646...362\n"
"..78822354..258826.64.6.4\n"
"24648..784..7776845529.64\n"
"21788.86632..97286615841.\n"
"6.7...989..2886677664633.\n"
"4.72787....2144677.9.2677\n"
"4.6861....79418172.151597\n"
"11..6..8.8784...62735.5.7\n"
"..85243432454..863.337852\n"
"8585..3194449853217477235\n"
"..156.5211348355.5..91.13\n"
".4665929.4.298...9.72115.\n"
".4489.626942469.52......3\n"
".855933..9399.93.1.3....3\n"
".15.99..946765.1.5.73..66\n"
".1344.1.446523933.6515395\n"
"5735734.274526238.8337.8.\n") == 0);
free(board166257687);
board166257687 = NULL;
assert( gamma_move(board, 7, 0, 22) == 0 );
assert( gamma_move(board, 7, 11, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 22, 18) == 0 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_move(board, 2, 24, 23) == 0 );
assert( gamma_move(board, 3, 24, 14) == 0 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 4, 17, 20) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 19, 21) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 18, 24) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 23, 19) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );


gamma_delete(board);

    return 0;
}
