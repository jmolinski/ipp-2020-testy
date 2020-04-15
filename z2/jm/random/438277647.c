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
uuid: 438277647
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 13, 9, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_free_fields(board, 3) == 127 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_free_fields(board, 8) == 122 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );


char* board132862187 = gamma_board(board);
assert( board132862187 != NULL );
assert( strcmp(board132862187, 
"..........\n"
"......3...\n"
"..........\n"
"9.4.25.4..\n"
"7...1...2.\n"
"1..7......\n"
".4..35...7\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..6.......\n") == 0);
free(board132862187);
board132862187 = NULL;
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_free_fields(board, 9) == 111 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );


char* board851145841 = gamma_board(board);
assert( board851145841 != NULL );
assert( strcmp(board851145841, 
"..........\n"
"......3...\n"
"..........\n"
"9.4.25.4..\n"
"7...1...2.\n"
"1..7......\n"
".46.358..7\n"
".....5.9.6\n"
"..........\n"
"..4.......\n"
".9......3.\n"
".........1\n"
"..6.......\n") == 0);
free(board851145841);
board851145841 = NULL;
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_golden_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 104 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board260654031 = gamma_board(board);
assert( board260654031 != NULL );
assert( strcmp(board260654031, 
"........5.\n"
"......3...\n"
"9.....2...\n"
"9.4.25.4..\n"
"7.731...25\n"
"1..7......\n"
".46.358..7\n"
".....6.9.6\n"
"4.........\n"
"..4..6....\n"
".9.....93.\n"
".........1\n"
".46.......\n") == 0);
free(board260654031);
board260654031 = NULL;
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 92 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board315102948 = gamma_board(board);
assert( board315102948 != NULL );
assert( strcmp(board315102948, 
"........5.\n"
"......3...\n"
"9.....2...\n"
"9.4.25.4..\n"
"7.731...25\n"
"1..7......\n"
"546.358..7\n"
".....6.9.6\n"
"4...2.....\n"
"..4..6...9\n"
".9.....93.\n"
".........1\n"
".46......9\n") == 0);
free(board315102948);
board315102948 = NULL;
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_free_fields(board, 1) == 76 );


char* board272510004 = gamma_board(board);
assert( board272510004 != NULL );
assert( strcmp(board272510004, 
"1.......5.\n"
"......3...\n"
"9.2...2...\n"
"9.4.25.4..\n"
"7.731...25\n"
"17.76...79\n"
"546.358..7\n"
".5..76.976\n"
"4..42.....\n"
"..4..6...9\n"
".9....4938\n"
"3...8...31\n"
".46......9\n") == 0);
free(board272510004);
board272510004 = NULL;
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board903893968 = gamma_board(board);
assert( board903893968 != NULL );
assert( strcmp(board903893968, 
"1.......5.\n"
"......3...\n"
"9.2...2...\n"
"9.4.25.4..\n"
"7.7312..25\n"
"17.76...79\n"
"546.358..7\n"
".5..76.976\n"
"4..42.....\n"
"..4..6...9\n"
".9....4938\n"
"3...8...31\n"
".46......9\n") == 0);
free(board903893968);
board903893968 = NULL;
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );


char* board747769390 = gamma_board(board);
assert( board747769390 != NULL );
assert( strcmp(board747769390, 
"1.......5.\n"
"......3...\n"
"9.2...2...\n"
"9.4.25.4.6\n"
"7.7312..25\n"
"17.76...79\n"
"546.358..7\n"
".5..76.976\n"
"4..42.....\n"
"..4..6...9\n"
".9....4938\n"
"3...8...31\n"
".46......9\n") == 0);
free(board747769390);
board747769390 = NULL;
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_golden_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board503073795 = gamma_board(board);
assert( board503073795 != NULL );
assert( strcmp(board503073795, 
"1.8.....5.\n"
"......3...\n"
"9.2...2...\n"
"9.4.25.4.6\n"
"7.7312..25\n"
"17.76...79\n"
"546.358..7\n"
".5..76.976\n"
"4..42.....\n"
"984..6...9\n"
".9....4938\n"
"3...8...31\n"
".46..1...9\n") == 0);
free(board503073795);
board503073795 = NULL;
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );


char* board625413341 = gamma_board(board);
assert( board625413341 != NULL );
assert( strcmp(board625413341, 
"1.8.....5.\n"
"......3...\n"
"972...2...\n"
"9.4.25.4.6\n"
"7.7312..25\n"
"17.76...79\n"
"546.358..7\n"
".5..76.976\n"
"4..42.5...\n"
"984..6.7.9\n"
".95...4938\n"
"3...8...31\n"
".46..1...9\n") == 0);
free(board625413341);
board625413341 = NULL;
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );


char* board995344453 = gamma_board(board);
assert( board995344453 != NULL );
assert( strcmp(board995344453, 
"1.8.....5.\n"
"......3...\n"
"972...2.3.\n"
"9.4.25.4.6\n"
"747312..25\n"
"17.76.2.79\n"
"546.352..7\n"
".5..76.976\n"
"4..42.5...\n"
"984..6.7.9\n"
".95...4938\n"
"3...8...31\n"
".46.91...9\n") == 0);
free(board995344453);
board995344453 = NULL;
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 0, 11) == 1 );


char* board198083025 = gamma_board(board);
assert( board198083025 != NULL );
assert( strcmp(board198083025, 
"1.8.....5.\n"
"8.....3...\n"
"972...2.3.\n"
"9.4.25.4.6\n"
"747312..25\n"
"17.76.2.79\n"
"546.352..7\n"
".5..76.976\n"
"4..42.5...\n"
"984..6.7.9\n"
".95...4938\n"
"3...8...31\n"
".46.91...9\n") == 0);
free(board198083025);
board198083025 = NULL;
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );


char* board125561364 = gamma_board(board);
assert( board125561364 != NULL );
assert( strcmp(board125561364, 
"1.8.....5.\n"
"8.....3...\n"
"972...2.3.\n"
"9.4.25.4.6\n"
"747312..25\n"
"17.76.2.79\n"
"546.352..7\n"
".5..76.976\n"
"4.942.5...\n"
"984..6.7.9\n"
".95.4.4938\n"
"3...8..231\n"
".46.91...9\n") == 0);
free(board125561364);
board125561364 = NULL;
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_free_fields(board, 9) == 57 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_golden_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );


char* board925313609 = gamma_board(board);
assert( board925313609 != NULL );
assert( strcmp(board925313609, 
"1884.6..5.\n"
"81....3...\n"
"972.1.2.3.\n"
"9.4.25.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.876.976\n"
"4.942.5...\n"
"9849.6.7.9\n"
".958414938\n"
"3.7.84.231\n"
"246.91..29\n") == 0);
free(board925313609);
board925313609 = NULL;
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board888586704 = gamma_board(board);
assert( board888586704 != NULL );
assert( strcmp(board888586704, 
"1884.6..53\n"
"81....3...\n"
"972.1.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.876.976\n"
"4.942.5...\n"
"9849.6.7.9\n"
".958414938\n"
"3.7.84.231\n"
"246.91..29\n") == 0);
free(board888586704);
board888586704 = NULL;
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 7) == 37 );


char* board155776430 = gamma_board(board);
assert( board155776430 != NULL );
assert( strcmp(board155776430, 
"1884.6..53\n"
"81....3...\n"
"972.1.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"4.942.5...\n"
"9849.627.9\n"
"6958414938\n"
"3.7.84.231\n"
"246.91..29\n") == 0);
free(board155776430);
board155776430 = NULL;
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_free_fields(board, 6) == 35 );


char* board791822096 = gamma_board(board);
assert( board791822096 != NULL );
assert( strcmp(board791822096, 
"1884.6..53\n"
"815...3...\n"
"972.1.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"4.942.5...\n"
"9849.627.9\n"
"6958414938\n"
"327.84.231\n"
"246.91..29\n") == 0);
free(board791822096);
board791822096 = NULL;
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 3) == 0 );


char* board611115614 = gamma_board(board);
assert( board611115614 != NULL );
assert( strcmp(board611115614, 
"1884.6..53\n"
"815...3...\n"
"972.1.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"4.942.5...\n"
"9849.627.9\n"
"6958414938\n"
"327.84.231\n"
"246.91..29\n") == 0);
free(board611115614);
board611115614 = NULL;
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 5, 11) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board549197403 = gamma_board(board);
assert( board549197403 != NULL );
assert( strcmp(board549197403, 
"1884.6..53\n"
"815.673...\n"
"972.1.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"4.942.5...\n"
"9849.627.9\n"
"6958414938\n"
"327.84.231\n"
"246.91..29\n") == 0);
free(board549197403);
board549197403 = NULL;
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );


char* board787922172 = gamma_board(board);
assert( board787922172 != NULL );
assert( strcmp(board787922172, 
"188426..53\n"
"815.67316.\n"
"97211.2.3.\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"4.942157..\n"
"98392627.9\n"
"6958414938\n"
"327.84.231\n"
"246.91.329\n") == 0);
free(board787922172);
board787922172 = NULL;
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_golden_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );


char* board743692409 = gamma_board(board);
assert( board743692409 != NULL );
assert( strcmp(board743692409, 
"188426..53\n"
"815.67316.\n"
"97211.2.39\n"
"9.4825.4.6\n"
"7473128125\n"
"18676.2.79\n"
"546.352..7\n"
".5.8762976\n"
"439421578.\n"
"98392627.9\n"
"6958414938\n"
"327.84.231\n"
"246.91.329\n") == 0);
free(board743692409);
board743692409 = NULL;
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 8, 11) == 0 );


gamma_delete(board);

    return 0;
}
