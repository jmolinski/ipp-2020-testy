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
uuid: 581122466
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 22, 7, 44);
assert( board != NULL );




char* board544323315 = gamma_board(board);
assert( board544323315 != NULL );
assert( strcmp(board544323315, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board544323315);
board544323315 = NULL;
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 2) == 329 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 325 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 14, 2) == 1 );
assert( gamma_move(board, 7, 8, 20) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 7, 14) == 1 );
assert( gamma_move(board, 6, 5, 21) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 7, 8, 19) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 8, 20) == 0 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 17, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 7, 12, 19) == 1 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );


char* board690113461 = gamma_board(board);
assert( board690113461 != NULL );
assert( strcmp(board690113461, 
".....6.........\n"
"........7......\n"
"........7...7..\n"
"...............\n"
"...............\n"
"...............\n"
"....3.4........\n"
"......364......\n"
"...............\n"
"...............\n"
"...42.....12...\n"
"...............\n"
"1..............\n"
"...............\n"
"...5....5......\n"
".......2.......\n"
".....52........\n"
"........5......\n"
".......4.......\n"
"..5...7.......6\n"
"......5....7...\n"
".........3.....\n") == 0);
free(board690113461);
board690113461 = NULL;
assert( gamma_move(board, 6, 12, 14) == 1 );
assert( gamma_move(board, 7, 17, 4) == 0 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 1, 2, 17) == 1 );
assert( gamma_free_fields(board, 1) == 299 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_free_fields(board, 4) == 295 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 20) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 11, 21) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 14, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 7) == 286 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 281 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_move(board, 7, 13, 14) == 1 );
assert( gamma_free_fields(board, 7) == 280 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 2, 19) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 0, 15) == 1 );
assert( gamma_move(board, 5, 2, 20) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 11, 20) == 1 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_free_fields(board, 7) == 271 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 14, 20) == 1 );
assert( gamma_free_fields(board, 1) == 270 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 5, 3, 15) == 1 );
assert( gamma_move(board, 6, 10, 19) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 6, 11) == 1 );


char* board272875530 = gamma_board(board);
assert( board272875530 != NULL );
assert( strcmp(board272875530, 
".....6.....3...\n"
"..5..2..7..6..1\n"
"..2.....7.6.7..\n"
"...............\n"
"..1......4.....\n"
"...............\n"
"4..53.43......6\n"
"5.....364...67.\n"
"......3........\n"
".4....4....2...\n"
"...42.2...12...\n"
"5....2...2...5.\n"
"1..............\n"
"........2......\n"
"...5....5......\n"
".......2....7..\n"
".....52....5.1.\n"
".4...6.25......\n"
"3.....34.....77\n"
"..54..7.......6\n"
"..114.5..7.7..4\n"
".........3...1.\n") == 0);
free(board272875530);
board272875530 = NULL;
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 3, 6, 21) == 1 );
assert( gamma_move(board, 4, 6, 14) == 0 );


char* board296566962 = gamma_board(board);
assert( board296566962 != NULL );
assert( strcmp(board296566962, 
".....63....3...\n"
"..5..2..7..6..1\n"
"..2.....7.6.7..\n"
"...............\n"
"..1......4.....\n"
"...............\n"
"4..53.43......6\n"
"5.....364...67.\n"
"......3........\n"
".4....4....2...\n"
"...42.2...12...\n"
"5....2...2...5.\n"
"1..............\n"
"........2......\n"
"...5....5......\n"
".......2....7..\n"
".....52....5.1.\n"
".4...6.25......\n"
"3.....34.....77\n"
"..54..7.......6\n"
"..114.5..7.7..4\n"
".........3...1.\n") == 0);
free(board296566962);
board296566962 = NULL;
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_free_fields(board, 1) == 255 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 2, 16) == 1 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );


char* board509133026 = gamma_board(board);
assert( board509133026 != NULL );
assert( strcmp(board509133026, 
".....63....3...\n"
"..5..2..7..6..1\n"
"..2.....7.6.7..\n"
"...............\n"
"..1......4.....\n"
"..4............\n"
"4..53.431.....6\n"
"5.....364...67.\n"
"......3........\n"
".4..6.4....22..\n"
"...42.2...12...\n"
"5....2..62...5.\n"
"1..............\n"
"........22.....\n"
"...51...5......\n"
".......2....7..\n"
".....52....5.1.\n"
"54...6.25......\n"
"3.....34.5...77\n"
"..54..7.6.....6\n"
".311475..7.7..4\n"
".........3...1.\n") == 0);
free(board509133026);
board509133026 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 7, 19) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 10, 18) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_free_fields(board, 3) == 240 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );


char* board304867928 = gamma_board(board);
assert( board304867928 != NULL );
assert( strcmp(board304867928, 
".....63....3...\n"
"..5..2..7..6..1\n"
"..2....47.6.7..\n"
"..........1....\n"
"..1......4.....\n"
"..4............\n"
"4..53.431.....6\n"
"5.....364...67.\n"
"......3........\n"
".4..6.4....22..\n"
"...42.2...12...\n"
"5....2..62...5.\n"
"1..............\n"
".2.6....22.....\n"
"6..51...5......\n"
".......25..47..\n"
".....52....5.1.\n"
"54...6.25......\n"
"3.....34.5...77\n"
"1.54..7.6.....6\n"
".311475..7.7..4\n"
"......4..3...1.\n") == 0);
free(board304867928);
board304867928 = NULL;
assert( gamma_move(board, 7, 19, 4) == 0 );
assert( gamma_move(board, 7, 1, 14) == 1 );
assert( gamma_move(board, 1, 20, 0) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_free_fields(board, 4) == 235 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_free_fields(board, 3) == 233 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 14, 11) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_golden_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 15, 10) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );


char* board292817942 = gamma_board(board);
assert( board292817942 != NULL );
assert( strcmp(board292817942, 
".....63....3...\n"
"..5..2..7..6..1\n"
"..2....47.6.7..\n"
"..........1....\n"
"..1......4.....\n"
"..4............\n"
"4..53.431.....6\n"
"57....364...67.\n"
"..33..3..3..4..\n"
"24..6.4....22..\n"
"..642.2...12..5\n"
"5....2..62...5.\n"
"1..4...........\n"
".2.6....22...2.\n"
"6..51...5......\n"
".......25..47..\n"
".....52....5.1.\n"
"54...6.25......\n"
"3.....34.5.3.77\n"
"1.54..7.6.....6\n"
".311475..7.7..4\n"
"......4.53...1.\n") == 0);
free(board292817942);
board292817942 = NULL;
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 20, 0) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_move(board, 4, 6, 19) == 1 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 20, 4) == 0 );
assert( gamma_move(board, 3, 14, 20) == 0 );
assert( gamma_move(board, 4, 20, 1) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_move(board, 6, 3, 20) == 1 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 1, 2, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 9, 21) == 1 );
assert( gamma_move(board, 4, 7, 16) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 10, 14) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 5, 17) == 1 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_move(board, 6, 13, 11) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 9, 15) == 1 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 3, 2, 20) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 16) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 7, 13, 14) == 0 );
assert( gamma_move(board, 7, 12, 18) == 1 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_free_fields(board, 3) == 184 );
assert( gamma_move(board, 4, 14, 1) == 0 );


char* board530075880 = gamma_board(board);
assert( board530075880 != NULL );
assert( strcmp(board530075880, 
".....63..4.3...\n"
"..56.2..7..6..1\n"
"..2...447.6.7..\n"
"..........1.7..\n"
"5.1..6...4.....\n"
"..4..1.4.......\n"
"4..53.4315....6\n"
"57..4.36425.67.\n"
".333..31.3..4..\n"
"24..6.4..1.22..\n"
"5.642.27.312665\n"
"5...225.62...5.\n"
"1..4..17.......\n"
".2.6....22...2.\n"
"6..516..533....\n"
".......25..47..\n"
"..15.52.5..5.14\n"
"54...6.25.1....\n"
"3..42.34.513677\n"
"1.546.7.6..3..6\n"
".3114754.727.44\n"
"......4.53...12\n") == 0);
free(board530075880);
board530075880 = NULL;
assert( gamma_move(board, 5, 1, 19) == 1 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 6, 14, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 11, 16) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 14, 17) == 1 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 9, 21) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 21, 8) == 0 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 15, 10) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 10, 19) == 0 );


char* board521190797 = gamma_board(board);
assert( board521190797 != NULL );
assert( strcmp(board521190797, 
".....63..4.3...\n"
"..56.2..7..6..1\n"
".52...447.6.7..\n"
"..........1.7..\n"
"5.1..6.1.4....4\n"
"..4..1.4...7...\n"
"4..53.4315....6\n"
"57..4.36425.672\n"
".333..31.3..4..\n"
"24.36.4..1.22..\n"
"5.642.27.312665\n"
"5...225.62...5.\n"
"1..4..17.......\n"
".2.6....22...2.\n"
"6..516..533....\n"
".......25..47..\n"
"..15.52.5..5.14\n"
"54...6625.1..6.\n"
"3..42.34.513677\n"
"1.546.7.6..3..6\n"
"13114754.727.44\n"
"......4.53...12\n") == 0);
free(board521190797);
board521190797 = NULL;
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 20, 13) == 0 );
assert( gamma_move(board, 6, 18, 1) == 0 );
assert( gamma_free_fields(board, 6) == 174 );
assert( gamma_move(board, 7, 19, 0) == 0 );
assert( gamma_move(board, 7, 8, 16) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_free_fields(board, 1) == 172 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_free_fields(board, 3) == 172 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 5, 15) == 1 );
assert( gamma_free_fields(board, 6) == 170 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 15) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 167 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 6, 9, 20) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 7, 8, 13) == 1 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 20 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 158 );


char* board721262749 = gamma_board(board);
assert( board721262749 != NULL );
assert( strcmp(board721262749, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".52...447.6.7..\n"
"..........1.7..\n"
"5.1..6.1.4....4\n"
"..4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..4..\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.6...122...2.\n"
"6..516..533.6..\n"
"3......25..47..\n"
"..15.52.5..5514\n"
"54...6625.1..6.\n"
"3..42.34.513677\n"
"1.546.7.6..3416\n"
"13114754.727.44\n"
"...7..4.53...12\n") == 0);
free(board721262749);
board721262749 = NULL;
assert( gamma_move(board, 3, 21, 4) == 0 );
assert( gamma_move(board, 3, 2, 18) == 1 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_free_fields(board, 4) == 156 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 6, 18, 13) == 0 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 1, 19) == 0 );
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );


char* board457251038 = gamma_board(board);
assert( board457251038 != NULL );
assert( strcmp(board457251038, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".52...447.6.7..\n"
"..3.......1.7..\n"
"5.1.46.1.4....4\n"
"..4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..4..\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.6...122...2.\n"
"6..516..533.6..\n"
"3......25..47..\n"
"..15.52.5..5514\n"
"54...6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...7..4.53...12\n") == 0);
free(board457251038);
board457251038 = NULL;
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_free_fields(board, 3) == 154 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );


char* board634587799 = gamma_board(board);
assert( board634587799 != NULL );
assert( strcmp(board634587799, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".52...447.6.7..\n"
"..3.......1.7..\n"
"5.1.46.1.4....4\n"
"..4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..4..\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.6...122...2.\n"
"6..516..533.6..\n"
"3......25..47..\n"
"..15.52.5..5514\n"
"54...6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...7..4.53...12\n") == 0);
free(board634587799);
board634587799 = NULL;
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 6, 3, 19) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_free_fields(board, 7) == 153 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 5, 0, 16) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_free_fields(board, 1) == 150 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );


char* board615759082 = gamma_board(board);
assert( board615759082 != NULL );
assert( strcmp(board615759082, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3.......1.7..\n"
"5.1.46.1.4.4..4\n"
"5.4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.63..122...2.\n"
"6..516..533.6..\n"
"3......25..47..\n"
".715.52.5..5514\n"
"54...6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...7..4.53...12\n") == 0);
free(board615759082);
board615759082 = NULL;
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 7, 14, 18) == 1 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 21, 14) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 21, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


char* board846759864 = gamma_board(board);
assert( board846759864 != NULL );
assert( strcmp(board846759864, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3.......1.7.7\n"
"5.1.46.1.4.4..4\n"
"5.4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.63..122...2.\n"
"6..516..533.6..\n"
"3......25..47..\n"
".715.52.5..5514\n"
"54...6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...7..4.53...12\n") == 0);
free(board846759864);
board846759864 = NULL;
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 6, 14, 20) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 20, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_free_fields(board, 4) == 145 );


char* board271191959 = gamma_board(board);
assert( board271191959 != NULL );
assert( strcmp(board271191959, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3.......1.7.7\n"
"5.1.46.1.4.4..4\n"
"5.4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.63..122...2.\n"
"6..516..533.6..\n"
"3......25..47.5\n"
".715.52.5..5514\n"
"54...6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...73.4.53...12\n") == 0);
free(board271191959);
board271191959 = NULL;
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 21, 10) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 144 );


char* board213508663 = gamma_board(board);
assert( board213508663 != NULL );
assert( strcmp(board213508663, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3.......1.7.7\n"
"5.1.46.1.4.4..4\n"
"5.4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.63..122...2.\n"
"6..516..533.6..\n"
"3......25..47.5\n"
".715.52.5..5514\n"
"547..6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...73.4.53...12\n") == 0);
free(board213508663);
board213508663 = NULL;
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );


char* board485480416 = gamma_board(board);
assert( board485480416 != NULL );
assert( strcmp(board485480416, 
".....63..4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3.......1.7.7\n"
"5.1.46.1.4.4..4\n"
"5.4..1.47..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.4..1222..\n"
"5.642.27.312665\n"
"5...225.627..5.\n"
"1364..17.....2.\n"
".2.63..122...2.\n"
"6..516..533.6..\n"
"3......25..4735\n"
".715.52.5..5514\n"
"547..6625.1..66\n"
"3..42.34.513677\n"
"1.546.776..3416\n"
"13114754.727.44\n"
"...73.4.53...12\n") == 0);
free(board485480416);
board485480416 = NULL;
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 19, 11) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 0, 21) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 21, 10) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 17, 10) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 7, 21) == 1 );
assert( gamma_move(board, 3, 20, 13) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 18, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 7, 18, 8) == 0 );
assert( gamma_move(board, 7, 8, 19) == 0 );
assert( gamma_free_fields(board, 7) == 138 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 5, 13, 18) == 1 );
assert( gamma_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 135 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 134 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 132 );
assert( gamma_move(board, 6, 0, 21) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 17, 13) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 5, 18) == 1 );
assert( gamma_move(board, 7, 21, 1) == 0 );
assert( gamma_free_fields(board, 7) == 129 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 19, 14) == 0 );
assert( gamma_free_fields(board, 4) == 128 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 7, 19, 14) == 0 );
assert( gamma_move(board, 1, 21, 14) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 6, 16) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 3, 1, 17) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 2, 5, 21) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 20, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 21, 13) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 10, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 18, 3) == 0 );
assert( gamma_move(board, 7, 7, 17) == 0 );


char* board279323860 = gamma_board(board);
assert( board279323860 != NULL );
assert( strcmp(board279323860, 
"3....632.4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3..6....1.757\n"
"531.46.1.434..4\n"
"5.4..1247..7...\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.43.12226.\n"
"5.6424274312665\n"
"5...225.627..5.\n"
"1364.317.4...2.\n"
".2.63..122...2.\n"
"6..516.4533.6..\n"
"3..3...25..4735\n"
".715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727544\n"
"6..7324453.3.12\n") == 0);
free(board279323860);
board279323860 = NULL;
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 21, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_free_fields(board, 3) == 115 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 13, 16) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 113 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );


char* board904284393 = gamma_board(board);
assert( board904284393 != NULL );
assert( strcmp(board904284393, 
"3....632.4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3..6....1.757\n"
"531.46.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..3173..43.\n"
"24.36.43.12226.\n"
"5.6424274312665\n"
"5...225.627..5.\n"
"1364.317.4...2.\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3.43...25..4735\n"
".715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727544\n"
"6..732445343.12\n") == 0);
free(board904284393);
board904284393 = NULL;
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 5, 19, 11) == 0 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_free_fields(board, 6) == 113 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 7, 14, 9) == 1 );
assert( gamma_free_fields(board, 7) == 112 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 21, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 7, 18) == 1 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_golden_move(board, 4, 6, 13) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_move(board, 6, 21, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 20) == 0 );
assert( gamma_move(board, 1, 21, 14) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 21, 10) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 18, 8) == 0 );


char* board832533246 = gamma_board(board);
assert( board832533246 != NULL );
assert( strcmp(board832533246, 
"3....632.4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3..6.2..1.757\n"
"531.46.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..41731.43.\n"
"24.36.43.12226.\n"
"5.6424274312665\n"
"5...225.627..5.\n"
"1364.317.4...27\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3343...25..4735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727544\n"
"6..732445343.12\n") == 0);
free(board832533246);
board832533246 = NULL;
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 7, 3, 17) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 34 );


char* board159624498 = gamma_board(board);
assert( board159624498 != NULL );
assert( strcmp(board159624498, 
"3....632.4.3...\n"
"..56.2..76.6..1\n"
".526..447.6.7..\n"
"..3..6.2..1.757\n"
"531746.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..41731.43.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5...225.627..5.\n"
"1364.317.4...27\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3343...25..4735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727544\n"
"6..732445343.12\n") == 0);
free(board159624498);
board159624498 = NULL;
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 20) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 2, 10, 21) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 0, 18) == 1 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );


char* board271309535 = gamma_board(board);
assert( board271309535 != NULL );
assert( strcmp(board271309535, 
"3....632.423...\n"
"..5672..76.6..1\n"
".526..447.6.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..41731.43.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5...225.627..5.\n"
"1364.317.4...27\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3343...25..4735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board271309535);
board271309535 = NULL;
assert( gamma_move(board, 3, 10, 20) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_free_fields(board, 6) == 100 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 21, 13) == 0 );
assert( gamma_move(board, 4, 5, 21) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 13, 18) == 0 );
assert( gamma_move(board, 7, 6, 20) == 1 );


char* board415853113 = gamma_board(board);
assert( board415853113 != NULL );
assert( strcmp(board415853113, 
"3....632.423...\n"
"..56727.7636..1\n"
".526..447.6.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..41731.43.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5...225.627..5.\n"
"1364.317.4...27\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3343..425..4735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board415853113);
board415853113 = NULL;
assert( gamma_move(board, 1, 21, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 19, 13) == 0 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 20) == 0 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 6, 8, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_move(board, 6, 8, 8) == 0 );


char* board372673967 = gamma_board(board);
assert( board372673967 != NULL );
assert( strcmp(board372673967, 
"3....632.423...\n"
"..56727.7636..1\n"
".526..447.6.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434..4\n"
"5.4..1247..7.6.\n"
"42.5364315....6\n"
"57..4.36425.672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5...225.627..55\n"
"1364.317.4...27\n"
".2.63..122..12.\n"
"6..516.4533.6..\n"
"3343..425..4735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board372673967);
board372673967 = NULL;
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 20) == 1 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 4, 21, 1) == 0 );
assert( gamma_move(board, 6, 14, 8) == 1 );
assert( gamma_move(board, 7, 2, 20) == 0 );
assert( gamma_move(board, 7, 2, 15) == 1 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 5, 19) == 1 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 6, 19, 14) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 30 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 93 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 19) == 1 );
assert( gamma_free_fields(board, 4) == 92 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 7, 1, 16) == 1 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 21, 1) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 16, 10) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 21, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_busy_fields(board, 7) == 31 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 4, 21, 13) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_golden_move(board, 6, 18, 12) == 0 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_free_fields(board, 7) == 84 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 20, 7) == 0 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 16, 12) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 21, 13) == 0 );
assert( gamma_move(board, 5, 3, 21) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 12, 16) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 5, 3, 16) == 1 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_free_fields(board, 6) == 79 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );


char* board634286891 = gamma_board(board);
assert( board634286891 != NULL );
assert( strcmp(board634286891, 
"3..5.632.423...\n"
".256727.7636..1\n"
".526.344746.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434..4\n"
"5745.1247..736.\n"
"4275364315....6\n"
"575.4.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645317.4.5.27\n"
"42.631.122..126\n"
"6..516.4533.6..\n"
"3343..425.14735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board634286891);
board634286891 = NULL;
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 4, 19) == 1 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_golden_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 32 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );


char* board375001162 = gamma_board(board);
assert( board375001162 != NULL );
assert( strcmp(board375001162, 
"3..5.632.423...\n"
".256727.7636..1\n"
".5264344746.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434..4\n"
"5745.1247..736.\n"
"4275364315....6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.4533.6..\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547..6625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board375001162);
board375001162 = NULL;
assert( gamma_move(board, 6, 21, 12) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 17) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 4, 14, 20) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 11, 21) == 0 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 2, 18) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 20) == 0 );


char* board629784496 = gamma_board(board);
assert( board629784496 != NULL );
assert( strcmp(board629784496, 
"3..5.632.423...\n"
".256727.7636..1\n"
".5264344746.7..\n"
"6.3..6.2..1.757\n"
"531746.1.434.74\n"
"5745.1247..736.\n"
"4275364315....6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.4533.6.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.542.34.513677\n"
"1.546.776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board629784496);
board629784496 = NULL;
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 7, 3, 18) == 1 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 20, 13) == 0 );
assert( gamma_move(board, 6, 8, 18) == 1 );
assert( gamma_busy_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 6, 18) == 1 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_golden_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 2, 12, 20) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 7, 10, 18) == 0 );
assert( gamma_move(board, 7, 14, 16) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_move(board, 6, 11, 15) == 1 );
assert( gamma_move(board, 7, 20, 7) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 38 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 21, 13) == 0 );
assert( gamma_move(board, 3, 12, 15) == 1 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 7, 7, 20) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 12, 21) == 1 );
assert( gamma_move(board, 4, 20, 13) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );


char* board391535251 = gamma_board(board);
assert( board391535251 != NULL );
assert( strcmp(board391535251, 
"3..5.632.4233..\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.37.6726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board391535251);
board391535251 = NULL;
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );


char* board314104876 = gamma_board(board);
assert( board314104876 != NULL );
assert( strcmp(board314104876, 
"3..5.632.4233..\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.37.6726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board314104876);
board314104876 = NULL;
assert( gamma_move(board, 1, 21, 4) == 0 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 3, 21, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 2, 21, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );


char* board532566352 = gamma_board(board);
assert( board532566352 != NULL );
assert( strcmp(board532566352, 
"3..5.632.4233..\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.37.6726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"561.225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board532566352);
board532566352 = NULL;
assert( gamma_move(board, 7, 15, 13) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 36 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 5, 13, 21) == 1 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 12, 15) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 3, 11, 16) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 4, 18) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 21, 14) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 19, 13) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 20, 13) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 20, 0) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 43 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 36 );


char* board511400835 = gamma_board(board);
assert( board511400835 != NULL );
assert( strcmp(board511400835, 
"3..5.632.42335.\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.3766726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5611225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776.23416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board511400835);
board511400835 = NULL;
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 18, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );


char* board365004703 = gamma_board(board);
assert( board365004703 != NULL );
assert( strcmp(board365004703, 
"3..5.632.42335.\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.3766726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5611225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776523416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board365004703);
board365004703 = NULL;
assert( gamma_move(board, 6, 19, 14) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 2, 20) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 5, 20, 13) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );


char* board175037479 = gamma_board(board);
assert( board175037479 != NULL );
assert( strcmp(board175037479, 
"3..5.632.42335.\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.3766726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"5611225.627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776523416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board175037479);
board175037479 = NULL;
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );


char* board571252689 = gamma_board(board);
assert( board571252689 != NULL );
assert( strcmp(board571252689, 
"3..5.632.42335.\n"
".256727776362.1\n"
".5264344746.7..\n"
"6.3766726.1.757\n"
"531746.1.434.74\n"
"5745.1247..7367\n"
"4275364315.63.6\n"
"57574.364256672\n"
".333..41731343.\n"
"24.36.43.12226.\n"
"556424274312665\n"
"56112257627..55\n"
"13645617.4.5.27\n"
"422631.122..126\n"
"6..516.453316.2\n"
"3343..425514735\n"
"4715.52.5565514\n"
"547.76625517.66\n"
"3.742.34.513677\n"
"1.5465776523416\n"
"13114754.727545\n"
"66.732445343.12\n") == 0);
free(board571252689);
board571252689 = NULL;
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );


gamma_delete(board);

    return 0;
}
