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
uuid: 297656114
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 5, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_move(board, 3, 1, 2) == 1 );


char* board791620862 = gamma_board(board);
assert( board791620862 != NULL );
assert( strcmp(board791620862, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"23.......\n"
".........\n"
"....1....\n") == 0);
free(board791620862);
board791620862 = NULL;
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 108 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_free_fields(board, 1) == 106 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_free_fields(board, 2) == 104 );


char* board130686898 = gamma_board(board);
assert( board130686898 != NULL );
assert( strcmp(board130686898, 
"2......1.\n"
"...3.5...\n"
".........\n"
".........\n"
"........5\n"
"....2....\n"
".........\n"
".........\n"
"....1....\n"
".........\n"
"23....1..\n"
"24.......\n"
"....1....\n") == 0);
free(board130686898);
board130686898 = NULL;
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 8, 12) == 0 );


char* board695785903 = gamma_board(board);
assert( board695785903 != NULL );
assert( strcmp(board695785903, 
"2.14..115\n"
"3..3.5.3.\n"
".34.2.4..\n"
"....2...2\n"
".1...44.5\n"
"..5.2..31\n"
"1...3.414\n"
"...44551.\n"
".5..1..14\n"
"5..411315\n"
"23.2..123\n"
"25.1.351.\n"
"..331.5.2\n") == 0);
free(board695785903);
board695785903 = NULL;
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board611165457 = gamma_board(board);
assert( board611165457 != NULL );
assert( strcmp(board611165457, 
"2414..115\n"
"3..3.5.3.\n"
".34.2.4..\n"
"..2.2...2\n"
".1...44.5\n"
"1.5.2..31\n"
"1...3.414\n"
"4..44551.\n"
".5..12.14\n"
"5..411315\n"
"23.2..123\n"
"25.1.351.\n"
"..331.5.2\n") == 0);
free(board611165457);
board611165457 = NULL;
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );


char* board367663267 = gamma_board(board);
assert( board367663267 != NULL );
assert( strcmp(board367663267, 
"2414..115\n"
"3..3.5.3.\n"
".34.2.42.\n"
"..2.2...2\n"
".1...44.5\n"
"1.5.2.431\n"
"1...3.414\n"
"4..44551.\n"
".5..12.14\n"
"5..411315\n"
"23.2..123\n"
"25.1.3514\n"
"..331.5.2\n") == 0);
free(board367663267);
board367663267 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );


char* board402304175 = gamma_board(board);
assert( board402304175 != NULL );
assert( strcmp(board402304175, 
"2414..115\n"
"3..3.5.3.\n"
".34.2.42.\n"
"..2.2...2\n"
".1...44.5\n"
"1.5.2.431\n"
"1...3.414\n"
"4..44551.\n"
".5..12.14\n"
"5..411315\n"
"23.2..123\n"
"25.1.3514\n"
"..331.5.2\n") == 0);
free(board402304175);
board402304175 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );


char* board205439198 = gamma_board(board);
assert( board205439198 != NULL );
assert( strcmp(board205439198, 
"2414..115\n"
"3333.5.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.5.2.431\n"
"1...3.414\n"
"4.544551.\n"
".5..12.14\n"
"5..411315\n"
"232223123\n"
"23.1.3514\n"
"2.331.5.2\n") == 0);
free(board205439198);
board205439198 = NULL;
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );


char* board668626520 = gamma_board(board);
assert( board668626520 != NULL );
assert( strcmp(board668626520, 
"2414..115\n"
"3333.5.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.522.431\n"
"1.3.3.414\n"
"4.5445511\n"
".5..12.14\n"
"5..411315\n"
"232223123\n"
"23.1.3514\n"
"2.331.5.2\n") == 0);
free(board668626520);
board668626520 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board847038904 = gamma_board(board);
assert( board847038904 != NULL );
assert( strcmp(board847038904, 
"2414..115\n"
"3333.5.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.522.431\n"
"1.3.3.414\n"
"455445511\n"
".5..12.14\n"
"5..411315\n"
"232223123\n"
"23.1.3514\n"
"2.331.5.2\n") == 0);
free(board847038904);
board847038904 = NULL;
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board857601637 = gamma_board(board);
assert( board857601637 != NULL );
assert( strcmp(board857601637, 
"2414..115\n"
"3333.5.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.522.431\n"
"1.3.3.414\n"
"455445511\n"
".5..12.14\n"
"5..411315\n"
"232223123\n"
"23.1.3514\n"
"2.331.5.2\n") == 0);
free(board857601637);
board857601637 = NULL;
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );


char* board424536562 = gamma_board(board);
assert( board424536562 != NULL );
assert( strcmp(board424536562, 
"2414..115\n"
"3333.5.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.522.431\n"
"1.3.3.414\n"
"455445511\n"
".5..12.14\n"
"5..411315\n"
"232223123\n"
"23.1.3514\n"
"2.331.5.2\n") == 0);
free(board424536562);
board424536562 = NULL;
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );


char* board854746096 = gamma_board(board);
assert( board854746096 != NULL );
assert( strcmp(board854746096, 
"2414..115\n"
"333355.3.\n"
".34.2442.\n"
"..2.2...2\n"
"51...44.5\n"
"1.5222431\n"
"1.3.3.414\n"
"455445511\n"
"45..12.14\n"
"5..411315\n"
"232223123\n"
"23.133514\n"
"2.331.5.2\n") == 0);
free(board854746096);
board854746096 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board114698978 = gamma_board(board);
assert( board114698978 != NULL );
assert( strcmp(board114698978, 
"2414.1115\n"
"333355.3.\n"
".34.2442.\n"
"..2.23..2\n"
"51...44.5\n"
"1.5222431\n"
"113.3.414\n"
"455445511\n"
"45..12.14\n"
"5..411315\n"
"232223123\n"
"23.133514\n"
"2.331.5.2\n") == 0);
free(board114698978);
board114698978 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 4) == 0 );


gamma_delete(board);

    return 0;
}
