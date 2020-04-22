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
uuid: 157064080
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(21, 15, 8, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 4, 14, 11) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 311 );
assert( gamma_move(board, 7, 17, 0) == 1 );
assert( gamma_move(board, 8, 11, 20) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 5, 20, 13) == 1 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_free_fields(board, 5) == 303 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 6, 13, 11) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 14, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );


char* board545078589 = gamma_board(board);
assert( board545078589 != NULL );
assert( strcmp(board545078589, 
".....................\n"
"......6.............5\n"
".........1...........\n"
"..........3..64......\n"
".....................\n"
"........2............\n"
"..5..........2.......\n"
".....................\n"
"...2......1..........\n"
".....7....2...8......\n"
".....................\n"
".....................\n"
"...1.....5...........\n"
"...........5.........\n"
".8...............7...\n") == 0);
free(board545078589);
board545078589 = NULL;
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_free_fields(board, 3) == 296 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 15, 8) == 1 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 6, 20, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 12, 14) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 15, 1) == 1 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_free_fields(board, 1) == 283 );
assert( gamma_move(board, 3, 6, 20) == 0 );


char* board438118257 = gamma_board(board);
assert( board438118257 != NULL );
assert( strcmp(board438118257, 
"............7........\n"
".....56.............5\n"
"......1..14..........\n"
"........6.3..64......\n"
".7..1................\n"
"........2............\n"
"..5..........2.5.....\n"
".....................\n"
"...2......17.........\n"
".....7....2...8......\n"
"....................6\n"
"...2.................\n"
"...1.....5...........\n"
"...........5...8.....\n"
"58...............7...\n") == 0);
free(board438118257);
board438118257 = NULL;
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 3, 20, 6) == 1 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 19, 7) == 1 );
assert( gamma_move(board, 6, 12, 19) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_free_fields(board, 6) == 275 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 8, 13, 17) == 0 );
assert( gamma_move(board, 8, 16, 6) == 1 );
assert( gamma_move(board, 1, 5, 18) == 0 );


char* board102836723 = gamma_board(board);
assert( board102836723 != NULL );
assert( strcmp(board102836723, 
".6..........7........\n"
".....56.............5\n"
"......1..14..........\n"
"........6.33.64......\n"
".72.1...7............\n"
"........2............\n"
"..5....7.....2.5.....\n"
"...................5.\n"
"...2......17....8...3\n"
".....7...52...8......\n"
"....................6\n"
"...2...6.............\n"
"...1.....5...7.......\n"
"...........5...8.....\n"
"58...............7...\n") == 0);
free(board102836723);
board102836723 = NULL;
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 268 );
assert( gamma_golden_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 14, 20) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 15) == 0 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 18, 8) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_free_fields(board, 4) == 256 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_move(board, 7, 7, 17) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_golden_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 14, 3) == 1 );


char* board689334691 = gamma_board(board);
assert( board689334691 != NULL );
assert( strcmp(board689334691, 
"36.........67........\n"
"..8..56.............5\n"
"....3.1..14..........\n"
"........6.33.64......\n"
".72.1...7............\n"
"........2............\n"
"..5...17.....2.5..6..\n"
"...................5.\n"
".8.2......17.41.8...3\n"
".....7...52...8......\n"
"...3...........4....6\n"
"...2...6.6....1......\n"
"1.51.5...5...7.......\n"
"....3......5...8.....\n"
"58........2...2..7...\n") == 0);
free(board689334691);
board689334691 = NULL;
assert( gamma_move(board, 2, 20, 10) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_free_fields(board, 3) == 252 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 9, 19) == 0 );
assert( gamma_golden_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 16, 6) == 0 );
assert( gamma_move(board, 8, 12, 20) == 0 );
assert( gamma_move(board, 8, 12, 9) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 2, 5, 20) == 0 );
assert( gamma_move(board, 2, 16, 7) == 1 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 4, 17, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_free_fields(board, 5) == 243 );
assert( gamma_golden_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 15, 12) == 1 );
assert( gamma_move(board, 7, 6, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_free_fields(board, 8) == 241 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 239 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 238 );


char* board672904207 = gamma_board(board);
assert( board672904207 != NULL );
assert( strcmp(board672904207, 
"36.........67........\n"
"..8..56.............5\n"
"....3.1..14....6.....\n"
"...5....6.33.64......\n"
".72.1...7...........2\n"
"........2...81...4...\n"
"..5...17.....245..6..\n"
"............3...2..5.\n"
"88.2......17.41.8...3\n"
"....37...52...8......\n"
"...35..........4....6\n"
"...2...616....1......\n"
"1.51.5...5...7.......\n"
"....3......5...8.....\n"
"584.4.....2...2..7...\n") == 0);
free(board672904207);
board672904207 = NULL;
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_free_fields(board, 6) == 237 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 15, 6) == 1 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );


char* board614484016 = gamma_board(board);
assert( board614484016 != NULL );
assert( strcmp(board614484016, 
"36.........67........\n"
"..8..56.............5\n"
"....3.1..14....6.....\n"
"...5....6.33.64......\n"
".7231...7...........2\n"
"........2...81...4...\n"
"..5...17.....245..6..\n"
"............3...2..5.\n"
"8852......17.4188...3\n"
"....37.8.52...8......\n"
"...35.........74....6\n"
"...2...616....1......\n"
"1.51.5...5...7.......\n"
"....3......5...8.....\n"
"584.4.....2...2..7...\n") == 0);
free(board614484016);
board614484016 = NULL;
assert( gamma_move(board, 4, 20, 2) == 1 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 3, 18) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 14, 14) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 12) == 1 );
assert( gamma_move(board, 7, 18, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 20, 5) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 1, 18, 3) == 1 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board971030473 = gamma_board(board);
assert( board971030473 != NULL );
assert( strcmp(board971030473, 
"36........267.5...7..\n"
"..8..56......2......5\n"
".4..3.1..14..7.6.....\n"
"...5....6.33.64......\n"
".7231...71..35......2\n"
"....1...2...81...4...\n"
"..58..178....245..6..\n"
"..6.........3...2..5.\n"
"8852......17.4188...3\n"
".6..3768.52.3.8.....8\n"
"...35......15.74....6\n"
"...2...616....1...1..\n"
"1.51.5...5...7......4\n"
"....3..7...5...8.....\n"
"584.4.....2...2..7...\n") == 0);
free(board971030473);
board971030473 = NULL;
assert( gamma_move(board, 3, 14, 13) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 5, 18, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 16, 11) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 20, 1) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 3, 12) == 1 );
assert( gamma_move(board, 8, 20, 14) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 19, 11) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_free_fields(board, 8) == 195 );
assert( gamma_golden_move(board, 8, 10, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 7, 9, 19) == 0 );
assert( gamma_move(board, 8, 4, 16) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 190 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 12, 20) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_free_fields(board, 7) == 187 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 18, 1) == 1 );
assert( gamma_free_fields(board, 3) == 185 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 11, 2) == 1 );
assert( gamma_move(board, 8, 15, 0) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 6, 17, 5) == 1 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_golden_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 4, 16, 12) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_free_fields(board, 1) == 166 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_free_fields(board, 5) == 164 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_free_fields(board, 8) == 163 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 13, 17) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 5, 4, 19) == 0 );
assert( gamma_free_fields(board, 5) == 161 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 13, 0) == 1 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 8, 20) == 0 );


char* board355352597 = gamma_board(board);
assert( board355352597 != NULL );
assert( strcmp(board355352597, 
"367...6...267.5...7.8\n"
"6.81.568.....23.....5\n"
"84873.1.514317564....\n"
"8..5....6.33.64.7..1.\n"
".7231...711.35......2\n"
"6.8.1.3.2...814..4...\n"
".158.51783...245..6..\n"
"..68......6131..2..5.\n"
"8852.....21714188...3\n"
".6.5376875253.8.66..8\n"
"...35..1...15274..5.6\n"
"4..2.8.616....1...1..\n"
"1.51.5...528.7......4\n"
".33.3..7..45..58..3.3\n"
"584.4....42.7828.7...\n") == 0);
free(board355352597);
board355352597 = NULL;
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_free_fields(board, 4) == 157 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_free_fields(board, 5) == 156 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_golden_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 7, 18) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 19, 2) == 1 );
assert( gamma_free_fields(board, 4) == 155 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 154 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 17, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 26 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_move(board, 8, 11, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_free_fields(board, 1) == 149 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 16, 14) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 16, 4) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_move(board, 7, 7, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 16, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 145 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_free_fields(board, 4) == 145 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 20, 0) == 1 );
assert( gamma_free_fields(board, 5) == 144 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 7, 16, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 17, 13) == 1 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 6, 9, 18) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 10, 14) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 139 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 17, 11) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_free_fields(board, 2) == 136 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 14, 15) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_move(board, 5, 18, 6) == 1 );
assert( gamma_move(board, 6, 18, 13) == 1 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_free_fields(board, 8) == 132 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );


char* board117709578 = gamma_board(board);
assert( board117709578 != NULL );
assert( strcmp(board117709578, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645...\n"
"8..5....6.33.64.75.1.\n"
".7231...711.35..7...2\n"
"688.143.2...814..4...\n"
".158551783...245.86..\n"
"..68..313.6131..2..5.\n"
"8852...4821714188.5.3\n"
".6.5376875253.8.66..8\n"
"...35.61...152745.5.6\n"
"4..2.8.616....1.8.1..\n"
"145115...528.7.....44\n"
".33.3..78.45..58..3.3\n"
"584.4....42.7828.7..5\n") == 0);
free(board117709578);
board117709578 = NULL;
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_free_fields(board, 5) == 129 );
assert( gamma_golden_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 0, 19) == 0 );
assert( gamma_free_fields(board, 8) == 128 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );


char* board644549671 = gamma_board(board);
assert( board644549671 != NULL );
assert( strcmp(board644549671, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645...\n"
"8..5....6.33.64.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.3.814..4...\n"
".158551783...245.86..\n"
"5.68..313.6131..2..5.\n"
"8852...4821714188.5.3\n"
"66.5376875253.8.66..8\n"
"...35.61...152745.5.6\n"
"4..2.8.616....1.8.1..\n"
"145115...528.7.....44\n"
".33.3..78.45..58..3.3\n"
"584.4....42.7828.7..5\n") == 0);
free(board644549671);
board644549671 = NULL;
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 128 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 128 );
assert( gamma_move(board, 7, 7, 17) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );


char* board605670660 = gamma_board(board);
assert( board605670660 != NULL );
assert( strcmp(board605670660, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645...\n"
"8..5....6.33.64.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.3.814..4...\n"
".158551783...245.86..\n"
"5.68..313.6131..2..5.\n"
"8852...4821714188.5.3\n"
"66.5376875253.8.66..8\n"
"...35.61...152745.5.6\n"
"48.2.8.616....1.8.1..\n"
"145115...528.7.....44\n"
".33.3..78.45.558..3.3\n"
"584.4....42.7828.7..5\n") == 0);
free(board605670660);
board605670660 = NULL;
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );


char* board890386152 = gamma_board(board);
assert( board890386152 != NULL );
assert( strcmp(board890386152, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645...\n"
"8..5....6.33.64.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.3.814..4...\n"
"2158551783...245.86..\n"
"5.68..313.6131..2..5.\n"
"8852...4821714188.5.3\n"
"66.5376875253.8.66..8\n"
"...35.61...152745.5.6\n"
"48.2.8.616....1.8.1..\n"
"145115...528.7.....44\n"
".33.3..78.45.558..3.3\n"
"584.4....42.7828.7..5\n") == 0);
free(board890386152);
board890386152 = NULL;
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 13, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 3, 20) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_move(board, 8, 10, 14) == 0 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 20, 12) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_move(board, 8, 0, 16) == 0 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 14, 15) == 0 );
assert( gamma_move(board, 6, 13, 5) == 1 );


char* board636806491 = gamma_board(board);
assert( board636806491 != NULL );
assert( strcmp(board636806491, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645..2\n"
"8..5....6.33.64.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.3.814..4...\n"
"2158551783...245.86..\n"
"5.68..313.61317.2..5.\n"
"8852.5.4821714188.5.3\n"
"66.537687525368.66..8\n"
"5..35.61...152745.5.6\n"
"48.2.8.616....1.8.1..\n"
"145115...528.7.....44\n"
".33.3..78.45.558..3.3\n"
"584.4....42.7828.7..5\n") == 0);
free(board636806491);
board636806491 = NULL;
assert( gamma_move(board, 7, 5, 18) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_free_fields(board, 8) == 120 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_golden_move(board, 6, 12, 17) == 0 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_busy_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 20, 5) == 0 );
assert( gamma_free_fields(board, 8) == 119 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 118 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 7, 20, 1) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 30 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 17, 13) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 14, 19) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 2, 7, 20) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 19, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 37 );
assert( gamma_move(board, 7, 13, 19) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 19, 3) == 1 );
assert( gamma_golden_move(board, 8, 13, 4) == 1 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );


char* board105341938 = gamma_board(board);
assert( board105341938 != NULL );
assert( strcmp(board105341938, 
"367...6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645..2\n"
"8..5....6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.31814..4...\n"
"2158551783...245.86..\n"
"5468..313.61317.2..5.\n"
"8852.5.4821714188.5.3\n"
"66.537687525368.66.48\n"
"5..35.61...158745.5.6\n"
"48.2.8.616....1.8.18.\n"
"145115...528.7.....44\n"
".33.3..78.45.558..3.3\n"
"584.4....4237828.7..5\n") == 0);
free(board105341938);
board105341938 = NULL;
assert( gamma_move(board, 4, 19, 6) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 8, 0, 18) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 6, 17) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 1, 20, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 7, 19, 4) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 0, 18) == 0 );


char* board708621031 = gamma_board(board);
assert( board708621031 != NULL );
assert( strcmp(board708621031, 
"3677..6...267.5.2.7.8\n"
"6.817568.....23..56.5\n"
"84873.1.5143175645..2\n"
"8..5....6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542.31814..4...\n"
"2158551783...245.86..\n"
"5468.5313.61317.2..5.\n"
"8852.5.4821714188.543\n"
"66.537687525368.66.48\n"
"5..35.61...158745.576\n"
"48.2.886161...1.8.18.\n"
"145115...528.7.....44\n"
".33.3..78845.558..3.3\n"
"584.4..7.4237828.7..5\n") == 0);
free(board708621031);
board708621031 = NULL;
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 7, 17) == 0 );
assert( gamma_free_fields(board, 8) == 105 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 102 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 2, 20, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 20, 6) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 2, 16) == 0 );


char* board973683530 = gamma_board(board);
assert( board973683530 != NULL );
assert( strcmp(board973683530, 
"3677..6...267.5.2.7.8\n"
"6.817568...4.23..56.5\n"
"84873.1.5143175645..2\n"
"8..5....6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542131814..4...\n"
"2158551783...245.86..\n"
"5468.5313.61317.2..5.\n"
"8852.584821714188.543\n"
"66.537687525368.66.48\n"
"5.535.61...158745.576\n"
"48.2.886161...1.8.18.\n"
"1451156..528.7.....44\n"
".33.3..78845.558..3.3\n"
"584.4..7.4237828.7..5\n") == 0);
free(board973683530);
board973683530 = NULL;
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 5, 19, 1) == 1 );
assert( gamma_move(board, 6, 7, 20) == 0 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 20, 7) == 1 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_move(board, 6, 16, 4) == 0 );
assert( gamma_move(board, 6, 16, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 96 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );


char* board433627372 = gamma_board(board);
assert( board433627372 != NULL );
assert( strcmp(board433627372, 
"3677..6...267.5.2.7.8\n"
"6.817568...4.23..56.5\n"
"84873.1.5143175645..2\n"
"81.5....6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542131814..4...\n"
"2158551783...245.86..\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"66.537687525368.66.48\n"
"5.535.61...158745.576\n"
"48.2.886161...1.8.18.\n"
"1451156..528.7.....44\n"
".3313..78845.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board433627372);
board433627372 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 17) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_move(board, 7, 20, 12) == 0 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 35 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 2, 17, 0) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 17, 14) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 18, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 17, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 41 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_free_fields(board, 7) == 91 );
assert( gamma_move(board, 8, 20, 10) == 0 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_move(board, 7, 20, 10) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );


char* board280593109 = gamma_board(board);
assert( board280593109 != NULL );
assert( strcmp(board280593109, 
"36774.6...267.5.237.8\n"
"6.817568...4.23..56.5\n"
"84873.1.5143175645..2\n"
"81.5.4..6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542131814..4...\n"
"2158551783...245.86..\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"66.537687525368.66448\n"
"5.535.61...158745.576\n"
"48.2.886161..81.8518.\n"
"1451156..528.7.....44\n"
".3313..78845.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board280593109);
board280593109 = NULL;
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 15, 13) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 5, 15) == 0 );


char* board479481955 = gamma_board(board);
assert( board479481955 != NULL );
assert( strcmp(board479481955, 
"36774.6...267.5.237.8\n"
"6.817568...4.232.56.5\n"
"84873.1.5143175645..2\n"
"81.5.4..6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688.14542131814..4...\n"
"21585517833..245.86..\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"66.537687525368.66448\n"
"5.535.61.2.158745.576\n"
"48.2.886161..81.8518.\n"
"1451156..528.7.....44\n"
".3313..78845.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board479481955);
board479481955 = NULL;
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 19, 4) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 12, 19) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );


char* board158231787 = gamma_board(board);
assert( board158231787 != NULL );
assert( strcmp(board158231787, 
"36774.6...267.5.237.8\n"
"6.817568...4.232.56.5\n"
"84873.1.5143175645..2\n"
"81.5.4..6.33564.75.1.\n"
".7231...711.35..7...2\n"
"688614542131814..4...\n"
"21585517833..245.86..\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"66.537687525368.66448\n"
"5.535.61.2.158745.576\n"
"48.2.886161..81.8518.\n"
"1451156..528.7.....44\n"
".3313..78845.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board158231787);
board158231787 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 9, 19) == 0 );
assert( gamma_golden_move(board, 7, 5, 11) == 1 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 19, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_golden_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 5, 14) == 1 );
assert( gamma_move(board, 1, 19, 8) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 15, 6) == 0 );
assert( gamma_move(board, 7, 10, 18) == 0 );


char* board106999461 = gamma_board(board);
assert( board106999461 != NULL );
assert( strcmp(board106999461, 
"3677486...267.5.237.8\n"
"6.817568...4.232.56.5\n"
"84873.1.5143175645..2\n"
"817557..6.33564.75.1.\n"
".7231...711.35..7..82\n"
"688614542131814..4...\n"
"21585517833..245.861.\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"664537687525368.66448\n"
"5.535.61.2.158745.576\n"
"48.2.886161..81.8518.\n"
"1451156.5528.7.....44\n"
".3313..78825.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board106999461);
board106999461 = NULL;
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 20) == 0 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 6, 17, 5) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 14, 12) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 39 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 18) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );


char* board520891817 = gamma_board(board);
assert( board520891817 != NULL );
assert( strcmp(board520891817, 
"3677486...267.5.237.8\n"
"6.817568...4.232.56.5\n"
"84873.1.5143175645..2\n"
"8175576.6833564.75.1.\n"
".72311..711.35..7..82\n"
"688614542131814..4...\n"
"21585517833..245.861.\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"664537687525368.66448\n"
"5.535.6162.158745.576\n"
"48.2.886161..81.8518.\n"
"1451156.5528.73....44\n"
".3313..78825.558..353\n"
"584.4..7.423782867..5\n") == 0);
free(board520891817);
board520891817 = NULL;
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 19, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 2, 9, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_move(board, 4, 13, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 17, 1) == 1 );


char* board458665102 = gamma_board(board);
assert( board458665102 != NULL );
assert( strcmp(board458665102, 
"3677486..526745.237.8\n"
"6.817568...4.232.56.5\n"
"84873.1.5143175645..2\n"
"8175576.6833564.75.1.\n"
".72311..711.35..7.382\n"
"688614542131814..4...\n"
"21585517833..245.861.\n"
"5468.5313.61317.2..52\n"
"88527584821714188.543\n"
"664537687525368.66448\n"
"5.535.61623158745.576\n"
"48.2.886161..81.8518.\n"
"1451156.5528373....44\n"
".3313..788258558.6353\n"
"584.46.71423782867..5\n") == 0);
free(board458665102);
board458665102 = NULL;
assert( gamma_move(board, 7, 11, 18) == 0 );
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_move(board, 8, 19, 4) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 15, 10) == 1 );
assert( gamma_golden_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 4, 17) == 0 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 19, 6) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 17, 13) == 0 );
assert( gamma_move(board, 8, 12, 19) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 3, 20, 5) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_move(board, 6, 2, 17) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 6, 17) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 19, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 6, 15, 14) == 1 );
assert( gamma_move(board, 7, 17, 6) == 1 );
assert( gamma_move(board, 8, 12, 19) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 9, 20) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 18) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_move(board, 1, 9, 20) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 9, 20) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 18, 2) == 1 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 19, 0) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_golden_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 4, 17, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 9, 18) == 0 );


gamma_delete(board);

    return 0;
}
