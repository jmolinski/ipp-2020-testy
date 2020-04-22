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
uuid: 107546659
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 4, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board565511010 = gamma_board(board);
assert( board565511010 != NULL );
assert( strcmp(board565511010, 
".1..21.....\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"3..........\n"
"........3.2\n"
".........1.\n"
".........32\n") == 0);
free(board565511010);
board565511010 = NULL;
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board189724026 = gamma_board(board);
assert( board189724026 != NULL );
assert( strcmp(board189724026, 
".1..21.....\n"
"...........\n"
".4.......4.\n"
"...........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
".........1.\n"
"........332\n") == 0);
free(board189724026);
board189724026 = NULL;
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board128182756 = gamma_board(board);
assert( board128182756 != NULL );
assert( strcmp(board128182756, 
".1..21.....\n"
"...........\n"
".4.......4.\n"
".4.........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
".........1.\n"
"........332\n") == 0);
free(board128182756);
board128182756 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 7 );


char* board548126786 = gamma_board(board);
assert( board548126786 != NULL );
assert( strcmp(board548126786, 
".1..21.....\n"
"...........\n"
".4.......4.\n"
".4.........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board548126786);
board548126786 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 6 );


char* board794837771 = gamma_board(board);
assert( board794837771 != NULL );
assert( strcmp(board794837771, 
".1..21.....\n"
".4.........\n"
".4.......4.\n"
".4.........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board794837771);
board794837771 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );


char* board582931511 = gamma_board(board);
assert( board582931511 != NULL );
assert( strcmp(board582931511, 
".1..21.....\n"
".4.........\n"
".4.......4.\n"
".4.........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board582931511);
board582931511 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );


char* board306227902 = gamma_board(board);
assert( board306227902 != NULL );
assert( strcmp(board306227902, 
".1..21.....\n"
".4.........\n"
".4.......4.\n"
".4.........\n"
"...........\n"
"3..........\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board306227902);
board306227902 = NULL;
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );


char* board773631270 = gamma_board(board);
assert( board773631270 != NULL );
assert( strcmp(board773631270, 
".1..21.....\n"
".4.........\n"
".4......44.\n"
".4.........\n"
"...........\n"
"3.......3..\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board773631270);
board773631270 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );


char* board170959533 = gamma_board(board);
assert( board170959533 != NULL );
assert( strcmp(board170959533, 
".1..21.....\n"
".4.........\n"
".4......44.\n"
".4.........\n"
"...........\n"
"3.......3..\n"
"...4...3322\n"
"........11.\n"
"........332\n") == 0);
free(board170959533);
board170959533 = NULL;
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board908302927 = gamma_board(board);
assert( board908302927 != NULL );
assert( strcmp(board908302927, 
".1..21.....\n"
".4.........\n"
".4......44.\n"
".4.......4.\n"
"...........\n"
"3.......3..\n"
"..44...3322\n"
"........11.\n"
"........332\n") == 0);
free(board908302927);
board908302927 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 4) == 0 );


char* board415824952 = gamma_board(board);
assert( board415824952 != NULL );
assert( strcmp(board415824952, 
".1..21.....\n"
".4.........\n"
".4......44.\n"
".4......44.\n"
"...........\n"
"3.......3..\n"
"..44...3322\n"
".......311.\n"
"........332\n") == 0);
free(board415824952);
board415824952 = NULL;
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 8) == 0 );


char* board174334936 = gamma_board(board);
assert( board174334936 != NULL );
assert( strcmp(board174334936, 
".1..21.....\n"
".4.........\n"
".4......44.\n"
".4......44.\n"
"...........\n"
"3.......3..\n"
".444...3322\n"
".......311.\n"
"........332\n") == 0);
free(board174334936);
board174334936 = NULL;
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


gamma_delete(board);

    return 0;
}
