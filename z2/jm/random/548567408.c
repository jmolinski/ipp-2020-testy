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
uuid: 548567408
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 20, 6, 43);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_free_fields(board, 1) == 258 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 2, 19) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 19, 0) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );


char* board257708965 = gamma_board(board);
assert( board257708965 != NULL );
assert( strcmp(board257708965, 
"..2..........\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".......1.4...\n"
".............\n"
".....1...1...\n"
".............\n"
"........2....\n"
".............\n"
".............\n"
"..........1..\n"
".............\n"
".............\n"
".5...........\n"
"............3\n") == 0);
free(board257708965);
board257708965 = NULL;
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_free_fields(board, 4) == 248 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 1, 10, 15) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_free_fields(board, 1) == 244 );


char* board994203662 = gamma_board(board);
assert( board994203662 != NULL );
assert( strcmp(board994203662, 
"..2..........\n"
".............\n"
".............\n"
".............\n"
"..........1..\n"
".6...........\n"
".............\n"
".............\n"
".......1.4...\n"
".............\n"
"..4..1...1...\n"
".............\n"
"........2...1\n"
".............\n"
"........4....\n"
"..........1..\n"
".5...........\n"
".............\n"
".5..2........\n"
"............3\n") == 0);
free(board994203662);
board994203662 = NULL;
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 1, 19) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_free_fields(board, 2) == 237 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 12, 15) == 1 );


char* board958408268 = gamma_board(board);
assert( board958408268 != NULL );
assert( strcmp(board958408268, 
".22..........\n"
".............\n"
".............\n"
"4............\n"
"..........1.4\n"
"46...........\n"
".............\n"
".............\n"
".......1.4...\n"
".............\n"
"6.4..1...1...\n"
".3...........\n"
"...2....2...1\n"
"5............\n"
"........4....\n"
"..........1..\n"
".5...........\n"
".............\n"
".5..2........\n"
"..........2.3\n") == 0);
free(board958408268);
board958408268 = NULL;
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 16, 12) == 0 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_free_fields(board, 4) == 227 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_free_fields(board, 1) == 222 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 17) == 1 );
assert( gamma_move(board, 2, 11, 18) == 1 );
assert( gamma_free_fields(board, 2) == 220 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );


char* board391620366 = gamma_board(board);
assert( board391620366 != NULL );
assert( strcmp(board391620366, 
".22..........\n"
"...........2.\n"
".......2.....\n"
"4............\n"
"..........1.4\n"
"464.2........\n"
".............\n"
"..........1..\n"
".......1.4...\n"
"........5..1.\n"
"6.4..16..1...\n"
".3....3......\n"
"...2....2...1\n"
"5.......5..6.\n"
"...6....4.6..\n"
"..........1..\n"
".5...........\n"
".......55....\n"
".5..2..1.....\n"
"..........2.3\n") == 0);
free(board391620366);
board391620366 = NULL;
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 9, 18) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 205 );
assert( gamma_move(board, 1, 2, 17) == 1 );


char* board800132029 = gamma_board(board);
assert( board800132029 != NULL );
assert( strcmp(board800132029, 
".22..........\n"
".........4.2.\n"
"..1....2.....\n"
"4............\n"
"..........1.4\n"
"464.2........\n"
"..........5..\n"
"..........1..\n"
".......1.4...\n"
"........5..1.\n"
"6.4..16..1...\n"
"43....3..1.6.\n"
"...2...52.6.1\n"
"5.......5..6.\n"
"...6....4.6..\n"
"......2.2.1.4\n"
".5...........\n"
"4......55.3..\n"
".5..2.61..5..\n"
"..........2.3\n") == 0);
free(board800132029);
board800132029 = NULL;
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 6, 17) == 1 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 192 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 3, 11, 17) == 1 );
assert( gamma_move(board, 4, 3, 15) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 10, 18) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_free_fields(board, 4) == 181 );
assert( gamma_move(board, 6, 2, 16) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 17, 10) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 6, 5, 16) == 1 );
assert( gamma_move(board, 1, 19, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );


char* board931872021 = gamma_board(board);
assert( board931872021 != NULL );
assert( strcmp(board931872021, 
".22..........\n"
".........432.\n"
"..1...52...3.\n"
"4.6..6.......\n"
"...4......134\n"
"464.2.......1\n"
"..........5..\n"
".......2..1..\n"
"..4....1.4...\n"
"..2.....5..1.\n"
"6.4.416..1...\n"
"43.26.3..1.6.\n"
"...2...22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.65.\n"
".1.5.3262.114\n"
".5..1.2..6..2\n"
"4.3....55.3..\n"
".5..2461..5..\n"
"...42.....2.3\n") == 0);
free(board931872021);
board931872021 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 18) == 1 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 5, 8, 19) == 1 );
assert( gamma_move(board, 5, 9, 15) == 1 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 165 );
assert( gamma_move(board, 1, 6, 11) == 1 );


char* board932970949 = gamma_board(board);
assert( board932970949 != NULL );
assert( strcmp(board932970949, 
".22.....5....\n"
".......3.432.\n"
"..1...52...3.\n"
"4.6..6.......\n"
"...4.....5134\n"
"46422.......1\n"
".........45..\n"
".......2..1..\n"
"..4...11.4...\n"
"..2.....5..1.\n"
"6.4.416..1...\n"
"43.26.3..1.6.\n"
"...2...22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.65.\n"
".1.5.3262.114\n"
".5..1.2..6..2\n"
"463....55.3..\n"
".5..2461..5..\n"
"...42.....2.3\n") == 0);
free(board932970949);
board932970949 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 164 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_free_fields(board, 5) == 159 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 12, 16) == 1 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 157 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );


char* board257564294 = gamma_board(board);
assert( board257564294 != NULL );
assert( strcmp(board257564294, 
".22.....5....\n"
".......3.432.\n"
"..1...52...3.\n"
"4.6..6......6\n"
"...4.....5134\n"
"46422.......1\n"
".........45..\n"
".......2..1..\n"
"..4...11.4..2\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.26.3..1.6.\n"
"...2...22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.656\n"
".1.5.3262.114\n"
".5..1.2..6..2\n"
"463....5553..\n"
".5..2461.55..\n"
"...42.....2.3\n") == 0);
free(board257564294);
board257564294 = NULL;
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 5, 18) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 6, 15) == 1 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 5, 15) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board366105077 = gamma_board(board);
assert( board366105077 != NULL );
assert( strcmp(board366105077, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4.6..6......6\n"
"...4.32..5134\n"
"46422.......1\n"
".........45..\n"
".......24.1..\n"
"..4...11.41.2\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.26.3..1.6.\n"
"...2.1.22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.656\n"
".1.5.3262.114\n"
".56.1.2..6..2\n"
"463....5553..\n"
".5..2461.55..\n"
"...42.....2.3\n") == 0);
free(board366105077);
board366105077 = NULL;
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 19) == 0 );


char* board475194001 = gamma_board(board);
assert( board475194001 != NULL );
assert( strcmp(board475194001, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4.6.66......6\n"
"...4.32..5134\n"
"46422.......1\n"
".........45..\n"
".......24.1..\n"
"..4...11.41.2\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.26.3..1.6.\n"
"...2.1.22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.656\n"
".1.5.3262.114\n"
".56.1.2..6.12\n"
"463....5553..\n"
".5..2461.55..\n"
"...42.....2.3\n") == 0);
free(board475194001);
board475194001 = NULL;
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board332302530 = gamma_board(board);
assert( board332302530 != NULL );
assert( strcmp(board332302530, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4.6.66......6\n"
"...4.32..5134\n"
"46422...4...1\n"
".........45..\n"
".......24.1..\n"
"..4...11.41.2\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.26.3..1.6.\n"
"...2.1.22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.656\n"
".1.5.3262.114\n"
".56.1.2..6.12\n"
"463....5553..\n"
".5..2461.55..\n"
"...42.....2.3\n") == 0);
free(board332302530);
board332302530 = NULL;
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_golden_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 11, 11) == 1 );


char* board883046405 = gamma_board(board);
assert( board883046405 != NULL );
assert( strcmp(board883046405, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4.6.66......6\n"
"...4.32..5134\n"
"46422...4...1\n"
".........45..\n"
".......24.1..\n"
"..4...11.4162\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.2643..1.6.\n"
"...2.1.22.6.1\n"
"5.2..6..5..66\n"
"4..63...4.656\n"
"51.5.3262.114\n"
".56.1.2..6.12\n"
"463....5553..\n"
".5..2461.55..\n"
"...426....2.3\n") == 0);
free(board883046405);
board883046405 = NULL;
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board323149389 = gamma_board(board);
assert( board323149389 != NULL );
assert( strcmp(board323149389, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4.6.66......6\n"
"...4.32..5134\n"
"46422...4...1\n"
".........45..\n"
".......24.1..\n"
"..4...11.4162\n"
"..2.2...5..1.\n"
"6.4.416..12..\n"
"43.2643..1.6.\n"
"...2.1.22.6.1\n"
"5.2..6..5.166\n"
"4..63...4.656\n"
"51.5.3262.114\n"
".56.1.2..6.12\n"
"463....5553..\n"
".5..2461.55..\n"
"...426....2.3\n") == 0);
free(board323149389);
board323149389 = NULL;
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 3, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_free_fields(board, 1) == 136 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_free_fields(board, 6) == 134 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_golden_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_free_fields(board, 5) == 133 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 2, 15) == 1 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 17, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_free_fields(board, 1) == 124 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 9, 18) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_golden_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 4, 6, 16) == 1 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_free_fields(board, 6) == 112 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 6, 17) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 10, 18) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_move(board, 1, 17, 6) == 0 );


char* board762831536 = gamma_board(board);
assert( board762831536 != NULL );
assert( strcmp(board762831536, 
".22.....5....\n"
".....6.3.432.\n"
"..1...52...3.\n"
"4461664.....6\n"
"..64.322.5134\n"
"46422...4...1\n"
".1......5451.\n"
"5.3....2461.6\n"
"6.4...11.4162\n"
"6.242...5.512\n"
"6.46416.612..\n"
"43.2643.3146.\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4..632..4.656\n"
"51.5.32621114\n"
".56.1123.6.12\n"
"463....5553..\n"
".5..2461355.5\n"
"51.4265.362.3\n") == 0);
free(board762831536);
board762831536 = NULL;
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_free_fields(board, 2) == 103 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_golden_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );


char* board714122058 = gamma_board(board);
assert( board714122058 != NULL );
assert( strcmp(board714122058, 
".22.....5....\n"
".....6.3.432.\n"
"..1.4.52...3.\n"
"4461664.....6\n"
"..64.322.5134\n"
"46422...4...1\n"
".1......5451.\n"
"5.3....2461.6\n"
"6.4..211.4162\n"
"6.242...5.512\n"
"6.46416.612..\n"
"43.2643.3146.\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4..632..4.656\n"
"51.5.32621114\n"
".56.1123.6.12\n"
"463....5553..\n"
".5..2461355.5\n"
"51.4265.362.3\n") == 0);
free(board714122058);
board714122058 = NULL;
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 11, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 102 );


char* board268082934 = gamma_board(board);
assert( board268082934 != NULL );
assert( strcmp(board268082934, 
".22.....5..3.\n"
".....6.3.432.\n"
"..1.4.52...3.\n"
"4461664.....6\n"
"..64.322.5134\n"
"46422...4...1\n"
".1......5451.\n"
"5.3....2461.6\n"
"6.4..211.4162\n"
"6.242...5.512\n"
"6.46416.612..\n"
"43.2643.3146.\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4..632..4.656\n"
"51.5.32621114\n"
".56.1123.6.12\n"
"463....5553..\n"
".5..2461355.5\n"
"51.4265.362.3\n") == 0);
free(board268082934);
board268082934 = NULL;
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_move(board, 6, 18, 0) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 19, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 11, 16) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_golden_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_move(board, 5, 6, 19) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 16) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );


char* board372818576 = gamma_board(board);
assert( board372818576 != NULL );
assert( strcmp(board372818576, 
".22...5.5..3.\n"
".....6.3.432.\n"
"..1.4.52.4.3.\n"
"44616645...16\n"
"..64.322.5134\n"
"46422...4...1\n"
".1.....454515\n"
"5.3..6.2461.6\n"
"6.4..211.4162\n"
"6.242...5.512\n"
"6.46416.612..\n"
"43.2643.3146.\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4..632224.656\n"
"51.5132621114\n"
".56.1123.6.12\n"
"463....5553..\n"
".5..246135535\n"
"51.42655362.3\n") == 0);
free(board372818576);
board372818576 = NULL;
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 19) == 1 );
assert( gamma_golden_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_golden_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );


char* board502687249 = gamma_board(board);
assert( board502687249 != NULL );
assert( strcmp(board502687249, 
".22...565..3.\n"
".....6.3.432.\n"
"..1.4.52.4.3.\n"
"44616645...16\n"
"..64.322.5134\n"
"46422...4...1\n"
".1.....454515\n"
"563..6.2461.6\n"
"6.4..21124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.3146.\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4..632224.656\n"
"51.5132621114\n"
".56.1123.6612\n"
"463....5553..\n"
"15..246135535\n"
"51.42655362.3\n") == 0);
free(board502687249);
board502687249 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 12, 16) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 38 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 12, 18) == 1 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 17) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 0, 18) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );


char* board998563668 = gamma_board(board);
assert( board998563668 != NULL );
assert( strcmp(board998563668, 
".22...565..3.\n"
"6....6.3.4321\n"
"..124.52.4.3.\n"
"44616645...16\n"
"..64.322.5134\n"
"46422...4...1\n"
".1.....454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
".5621123.6612\n"
"466....5553..\n"
"14..246135535\n"
"51.4265536243\n") == 0);
free(board998563668);
board998563668 = NULL;
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 6, 2, 17) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 18) == 1 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 2, 1, 19) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );


char* board342602857 = gamma_board(board);
assert( board342602857 != NULL );
assert( strcmp(board342602857, 
".22...565..3.\n"
"6..1.6.3.4321\n"
"..124.52.4.3.\n"
"44616645...16\n"
"..64.322.5134\n"
"46422...44..1\n"
".1.....454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
"..5221422.6.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
".5621123.6612\n"
"466....5553..\n"
"14..246135535\n"
"51.4265536243\n") == 0);
free(board342602857);
board342602857 = NULL;
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 5, 10, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );


char* board830630878 = gamma_board(board);
assert( board830630878 != NULL );
assert( strcmp(board830630878, 
".22...565..3.\n"
"6..1.6.3.4321\n"
"..124.52.4.3.\n"
"44616645..516\n"
"..64.322.5134\n"
"46422...44..1\n"
".1...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
".25221422.6.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466....5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board830630878);
board830630878 = NULL;
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board321563310 = gamma_board(board);
assert( board321563310 != NULL );
assert( strcmp(board321563310, 
".22...565..3.\n"
"6..1.6.3.4321\n"
"..124.52.4.3.\n"
"44616645..516\n"
"..64.322.5134\n"
"46422...44..1\n"
".1...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
".2522142266.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466....5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board321563310);
board321563310 = NULL;
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 19) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 19, 12) == 0 );
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 10, 17) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );


char* board896775058 = gamma_board(board);
assert( board896775058 != NULL );
assert( strcmp(board896775058, 
".22...5655.3.\n"
"6..1.6.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"..64.322.5134\n"
"46422...44..1\n"
".1...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
".2522142266.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466....5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board896775058);
board896775058 = NULL;
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 4, 18) == 1 );
assert( gamma_golden_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board863399843 = gamma_board(board);
assert( board863399843 != NULL );
assert( strcmp(board863399843, 
".22...5655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"..64.322.5134\n"
"46422...44..1\n"
".1...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
".2522142266.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466....5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board863399843);
board863399843 = NULL;
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );


char* board807170259 = gamma_board(board);
assert( board807170259 != NULL );
assert( strcmp(board807170259, 
".22...5655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"..64.322.5134\n"
"46422...44..1\n"
".1...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"43.2643.31462\n"
".2522142266.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466....5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board807170259);
board807170259 = NULL;
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 5, 19) == 1 );
assert( gamma_busy_fields(board, 5) == 32 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 1, 15) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 3, 7, 19) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_golden_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );


char* board763076183 = gamma_board(board);
assert( board763076183 != NULL );
assert( strcmp(board763076183, 
".22..55655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"1664.322.5134\n"
"46422...44..1\n"
"21...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"4322643.31462\n"
".2522142266.5\n"
"5.2..66.54166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466..5.5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board763076183);
board763076183 = NULL;
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 8, 15) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );


char* board924829212 = gamma_board(board);
assert( board924829212 != NULL );
assert( strcmp(board924829212, 
".22..55655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"1664.32265134\n"
"46422...44..1\n"
"21...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"4322643.31462\n"
".2522142266.5\n"
"5.2..66354166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466..5.5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board924829212);
board924829212 = NULL;
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );


char* board866857309 = gamma_board(board);
assert( board866857309 != NULL );
assert( strcmp(board866857309, 
".22..55655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"1664.32265134\n"
"46422...44..1\n"
"21...1.454515\n"
"5635.6.2461.6\n"
"6.4.221124162\n"
"6.242...5.512\n"
"6.46416.612.3\n"
"4322643.31462\n"
".2522142266.5\n"
"5.2..66354166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466..5.5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board866857309);
board866857309 = NULL;
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );


char* board735962001 = gamma_board(board);
assert( board735962001 != NULL );
assert( strcmp(board735962001, 
".22..55655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"1664.32265134\n"
"46422...44..1\n"
"21...1.454515\n"
"563526.2461.6\n"
"6.4.221124162\n"
"6.242...51512\n"
"6.46416.612.3\n"
"4322643.31462\n"
".2522142266.5\n"
"5.2..66354166\n"
"4.1632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466..5.5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board735962001);
board735962001 = NULL;
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_golden_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 19, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_golden_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );


char* board155538131 = gamma_board(board);
assert( board155538131 != NULL );
assert( strcmp(board155538131, 
".22..55655.3.\n"
"6..166.3.4321\n"
"..124.52.413.\n"
"44616645..516\n"
"1664.32265134\n"
"46422...44..1\n"
"21...1.454515\n"
"563526.2461.6\n"
"6.4.321124162\n"
"6.242...51512\n"
"6.46416.61253\n"
"4322643.31462\n"
".2522142266.5\n"
"522..66354166\n"
"461632224.656\n"
"5145132621114\n"
"35621123.6612\n"
"466..5.5553..\n"
"14.2246135535\n"
"51.4265536243\n") == 0);
free(board155538131);
board155538131 = NULL;
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 19, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 19, 0) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_golden_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 2, 2, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_golden_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 19, 10) == 0 );


gamma_delete(board);

    return 0;
}
