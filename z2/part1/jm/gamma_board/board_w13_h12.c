#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 775484943
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(12, 13, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );


char* board889008218 = gamma_board(board);
assert( board889008218 != NULL );
assert( strcmp(board889008218, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".1..........\n"
"............\n"
"............\n"
"............\n") == 0);
free(board889008218);
board889008218 = NULL;
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );


char* board608224528 = gamma_board(board);
assert( board608224528 != NULL );
assert( strcmp(board608224528, 
"............\n"
"..4....5....\n"
"........6...\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".13.........\n"
"........2...\n"
"............\n"
"............\n") == 0);
free(board608224528);
board608224528 = NULL;
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board644493730 = gamma_board(board);
assert( board644493730 != NULL );
assert( strcmp(board644493730, 
"............\n"
"..4....5...7\n"
"........6...\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".13.........\n"
"........2...\n"
"............\n"
".1.........9\n") == 0);
free(board644493730);
board644493730 = NULL;
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );


char* board275556840 = gamma_board(board);
assert( board275556840 != NULL );
assert( strcmp(board275556840, 
"............\n"
"..4....5...7\n"
"........6...\n"
"...6........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".13.........\n"
".....4..2...\n"
"......3.....\n"
".1.........9\n") == 0);
free(board275556840);
board275556840 = NULL;
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );


char* board439583097 = gamma_board(board);
assert( board439583097 != NULL );
assert( strcmp(board439583097, 
"............\n"
"..4....5...7\n"
"........6...\n"
"...6........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"......3.....\n"
".1.........9\n") == 0);
free(board439583097);
board439583097 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );


char* board752591811 = gamma_board(board);
assert( board752591811 != NULL );
assert( strcmp(board752591811, 
"............\n"
"..4....5...7\n"
"........6...\n"
"6..6........\n"
"............\n"
"............\n"
".2.4........\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"......3.....\n"
".1.........9\n") == 0);
free(board752591811);
board752591811 = NULL;
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 13, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );


char* board589066769 = gamma_board(board);
assert( board589066769 != NULL );
assert( strcmp(board589066769, 
"............\n"
"..4....5...7\n"
"....7...6...\n"
"6..6........\n"
"............\n"
"............\n"
".2.4........\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"......3.....\n"
".1.........9\n") == 0);
free(board589066769);
board589066769 = NULL;
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );


char* board209379594 = gamma_board(board);
assert( board209379594 != NULL );
assert( strcmp(board209379594, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"............\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"......3.....\n"
".1.........9\n") == 0);
free(board209379594);
board209379594 = NULL;
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 10, 8) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board316140607 = gamma_board(board);
assert( board316140607 != NULL );
assert( strcmp(board316140607, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"..........8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"....9.3.7...\n"
".1.........9\n") == 0);
free(board316140607);
board316140607 = NULL;
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 13, 2) == 0 );


char* board295143647 = gamma_board(board);
assert( board295143647 != NULL );
assert( strcmp(board295143647, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13......1..\n"
".....49.2...\n"
"2...9.3.7...\n"
".1...4.....9\n") == 0);
free(board295143647);
board295143647 = NULL;
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board208340508 = gamma_board(board);
assert( board208340508 != NULL );
assert( strcmp(board208340508, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13.8....1..\n"
".....49.2...\n"
"2.9.9.3.7...\n"
".1...4.....9\n") == 0);
free(board208340508);
board208340508 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );


char* board180372081 = gamma_board(board);
assert( board180372081 != NULL );
assert( strcmp(board180372081, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13.8...61.4\n"
".....49.2...\n"
"2.9.9.3.7...\n"
".1...4..3..9\n") == 0);
free(board180372081);
board180372081 = NULL;
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );


char* board287845705 = gamma_board(board);
assert( board287845705 != NULL );
assert( strcmp(board287845705, 
".........3..\n"
"..4....5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"............\n"
".13.8...61.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1...4..3..9\n") == 0);
free(board287845705);
board287845705 = NULL;
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 0, 12) == 1 );


char* board889726601 = gamma_board(board);
assert( board889726601 != NULL );
assert( strcmp(board889726601, 
"6........3..\n"
"..4.2..5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"..5.........\n"
".2.4.....2..\n"
"............\n"
"...........3\n"
".13.8..561.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1...4..3..9\n") == 0);
free(board889726601);
board889726601 = NULL;
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );


char* board162425153 = gamma_board(board);
assert( board162425153 != NULL );
assert( strcmp(board162425153, 
"6........3..\n"
"..4.2..5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5......8.\n"
"7.5.........\n"
".2.4.....2..\n"
"...........8\n"
"...........3\n"
".13.8..561.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1..94..3..9\n") == 0);
free(board162425153);
board162425153 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );


char* board857836974 = gamma_board(board);
assert( board857836974 != NULL );
assert( strcmp(board857836974, 
"6........3..\n"
"..4.2..5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5.....48.\n"
"7.5.........\n"
".2.4.....2..\n"
"..2........8\n"
"..........53\n"
".13.8..561.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1..94..3..9\n") == 0);
free(board857836974);
board857836974 = NULL;
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );


char* board476220674 = gamma_board(board);
assert( board476220674 != NULL );
assert( strcmp(board476220674, 
"6........3..\n"
"..4.2..5.6.7\n"
"....7...6...\n"
"6..6........\n"
"...5.....48.\n"
"7.5.........\n"
".2.49....2..\n"
"..2........8\n"
"........1.53\n"
".13.8.7561.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1..94..3..9\n") == 0);
free(board476220674);
board476220674 = NULL;
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );


char* board350730818 = gamma_board(board);
assert( board350730818 != NULL );
assert( strcmp(board350730818, 
"6.....6..3..\n"
"..4.2..5.6.7\n"
"..2.7...6...\n"
"6.46........\n"
"...5.....48.\n"
"7.5.........\n"
".2.49....2..\n"
"..2........8\n"
"........1.53\n"
".13.8.7561.4\n"
".....49.2...\n"
"2.999.3.7...\n"
".1..94..3..9\n") == 0);
free(board350730818);
board350730818 = NULL;
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );


char* board629615327 = gamma_board(board);
assert( board629615327 != NULL );
assert( strcmp(board629615327, 
"6.....6..3..\n"
"..4.2..5.6.7\n"
"..2.7...6...\n"
"6.46........\n"
"...5.....48.\n"
"7.5.........\n"
".2.49....2..\n"
"..2........8\n"
"........1.53\n"
".13.8.7561.4\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board629615327);
board629615327 = NULL;
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );


char* board240891829 = gamma_board(board);
assert( board240891829 != NULL );
assert( strcmp(board240891829, 
"6.....6..3..\n"
"..4.2..5.6.7\n"
"..2.7...6...\n"
"6.46........\n"
"...5.....48.\n"
"7.5..6......\n"
".2.49...52..\n"
"..2........8\n"
"..4.....1.53\n"
".13.8.7561.4\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board240891829);
board240891829 = NULL;
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );


char* board670027274 = gamma_board(board);
assert( board670027274 != NULL );
assert( strcmp(board670027274, 
"6.....6..3..\n"
"..4.2..5.6.7\n"
"..2.7...6...\n"
"6.46........\n"
"...5.....48.\n"
"7.5..6......\n"
".2.49...52..\n"
"..2........8\n"
"..4.....1153\n"
".13.8.7561.4\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board670027274);
board670027274 = NULL;
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );


char* board425023735 = gamma_board(board);
assert( board425023735 != NULL );
assert( strcmp(board425023735, 
"6.....6..3..\n"
".64.2..5.6.7\n"
"3.2.7...6...\n"
"6.46........\n"
"...5.....48.\n"
"7.5..6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.7561.4\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board425023735);
board425023735 = NULL;
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );


char* board355373136 = gamma_board(board);
assert( board355373136 != NULL );
assert( strcmp(board355373136, 
"6.....6..3..\n"
".64.2..5.6.7\n"
"3.2.7...6...\n"
"6.46......1.\n"
"...5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.7561.4\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board355373136);
board355373136 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );


char* board863970579 = gamma_board(board);
assert( board863970579 != NULL );
assert( strcmp(board863970579, 
"6.....6..3..\n"
".64.2..5.6.7\n"
"3.2.7...6...\n"
"6346......1.\n"
"...5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.756154\n"
"..7..49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board863970579);
board863970579 = NULL;
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 1, 10, 12) == 1 );


char* board904465621 = gamma_board(board);
assert( board904465621 != NULL );
assert( strcmp(board904465621, 
"6.....6..31.\n"
".64.2..5.6.7\n"
"3.2.7...6...\n"
"6346......1.\n"
"...5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.756154\n"
"..78.49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board904465621);
board904465621 = NULL;
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board148269552 = gamma_board(board);
assert( board148269552 != NULL );
assert( strcmp(board148269552, 
"6.....6..31.\n"
".64.2..5.647\n"
"3.2.7...6...\n"
"6346......1.\n"
"...5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.756154\n"
"..78.49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board148269552);
board148269552 = NULL;
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );


char* board679285531 = gamma_board(board);
assert( board679285531 != NULL );
assert( strcmp(board679285531, 
"6.....6..31.\n"
".64.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2........8\n"
"..4....21153\n"
".13.8.756154\n"
"..78.49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board679285531);
board679285531 = NULL;
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );


char* board827777261 = gamma_board(board);
assert( board827777261 != NULL );
assert( strcmp(board827777261, 
"6.....6..31.\n"
".64.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5.....48.\n"
"7.58.6......\n"
".2.49...52..\n"
"..2......5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board827777261);
board827777261 = NULL;
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );


char* board911232816 = gamma_board(board);
assert( board911232816 != NULL );
assert( strcmp(board911232816, 
"68....6..31.\n"
".64.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5.....48.\n"
"7.58.6..7...\n"
".2.49...52..\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.2...\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board911232816);
board911232816 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );


char* board608912885 = gamma_board(board);
assert( board608912885 != NULL );
assert( strcmp(board608912885, 
"68....6..31.\n"
".64.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2.49...52..\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board608912885);
board608912885 = NULL;
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );


char* board510586529 = gamma_board(board);
assert( board510586529 != NULL );
assert( strcmp(board510586529, 
"68....6..31.\n"
".64.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2849...521.\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board510586529);
board510586529 = NULL;
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );


char* board327954354 = gamma_board(board);
assert( board327954354 != NULL );
assert( strcmp(board327954354, 
"68....6..31.\n"
"364.2..5.647\n"
"312.7...6...\n"
"6346...9..1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2849...521.\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board327954354);
board327954354 = NULL;
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );


char* board996253213 = gamma_board(board);
assert( board996253213 != NULL );
assert( strcmp(board996253213, 
"68....6..31.\n"
"364.2..58647\n"
"312.7...6...\n"
"6346...97.1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2849...521.\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board996253213);
board996253213 = NULL;
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );


char* board334258846 = gamma_board(board);
assert( board334258846 != NULL );
assert( strcmp(board334258846, 
"68....6..31.\n"
"364.2..58647\n"
"31237...6...\n"
"6346...97.1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2849...521.\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board334258846);
board334258846 = NULL;
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 9, 12) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );


char* board897613472 = gamma_board(board);
assert( board897613472 != NULL );
assert( strcmp(board897613472, 
"68....6..31.\n"
"364.2..58647\n"
"31237...6...\n"
"6346...97.1.\n"
".8.5...5.48.\n"
"7.58.6..7...\n"
".2849...521.\n"
"..2..9...5.8\n"
"..4..2.21153\n"
".13.8.756154\n"
"..78.49.23..\n"
"2.999.397...\n"
".1..94..3..9\n") == 0);
free(board897613472);
board897613472 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


gamma_delete(board);

    return 0;
}
