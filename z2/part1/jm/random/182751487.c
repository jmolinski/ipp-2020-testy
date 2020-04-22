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
uuid: 182751487
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );


char* board994913552 = gamma_board(board);
assert( board994913552 != NULL );
assert( strcmp(board994913552, 
".....3...4\n"
"..........\n"
"..........\n"
".........2\n"
"..........\n"
"....4..2..\n"
"..2....1..\n"
"..1.......\n") == 0);
free(board994913552);
board994913552 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board820655896 = gamma_board(board);
assert( board820655896 != NULL );
assert( strcmp(board820655896, 
"....23..14\n"
".........3\n"
"4.........\n"
"......4..2\n"
"..........\n"
"....4..2..\n"
"..2....1..\n"
"..14......\n") == 0);
free(board820655896);
board820655896 = NULL;
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );


char* board538995838 = gamma_board(board);
assert( board538995838 != NULL );
assert( strcmp(board538995838, 
"1...23..14\n"
".........3\n"
"4.....1...\n"
"......4..2\n"
"....3.....\n"
"....43.2..\n"
"4.2....1..\n"
"..14......\n") == 0);
free(board538995838);
board538995838 = NULL;
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 1, 0) == 1 );


char* board380434577 = gamma_board(board);
assert( board380434577 != NULL );
assert( strcmp(board380434577, 
"1...23..14\n"
"...4.....3\n"
"4.....1...\n"
"......4..2\n"
"....32....\n"
"..4.4332..\n"
"412....1..\n"
".314......\n") == 0);
free(board380434577);
board380434577 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 3, 9) == 0 );


char* board959016957 = gamma_board(board);
assert( board959016957 != NULL );
assert( strcmp(board959016957, 
"11..23..14\n"
"4234.....3\n"
"41...31...\n"
"1....24.22\n"
"1...32....\n"
"..4443323.\n"
"412....1..\n"
".314.2...2\n") == 0);
free(board959016957);
board959016957 = NULL;
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );


char* board633031160 = gamma_board(board);
assert( board633031160 != NULL );
assert( strcmp(board633031160, 
"1132233.14\n"
"42342...33\n"
"41..431...\n"
"1...224.22\n"
"1..332....\n"
"..4443323.\n"
"412....1..\n"
".314.2..22\n") == 0);
free(board633031160);
board633031160 = NULL;
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );


char* board261838234 = gamma_board(board);
assert( board261838234 != NULL );
assert( strcmp(board261838234, 
"1132233.14\n"
"42342.1.33\n"
"41..431...\n"
"1...224.22\n"
"113332....\n"
"..4443323.\n"
"412..3.12.\n"
".314.2..22\n") == 0);
free(board261838234);
board261838234 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board902415870 = gamma_board(board);
assert( board902415870 != NULL );
assert( strcmp(board902415870, 
"1132233.14\n"
"42342.1.33\n"
"41..431...\n"
"1..2224.22\n"
"113332....\n"
"..4443323.\n"
"412..3.12.\n"
".314.2..22\n") == 0);
free(board902415870);
board902415870 = NULL;
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board588895118 = gamma_board(board);
assert( board588895118 != NULL );
assert( strcmp(board588895118, 
"1132233.14\n"
"42342.1.33\n"
"41..431.3.\n"
"1..2224.22\n"
"113332....\n"
"..4443323.\n"
"412..3.12.\n"
".31442..22\n") == 0);
free(board588895118);
board588895118 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
