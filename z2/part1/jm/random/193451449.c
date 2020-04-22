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
uuid: 193451449
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 9, 8);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board879456663 = gamma_board(board);
assert( board879456663 != NULL );
assert( strcmp(board879456663, 
".....2....\n"
"..........\n"
"..........\n"
"..2.......\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board879456663);
board879456663 = NULL;
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_golden_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );


char* board961821640 = gamma_board(board);
assert( board961821640 != NULL );
assert( strcmp(board961821640, 
".....2...3\n"
"........1.\n"
"7..4..8...\n"
"..2.......\n"
".85.......\n"
"..........\n"
"...3.....3\n"
"....8.....\n"
"..4.4...3.\n") == 0);
free(board961821640);
board961821640 = NULL;
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_golden_move(board, 5, 7, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 9, 8, 8) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board272549199 = gamma_board(board);
assert( board272549199 != NULL );
assert( strcmp(board272549199, 
".....29.93\n"
".22.....1.\n"
"7..4.183..\n"
"..2..1....\n"
".85...7...\n"
"......4.1.\n"
"...3..17.3\n"
"...88.....\n"
".64.4.5.3.\n") == 0);
free(board272549199);
board272549199 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 9) == 0 );


char* board240156473 = gamma_board(board);
assert( board240156473 != NULL );
assert( strcmp(board240156473, 
".3..529.93\n"
".22.....1.\n"
"76.4.183..\n"
"..2..1....\n"
".85.8.7...\n"
"....6.491.\n"
"..53..17.3\n"
"...88.....\n"
".64.425.3.\n") == 0);
free(board240156473);
board240156473 = NULL;
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_free_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board327441717 = gamma_board(board);
assert( board327441717 != NULL );
assert( strcmp(board327441717, 
".38.529.93\n"
".22.....11\n"
"76.4.183..\n"
"..2..1....\n"
".85.8.7...\n"
"....6.491.\n"
"9.53..17.3\n"
".1.88.....\n"
".64.425.3.\n") == 0);
free(board327441717);
board327441717 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );


char* board831436897 = gamma_board(board);
assert( board831436897 != NULL );
assert( strcmp(board831436897, 
".38.529.53\n"
".22....711\n"
"76.4.183..\n"
"..2..1....\n"
".8558875..\n"
"....64491.\n"
"9.53..17.3\n"
".1.88..94.\n"
".64.425.3.\n") == 0);
free(board831436897);
board831436897 = NULL;
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 3) == 0 );


char* board139414022 = gamma_board(board);
assert( board139414022 != NULL );
assert( strcmp(board139414022, 
".38.529.53\n"
".22....711\n"
"76.4.183..\n"
"..2..1....\n"
".8558875..\n"
"...264491.\n"
"9.53..1723\n"
".1788.494.\n"
".64.42523.\n") == 0);
free(board139414022);
board139414022 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_free_fields(board, 9) == 23 );


char* board777955652 = gamma_board(board);
assert( board777955652 != NULL );
assert( strcmp(board777955652, 
".38.529453\n"
"822...5911\n"
"7664.183.5\n"
"..2..1.3..\n"
".4558875..\n"
"8.1264491.\n"
"9953..1723\n"
".178874943\n"
".647425232\n") == 0);
free(board777955652);
board777955652 = NULL;
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 7) == 0 );


char* board933618707 = gamma_board(board);
assert( board933618707 != NULL );
assert( strcmp(board933618707, 
".38.529453\n"
"822...5911\n"
"7664.183.5\n"
".12..1.3..\n"
".4558875..\n"
"8.12644917\n"
"9953.11723\n"
"8178874943\n"
"7647425232\n") == 0);
free(board933618707);
board933618707 = NULL;
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_free_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_golden_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board171864641 = gamma_board(board);
assert( board171864641 != NULL );
assert( strcmp(board171864641, 
".38.529453\n"
"822...5911\n"
"7664.183.5\n"
".12..1.3..\n"
"14558875..\n"
"8.12644917\n"
"9953.11723\n"
"8178874943\n"
"7647425232\n") == 0);
free(board171864641);
board171864641 = NULL;
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board261779104 = gamma_board(board);
assert( board261779104 != NULL );
assert( strcmp(board261779104, 
".38.529453\n"
"822...5911\n"
"7664.183.5\n"
".12..1.3..\n"
"14558875..\n"
"8112644917\n"
"9953.11723\n"
"8178874943\n"
"7647425232\n") == 0);
free(board261779104);
board261779104 = NULL;
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_golden_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
