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
uuid: 566696222
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 108 );


char* board111148826 = gamma_board(board);
assert( board111148826 != NULL );
assert( strcmp(board111148826, 
"1..........\n"
"..4.......2\n"
"...........\n"
"..........3\n"
"....2......\n"
".1......5..\n"
"...........\n"
"5..........\n"
".....2.....\n"
"...........\n"
"2.4.1...3..\n") == 0);
free(board111148826);
board111148826 = NULL;
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );


char* board299039385 = gamma_board(board);
assert( board299039385 != NULL );
assert( strcmp(board299039385, 
"1..........\n"
"..4.......2\n"
"...........\n"
".3........3\n"
"....2......\n"
".1.3....5..\n"
"...........\n"
"5..........\n"
".....2.....\n"
"...........\n"
"2.4.1...3.4\n") == 0);
free(board299039385);
board299039385 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );


char* board660606122 = gamma_board(board);
assert( board660606122 != NULL );
assert( strcmp(board660606122, 
"1..........\n"
"..4.....1.2\n"
"..........2\n"
".3........3\n"
"....2....2.\n"
".1.3....5..\n"
"...........\n"
"5..........\n"
".....2.....\n"
"...........\n"
"2.4.1...3.4\n") == 0);
free(board660606122);
board660606122 = NULL;
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 99 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


char* board304974112 = gamma_board(board);
assert( board304974112 != NULL );
assert( strcmp(board304974112, 
"14..1.5....\n"
"..4.25.2122\n"
".3.....2..2\n"
"43.......43\n"
"4...2.3..21\n"
"31.3....5..\n"
"331........\n"
"5.1.5..52.1\n"
"....42.....\n"
"2.4...4.3..\n"
"2.451..5334\n") == 0);
free(board304974112);
board304974112 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );


char* board348328485 = gamma_board(board);
assert( board348328485 != NULL );
assert( strcmp(board348328485, 
"14..1.5....\n"
"..4.25.2122\n"
".3.....2..2\n"
"43.......43\n"
"4...2.3..21\n"
"31.3....5..\n"
"331........\n"
"5.1.5..52.1\n"
"....42.....\n"
"2.43..4.3..\n"
"2.451..5334\n") == 0);
free(board348328485);
board348328485 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );


char* board591364415 = gamma_board(board);
assert( board591364415 != NULL );
assert( strcmp(board591364415, 
"14..1.3....\n"
"..4.25.2122\n"
".3.....2..2\n"
"43.......43\n"
"4...2.3..21\n"
"31.3....5..\n"
"3311.......\n"
"5.1.5..52.1\n"
"....425....\n"
"2.431.4.3..\n"
"2.451..5334\n") == 0);
free(board591364415);
board591364415 = NULL;
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board112954291 = gamma_board(board);
assert( board112954291 != NULL );
assert( strcmp(board112954291, 
"14..1.3..1.\n"
".34.2522122\n"
".3.....22.2\n"
"43.......43\n"
"43.3233..21\n"
"3113.3.25..\n"
"3311.3.22..\n"
"5.1.5..5221\n"
"..1.425....\n"
"2.431.4533.\n"
"2.451..5344\n") == 0);
free(board112954291);
board112954291 = NULL;
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 21 );


char* board945415435 = gamma_board(board);
assert( board945415435 != NULL );
assert( strcmp(board945415435, 
"14..1.3..11\n"
".34.2522122\n"
".3.....22.2\n"
"43..2....43\n"
"43.3233..21\n"
"311333.25..\n"
"3311.3.22..\n"
"5.1.5..5221\n"
"..1.425....\n"
"2.43114533.\n"
"2.451..5344\n") == 0);
free(board945415435);
board945415435 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );


char* board804560663 = gamma_board(board);
assert( board804560663 != NULL );
assert( strcmp(board804560663, 
"144.1.3..11\n"
".34.2522122\n"
".34....2222\n"
"43..23..443\n"
"43.32333.21\n"
"311333.25..\n"
"331153.22..\n"
"5.125..5221\n"
"..13425...3\n"
"2243114533.\n"
"2.451..5344\n") == 0);
free(board804560663);
board804560663 = NULL;
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board686401988 = gamma_board(board);
assert( board686401988 != NULL );
assert( strcmp(board686401988, 
"144.1.3..11\n"
".34.2522122\n"
".34....2222\n"
"433.23..443\n"
"43.32333.21\n"
"311333425..\n"
"331153.22..\n"
"5.125..5221\n"
".213425...3\n"
"2243114533.\n"
"2.451..5344\n") == 0);
free(board686401988);
board686401988 = NULL;


gamma_delete(board);

    return 0;
}
