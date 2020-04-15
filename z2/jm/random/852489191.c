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
uuid: 852489191
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 13, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 11, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board993785860 = gamma_board(board);
assert( board993785860 != NULL );
assert( strcmp(board993785860, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"........2..96..\n"
"...............\n"
".......11......\n"
"...............\n"
"..4............\n"
".........7.....\n"
".....7.........\n"
"5...1..........\n"
"...............\n") == 0);
free(board993785860);
board993785860 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 2, 14) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 1) == 162 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 9, 13, 0) == 1 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_move(board, 9, 10, 10) == 0 );
assert( gamma_free_fields(board, 9) == 148 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 145 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_free_fields(board, 9) == 137 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_golden_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_free_fields(board, 7) == 127 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 7) == 124 );
assert( gamma_move(board, 8, 3, 6) == 0 );


char* board830432335 = gamma_board(board);
assert( board830432335 != NULL );
assert( strcmp(board830432335, 
"9......4.6.1.6.\n"
".4..5..........\n"
"....89..573.4..\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
"...........3637\n"
"4..132.11...7..\n"
"1..............\n"
"..7....1..6..5.\n"
".....2...7621..\n"
"2..947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5..9.\n") == 0);
free(board830432335);
board830432335 = NULL;
assert( gamma_move(board, 9, 9, 5) == 1 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_free_fields(board, 9) == 122 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_free_fields(board, 3) == 119 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_free_fields(board, 6) == 117 );


char* board149141900 = gamma_board(board);
assert( board149141900 != NULL );
assert( strcmp(board149141900, 
"9......4.6.1.6.\n"
".4..5..........\n"
"....89..573.4..\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
"...........3637\n"
"4..132911.5.7..\n"
"1......2.9.....\n"
".57....1.36..5.\n"
".....2...7621..\n"
"2..947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5.19.\n") == 0);
free(board149141900);
board149141900 = NULL;
assert( gamma_move(board, 7, 13, 10) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_golden_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 9, 6, 13) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board906356082 = gamma_board(board);
assert( board906356082 != NULL );
assert( strcmp(board906356082, 
"9......4.6.1.6.\n"
".4..5...8......\n"
"..1.89..573.47.\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
"...........3637\n"
"4.3132911.527..\n"
"1......2.9.83..\n"
".57....1.36..5.\n"
".....2...7621..\n"
"2..947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5.19.\n") == 0);
free(board906356082);
board906356082 = NULL;
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board400105836 = gamma_board(board);
assert( board400105836 != NULL );
assert( strcmp(board400105836, 
"9......4.6.1.6.\n"
".4..5...8......\n"
"..1.89..573.47.\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
".......5...3637\n"
"4.3132911.527..\n"
"1......2.9.83..\n"
".57....1.36..5.\n"
".....2...7621..\n"
"2..947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5.19.\n") == 0);
free(board400105836);
board400105836 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board274688673 = gamma_board(board);
assert( board274688673 != NULL );
assert( strcmp(board274688673, 
"9......4.6.1.6.\n"
".4..5...8......\n"
"..1.89..573.47.\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
".......5...3637\n"
"4.3132911.527..\n"
"1......2.9.83..\n"
".57....1.36..5.\n"
".....2...7621..\n"
"2..947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5.19.\n") == 0);
free(board274688673);
board274688673 = NULL;
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );


char* board644816595 = gamma_board(board);
assert( board644816595 != NULL );
assert( strcmp(board644816595, 
"9......4.6.1.6.\n"
".4..5...8......\n"
"..1.89..573.47.\n"
"1.....49.3.41..\n"
"...41.622..965.\n"
".......5...3637\n"
"4.3132911.527..\n"
"1......2.9.83..\n"
".57....1.36..5.\n"
".....2...7621..\n"
"2.9947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5.19.\n") == 0);
free(board644816595);
board644816595 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_free_fields(board, 5) == 104 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_free_fields(board, 7) == 102 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 10, 12) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 14, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 9, 9, 13) == 0 );


char* board881195666 = gamma_board(board);
assert( board881195666 != NULL );
assert( strcmp(board881195666, 
"9......4.851.6.\n"
".44.5...8......\n"
"..14898.573.477\n"
"18...749.3.41..\n"
"...41.622..965.\n"
".......5..93637\n"
"423132911.527..\n"
"1......2.9.832.\n"
".57....1.36..5.\n"
"...7.2...7621..\n"
"2.9947.69.8.9..\n"
"52.614.41.5.8..\n"
"3...65..8.5319.\n") == 0);
free(board881195666);
board881195666 = NULL;
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 13, 7) == 0 );
assert( gamma_free_fields(board, 9) == 91 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );


char* board814089425 = gamma_board(board);
assert( board814089425 != NULL );
assert( strcmp(board814089425, 
"9.3....4.851.6.\n"
".44.5...8......\n"
"..14898.573.477\n"
"18...749.3.41..\n"
"...41.622..965.\n"
".......5..93637\n"
"423132911.527..\n"
"1......2.9.832.\n"
".57.4..1.36..5.\n"
"...742...7621..\n"
"259947.69.8.9..\n"
"52.614.41.5.86.\n"
"3...65..8.5319.\n") == 0);
free(board814089425);
board814089425 = NULL;
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_free_fields(board, 6) == 87 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 9, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_free_fields(board, 7) == 83 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 12) == 1 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 11, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_golden_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_golden_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );


char* board419483568 = gamma_board(board);
assert( board419483568 != NULL );
assert( strcmp(board419483568, 
"9632...4.85176.\n"
".44.598.8856...\n"
"..14898.573.477\n"
"186..749.3.41..\n"
"...41.6222.965.\n"
"......55..93637\n"
"423132911.527..\n"
"1....3.2.9.832.\n"
".5734..1.36..5.\n"
".6.742...7621.2\n"
"259947.69.8.9..\n"
"52.614.41.5.865\n"
"3..265448.5319.\n") == 0);
free(board419483568);
board419483568 = NULL;
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 11, 12) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );


char* board927247332 = gamma_board(board);
assert( board927247332 != NULL );
assert( strcmp(board927247332, 
"9632...4.85176.\n"
".44.598.8856...\n"
"..14898.573.477\n"
"186..749.3.41..\n"
"...41.6222.965.\n"
"......55..93637\n"
"423132911.5274.\n"
"12...3.279.832.\n"
".5734.91.36.35.\n"
".6.742.1.7621.2\n"
"259947.69.8.9..\n"
"52.614.41.5.865\n"
"3.8265448.5319.\n") == 0);
free(board927247332);
board927247332 = NULL;
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_free_fields(board, 9) == 65 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );


char* board749686587 = gamma_board(board);
assert( board749686587 != NULL );
assert( strcmp(board749686587, 
"9632...4.85176.\n"
".44.598.8856...\n"
"..14898.573.477\n"
"186..749.3.41..\n"
"...41.6222.965.\n"
"......55..93637\n"
"423132911.5274.\n"
"12...3.279.832.\n"
".5734.91.36.35.\n"
".6.742.1.7621.2\n"
"259947.69.8.9..\n"
"52.614.41.5.865\n"
"3.8265448.5319.\n") == 0);
free(board749686587);
board749686587 = NULL;
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 13, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_golden_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );


char* board681092262 = gamma_board(board);
assert( board681092262 != NULL );
assert( strcmp(board681092262, 
"9632...4.85176.\n"
".44.598.8851...\n"
".714898.573.477\n"
"186..749.3.41..\n"
".8.41.2222.965.\n"
"......55..93637\n"
"423132911.5274.\n"
"12..93.279.832.\n"
".5734691.36.35.\n"
".6.742.177621.2\n"
"259947.69.8.9..\n"
"52.614.41.5.865\n"
"3.8265448.5319.\n") == 0);
free(board681092262);
board681092262 = NULL;
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );


char* board345432055 = gamma_board(board);
assert( board345432055 != NULL );
assert( strcmp(board345432055, 
"9632...4.85176.\n"
".44.598.8851...\n"
".714898.573.477\n"
"186..749.3.41..\n"
".8.41.2222.965.\n"
"......55..93637\n"
"423132911.5274.\n"
"12..93.279.832.\n"
".5734691.36.35.\n"
".6.742.177621.2\n"
"259947.69.8.9.5\n"
"52.614.41.5.865\n"
"3.8265448.5319.\n") == 0);
free(board345432055);
board345432055 = NULL;
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 11) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );


gamma_delete(board);

    return 0;
}
