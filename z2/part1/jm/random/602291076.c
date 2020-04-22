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
uuid: 602291076
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );


char* board790169973 = gamma_board(board);
assert( board790169973 != NULL );
assert( strcmp(board790169973, 
"........\n"
"........\n"
"..1.....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".......1\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board790169973);
board790169973 = NULL;
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_free_fields(board, 2) == 118 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );


char* board443629980 = gamma_board(board);
assert( board443629980 != NULL );
assert( strcmp(board443629980, 
".......3\n"
"........\n"
"..1.....\n"
"........\n"
"........\n"
"........\n"
"..3.....\n"
"........\n"
".......1\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board443629980);
board443629980 = NULL;
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );


char* board500224293 = gamma_board(board);
assert( board500224293 != NULL );
assert( strcmp(board500224293, 
".......3\n"
".....4..\n"
"..1.4...\n"
"..6.....\n"
"........\n"
".....1..\n"
"..3.....\n"
"4......3\n"
".......1\n"
"........\n"
"....3...\n"
"..7.....\n"
"........\n"
"........\n"
"........\n") == 0);
free(board500224293);
board500224293 = NULL;
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_free_fields(board, 7) == 105 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board519331925 = gamma_board(board);
assert( board519331925 != NULL );
assert( strcmp(board519331925, 
".......3\n"
".....4..\n"
"..1.4...\n"
"656..1..\n"
"........\n"
".....1..\n"
"..3.....\n"
"4......3\n"
"....5..1\n"
"........\n"
"....3...\n"
"..7.....\n"
"........\n"
"........\n"
"...1....\n") == 0);
free(board519331925);
board519331925 = NULL;
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board350789673 = gamma_board(board);
assert( board350789673 != NULL );
assert( strcmp(board350789673, 
"...3...3\n"
".....4..\n"
"..1.4...\n"
"656..1..\n"
"........\n"
".....1..\n"
"..3.....\n"
"46.....3\n"
"....5..1\n"
".1......\n"
"....3...\n"
"..7.....\n"
"4.....1.\n"
".53....4\n"
"..21....\n") == 0);
free(board350789673);
board350789673 = NULL;
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );


char* board640620784 = gamma_board(board);
assert( board640620784 != NULL );
assert( strcmp(board640620784, 
"...3...3\n"
".67..4..\n"
"..1.4...\n"
"656..1.5\n"
"........\n"
".....16.\n"
"..342...\n"
"46..7.73\n"
"2...5.31\n"
".1...4..\n"
"721.35..\n"
".77..5.4\n"
"5.....1.\n"
".53....4\n"
"..21.62.\n") == 0);
free(board640620784);
board640620784 = NULL;
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );


char* board878071764 = gamma_board(board);
assert( board878071764 != NULL );
assert( strcmp(board878071764, 
"..73...3\n"
".67.24..\n"
".61.4...\n"
"6561.145\n"
"5.3.6.7.\n"
"....616.\n"
"6.342.2.\n"
"46..7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3..4\n"
"2.21.62.\n") == 0);
free(board878071764);
board878071764 = NULL;
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );


char* board337271100 = gamma_board(board);
assert( board337271100 != NULL );
assert( strcmp(board337271100, 
"..73...3\n"
".67.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....616.\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3..4\n"
"2.21.62.\n") == 0);
free(board337271100);
board337271100 = NULL;
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );


char* board654325915 = gamma_board(board);
assert( board654325915 != NULL );
assert( strcmp(board654325915, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....616.\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board654325915);
board654325915 = NULL;
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 12 );


char* board229897800 = gamma_board(board);
assert( board229897800 != NULL );
assert( strcmp(board229897800, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....616.\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board229897800);
board229897800 = NULL;
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );


char* board162277495 = gamma_board(board);
assert( board162277495 != NULL );
assert( strcmp(board162277495, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board162277495);
board162277495 = NULL;
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 15 );


char* board896251023 = gamma_board(board);
assert( board896251023 != NULL );
assert( strcmp(board896251023, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board896251023);
board896251023 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );


char* board812071761 = gamma_board(board);
assert( board812071761 != NULL );
assert( strcmp(board812071761, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board812071761);
board812071761 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board871440989 = gamma_board(board);
assert( board871440989 != NULL );
assert( strcmp(board871440989, 
"..73...3\n"
"767.24..\n"
".61.4...\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
".147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board871440989);
board871440989 = NULL;
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );


char* board192409603 = gamma_board(board);
assert( board192409603 != NULL );
assert( strcmp(board192409603, 
"..732..3\n"
"767.24..\n"
"761.4...\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"463.7273\n"
"26665331\n"
"1147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board192409603);
board192409603 = NULL;
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_free_fields(board, 6) == 36 );


char* board761924497 = gamma_board(board);
assert( board761924497 != NULL );
assert( strcmp(board761924497, 
"..732..3\n"
"767.24..\n"
"761.41..\n"
"6561.145\n"
"5.376.7.\n"
"....6166\n"
"63342.2.\n"
"46367273\n"
"26665331\n"
"1147.4..\n"
"721735..\n"
".777.514\n"
"5.5.5.1.\n"
"753.3.24\n"
"2.21.62.\n") == 0);
free(board761924497);
board761924497 = NULL;
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );


gamma_delete(board);

    return 0;
}
