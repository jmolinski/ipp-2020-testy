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
uuid: 472951143
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 9, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );


char* board410228039 = gamma_board(board);
assert( board410228039 != NULL );
assert( strcmp(board410228039, 
"..1..........\n"
".....4.......\n"
".............\n"
"......2......\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n") == 0);
free(board410228039);
board410228039 = NULL;
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_golden_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_golden_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_free_fields(board, 8) == 113 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_golden_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_golden_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_free_fields(board, 8) == 102 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 101 );


char* board187831265 = gamma_board(board);
assert( board187831265 != NULL );
assert( strcmp(board187831265, 
"8.1..2..35..4\n"
".....4986....\n"
"......2......\n"
"..55..9......\n"
"...4..9......\n"
".....1....36.\n"
"..2.....8..6.\n"
"..94.....76..\n"
".....3.......\n"
"..6....9.....\n") == 0);
free(board187831265);
board187831265 = NULL;
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_free_fields(board, 9) == 72 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 71 );


char* board444723208 = gamma_board(board);
assert( board444723208 != NULL );
assert( strcmp(board444723208, 
"8.1..24335..4\n"
"65...4986.7..\n"
"1.129.2......\n"
"6.55..9......\n"
".2.4..9....6.\n"
"67...13..6362\n"
"..24.1.987.6.\n"
".594.8...76.3\n"
"6....3...3.9.\n"
"8.663..9.....\n") == 0);
free(board444723208);
board444723208 = NULL;
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


char* board397578208 = gamma_board(board);
assert( board397578208 != NULL );
assert( strcmp(board397578208, 
"8.1..24335..4\n"
"65...4986.7..\n"
"1.129.2......\n"
"6.55..9......\n"
".2.4..9....6.\n"
"67...13..6362\n"
".724.1.987.6.\n"
".594.8...76.3\n"
"6....3...3.9.\n"
"8.663..9.....\n") == 0);
free(board397578208);
board397578208 = NULL;
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 12, 8) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );


char* board311367902 = gamma_board(board);
assert( board311367902 != NULL );
assert( strcmp(board311367902, 
"8.1..24335..4\n"
"65.7.4986.768\n"
"15129822.....\n"
"6.55.39......\n"
".2.4..9..4.6.\n"
"673..13..6362\n"
".724.12987.6.\n"
".594.88.476.3\n"
"6....37..3.9.\n"
"8.6635.95..4.\n") == 0);
free(board311367902);
board311367902 = NULL;
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );


char* board405644316 = gamma_board(board);
assert( board405644316 != NULL );
assert( strcmp(board405644316, 
"8.19724335.64\n"
"65.784986.768\n"
"15129822.....\n"
"6555.39.5.2..\n"
".234..9..4.6.\n"
"673.4134.6362\n"
"1724612987.6.\n"
".594.88.476.3\n"
"6..5.372.3.9.\n"
"8.6635.95..4.\n") == 0);
free(board405644316);
board405644316 = NULL;
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );


char* board518815976 = gamma_board(board);
assert( board518815976 != NULL );
assert( strcmp(board518815976, 
"8.19724335.64\n"
"65.784986.768\n"
"15129822.....\n"
"6555.39.5.2..\n"
".234..9..4.6.\n"
"673.4134.6362\n"
"1724612987.6.\n"
".594.88.476.3\n"
"6..5.372.3.95\n"
"8.6635.95..4.\n") == 0);
free(board518815976);
board518815976 = NULL;
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_golden_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 10, 0) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board928589795 = gamma_board(board);
assert( board928589795 != NULL );
assert( strcmp(board928589795, 
"8.19724335664\n"
"65.784986.768\n"
"15129822.....\n"
"6555.3945.2..\n"
".234.29..4.6.\n"
"673.4134.6362\n"
"1724617987.6.\n"
".594.88.47623\n"
"65.5.372.3.95\n"
"886635.95.94.\n") == 0);
free(board928589795);
board928589795 = NULL;
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );


char* board568113872 = gamma_board(board);
assert( board568113872 != NULL );
assert( strcmp(board568113872, 
"8.19724335664\n"
"65.784986.768\n"
"15129822.....\n"
"6555.394522..\n"
".234.29.14.6.\n"
"673.4134.6362\n"
"1724617987.66\n"
".594.88.47623\n"
"65.5.372.3.95\n"
"886635.95.94.\n") == 0);
free(board568113872);
board568113872 = NULL;
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 12, 6) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_golden_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 12, 8) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );


char* board100333375 = gamma_board(board);
assert( board100333375 != NULL );
assert( strcmp(board100333375, 
"8.19724335664\n"
"652784986.768\n"
"15129822.....\n"
"6555.394522.9\n"
"1234329.14.6.\n"
"673.4134.6362\n"
"1724617987.66\n"
".594788947623\n"
"65.5.372.3895\n"
"886635.95.94.\n") == 0);
free(board100333375);
board100333375 = NULL;
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_golden_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 9, 11, 6) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );


char* board242320319 = gamma_board(board);
assert( board242320319 != NULL );
assert( strcmp(board242320319, 
"8.19724335664\n"
"652784986.768\n"
"15129822.....\n"
"6555.39452299\n"
"1234329.14.6.\n"
"673.4134.6362\n"
"1724617987.66\n"
".594788947623\n"
"65.5.372.3895\n"
"886635.95.94.\n") == 0);
free(board242320319);
board242320319 = NULL;
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );


char* board735746744 = gamma_board(board);
assert( board735746744 != NULL );
assert( strcmp(board735746744, 
"8.19724335664\n"
"652784986.768\n"
"15129822.....\n"
"6555.39452299\n"
"1234329.14.6.\n"
"673.4134.6362\n"
"1724617987.66\n"
".594788947623\n"
"65.5.372.3895\n"
"886635.95.94.\n") == 0);
free(board735746744);
board735746744 = NULL;
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );


char* board958084268 = gamma_board(board);
assert( board958084268 != NULL );
assert( strcmp(board958084268, 
"8.19724335664\n"
"652784986.768\n"
"15129822.....\n"
"6555.39452299\n"
"1234329.14.6.\n"
"673.4134.6362\n"
"1724617987.66\n"
".594788947623\n"
"65.5.372.3895\n"
"886635.95.94.\n") == 0);
free(board958084268);
board958084268 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );


gamma_delete(board);

    return 0;
}
