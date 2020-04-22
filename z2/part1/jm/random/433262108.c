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
uuid: 433262108
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(21, 10, 8, 47);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 3, 20, 4) == 1 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 7, 20) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_free_fields(board, 7) == 205 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 19) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 204 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_free_fields(board, 2) == 204 );


char* board424619164 = gamma_board(board);
assert( board424619164 != NULL );
assert( strcmp(board424619164, 
".4...................\n"
"..........1..........\n"
".....................\n"
"..6..................\n"
".....................\n"
"..1.................3\n"
".....................\n"
".....................\n"
"............6........\n"
".....................\n") == 0);
free(board424619164);
board424619164 = NULL;
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 20, 1) == 1 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_free_fields(board, 3) == 196 );
assert( gamma_move(board, 4, 19, 4) == 1 );


char* board293572636 = gamma_board(board);
assert( board293572636 != NULL );
assert( strcmp(board293572636, 
".4.2.................\n"
"..........1..........\n"
".4......3............\n"
"..6..................\n"
".....................\n"
"..1................43\n"
"...7.................\n"
".....................\n"
".5..1.......6.......2\n"
".............8.......\n") == 0);
free(board293572636);
board293572636 = NULL;
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 193 );
assert( gamma_move(board, 7, 15, 6) == 1 );
assert( gamma_free_fields(board, 7) == 192 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 16) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );


char* board632088086 = gamma_board(board);
assert( board632088086 != NULL );
assert( strcmp(board632088086, 
".4.2.................\n"
"..........1..........\n"
".4.2....3............\n"
"..6............7.....\n"
".5.....3.............\n"
"..1......1.........43\n"
"6..7.................\n"
".....................\n"
".5.31..2....6.......2\n"
".............8.......\n") == 0);
free(board632088086);
board632088086 = NULL;
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 17, 6) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 18, 3) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );


char* board488305969 = gamma_board(board);
assert( board488305969 != NULL );
assert( strcmp(board488305969, 
".4.2.................\n"
"..........1..........\n"
".4.2....3..2.........\n"
"..6............7.8...\n"
".5.....3.............\n"
".51......1.........43\n"
"6..7....1.........2..\n"
".....................\n"
".5.31..2....6.......2\n"
".8...........8.......\n") == 0);
free(board488305969);
board488305969 = NULL;
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_golden_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_free_fields(board, 5) == 179 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 14, 4) == 1 );
assert( gamma_free_fields(board, 8) == 175 );
assert( gamma_move(board, 1, 16, 0) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 20) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_golden_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_free_fields(board, 7) == 167 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 14, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 8, 18, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_free_fields(board, 7) == 155 );
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 8, 19) == 0 );
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 151 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 19, 9) == 1 );
assert( gamma_move(board, 8, 15, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 18, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board867008693 = gamma_board(board);
assert( board867008693 != NULL );
assert( strcmp(board867008693, 
"3412....7..7.......8.\n"
".....47.541.....1....\n"
".4.23..53..2.........\n"
"..6.2....7....77.88..\n"
".57...63...7..5......\n"
".51446...14...88...43\n"
"6..7617.1.5.......2..\n"
"..1.2........3.......\n"
".5.31..28...6.8.....2\n"
"18......76...8..1.5..\n") == 0);
free(board867008693);
board867008693 = NULL;
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 1, 20, 7) == 1 );
assert( gamma_move(board, 1, 19, 8) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_free_fields(board, 2) == 137 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 16, 3) == 1 );
assert( gamma_move(board, 7, 18, 3) == 0 );
assert( gamma_move(board, 8, 8, 14) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 20, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_free_fields(board, 5) == 130 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_free_fields(board, 7) == 129 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 129 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 15, 3) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 9, 20) == 0 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_golden_move(board, 4, 3, 20) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_free_fields(board, 6) == 124 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 7, 17, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 18, 2) == 1 );
assert( gamma_free_fields(board, 2) == 121 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_free_fields(board, 4) == 119 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 19, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_move(board, 4, 9, 4) == 1 );


char* board430682742 = gamma_board(board);
assert( board430682742 != NULL );
assert( strcmp(board430682742, 
"34123.2173.7.......8.\n"
".....47.541.....1..1.\n"
".4123.453..2.....7..1\n"
"6.672....7....77.88..\n"
".57..563...7.45......\n"
"251446..744.5.88...43\n"
"6.27617.1.5...385.2.2\n"
"..1.2...2....3....2..\n"
"35331..28...6.8....32\n"
"18......76..38..1.5..\n") == 0);
free(board430682742);
board430682742 = NULL;
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 17, 0) == 1 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_free_fields(board, 3) == 109 );
assert( gamma_move(board, 4, 18, 1) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 17, 3) == 1 );
assert( gamma_move(board, 6, 20, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 18) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 20) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );


char* board111632977 = gamma_board(board);
assert( board111632977 != NULL );
assert( strcmp(board111632977, 
"34123.2173.7.......8.\n"
".....47.541.....1..1.\n"
".4123.453..2.....7..1\n"
"6.672....7....77.88..\n"
".575.563...7.45......\n"
"25144651744.5.88...43\n"
"6527617.1.5...38552.2\n"
".41.2...2....3....2..\n"
"35331..28..86.8...432\n"
"186.....76..38..175..\n") == 0);
free(board111632977);
board111632977 = NULL;
assert( gamma_move(board, 7, 1, 16) == 0 );
assert( gamma_move(board, 8, 4, 18) == 0 );
assert( gamma_move(board, 8, 19, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_golden_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 18, 4) == 1 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 15, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 3, 19, 2) == 1 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 18, 2) == 0 );
assert( gamma_move(board, 8, 16, 2) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 1, 20, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );


char* board341303982 = gamma_board(board);
assert( board341303982 != NULL );
assert( strcmp(board341303982, 
"34123.2173.7.......8.\n"
".....47.541.....1..1.\n"
".4123.453..2.....7..1\n"
"6.672....7....77.88..\n"
"2575.563...7245.....1\n"
"25144651744.5.88..543\n"
"6527617.1.5...3855282\n"
".41.2...2....3..8.23.\n"
"35331.728..86.87..432\n"
"18651...76.838..175..\n") == 0);
free(board341303982);
board341303982 = NULL;
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 18, 7) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 0, 19) == 0 );
assert( gamma_move(board, 8, 20, 2) == 1 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 7, 9, 13) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 20, 9) == 1 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 16, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 16, 9) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 13, 8) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 20, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 6, 20) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 7, 18, 9) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_free_fields(board, 8) == 75 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board942205529 = gamma_board(board);
assert( board942205529 != NULL );
assert( strcmp(board942205529, 
"34123.2173.7....3.788\n"
"...8.471541..8..1..1.\n"
".4123.4533.2....775.1\n"
"6.672.8..7.2..77.88..\n"
"2575.56383.7245.....1\n"
"25144651744.5.88..543\n"
"6527617.115.7.3855282\n"
".41.2..72....3..8.238\n"
"353313728..86.87..432\n"
"18651...76.838..175..\n") == 0);
free(board942205529);
board942205529 = NULL;
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board241656178 = gamma_board(board);
assert( board241656178 != NULL );
assert( strcmp(board241656178, 
"34123.2173.7....3.788\n"
"...8.471541..8..1..1.\n"
".412324533.2....775.1\n"
"6.672.8..7.2..77.88..\n"
"2575.56383.7245.....1\n"
"25144651744.5.88..543\n"
"6527617.115.7.3855282\n"
".41.2..72....3..8.238\n"
"353313728..86.87..432\n"
"18651...76.838..175..\n") == 0);
free(board241656178);
board241656178 = NULL;
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 20, 7) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 7, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 8, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 6, 13, 7) == 1 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 15, 8) == 1 );
assert( gamma_free_fields(board, 8) == 63 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 5, 17) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 4, 8, 18) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );


char* board398418344 = gamma_board(board);
assert( board398418344 != NULL );
assert( strcmp(board398418344, 
"34123.2173.765..3.788\n"
"...8.471541338581..1.\n"
".412324533.2.6..775.1\n"
"6.672.8..742..77.88..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.11547.3855282\n"
"34142..72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.838..175..\n") == 0);
free(board398418344);
board398418344 = NULL;
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 1, 17, 8) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );


char* board977180942 = gamma_board(board);
assert( board977180942 != NULL );
assert( strcmp(board977180942, 
"34123.2173.765..3.788\n"
"...8.4715413385811.1.\n"
".412324533.2.6..775.1\n"
"6.672.8..742..77.88..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.11547.3855282\n"
"34142..72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.8381.175..\n") == 0);
free(board977180942);
board977180942 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 18, 8) == 1 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_golden_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 51 );


char* board828302454 = gamma_board(board);
assert( board828302454 != NULL );
assert( strcmp(board828302454, 
"34123.2173.765..3.788\n"
"...8.471541338581171.\n"
".412324533.2.6..775.1\n"
"6.672.8..742..77.88..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"34142..72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.8381.175..\n") == 0);
free(board828302454);
board828302454 = NULL;
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 7, 20, 0) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_golden_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 5, 19) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 20, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );


char* board931697024 = gamma_board(board);
assert( board931697024 != NULL );
assert( strcmp(board931697024, 
"34123.2173.765..3.788\n"
"...8.471541338581171.\n"
".412324533.2.6..775.1\n"
"6.672.8..742..77.88..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.8381.175.7\n") == 0);
free(board931697024);
board931697024 = NULL;
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_golden_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 6, 19) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 16) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 8, 20) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );


char* board390997181 = gamma_board(board);
assert( board390997181 != NULL );
assert( strcmp(board390997181, 
"34123.2173.765..3.788\n"
".7.8.471541338581171.\n"
".412324533.2.6..775.1\n"
"6.672.8..742..77.88..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.8381.175.7\n") == 0);
free(board390997181);
board390997181 = NULL;
assert( gamma_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 16, 6) == 1 );
assert( gamma_move(board, 3, 19, 7) == 1 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 8, 20) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );


char* board169391654 = gamma_board(board);
assert( board169391654 != NULL );
assert( strcmp(board169391654, 
"34123.2173.765..3.788\n"
".7.8.471541338581171.\n"
".412324533.2.6..77531\n"
"6.672.8..7424.77288..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72.57.3..8.238\n"
"1533137283.86.87..432\n"
"186517.576.8381.175.7\n") == 0);
free(board169391654);
board169391654 = NULL;
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 17, 0) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 17, 1) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );


char* board417323003 = gamma_board(board);
assert( board417323003 != NULL );
assert( strcmp(board417323003, 
"34123.2173.765..3.788\n"
".7.8.471541338581171.\n"
".412324533.2.6..77531\n"
"6.672.8..7424.77288..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72.57.3..8.238\n"
"1533137283.86.87.3432\n"
"186517.576.8381.175.7\n") == 0);
free(board417323003);
board417323003 = NULL;
assert( gamma_move(board, 3, 20, 2) == 0 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 18, 1) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 20) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 18, 9) == 0 );
assert( gamma_golden_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_free_fields(board, 7) == 42 );


char* board135852162 = gamma_board(board);
assert( board135852162 != NULL );
assert( strcmp(board135852162, 
"34123.2173.765..3.788\n"
".7.8.471541338581171.\n"
".41232453342.6..77531\n"
"6.672.8..7424.77288..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72.57.3..8.238\n"
"1533137283.86.87.3432\n"
"1865173576.8381.175.7\n") == 0);
free(board135852162);
board135852162 = NULL;
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );


char* board598257709 = gamma_board(board);
assert( board598257709 != NULL );
assert( strcmp(board598257709, 
"34123.2173.765..3.788\n"
".7.8.471541338581171.\n"
".41232453342.6..77531\n"
"6.672.8..7424.77288..\n"
"2575.56383.7245.....1\n"
"2514365174485288..543\n"
"6527617.1154723855282\n"
"341421.72357.3..8.238\n"
"1533137283.86.87.3432\n"
"1865173576.8381.175.7\n") == 0);
free(board598257709);
board598257709 = NULL;
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 3, 20, 3) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 20, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 19) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 2, 17) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_golden_move(board, 8, 6, 16) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 3, 20, 6) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 7, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 22 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );


gamma_delete(board);

    return 0;
}
