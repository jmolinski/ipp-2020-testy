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
uuid: 877304543
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 9, 9, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_free_fields(board, 5) == 102 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_free_fields(board, 7) == 99 );
assert( gamma_golden_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );


char* board151990180 = gamma_board(board);
assert( board151990180 != NULL );
assert( strcmp(board151990180, 
"4...........\n"
"............\n"
".......7....\n"
"..........4.\n"
"...7...3...5\n"
"............\n"
"1.....36....\n"
"............\n"
".......8....\n") == 0);
free(board151990180);
board151990180 = NULL;
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_free_fields(board, 6) == 92 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 11) == 0 );


char* board388421723 = gamma_board(board);
assert( board388421723 != NULL );
assert( strcmp(board388421723, 
"4..1.2......\n"
"....5.....3.\n"
"9..6.5.7...2\n"
"..........4.\n"
".4.7..43...5\n"
"............\n"
"118...36....\n"
"..........3.\n"
".......8....\n") == 0);
free(board388421723);
board388421723 = NULL;
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_free_fields(board, 8) == 74 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );


char* board912591140 = gamma_board(board);
assert( board912591140 != NULL );
assert( strcmp(board912591140, 
"4..1.2.....1\n"
"....5.....38\n"
"9..625.75..2\n"
"9.7..9....4.\n"
"24276743.8.5\n"
"7....3.69..3\n"
"118...36....\n"
"6..8..6.753.\n"
".......8....\n") == 0);
free(board912591140);
board912591140 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );


char* board732488257 = gamma_board(board);
assert( board732488257 != NULL );
assert( strcmp(board732488257, 
"4..1.2.....1\n"
"....5.....38\n"
"9..625.75..2\n"
"9.7..9....4.\n"
"24276743.8.5\n"
"7...23.69..3\n"
"118...36....\n"
"6..8..6.753.\n"
".......8....\n") == 0);
free(board732488257);
board732488257 = NULL;
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );


char* board815954407 = gamma_board(board);
assert( board815954407 != NULL );
assert( strcmp(board815954407, 
"4.11.2.....1\n"
"....5..2..38\n"
"9..625.75..2\n"
"9.7..95...4.\n"
"24276743.8.5\n"
"7...23.69..3\n"
"1184.5366...\n"
"6..89.6.753.\n"
"6......8.8..\n") == 0);
free(board815954407);
board815954407 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );


char* board973828830 = gamma_board(board);
assert( board973828830 != NULL );
assert( strcmp(board973828830, 
"4.11.2.....1\n"
"....5..2..38\n"
"9..625.75.62\n"
"9.7..955..4.\n"
"2427674378.5\n"
"7..523.69..3\n"
"1184.5366...\n"
"6..89.6.753.\n"
"6......8.8..\n") == 0);
free(board973828830);
board973828830 = NULL;
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_golden_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );


char* board367330127 = gamma_board(board);
assert( board367330127 != NULL );
assert( strcmp(board367330127, 
"4.11.288...1\n"
"....5..2..38\n"
"9..625.75362\n"
"9.7..955..4.\n"
"2427674378.5\n"
"7..523.699.3\n"
"1184.5366...\n"
"6.489.6.7531\n"
"6......8.8..\n") == 0);
free(board367330127);
board367330127 = NULL;
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_free_fields(board, 9) == 42 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );


char* board695777801 = gamma_board(board);
assert( board695777801 != NULL );
assert( strcmp(board695777801, 
"4.11.288...1\n"
"....5..2..38\n"
"9.4625.75362\n"
"967..955..4.\n"
"2427674378.5\n"
"7..523.699.3\n"
"1184.5366...\n"
"6.489.6.7531\n"
"6......8.8..\n") == 0);
free(board695777801);
board695777801 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_golden_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );


char* board628845250 = gamma_board(board);
assert( board628845250 != NULL );
assert( strcmp(board628845250, 
"4.116288...1\n"
"..9.5..2.938\n"
"9.4625.75362\n"
"967..955..4.\n"
"2427674378.5\n"
"7..523.699.3\n"
"1184.5366..4\n"
"6.489.677531\n"
"6......8.8..\n") == 0);
free(board628845250);
board628845250 = NULL;
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );


char* board340196076 = gamma_board(board);
assert( board340196076 != NULL );
assert( strcmp(board340196076, 
"4.116288.7.1\n"
"..9.5..2.938\n"
"9.4625.75362\n"
"967..955..4.\n"
"2427674378.5\n"
"7..523.699.3\n"
"1184.5366..4\n"
"6.489.677531\n"
"6......8.8..\n") == 0);
free(board340196076);
board340196076 = NULL;
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );


char* board680689826 = gamma_board(board);
assert( board680689826 != NULL );
assert( strcmp(board680689826, 
"4.116288.7.1\n"
"7.9.5..2.938\n"
"954625.75362\n"
"967..955..4.\n"
"2427674378.5\n"
"7.8523.69923\n"
"1184.5366..4\n"
"6.489.677531\n"
"6...52.8.8..\n") == 0);
free(board680689826);
board680689826 = NULL;
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );


char* board896665772 = gamma_board(board);
assert( board896665772 != NULL );
assert( strcmp(board896665772, 
"4.116288.7.1\n"
"7.9.5..2.938\n"
"954625.75362\n"
"967..955..4.\n"
"2427674378.5\n"
"7.8523.69923\n"
"1184.5366..4\n"
"6.489.677531\n"
"6...52.8.8..\n") == 0);
free(board896665772);
board896665772 = NULL;
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 8, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 11, 5) == 1 );


char* board844615036 = gamma_board(board);
assert( board844615036 != NULL );
assert( strcmp(board844615036, 
"4.116288.7.1\n"
"7.9.5..29938\n"
"954625275362\n"
"967..955..47\n"
"2427674378.5\n"
"7.8523.69923\n"
"1184.5366..4\n"
"6.489.677531\n"
"6...52.8.86.\n") == 0);
free(board844615036);
board844615036 = NULL;
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );


char* board246878943 = gamma_board(board);
assert( board246878943 != NULL );
assert( strcmp(board246878943, 
"4.11628837.1\n"
"7.9.5..29938\n"
"954625275362\n"
"964..955..47\n"
"242767437855\n"
"7.8523.69923\n"
"118465366..4\n"
"6.489.677531\n"
"6...52.8.86.\n") == 0);
free(board246878943);
board246878943 = NULL;
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );


char* board467532905 = gamma_board(board);
assert( board467532905 != NULL );
assert( strcmp(board467532905, 
"4.11628837.1\n"
"789753.29938\n"
"954625275362\n"
"964.5955..47\n"
"242767437855\n"
"7.8523.69923\n"
"118465366..4\n"
"6.489.677531\n"
"6...52.8.86.\n") == 0);
free(board467532905);
board467532905 = NULL;
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_golden_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );


char* board860008312 = gamma_board(board);
assert( board860008312 != NULL );
assert( strcmp(board860008312, 
"4.11628837.1\n"
"789753.29938\n"
"954625275362\n"
"96475955..47\n"
"242767437855\n"
"7.8523.69923\n"
"118465369..4\n"
"6.489.677531\n"
"6.1.52.8.86.\n") == 0);
free(board860008312);
board860008312 = NULL;


gamma_delete(board);

    return 0;
}
