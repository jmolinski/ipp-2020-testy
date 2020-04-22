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
uuid: 334352259
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 5, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );


char* board370915013 = gamma_board(board);
assert( board370915013 != NULL );
assert( strcmp(board370915013, 
"...........\n"
"...........\n"
"...........\n"
".......2...\n"
"...........\n"
"...........\n"
"...3.......\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
".........1.\n") == 0);
free(board370915013);
board370915013 = NULL;
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board559575074 = gamma_board(board);
assert( board559575074 != NULL );
assert( strcmp(board559575074, 
".......1...\n"
"........1..\n"
"..3...4....\n"
".......23..\n"
".2.4.......\n"
"....1..2...\n"
"..13.5...31\n"
"....5......\n"
"..5......4.\n"
"..5......2.\n"
"2.......4..\n"
"2..3.......\n"
".......5.1.\n") == 0);
free(board559575074);
board559575074 = NULL;
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );


char* board465909867 = gamma_board(board);
assert( board465909867 != NULL );
assert( strcmp(board465909867, 
".......1..4\n"
"........1..\n"
"..3.1.41...\n"
".......232.\n"
"42.4..2....\n"
"2...1.52...\n"
"..13.5..531\n"
"...153.....\n"
"..5...2..4.\n"
"..52....52.\n"
"25...3..4..\n"
"23.3.13....\n"
"......15.1.\n") == 0);
free(board465909867);
board465909867 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );


char* board319958287 = gamma_board(board);
assert( board319958287 != NULL );
assert( strcmp(board319958287, 
"..1.3..1..4\n"
"....54311..\n"
"..3.1.41.5.\n"
"...2.1.2323\n"
"4214..23...\n"
"2...1.521..\n"
"..13.5..531\n"
"...1532.2.5\n"
"..5...21.4.\n"
"..52.2..52.\n"
"25...35.44.\n"
"2333213142.\n"
"2.....15.13\n") == 0);
free(board319958287);
board319958287 = NULL;
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );


char* board680965452 = gamma_board(board);
assert( board680965452 != NULL );
assert( strcmp(board680965452, 
"..1.3..1..4\n"
"....54311..\n"
"..3.1.4115.\n"
"...2.1.2323\n"
"42144.233..\n"
"2...1.521..\n"
"..13.5..531\n"
"...1532.2.5\n"
"..55..21.4.\n"
"..52.2..52.\n"
"25...35.44.\n"
"2333213142.\n"
"2....415.13\n") == 0);
free(board680965452);
board680965452 = NULL;
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 9, 4) == 0 );


char* board727109004 = gamma_board(board);
assert( board727109004 != NULL );
assert( strcmp(board727109004, 
"1.153..1..4\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4..2.132323\n"
"42144.233..\n"
"2.1412521..\n"
"2.13.53.531\n"
"331153242.5\n"
"4.551321.4.\n"
"..5212.2525\n"
"25...35.44.\n"
"23332131424\n"
"232.1415513\n") == 0);
free(board727109004);
board727109004 = NULL;
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board990167797 = gamma_board(board);
assert( board990167797 != NULL );
assert( strcmp(board990167797, 
"1.153..1..4\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4.22.132323\n"
"42144.233..\n"
"2.1412521.4\n"
"2.13.53.531\n"
"331153242.5\n"
"43551321.4.\n"
"..5212.2525\n"
"255..35.44.\n"
"23332131424\n"
"232.1415513\n") == 0);
free(board990167797);
board990167797 = NULL;
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );


char* board518349914 = gamma_board(board);
assert( board518349914 != NULL );
assert( strcmp(board518349914, 
"1.153..1..4\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4.22.132323\n"
"42144.233..\n"
"2.1412521.4\n"
"2.13.53.531\n"
"331153242.5\n"
"43551321.4.\n"
"..5212.2525\n"
"255..35.44.\n"
"23332131424\n"
"232.1415513\n") == 0);
free(board518349914);
board518349914 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


char* board947512033 = gamma_board(board);
assert( board947512033 != NULL );
assert( strcmp(board947512033, 
"1.153..1..4\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4.22.132323\n"
"42144.233..\n"
"2.1412521.4\n"
"2.13.53.531\n"
"331153242.5\n"
"43551321.4.\n"
"..5212.2525\n"
"255..35.44.\n"
"23332131424\n"
"232.1415513\n") == 0);
free(board947512033);
board947512033 = NULL;
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_golden_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );


char* board948940744 = gamma_board(board);
assert( board948940744 != NULL );
assert( strcmp(board948940744, 
"1.153451334\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4.221132323\n"
"421443233..\n"
"2.1412521.4\n"
"2.135533431\n"
"33115324255\n"
"43551321.4.\n"
"1.5212.2525\n"
"255..35.44.\n"
"23332131424\n"
"23211415513\n") == 0);
free(board948940744);
board948940744 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board333656995 = gamma_board(board);
assert( board333656995 != NULL );
assert( strcmp(board333656995, 
"1.153451334\n"
"..5.54311.2\n"
"3.3.1.41155\n"
"4.221132323\n"
"421443233..\n"
"2.1412521.4\n"
"2.135533431\n"
"33115324255\n"
"43551321.4.\n"
"1.521252525\n"
"255..35.445\n"
"23332131324\n"
"23211415513\n") == 0);
free(board333656995);
board333656995 = NULL;
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


char* board680752748 = gamma_board(board);
assert( board680752748 != NULL );
assert( strcmp(board680752748, 
"1.153451334\n"
"..5.54311.2\n"
"3.351.41155\n"
"4.221132323\n"
"421443233..\n"
"2.1412521.4\n"
"2.135533431\n"
"33115324255\n"
"4355132154.\n"
"1.521252525\n"
"255..35.445\n"
"23332131324\n"
"23211415513\n") == 0);
free(board680752748);
board680752748 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );


gamma_delete(board);

    return 0;
}
