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
uuid: 387750792
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 13, 5, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );


char* board777080385 = gamma_board(board);
assert( board777080385 != NULL );
assert( strcmp(board777080385, 
"..........\n"
"..........\n"
".1........\n"
"..........\n"
"..........\n"
"..........\n"
"........1.\n"
"...3.4....\n"
".....23..5\n"
"..........\n"
"1.........\n"
".......4..\n"
".........3\n") == 0);
free(board777080385);
board777080385 = NULL;
assert( gamma_move(board, 4, 3, 2) == 1 );


char* board866403843 = gamma_board(board);
assert( board866403843 != NULL );
assert( strcmp(board866403843, 
"..........\n"
"..........\n"
".1........\n"
"..........\n"
"..........\n"
"..........\n"
"........1.\n"
"...3.4....\n"
".....23..5\n"
"..........\n"
"1..4......\n"
".......4..\n"
".........3\n") == 0);
free(board866403843);
board866403843 = NULL;
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 113 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );


char* board682657472 = gamma_board(board);
assert( board682657472 != NULL );
assert( strcmp(board682657472, 
"..........\n"
"..........\n"
".1........\n"
"5.........\n"
"..........\n"
"4.1.......\n"
".1......1.\n"
"...3.4....\n"
".....23..5\n"
".5........\n"
"1..4......\n"
"2......4..\n"
"1..5.....3\n") == 0);
free(board682657472);
board682657472 = NULL;
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );


char* board575917747 = gamma_board(board);
assert( board575917747 != NULL );
assert( strcmp(board575917747, 
"..........\n"
"..........\n"
".1........\n"
"5.........\n"
"..........\n"
"4.1.......\n"
".1......1.\n"
"2..3.4....\n"
".....23..5\n"
".5....3...\n"
"1..4......\n"
"2......4.5\n"
"1..5.....3\n") == 0);
free(board575917747);
board575917747 = NULL;
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );


char* board770304669 = gamma_board(board);
assert( board770304669 != NULL );
assert( strcmp(board770304669, 
"4.........\n"
"..4.......\n"
".1........\n"
"5.........\n"
"..........\n"
"4.1.....5.\n"
".1......1.\n"
"2..3.4....\n"
"1....23..5\n"
".5..3.3...\n"
"1..4......\n"
"2......4.5\n"
"1..5...3.3\n") == 0);
free(board770304669);
board770304669 = NULL;
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );


char* board893411838 = gamma_board(board);
assert( board893411838 != NULL );
assert( strcmp(board893411838, 
"4........4\n"
"..4.......\n"
".1........\n"
"5....2...3\n"
"..........\n"
"4.11....5.\n"
".1..2...1.\n"
"23.3.4.4..\n"
"14..323..5\n"
".5..3.3...\n"
"1..4......\n"
"2...2..4.5\n"
"1..5...3.3\n") == 0);
free(board893411838);
board893411838 = NULL;
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 80 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );


char* board740456123 = gamma_board(board);
assert( board740456123 != NULL );
assert( strcmp(board740456123, 
"4..2.....4\n"
"..4..51..1\n"
".1........\n"
"5....2...3\n"
".....2..5.\n"
"4.11...55.\n"
".1..2...11\n"
"23.3.414..\n"
"14.3323..5\n"
".53.3.3...\n"
"1..42.....\n"
"25.42..445\n"
"14.5..2353\n") == 0);
free(board740456123);
board740456123 = NULL;
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board449767086 = gamma_board(board);
assert( board449767086 != NULL );
assert( strcmp(board449767086, 
"4..22....4\n"
"..4..51..1\n"
".1..4.....\n"
"5....2...3\n"
".....2..5.\n"
"4.11.2.55.\n"
".15.2.4.11\n"
"23.3.4144.\n"
"14.33233.5\n"
".53.3.3.11\n"
"1.242....3\n"
"25242..445\n"
"14.5..2353\n") == 0);
free(board449767086);
board449767086 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );


char* board735255072 = gamma_board(board);
assert( board735255072 != NULL );
assert( strcmp(board735255072, 
"4..22....4\n"
"..4.451..1\n"
".1..4.....\n"
"5....2...3\n"
".....2..5.\n"
"4.11.2.55.\n"
"215.2.4.11\n"
"23.3.4144.\n"
"14.3323355\n"
".5313.3.11\n"
"1.242....3\n"
"25242..445\n"
"14.5..2353\n") == 0);
free(board735255072);
board735255072 = NULL;
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board936777239 = gamma_board(board);
assert( board936777239 != NULL );
assert( strcmp(board936777239, 
"4..22....4\n"
"..4.451..1\n"
".1..4.....\n"
"5....2...3\n"
".....2..5.\n"
"4.11.2.55.\n"
"215.2.4.11\n"
"23.3.4144.\n"
"14.3323355\n"
".5313.3.11\n"
"1.242....3\n"
"25242..445\n"
"14.5..1353\n") == 0);
free(board936777239);
board936777239 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board611256870 = gamma_board(board);
assert( board611256870 != NULL );
assert( strcmp(board611256870, 
"4..22....4\n"
"..4.451..1\n"
".1.24.3..1\n"
"55.1.2.4.3\n"
"..5..2..52\n"
"4.11.2.55.\n"
"215.2.4.11\n"
"23.3.4144.\n"
"1413323355\n"
"3531343.11\n"
"1.2422..13\n"
"25242..445\n"
"14.5..1353\n") == 0);
free(board611256870);
board611256870 = NULL;
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_golden_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_golden_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );


char* board256751636 = gamma_board(board);
assert( board256751636 != NULL );
assert( strcmp(board256751636, 
"4..225..14\n"
"..4.451..1\n"
".1.24.3..1\n"
"55.1.2.4.3\n"
"..4..22452\n"
"4.11.2.55.\n"
"215.2.4111\n"
"23.3.4144.\n"
"1413323355\n"
"3531343.11\n"
"1.2422..13\n"
"25242..445\n"
"15.5..1353\n") == 0);
free(board256751636);
board256751636 = NULL;
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );


char* board133577654 = gamma_board(board);
assert( board133577654 != NULL );
assert( strcmp(board133577654, 
"43.225..14\n"
".34.451..1\n"
".1.2443..1\n"
"55.1.2.4.3\n"
"2.4..22452\n"
"411112.55.\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"132422..13\n"
"25242..445\n"
"15.51.1353\n") == 0);
free(board133577654);
board133577654 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


char* board663703448 = gamma_board(board);
assert( board663703448 != NULL );
assert( strcmp(board663703448, 
"43.225..14\n"
".34.451..1\n"
".1.2443..1\n"
"55.1.2.4.3\n"
"2.4..22452\n"
"411112.55.\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"132422..13\n"
"25242..445\n"
"15.51.1353\n") == 0);
free(board663703448);
board663703448 = NULL;
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 29 );


char* board539944498 = gamma_board(board);
assert( board539944498 != NULL );
assert( strcmp(board539944498, 
"43.225..14\n"
".34.451..1\n"
".1.2443..1\n"
"55.1.2.4.3\n"
"2.4..22452\n"
"411112.55.\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"132422..13\n"
"25242..445\n"
"15.51.1353\n") == 0);
free(board539944498);
board539944498 = NULL;
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board927967230 = gamma_board(board);
assert( board927967230 != NULL );
assert( strcmp(board927967230, 
"43.225..14\n"
"434.451..1\n"
".1.24435.1\n"
"55.1.2.4.3\n"
"254..22452\n"
"4111124552\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"132422..13\n"
"25242..445\n"
"15.5131353\n") == 0);
free(board927967230);
board927967230 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board464805497 = gamma_board(board);
assert( board464805497 != NULL );
assert( strcmp(board464805497, 
"43.225..14\n"
"434.451..1\n"
".1.24435.1\n"
"55.1.2.4.3\n"
"254..22452\n"
"4111124552\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"1324224.13\n"
"25242..445\n"
"15.5131353\n") == 0);
free(board464805497);
board464805497 = NULL;
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );


char* board363023357 = gamma_board(board);
assert( board363023357 != NULL );
assert( strcmp(board363023357, 
"432225..14\n"
"434.451.31\n"
".1.24435.1\n"
"55.1.2.4.3\n"
"254..22452\n"
"4111124552\n"
"215.254111\n"
"2323.41445\n"
"1413323355\n"
"3531343.11\n"
"1324224.13\n"
"25242..445\n"
"15.5131353\n") == 0);
free(board363023357);
board363023357 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
