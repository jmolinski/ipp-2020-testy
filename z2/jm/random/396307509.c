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
uuid: 396307509
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(22, 12, 8, 40);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 21) == 0 );
assert( gamma_move(board, 1, 19, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 5, 16, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 17, 0) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 15, 10) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 11, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 17, 2) == 1 );
assert( gamma_move(board, 8, 16, 0) == 1 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 20, 6) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 240 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 1, 20, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_free_fields(board, 2) == 234 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 3, 17, 7) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 21, 9) == 1 );
assert( gamma_move(board, 8, 20, 10) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_free_fields(board, 6) == 222 );
assert( gamma_move(board, 7, 19, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 18, 8) == 1 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_free_fields(board, 8) == 211 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_golden_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 17, 2) == 0 );
assert( gamma_move(board, 3, 19, 2) == 1 );
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 5, 18, 5) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_free_fields(board, 6) == 206 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 1, 21) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 14, 5) == 1 );
assert( gamma_move(board, 1, 17, 10) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_free_fields(board, 6) == 195 );
assert( gamma_move(board, 7, 18, 3) == 1 );
assert( gamma_free_fields(board, 7) == 194 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 4) == 1 );
assert( gamma_move(board, 3, 20, 1) == 1 );
assert( gamma_free_fields(board, 3) == 187 );
assert( gamma_move(board, 5, 18, 4) == 1 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_move(board, 7, 15, 1) == 1 );
assert( gamma_move(board, 8, 6, 21) == 0 );
assert( gamma_move(board, 8, 21, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_free_fields(board, 8) == 182 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 18, 11) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 5, 19, 11) == 1 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_golden_move(board, 7, 4, 18) == 0 );
assert( gamma_move(board, 8, 16, 2) == 1 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 6, 7, 16) == 0 );
assert( gamma_move(board, 7, 20, 3) == 1 );
assert( gamma_free_fields(board, 7) == 172 );
assert( gamma_move(board, 8, 9, 13) == 0 );


char* board251706710 = gamma_board(board);
assert( board251706710 != NULL );
assert( strcmp(board251706710, 
"..4.45.41.61......45..\n"
"...2.2.......533.1..8.\n"
".38.585.6..6.........7\n"
"64.8.82.2..1.3..5.7...\n"
"14....64.....27..3...8\n"
"5.7.....6...........2.\n"
".6716...1....68...5...\n"
"..7...6.2.4..1.2..5...\n"
"..853....6...4....777.\n"
".8.2...833......88.3..\n"
"......4...6....7...13.\n"
".4..15.3..54.7..82..1.\n") == 0);
free(board251706710);
board251706710 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 172 );
assert( gamma_move(board, 3, 7, 19) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 19) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 16, 1) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_free_fields(board, 7) == 170 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 8, 18, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_free_fields(board, 1) == 167 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_move(board, 3, 18, 9) == 1 );
assert( gamma_golden_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_move(board, 8, 5, 17) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 164 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 17, 4) == 1 );


char* board357902541 = gamma_board(board);
assert( board357902541 != NULL );
assert( strcmp(board357902541, 
"..4.45.41.61......45..\n"
"...2.28......533.1..8.\n"
".38.585.6.16......3..7\n"
"64.8.82.2..1.3..5.7...\n"
"14....64.....27..3...8\n"
"5.7...1.6...........2.\n"
".6716...1....68...5...\n"
"..7...6.254..1.2.65...\n"
"..853....6...4....777.\n"
".8.2...833......88.3..\n"
"...5..4...6....76..13.\n"
".46.15.3..54.7..82..1.\n") == 0);
free(board357902541);
board357902541 = NULL;
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 2, 16, 9) == 1 );
assert( gamma_free_fields(board, 2) == 161 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 10, 21) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_move(board, 6, 9, 21) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 20, 8) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 19, 8) == 1 );
assert( gamma_free_fields(board, 1) == 156 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 21, 5) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 19, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );


char* board685558393 = gamma_board(board);
assert( board685558393 != NULL );
assert( strcmp(board685558393, 
"..4.45.41.61......45..\n"
"...2.28...3..533.1..8.\n"
".38.585.6.16....2.3..7\n"
"64.8.82.2..1.3..5.718.\n"
"14....642....27..3.7.8\n"
"5.7...1.6...........2.\n"
".6716...1....68...5..4\n"
"..7...6.2543.1.2.65...\n"
"..853.7..6...4....777.\n"
".8.2...833......88.3..\n"
"..558.4...6....76..13.\n"
".46.15.3.854.7..82..1.\n") == 0);
free(board685558393);
board685558393 = NULL;
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 17, 9) == 1 );


char* board170360416 = gamma_board(board);
assert( board170360416 != NULL );
assert( strcmp(board170360416, 
"..4.45641.61......45..\n"
"...2.28...3..533.1..8.\n"
".38.585.6.16....283..7\n"
"64.8.82.2..1.3..5.718.\n"
"14....642....27..3.7.8\n"
"5.7...1.6...........2.\n"
".6716...1....68...5..4\n"
"..7...6.2543.1.2.65...\n"
"..853.7..6...4....777.\n"
".8.2...833......88.3..\n"
"..558.4...6....76..13.\n"
".46.15.3.854.7..82..1.\n") == 0);
free(board170360416);
board170360416 = NULL;
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 21, 5) == 0 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_move(board, 4, 16, 10) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_free_fields(board, 6) == 146 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 145 );
assert( gamma_move(board, 3, 10, 18) == 0 );
assert( gamma_move(board, 3, 15, 0) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_free_fields(board, 5) == 143 );
assert( gamma_move(board, 6, 15, 9) == 1 );
assert( gamma_move(board, 7, 21, 10) == 1 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 6, 20, 8) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 13, 6) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );


char* board239559120 = gamma_board(board);
assert( board239559120 != NULL );
assert( strcmp(board239559120, 
"..4.45641.61......45..\n"
"...2428...3..53341..87\n"
".38.585.6.16...6283..7\n"
"6458.82.2..1.3..5.718.\n"
"14....642....27..3.7.8\n"
"5.78..1.6....8.....32.\n"
".6716..31....68...5..4\n"
"..7...6.2543.1.2.65...\n"
"..853.7..6...4....777.\n"
".8.2...833......88.3..\n"
"..558.4...624..76..13.\n"
".46.15.3.854.7.382..1.\n") == 0);
free(board239559120);
board239559120 = NULL;
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 20, 7) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_move(board, 2, 1, 19) == 0 );
assert( gamma_move(board, 3, 19, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 21, 8) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 133 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 132 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 4) == 130 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 16, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 24 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );


char* board970373878 = gamma_board(board);
assert( board970373878 != NULL );
assert( strcmp(board970373878, 
"..4.45641.61......45..\n"
"2..2428.863..53341..87\n"
".38358556.16...6283..7\n"
"6458.82.2..1.3..5.7186\n"
"14.7..642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716..31....68...53.4\n"
"..7...6.2543.1.2.65...\n"
"..853.7..6...4....777.\n"
".8.2...833..1.8.88.3..\n"
"..358.4...624..76..13.\n"
".46115238854.7.382..1.\n") == 0);
free(board970373878);
board970373878 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );


char* board547976844 = gamma_board(board);
assert( board547976844 != NULL );
assert( strcmp(board547976844, 
"..4.45641.61......45..\n"
"2..2428.863..53341..87\n"
".38358556.16...6283..7\n"
"6458.82.2..1.3..5.7186\n"
"14.7..642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716..31....68...53.4\n"
".47...6.2543.1.2.65...\n"
"..853.7..6...4....777.\n"
".8.2...833..1.8.88.3..\n"
"..358.4...624..76..13.\n"
".46115238854.7.382..1.\n") == 0);
free(board547976844);
board547976844 = NULL;
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 18) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 1, 19, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 6, 15, 2) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 8, 15, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 24 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 117 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 2, 15, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 19) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_free_fields(board, 5) == 112 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );


char* board953126420 = gamma_board(board);
assert( board953126420 != NULL );
assert( strcmp(board953126420, 
"..4.45641.61.1....45..\n"
"2..2428.863..53341..87\n"
".38358556.16...6283..7\n"
"6458.82.2..1.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716.231...568...53.4\n"
".47...672543.1.2.65...\n"
"..853.7..6...4.2..777.\n"
".872...833..1.8688.3..\n"
"..358.4.2.624..76..13.\n"
".46115238854.7.382.11.\n") == 0);
free(board953126420);
board953126420 = NULL;
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 6, 18, 2) == 1 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 7, 20, 6) == 0 );
assert( gamma_move(board, 8, 12, 11) == 1 );


char* board311446180 = gamma_board(board);
assert( board311446180 != NULL );
assert( strcmp(board311446180, 
"..4445641.6181....45..\n"
"2.72428.863..53341..87\n"
".38358556.16...6283..7\n"
"6458.82.2.51.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65...\n"
"..853.7..6...4.2..777.\n"
".872...833..1.868863..\n"
".2358.4.2.624..76..13.\n"
".46115238854.7.382.11.\n") == 0);
free(board311446180);
board311446180 = NULL;
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );


char* board293656211 = gamma_board(board);
assert( board293656211 != NULL );
assert( strcmp(board293656211, 
"..4445641.6181....45..\n"
"2.72528.863..53341..87\n"
".38358556716...6283..7\n"
"6458.82.2851.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65...\n"
".7853.71.6...4.2..777.\n"
".877...833..1.868863..\n"
".2358.4.2.624..76..13.\n"
".46115238854.7.382.11.\n") == 0);
free(board293656211);
board293656211 = NULL;
assert( gamma_move(board, 7, 8, 12) == 0 );


char* board451403035 = gamma_board(board);
assert( board451403035 != NULL );
assert( strcmp(board451403035, 
"..4445641.6181....45..\n"
"2.72528.863..53341..87\n"
".38358556716...6283..7\n"
"6458.82.2851.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5.78..1.6....8.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65...\n"
".7853.71.6...4.2..777.\n"
".877...833..1.868863..\n"
".2358.4.2.624..76..13.\n"
".46115238854.7.382.11.\n") == 0);
free(board451403035);
board451403035 = NULL;
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 11, 16) == 0 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );


char* board337928209 = gamma_board(board);
assert( board337928209 != NULL );
assert( strcmp(board337928209, 
"..4445641.6181....45..\n"
"2.72528.863..53341..87\n"
".38358556716...6283..7\n"
"6458.82.2851.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5278..1.6....8.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65...\n"
".7853.71.6...4.2..777.\n"
".877...833..1.868863..\n"
".2358.4.2.624..76..13.\n"
".46115238854.7.382.11.\n") == 0);
free(board337928209);
board337928209 = NULL;
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 21, 4) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 21, 0) == 1 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 4, 3, 2) == 0 );


char* board563574532 = gamma_board(board);
assert( board563574532 != NULL );
assert( strcmp(board563574532, 
"..4445641.6181....45..\n"
"2.72528.863..53341..87\n"
".383585567161..6283..7\n"
"6458.82.2851.3..5.7186\n"
"14.7.5642....27.43.788\n"
"5278..176....8.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65..6\n"
".7853.71.68..4.2..777.\n"
".877...833..1.868863..\n"
".2358.4.2.624..76..13.\n"
".46115238854.7.382.118\n") == 0);
free(board563574532);
board563574532 = NULL;
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 7, 3, 16) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_move(board, 1, 18, 0) == 1 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 15, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 22 );
assert( gamma_free_fields(board, 7) == 89 );
assert( gamma_move(board, 8, 1, 18) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 1, 21) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_golden_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 3, 21) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 6, 21, 0) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );


char* board947222344 = gamma_board(board);
assert( board947222344 != NULL );
assert( strcmp(board947222344, 
"4.4445641.6181.4..45..\n"
"2.72528.863..53341..87\n"
".383585567161..6283..7\n"
"6458.82.2851.3.15.7186\n"
"14.7.5642....27.43.788\n"
"5278..176...58.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2.65..6\n"
".7853.71.688.4.2..777.\n"
".8775..833..1.868863..\n"
".2358.4.2.624..76..13.\n"
"846115238854.7.3821118\n") == 0);
free(board947222344);
board947222344 = NULL;
assert( gamma_move(board, 1, 21, 11) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 16, 4) == 1 );
assert( gamma_move(board, 4, 3, 21) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );


char* board720513279 = gamma_board(board);
assert( board720513279 != NULL );
assert( strcmp(board720513279, 
"4.4445641.6181.4..45.1\n"
"2.72528.8635.53341..87\n"
".383585567161..6283..7\n"
"6458.82.2851.3.15.7186\n"
"14.7.5642....27.43.788\n"
"5278..176...58.....32.\n"
".6716.231.4.568...53.4\n"
".47...672543.1.2365..6\n"
".7853.71.688.4.2..777.\n"
".8775..833..1.868863..\n"
".2358.4.2.624..76..13.\n"
"846115238854.7.3821118\n") == 0);
free(board720513279);
board720513279 = NULL;
assert( gamma_move(board, 8, 2, 20) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 18, 1) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 15, 7) == 1 );
assert( gamma_move(board, 8, 15, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 18, 9) == 0 );
assert( gamma_free_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 18, 7) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 17, 3) == 1 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 20, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 1, 20, 11) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 20, 11) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 5, 20) == 0 );
assert( gamma_move(board, 6, 15, 7) == 0 );
assert( gamma_move(board, 7, 18, 10) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 20, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 17, 8) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 64 );


char* board262135313 = gamma_board(board);
assert( board262135313 != NULL );
assert( strcmp(board262135313, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417.87\n"
".383585567161..6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278..176...582..5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"17853.71.688.432.8777.\n"
".87757.833..1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board262135313);
board262135313 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 19, 10) == 1 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 11, 16) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );


char* board474913587 = gamma_board(board);
assert( board474913587 != NULL );
assert( strcmp(board474913587, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".383585567161..6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278..176...582..5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"17853.71.688.432.8777.\n"
".87757.8331.1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board474913587);
board474913587 = NULL;
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 12, 3) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_golden_move(board, 8, 8, 15) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 4, 19) == 0 );
assert( gamma_move(board, 1, 20, 8) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board622719553 = gamma_board(board);
assert( board622719553 != NULL );
assert( strcmp(board622719553, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".383585567161..6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763..582..5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"17853.71.6888432.8777.\n"
".87757.8331.1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board622719553);
board622719553 = NULL;
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 7, 2, 21) == 0 );
assert( gamma_move(board, 8, 1, 17) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 1 );


char* board443874610 = gamma_board(board);
assert( board443874610 != NULL );
assert( strcmp(board443874610, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".3835855671615.6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763..582..5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"12853.71.6888432.8777.\n"
".87757.8331.1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board443874610);
board443874610 = NULL;
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 20, 7) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board889088116 = gamma_board(board);
assert( board889088116 != NULL );
assert( strcmp(board889088116, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".3835855671615.6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763..582..5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"12853.71.6888432.8777.\n"
".87757.8331.1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board889088116);
board889088116 = NULL;
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 3, 15, 6) == 1 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 21, 11) == 0 );


char* board795016282 = gamma_board(board);
assert( board795016282 != NULL );
assert( strcmp(board795016282, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".3835855671615.6283..7\n"
"6458.82.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763..5823.5.32.\n"
".6716.231445568...53.4\n"
".47.8.67254371.2365..6\n"
"12853.71.6888432.8777.\n"
".87757.8331.1.868863..\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board795016282);
board795016282 = NULL;
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 8, 1, 21) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 17) == 0 );
assert( gamma_busy_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 35 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 2, 20, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 20, 5) == 1 );
assert( gamma_golden_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board455538444 = gamma_board(board);
assert( board455538444 != NULL );
assert( strcmp(board455538444, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".3835855671615.6283..7\n"
"6458182.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763..5823.5.32.\n"
".6716.231445568...5344\n"
".47.8.67254371.2365..6\n"
"12853.71.6888432.8777.\n"
".87757.8331.1.8688632.\n"
".2358.4.2.624..76.713.\n"
"846115238854.743821118\n") == 0);
free(board455538444);
board455538444 = NULL;
assert( gamma_move(board, 7, 6, 18) == 0 );
assert( gamma_move(board, 8, 21, 9) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 9, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 11, 6) == 1 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 21, 11) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 17, 2) == 0 );
assert( gamma_move(board, 6, 11, 17) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 21, 7) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 19, 9) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 17, 8) == 0 );
assert( gamma_move(board, 1, 20, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 1, 21) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_move(board, 7, 15, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board101989099 = gamma_board(board);
assert( board101989099 != NULL );
assert( strcmp(board101989099, 
"4.4445641.6181.4..4511\n"
"2.7252828635.533417687\n"
".3835855671615.62837.7\n"
"6458182.2851.3.1587186\n"
"14.7.5642..2.278432788\n"
"5278.61763.75823.5.32.\n"
".6716.231445568...5344\n"
"447.8667254371.2365..6\n"
"12853.71.6888432.8777.\n"
".87757.8331.1.8688632.\n"
".2358.4.2.624.376.713.\n"
"846115238854.743821118\n") == 0);
free(board101989099);
board101989099 = NULL;
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 21, 7) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 9, 20) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 19) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 17, 1) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 18, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 11, 14) == 0 );
assert( gamma_golden_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 1, 15, 5) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 17, 5) == 1 );
assert( gamma_move(board, 2, 20, 9) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 20, 11) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 11, 17) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 19, 5) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );


gamma_delete(board);

    return 0;
}
