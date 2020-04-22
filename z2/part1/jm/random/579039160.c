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
uuid: 579039160
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 14, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_free_fields(board, 8) == 118 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 100 );
assert( gamma_move(board, 9, 6, 10) == 1 );


char* board439903106 = gamma_board(board);
assert( board439903106 != NULL );
assert( strcmp(board439903106, 
"....8....\n"
".........\n"
"..4......\n"
"1.....9..\n"
"...32....\n"
"..2....66\n"
".4....8..\n"
".54.4....\n"
"...8..3..\n"
".....5...\n"
"1.92..26.\n"
".29....3.\n"
".........\n"
"....1...1\n") == 0);
free(board439903106);
board439903106 = NULL;
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_golden_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 91 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_free_fields(board, 6) == 90 );
assert( gamma_move(board, 7, 13, 6) == 0 );


char* board761635688 = gamma_board(board);
assert( board761635688 != NULL );
assert( strcmp(board761635688, 
"....8....\n"
".........\n"
"..4......\n"
"1....69..\n"
".1.32....\n"
"..2..8.66\n"
"34....8..\n"
".54.4....\n"
".6.8..3..\n"
".....5...\n"
"1.925.26.\n"
".296...3.\n"
"...7.....\n"
".3..1...1\n") == 0);
free(board761635688);
board761635688 = NULL;
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 6, 12) == 1 );
assert( gamma_move(board, 9, 0, 13) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );


char* board727036251 = gamma_board(board);
assert( board727036251 != NULL );
assert( strcmp(board727036251, 
"9.4.8814.\n"
"..6.5.8.5\n"
"76497..27\n"
"1..9.69..\n"
"11932....\n"
"..2.28.66\n"
"34....8..\n"
"354.45..2\n"
"4668.287.\n"
"745..52..\n"
"14925.26.\n"
"62964..3.\n"
"...78....\n"
".3.71...1\n") == 0);
free(board727036251);
board727036251 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );


char* board544106752 = gamma_board(board);
assert( board544106752 != NULL );
assert( strcmp(board544106752, 
"9.4.8814.\n"
"..6.5.8.5\n"
"76497..27\n"
"1..9.69..\n"
"11932....\n"
"..2.28.66\n"
"34....8.8\n"
"354.45.12\n"
"4668.287.\n"
"745..526.\n"
"14925.26.\n"
"62964..3.\n"
".8.78....\n"
".3.716..1\n") == 0);
free(board544106752);
board544106752 = NULL;
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );


char* board228348585 = gamma_board(board);
assert( board228348585 != NULL );
assert( strcmp(board228348585, 
"9.418814.\n"
".46.5.8.5\n"
"764972.27\n"
"1..9.69..\n"
"11932....\n"
"..2.28266\n"
"34....818\n"
"354.45.12\n"
"4668.287.\n"
"745.55264\n"
"14925.26.\n"
"62964.63.\n"
"98.782.3.\n"
".36716.71\n") == 0);
free(board228348585);
board228348585 = NULL;
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 35 );


char* board357623192 = gamma_board(board);
assert( board357623192 != NULL );
assert( strcmp(board357623192, 
"9.418814.\n"
".46.5.8.5\n"
"764972.27\n"
"1..9.69..\n"
"11932....\n"
"..2228266\n"
"345...818\n"
"354.45.12\n"
"4668.287.\n"
"745.55264\n"
"14925.26.\n"
"62964.63.\n"
"98.782.3.\n"
".36716.71\n") == 0);
free(board357623192);
board357623192 = NULL;
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 33 );


char* board745690486 = gamma_board(board);
assert( board745690486 != NULL );
assert( strcmp(board745690486, 
"9.418814.\n"
".46.5.8.5\n"
"764972.27\n"
"1..9.69..\n"
"11932....\n"
".12228266\n"
"345...818\n"
"354.45.12\n"
"4668.287.\n"
"745.55264\n"
"14925.26.\n"
"62964.63.\n"
"98.782.3.\n"
"936716.71\n") == 0);
free(board745690486);
board745690486 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 10, 4) == 0 );


char* board423083593 = gamma_board(board);
assert( board423083593 != NULL );
assert( strcmp(board423083593, 
"9.418814.\n"
".46.5.8.5\n"
"764972.27\n"
"1.39.69.2\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"46688287.\n"
"745.55264\n"
"14925.26.\n"
"62964263.\n"
"98.782.3.\n"
"936716.71\n") == 0);
free(board423083593);
board423083593 = NULL;
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 23 );


char* board982933610 = gamma_board(board);
assert( board982933610 != NULL );
assert( strcmp(board982933610, 
"9.418814.\n"
".46.5.8.5\n"
"764972.27\n"
"1.39.69.2\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"466882876\n"
"745.55264\n"
"14925.265\n"
"62964263.\n"
"98.782.3.\n"
"936716171\n") == 0);
free(board982933610);
board982933610 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_free_fields(board, 3) == 22 );


char* board601789735 = gamma_board(board);
assert( board601789735 != NULL );
assert( strcmp(board601789735, 
"9.418814.\n"
".4635.8.5\n"
"764972.27\n"
"1.39.69.2\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"466882876\n"
"745.55264\n"
"14925.265\n"
"62964263.\n"
"98.782.3.\n"
"936716171\n") == 0);
free(board601789735);
board601789735 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );


char* board816399505 = gamma_board(board);
assert( board816399505 != NULL );
assert( strcmp(board816399505, 
"9.418814.\n"
".4635.8.5\n"
"764972.27\n"
"1.39.6952\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"466882876\n"
"745.55264\n"
"14925.265\n"
"62964263.\n"
"98.782.3.\n"
"936716171\n") == 0);
free(board816399505);
board816399505 = NULL;
assert( gamma_move(board, 9, 7, 4) == 0 );


char* board339118610 = gamma_board(board);
assert( board339118610 != NULL );
assert( strcmp(board339118610, 
"9.418814.\n"
".4635.8.5\n"
"764972.27\n"
"1.39.6952\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"466882876\n"
"745.55264\n"
"14925.265\n"
"62964263.\n"
"98.782.3.\n"
"936716171\n") == 0);
free(board339118610);
board339118610 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 13, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_golden_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );


char* board592174946 = gamma_board(board);
assert( board592174946 != NULL );
assert( strcmp(board592174946, 
"9.418814.\n"
".4635.8.5\n"
"764972.27\n"
"1.39.6952\n"
"11932....\n"
"812228266\n"
"345...818\n"
"354145612\n"
"466882876\n"
"745.55264\n"
"14925.265\n"
"62964263.\n"
"983782.3.\n"
"936716171\n") == 0);
free(board592174946);
board592174946 = NULL;
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 9, 6, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_golden_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_golden_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );


gamma_delete(board);

    return 0;
}
