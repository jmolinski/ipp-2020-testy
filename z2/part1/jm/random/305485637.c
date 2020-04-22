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
uuid: 305485637
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );


char* board309260303 = gamma_board(board);
assert( board309260303 != NULL );
assert( strcmp(board309260303, 
".........2.\n"
"......3....\n"
"..........1\n"
".2.........\n"
".........3.\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board309260303);
board309260303 = NULL;
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board936608829 = gamma_board(board);
assert( board936608829 != NULL );
assert( strcmp(board936608829, 
".32.5....2.\n"
".1...23....\n"
"..........1\n"
".2...3.....\n"
"....2....3.\n"
".4.4......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...........\n"
"..1........\n") == 0);
free(board936608829);
board936608829 = NULL;
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );


char* board876444820 = gamma_board(board);
assert( board876444820 != NULL );
assert( strcmp(board876444820, 
".32.5....2.\n"
".1...23....\n"
"........5.1\n"
".2...3..5..\n"
".1..2....3.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..1........\n") == 0);
free(board876444820);
board876444820 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 14 );


char* board350551267 = gamma_board(board);
assert( board350551267 != NULL );
assert( strcmp(board350551267, 
".32.52...25\n"
".1..223....\n"
".5......5.1\n"
".2..23..5..\n"
".1..2..443.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..1........\n") == 0);
free(board350551267);
board350551267 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );


char* board222705931 = gamma_board(board);
assert( board222705931 != NULL );
assert( strcmp(board222705931, 
".32.52..225\n"
".1..223....\n"
".5......5.1\n"
".2..23..5..\n"
".1..2..443.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..1........\n") == 0);
free(board222705931);
board222705931 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );


char* board417275124 = gamma_board(board);
assert( board417275124 != NULL );
assert( strcmp(board417275124, 
".32.52..225\n"
".1..223....\n"
".5......5.1\n"
".2..23..5..\n"
".1..2..443.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..1........\n") == 0);
free(board417275124);
board417275124 = NULL;
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board654468620 = gamma_board(board);
assert( board654468620 != NULL );
assert( strcmp(board654468620, 
".32.52..225\n"
".1..223....\n"
".5.....55.1\n"
".2..23..5..\n"
".15.2..443.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board654468620);
board654468620 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );


char* board653248877 = gamma_board(board);
assert( board653248877 != NULL );
assert( strcmp(board653248877, 
".32.52..225\n"
".1..223....\n"
"55.....55.1\n"
".2..23..5..\n"
".15.2..443.\n"
".454......3\n"
".....1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board653248877);
board653248877 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


char* board659724689 = gamma_board(board);
assert( board659724689 != NULL );
assert( strcmp(board659724689, 
".32.52..225\n"
".1..223.2..\n"
"55...2.5551\n"
".2.223.45..\n"
".15.2..443.\n"
"4454......3\n"
"..5..1.....\n"
".........4.\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board659724689);
board659724689 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );


char* board507905454 = gamma_board(board);
assert( board507905454 != NULL );
assert( strcmp(board507905454, 
".32.52..225\n"
"11..223.2..\n"
"55...2.5551\n"
".2.223.45..\n"
".15.2..443.\n"
"4454......3\n"
"..5..1.....\n"
"........44.\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board507905454);
board507905454 = NULL;
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board434113189 = gamma_board(board);
assert( board434113189 != NULL );
assert( strcmp(board434113189, 
".32.52..225\n"
"11..223225.\n"
"55...2.5551\n"
".2.223445.1\n"
".15.2..443.\n"
"4454......3\n"
"..5..1.....\n"
"........444\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board434113189);
board434113189 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board221247193 = gamma_board(board);
assert( board221247193 != NULL );
assert( strcmp(board221247193, 
".32.52..225\n"
"11..223225.\n"
"55...2.5551\n"
".2.223445.1\n"
".1522..443.\n"
"4454......3\n"
"..5..1.....\n"
"........444\n"
"...........\n"
"...44......\n"
"..11.......\n") == 0);
free(board221247193);
board221247193 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );


char* board427766208 = gamma_board(board);
assert( board427766208 != NULL );
assert( strcmp(board427766208, 
"132.522.225\n"
"11..223225.\n"
"55...225551\n"
".2.223445.1\n"
".1522..4431\n"
"4454......3\n"
"..5..1.....\n"
"........444\n"
"........4..\n"
"...44......\n"
"..11.......\n") == 0);
free(board427766208);
board427766208 = NULL;
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
