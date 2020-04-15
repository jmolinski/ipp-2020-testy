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
uuid: 958213791
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 8, 4, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 99 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board673990787 = gamma_board(board);
assert( board673990787 != NULL );
assert( strcmp(board673990787, 
"4.13.4.1...1.\n"
".........11..\n"
".....1.41....\n"
".....311.....\n"
"......3......\n"
".4.241......4\n"
"22.3...3.2...\n"
"..1.2.23.....\n") == 0);
free(board673990787);
board673990787 = NULL;
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );


char* board454056902 = gamma_board(board);
assert( board454056902 != NULL );
assert( strcmp(board454056902, 
"4.13.4.1...1.\n"
".........11..\n"
".....1.41....\n"
".....311.....\n"
"......3......\n"
".4.241......4\n"
"22.3...3.2...\n"
"..1.2.23...1.\n") == 0);
free(board454056902);
board454056902 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board492257109 = gamma_board(board);
assert( board492257109 != NULL );
assert( strcmp(board492257109, 
"4.13.4.1...1.\n"
"...132.2.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
"..3.1132.....\n"
"443241343.4.4\n"
"22.33..3.24.2\n"
"2.1321233..13\n") == 0);
free(board492257109);
board492257109 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board116107935 = gamma_board(board);
assert( board116107935 != NULL );
assert( strcmp(board116107935, 
"4.13.4.1...1.\n"
"...132.2.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
"..3.1132.....\n"
"443241343.4.4\n"
"22.33..3.24.2\n"
"2.1321233..13\n") == 0);
free(board116107935);
board116107935 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );


char* board619542158 = gamma_board(board);
assert( board619542158 != NULL );
assert( strcmp(board619542158, 
"4.13.4.1...1.\n"
"...132.2.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
"..3.1132.....\n"
"443241343.4.4\n"
"22.33..3.24.2\n"
"2.1321233.113\n") == 0);
free(board619542158);
board619542158 = NULL;
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board629388747 = gamma_board(board);
assert( board629388747 != NULL );
assert( strcmp(board629388747, 
"4.13.4.1...1.\n"
"...13212.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
".43.1132.....\n"
"443241343.424\n"
"22.33..3.24.2\n"
"2.1321233.113\n") == 0);
free(board629388747);
board629388747 = NULL;
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board806670596 = gamma_board(board);
assert( board806670596 != NULL );
assert( strcmp(board806670596, 
"4.13.4.1...1.\n"
"...13212.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
".43.1132.....\n"
"443241343.424\n"
"22.33..3.24.2\n"
"2.1321233.113\n") == 0);
free(board806670596);
board806670596 = NULL;
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );


char* board115237882 = gamma_board(board);
assert( board115237882 != NULL );
assert( strcmp(board115237882, 
"4.13.4.1...1.\n"
"...13212.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
".43.1132.....\n"
"443241343.424\n"
"22.33..3.24.2\n"
"2.1321233.113\n") == 0);
free(board115237882);
board115237882 = NULL;
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 4, 7, 11) == 0 );


char* board320064750 = gamma_board(board);
assert( board320064750 != NULL );
assert( strcmp(board320064750, 
"4.13.4.1...1.\n"
"...13212.11..\n"
".444.1131..2.\n"
"..3.3311..4..\n"
".4321132.....\n"
"443241343.424\n"
"22.33..3.24.2\n"
"2.1321233.113\n") == 0);
free(board320064750);
board320064750 = NULL;
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );


char* board621875810 = gamma_board(board);
assert( board621875810 != NULL );
assert( strcmp(board621875810, 
"4.13.4.1...1.\n"
"...13212.11..\n"
".444.1131..2.\n"
"..3.3311..4.3\n"
".43211324....\n"
"443241343.424\n"
"22.334.3224.2\n"
"2.1321233.113\n") == 0);
free(board621875810);
board621875810 = NULL;
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_golden_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_golden_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );


char* board992838074 = gamma_board(board);
assert( board992838074 != NULL );
assert( strcmp(board992838074, 
"4113.4.1...1.\n"
"...13212.11..\n"
".444.1131.12.\n"
"..3.3311..4.3\n"
".43211324....\n"
"443241343.424\n"
"22.33423224.2\n"
"2.1321233.113\n") == 0);
free(board992838074);
board992838074 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board456914569 = gamma_board(board);
assert( board456914569 != NULL );
assert( strcmp(board456914569, 
"4113.4.1..11.\n"
"4..13212.11..\n"
".444.1131.12.\n"
"..3.3311..4.3\n"
".43211324...1\n"
"4432413432424\n"
"22.33423224.2\n"
"2.1321233.113\n") == 0);
free(board456914569);
board456914569 = NULL;
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 8 );


char* board801521866 = gamma_board(board);
assert( board801521866 != NULL );
assert( strcmp(board801521866, 
"4113.4.1..11.\n"
"4..13212.11..\n"
".444.1131.12.\n"
"..3.3311..4.3\n"
".43211324...1\n"
"4432413432424\n"
"22.33423224.2\n"
"2.1321233.113\n") == 0);
free(board801521866);
board801521866 = NULL;
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );


char* board295037324 = gamma_board(board);
assert( board295037324 != NULL );
assert( strcmp(board295037324, 
"4113.4.1..11.\n"
"4..13212.11..\n"
".444.1131.12.\n"
"..3.3311..4.3\n"
".43211324...1\n"
"4432413432424\n"
"22.33423224.2\n"
"2.1321233.113\n") == 0);
free(board295037324);
board295037324 = NULL;
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );


char* board645905634 = gamma_board(board);
assert( board645905634 != NULL );
assert( strcmp(board645905634, 
"4113.4.1..11.\n"
"4..13212.11..\n"
".444.1131.12.\n"
"..3.3311..4.3\n"
".43211324...1\n"
"4432413432424\n"
"22.33423224.2\n"
"2.1321233.113\n") == 0);
free(board645905634);
board645905634 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 15 );


gamma_delete(board);

    return 0;
}
