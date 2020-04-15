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
uuid: 131316147
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board647452960 = gamma_board(board);
assert( board647452960 != NULL );
assert( strcmp(board647452960, 
"....3...\n"
".......4\n"
"......2.\n"
"........\n"
"........\n"
".......2\n"
"......3.\n"
"........\n"
"........\n"
"........\n"
"....2...\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board647452960);
board647452960 = NULL;
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_free_fields(board, 1) == 113 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_free_fields(board, 3) == 111 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );


char* board390597215 = gamma_board(board);
assert( board390597215 != NULL );
assert( strcmp(board390597215, 
"....3.1.\n"
".......4\n"
"......2.\n"
"........\n"
"........\n"
".......2\n"
"2.....3.\n"
"........\n"
"......2.\n"
"...3.1.2\n"
"....2...\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board390597215);
board390597215 = NULL;
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_golden_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 24 );


char* board144084897 = gamma_board(board);
assert( board144084897 != NULL );
assert( strcmp(board144084897, 
"....3.1.\n"
".......4\n"
"3.....2.\n"
".3.....2\n"
".2....24\n"
"..3....2\n"
"2.1.3.3.\n"
"........\n"
"...3..21\n"
"...3.1.2\n"
"2.4.2.4.\n"
"..3.....\n"
"3.......\n"
"4..14.13\n"
".....1.1\n") == 0);
free(board144084897);
board144084897 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );


char* board479899366 = gamma_board(board);
assert( board479899366 != NULL );
assert( strcmp(board479899366, 
"....3.1.\n"
".......4\n"
"3.....2.\n"
".3.....2\n"
".2....24\n"
"..3....2\n"
"2.133.3.\n"
"....3...\n"
"4.13.221\n"
"...3.1.2\n"
"2.4.2.4.\n"
"..3.....\n"
"3.......\n"
"4..14.13\n"
".....1.1\n") == 0);
free(board479899366);
board479899366 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );


char* board585199770 = gamma_board(board);
assert( board585199770 != NULL );
assert( strcmp(board585199770, 
"....3.1.\n"
".......4\n"
"3..4..2.\n"
".3.....2\n"
".2....24\n"
"..3....2\n"
"2.133.3.\n"
"....3...\n"
"4.13.221\n"
"...3.1.2\n"
"2.4.2.4.\n"
"..3.....\n"
"3....1..\n"
"4..14.13\n"
".....1.1\n") == 0);
free(board585199770);
board585199770 = NULL;
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );


char* board769619401 = gamma_board(board);
assert( board769619401 != NULL );
assert( strcmp(board769619401, 
"....3.1.\n"
"4......4\n"
"3..4..2.\n"
"33.....2\n"
".2....24\n"
"..3....2\n"
"2.133.3.\n"
"....3...\n"
"4.13.221\n"
"...311.2\n"
"2.4.2.4.\n"
"..3.....\n"
"3....1..\n"
"4..14.13\n"
".....1.1\n") == 0);
free(board769619401);
board769619401 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 6, 14) == 0 );


char* board799491417 = gamma_board(board);
assert( board799491417 != NULL );
assert( strcmp(board799491417, 
"....3.1.\n"
"4......4\n"
"3..4..2.\n"
"33....32\n"
".2.4.224\n"
"..3....2\n"
"2.133.3.\n"
"...33...\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3....1..\n"
"4..14.13\n"
"....11.1\n") == 0);
free(board799491417);
board799491417 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board553507729 = gamma_board(board);
assert( board553507729 != NULL );
assert( strcmp(board553507729, 
"....3.1.\n"
"4......4\n"
"3..4..2.\n"
"33....32\n"
".2.4.224\n"
"..3....2\n"
"2.133.3.\n"
"...333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3....1..\n"
"4..14.13\n"
"....1111\n") == 0);
free(board553507729);
board553507729 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );


char* board425774919 = gamma_board(board);
assert( board425774919 != NULL );
assert( strcmp(board425774919, 
"....3.1.\n"
"4......4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".13....2\n"
"2.133.3.\n"
"...333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3..1.1..\n"
"44.14.13\n"
"....1111\n") == 0);
free(board425774919);
board425774919 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );


char* board631904429 = gamma_board(board);
assert( board631904429 != NULL );
assert( strcmp(board631904429, 
"....3.1.\n"
"4......4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".13....2\n"
"2.133.3.\n"
"...333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3..1.1..\n"
"44.14.13\n"
"....1111\n") == 0);
free(board631904429);
board631904429 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );


char* board847878357 = gamma_board(board);
assert( board847878357 != NULL );
assert( strcmp(board847878357, 
"....3.1.\n"
"4....1.4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".134...2\n"
"2.133.3.\n"
"4..333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3..1.1..\n"
"44114.13\n"
"....1111\n") == 0);
free(board847878357);
board847878357 = NULL;
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );


char* board816775749 = gamma_board(board);
assert( board816775749 != NULL );
assert( strcmp(board816775749, 
"....3.1.\n"
"4....1.4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".134...2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3..1.1..\n"
"44114.13\n"
"....1111\n") == 0);
free(board816775749);
board816775749 = NULL;
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );


char* board788759805 = gamma_board(board);
assert( board788759805 != NULL );
assert( strcmp(board788759805, 
"....3.1.\n"
"4....1.4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".134...2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"..3.....\n"
"3..1.1..\n"
"44114.13\n"
"....1111\n") == 0);
free(board788759805);
board788759805 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 21 );


char* board351185315 = gamma_board(board);
assert( board351185315 != NULL );
assert( strcmp(board351185315, 
"....3.1.\n"
"4....1.4\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".134...2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"...311.2\n"
"2.4.234.\n"
"1.3.....\n"
"3.11.1..\n"
"44114.13\n"
"....1111\n") == 0);
free(board351185315);
board351185315 = NULL;
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_golden_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 17 );


char* board540114155 = gamma_board(board);
assert( board540114155 != NULL );
assert( strcmp(board540114155, 
"....3.1.\n"
"4....114\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".1344..2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"...311.2\n"
"2.41234.\n"
"1.31....\n"
"3.11.1..\n"
"44114113\n"
"....1111\n") == 0);
free(board540114155);
board540114155 = NULL;
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );


char* board147164922 = gamma_board(board);
assert( board147164922 != NULL );
assert( strcmp(board147164922, 
"....3.1.\n"
"4....114\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".1344..2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"...311.2\n"
"2141234.\n"
"1.31....\n"
"3.11.1..\n"
"44114113\n"
"....1111\n") == 0);
free(board147164922);
board147164922 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );


char* board832497152 = gamma_board(board);
assert( board832497152 != NULL );
assert( strcmp(board832497152, 
"....3.1.\n"
"4....114\n"
"3..4.22.\n"
"33...332\n"
".2.4.224\n"
".1344..2\n"
"2.133.3.\n"
"4.1333..\n"
"4.13.221\n"
"2..311.2\n"
"2141234.\n"
"1.31....\n"
"3.11.1.1\n"
"44114113\n"
".4..1111\n") == 0);
free(board832497152);
board832497152 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );


gamma_delete(board);

    return 0;
}
