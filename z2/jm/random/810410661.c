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
uuid: 810410661
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 17, 8, 36);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_free_fields(board, 3) == 166 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_free_fields(board, 8) == 160 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_free_fields(board, 1) == 159 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_free_fields(board, 5) == 156 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );


char* board491619773 = gamma_board(board);
assert( board491619773 != NULL );
assert( strcmp(board491619773, 
"..........\n"
"..........\n"
".........2\n"
"......1...\n"
".3.......2\n"
"7....4....\n"
"....5.....\n"
"..........\n"
"..........\n"
"......2..8\n"
"...3..7..7\n"
"..........\n"
"..........\n"
"1.........\n"
"17........\n"
".2........\n"
".......58.\n") == 0);
free(board491619773);
board491619773 = NULL;
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 5, 15) == 1 );
assert( gamma_free_fields(board, 3) == 151 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_golden_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_free_fields(board, 4) == 142 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_free_fields(board, 7) == 141 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 3, 14) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_free_fields(board, 7) == 137 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 15) == 1 );
assert( gamma_free_fields(board, 8) == 136 );
assert( gamma_golden_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 15, 3) == 0 );
assert( gamma_move(board, 7, 1, 16) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );


char* board218630991 = gamma_board(board);
assert( board218630991 != NULL );
assert( strcmp(board218630991, 
".7........\n"
"....83....\n"
"...8.....2\n"
"......1...\n"
".3.......2\n"
"7....4..11\n"
"....5.....\n"
".5........\n"
"......3...\n"
".1....23.8\n"
"4..3.87..7\n"
"...2....4.\n"
"4....6.2..\n"
"15.6......\n"
"17..7....1\n"
"12........\n"
".......58.\n") == 0);
free(board218630991);
board218630991 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 7) == 126 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 15) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_free_fields(board, 3) == 116 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board232727520 = gamma_board(board);
assert( board232727520 != NULL );
assert( strcmp(board232727520, 
".75.......\n"
"1..1833...\n"
"...8.....2\n"
"......1.5.\n"
".37..7...2\n"
"7....4..11\n"
"....5..1..\n"
".5...6.4..\n"
".2.44.3..2\n"
".17...23.8\n"
"4..3.87..7\n"
"3..2....4.\n"
"4..2.6.2..\n"
"15668.....\n"
"172.748..1\n"
"12........\n"
"35.....58.\n") == 0);
free(board232727520);
board232727520 = NULL;
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_free_fields(board, 5) == 105 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 16, 9) == 0 );
assert( gamma_move(board, 8, 2, 15) == 1 );
assert( gamma_free_fields(board, 8) == 103 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_free_fields(board, 2) == 94 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );


char* board941727283 = gamma_board(board);
assert( board941727283 != NULL );
assert( strcmp(board941727283, 
".75.......\n"
"1.81833...\n"
"..58.2...2\n"
"......1.5.\n"
".37..7...2\n"
"7....4..11\n"
"....5..1..\n"
"25...6.44.\n"
".2.44.32.2\n"
".171..23.8\n"
"4..3.87..7\n"
"3..2...747\n"
"4..2.6.2..\n"
"15668....6\n"
"172.748..1\n"
"12..57.5..\n"
"35.....58.\n") == 0);
free(board941727283);
board941727283 = NULL;
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );


char* board197137262 = gamma_board(board);
assert( board197137262 != NULL );
assert( strcmp(board197137262, 
".75.......\n"
"1.81833...\n"
"..58.2...2\n"
"......1.5.\n"
".37..7...2\n"
"7..7.4..11\n"
"....5..1..\n"
"25...6.44.\n"
".2.44.32.2\n"
".171..23.8\n"
"43.3.87..7\n"
"37.2...747\n"
"4.82.6.2..\n"
"15668....6\n"
"172.748..1\n"
"12..57.5..\n"
"35.....58.\n") == 0);
free(board197137262);
board197137262 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 7, 15) == 1 );


char* board821803516 = gamma_board(board);
assert( board821803516 != NULL );
assert( strcmp(board821803516, 
".75.......\n"
"1.818336..\n"
"..58.2...2\n"
"......1.5.\n"
".37..7...2\n"
"7..7.4..11\n"
"....5..1..\n"
"25...6.44.\n"
".2.44.32.2\n"
".171..23.8\n"
"43.3687..7\n"
"37.2...747\n"
"4.82.6.2..\n"
"15668....6\n"
"172.748..1\n"
"12..57.5..\n"
"35.....58.\n") == 0);
free(board821803516);
board821803516 = NULL;
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 4, 9, 15) == 1 );


char* board738095064 = gamma_board(board);
assert( board738095064 != NULL );
assert( strcmp(board738095064, 
".75.......\n"
"1.818336.4\n"
"..58.2...2\n"
"......1.5.\n"
".37..7...2\n"
"7..7.4..11\n"
"....5..1..\n"
"25...6.44.\n"
".2.4413232\n"
".171..23.8\n"
"43.3687..7\n"
"37.2...747\n"
"4.82.6.2..\n"
"15668....6\n"
"172.748..1\n"
"12..57.5..\n"
"35.....58.\n") == 0);
free(board738095064);
board738095064 = NULL;
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 9, 16) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_free_fields(board, 7) == 71 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 8, 15) == 1 );


char* board570291966 = gamma_board(board);
assert( board570291966 != NULL );
assert( strcmp(board570291966, 
".75......5\n"
"1.81833634\n"
"..58.2...2\n"
".....51.5.\n"
".37..74..2\n"
"7..7842.11\n"
"....5..1..\n"
"253.26844.\n"
".264413232\n"
".171..23.8\n"
"4383687..7\n"
"37.2...747\n"
"4.825612..\n"
"15668....6\n"
"172.748..1\n"
"12..57.55.\n"
"353...2588\n") == 0);
free(board570291966);
board570291966 = NULL;
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );


char* board759928290 = gamma_board(board);
assert( board759928290 != NULL );
assert( strcmp(board759928290, 
".75......5\n"
"1.81833634\n"
"..58.2...2\n"
".....51.5.\n"
".37..74..2\n"
"7..7842.11\n"
"....5..1..\n"
"253.26844.\n"
".264413232\n"
".171..23.8\n"
"4383687..7\n"
"37.2...747\n"
"4.825612..\n"
"15668....6\n"
"172.748..1\n"
"12..57.55.\n"
"353...2588\n") == 0);
free(board759928290);
board759928290 = NULL;
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_golden_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );


char* board281025533 = gamma_board(board);
assert( board281025533 != NULL );
assert( strcmp(board281025533, 
".75......5\n"
"1.81833634\n"
"..58.2...2\n"
".....5175.\n"
".37..74..2\n"
"7..7842.11\n"
"....5..1..\n"
"253826844.\n"
".264413232\n"
".171..23.8\n"
"4383687..7\n"
"37.2.7.747\n"
"4.825612..\n"
"15668....6\n"
"172.7484.1\n"
"122.57.55.\n"
"353...2588\n") == 0);
free(board281025533);
board281025533 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 16, 4) == 0 );


char* board735511527 = gamma_board(board);
assert( board735511527 != NULL );
assert( strcmp(board735511527, 
".75......5\n"
"1.81833634\n"
"..58.2...2\n"
".....5175.\n"
".37..74..2\n"
"7.47842.11\n"
"....5..1..\n"
"253826844.\n"
".264413232\n"
"4171..23.8\n"
"4383687..7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668....6\n"
"172.748431\n"
"122.57.55.\n"
"353...2588\n") == 0);
free(board735511527);
board735511527 = NULL;
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 16, 8) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 0, 14) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 7, 16, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 5, 16) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 16, 8) == 0 );


char* board233187533 = gamma_board(board);
assert( board233187533 != NULL );
assert( strcmp(board233187533, 
".75..3...5\n"
"1.81833634\n"
"7.58.2...2\n"
".....5175.\n"
".373474..2\n"
"7.47842111\n"
"..5.5..1..\n"
"2538268442\n"
".264413232\n"
"4171..2328\n"
"4383682..7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668...16\n"
"172.748431\n"
"122157.55.\n"
"353.2.2588\n") == 0);
free(board233187533);
board233187533 = NULL;
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_golden_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 6, 14) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_free_fields(board, 7) == 40 );


char* board571896607 = gamma_board(board);
assert( board571896607 != NULL );
assert( strcmp(board571896607, 
".75..3...5\n"
"1.81833634\n"
"7.58524..2\n"
".....5175.\n"
"6373474..2\n"
"7.47842111\n"
"..5.5..1.6\n"
"2538268442\n"
"2264413232\n"
"41716.2328\n"
"43836821.7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668...16\n"
"172.748631\n"
"122157.55.\n"
"353.2.2588\n") == 0);
free(board571896607);
board571896607 = NULL;
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );


char* board152517552 = gamma_board(board);
assert( board152517552 != NULL );
assert( strcmp(board152517552, 
".75..3...5\n"
"1.81833634\n"
"7.58524..2\n"
".....5175.\n"
"6373474..2\n"
"7.47842111\n"
"..5.5..1.6\n"
"2538268442\n"
"2264413232\n"
"41716.2328\n"
"43836821.7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668...16\n"
"172.748631\n"
"122157.55.\n"
"353.2.2588\n") == 0);
free(board152517552);
board152517552 = NULL;
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_golden_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 6) == 0 );


char* board649530227 = gamma_board(board);
assert( board649530227 != NULL );
assert( strcmp(board649530227, 
".75..3...5\n"
"1.81833634\n"
"7.58524..2\n"
".....5175.\n"
"6373474..2\n"
"7.47842111\n"
"..5.5..1.6\n"
"2538268442\n"
"2264413232\n"
"41716.2328\n"
"43836821.7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668..216\n"
"172.748631\n"
"122157.55.\n"
"353.2.2588\n") == 0);
free(board649530227);
board649530227 = NULL;
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 5, 1, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 18 );


char* board507446057 = gamma_board(board);
assert( board507446057 != NULL );
assert( strcmp(board507446057, 
".75..3...5\n"
"1581833634\n"
"7.58524..2\n"
".....5175.\n"
"6373474..2\n"
"7.47842111\n"
"..5.5..1.6\n"
"2538268442\n"
"2264413232\n"
"41716.2328\n"
"43836821.7\n"
"37.2.7.777\n"
"4.8256125.\n"
"15668..216\n"
"172.748631\n"
"122157.55.\n"
"35322.2588\n") == 0);
free(board507446057);
board507446057 = NULL;
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 9, 16) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 16, 8) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_golden_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_golden_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
