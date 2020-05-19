#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_many_boards
uuid: 535692942
*/
/*
gamma_move + gamma_board, a few boards at the same time
*/
gamma_t* board1 = gamma_new(4, 4, 4, 16);
assert( board1 != NULL );


gamma_t* board2 = gamma_new(4, 4, 4, 16);
assert( board2 != NULL );


gamma_t* board3 = gamma_new(4, 4, 4, 16);
assert( board3 != NULL );


assert( gamma_move(board1, 1, 3, 2) == 1 );


char* board742591354 = gamma_board(board1);
assert( board742591354 != NULL );
assert( strcmp(board742591354, 
"....\n"
"...1\n"
"....\n"
"....\n") == 0);
free(board742591354);
board742591354 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 1 );


char* board959108285 = gamma_board(board2);
assert( board959108285 != NULL );
assert( strcmp(board959108285, 
"....\n"
".1..\n"
"....\n"
"....\n") == 0);
free(board959108285);
board959108285 = NULL;
assert( gamma_move(board3, 1, 2, 3) == 1 );


char* board555687766 = gamma_board(board3);
assert( board555687766 != NULL );
assert( strcmp(board555687766, 
"..1.\n"
"....\n"
"....\n"
"....\n") == 0);
free(board555687766);
board555687766 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 1 );
assert( gamma_move(board2, 2, 1, 2) == 0 );
assert( gamma_move(board3, 2, 0, 0) == 1 );
assert( gamma_move(board1, 3, 0, 3) == 1 );
assert( gamma_move(board2, 3, 2, 3) == 1 );
assert( gamma_move(board3, 3, 0, 0) == 0 );
assert( gamma_move(board1, 4, 3, 3) == 1 );
assert( gamma_move(board2, 4, 0, 3) == 1 );
assert( gamma_move(board3, 4, 2, 2) == 1 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board449659980 = gamma_board(board1);
assert( board449659980 != NULL );
assert( strcmp(board449659980, 
"3..4\n"
"...1\n"
"2...\n"
"....\n") == 0);
free(board449659980);
board449659980 = NULL;
assert( gamma_move(board2, 1, 0, 3) == 0 );


char* board674912582 = gamma_board(board2);
assert( board674912582 != NULL );
assert( strcmp(board674912582, 
"4.3.\n"
".1..\n"
"....\n"
"....\n") == 0);
free(board674912582);
board674912582 = NULL;
assert( gamma_move(board3, 1, 1, 0) == 1 );


char* board694052108 = gamma_board(board3);
assert( board694052108 != NULL );
assert( strcmp(board694052108, 
"..1.\n"
"..4.\n"
"....\n"
"21..\n") == 0);
free(board694052108);
board694052108 = NULL;
assert( gamma_move(board1, 2, 2, 3) == 1 );
assert( gamma_move(board2, 2, 2, 0) == 1 );
assert( gamma_move(board3, 2, 1, 0) == 0 );
assert( gamma_move(board1, 3, 1, 0) == 1 );
assert( gamma_move(board2, 3, 1, 2) == 0 );
assert( gamma_move(board3, 3, 0, 3) == 1 );
assert( gamma_move(board1, 4, 1, 2) == 1 );
assert( gamma_move(board2, 4, 0, 1) == 1 );
assert( gamma_move(board3, 4, 3, 1) == 1 );
assert( gamma_move(board1, 1, 3, 2) == 0 );


char* board844553395 = gamma_board(board1);
assert( board844553395 != NULL );
assert( strcmp(board844553395, 
"3.24\n"
".4.1\n"
"2...\n"
".3..\n") == 0);
free(board844553395);
board844553395 = NULL;
assert( gamma_move(board2, 1, 3, 1) == 1 );


char* board990751921 = gamma_board(board2);
assert( board990751921 != NULL );
assert( strcmp(board990751921, 
"4.3.\n"
".1..\n"
"4..1\n"
"..2.\n") == 0);
free(board990751921);
board990751921 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 1 );


char* board258798331 = gamma_board(board3);
assert( board258798331 != NULL );
assert( strcmp(board258798331, 
"3.1.\n"
"1.4.\n"
"...4\n"
"21..\n") == 0);
free(board258798331);
board258798331 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 1 );
assert( gamma_move(board2, 2, 1, 3) == 1 );
assert( gamma_move(board3, 2, 3, 0) == 1 );
assert( gamma_move(board1, 3, 3, 0) == 1 );
assert( gamma_move(board2, 3, 1, 2) == 0 );
assert( gamma_move(board3, 3, 3, 2) == 1 );
assert( gamma_move(board1, 4, 0, 2) == 1 );
assert( gamma_move(board2, 4, 1, 0) == 1 );
assert( gamma_move(board3, 4, 3, 1) == 0 );
assert( gamma_move(board1, 1, 2, 3) == 0 );


char* board724562735 = gamma_board(board1);
assert( board724562735 != NULL );
assert( strcmp(board724562735, 
"3.24\n"
"44.1\n"
"2..2\n"
".3.3\n") == 0);
free(board724562735);
board724562735 = NULL;
assert( gamma_move(board2, 1, 2, 1) == 1 );


char* board128192488 = gamma_board(board2);
assert( board128192488 != NULL );
assert( strcmp(board128192488, 
"423.\n"
".1..\n"
"4.11\n"
".42.\n") == 0);
free(board128192488);
board128192488 = NULL;
assert( gamma_move(board3, 1, 0, 3) == 0 );


char* board120756466 = gamma_board(board3);
assert( board120756466 != NULL );
assert( strcmp(board120756466, 
"3.1.\n"
"1.43\n"
"...4\n"
"21.2\n") == 0);
free(board120756466);
board120756466 = NULL;
assert( gamma_move(board1, 2, 2, 0) == 1 );
assert( gamma_move(board2, 2, 3, 0) == 1 );
assert( gamma_move(board3, 2, 3, 2) == 0 );
assert( gamma_move(board1, 3, 3, 0) == 0 );
assert( gamma_move(board2, 3, 0, 2) == 1 );
assert( gamma_move(board3, 3, 1, 1) == 1 );
assert( gamma_move(board1, 4, 3, 2) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 1 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board834360208 = gamma_board(board1);
assert( board834360208 != NULL );
assert( strcmp(board834360208, 
"3.24\n"
"44.1\n"
"2..2\n"
".323\n") == 0);
free(board834360208);
board834360208 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 1 );


char* board363281575 = gamma_board(board2);
assert( board363281575 != NULL );
assert( strcmp(board363281575, 
"4231\n"
"31..\n"
"4.11\n"
".422\n") == 0);
free(board363281575);
board363281575 = NULL;
assert( gamma_move(board3, 1, 3, 3) == 1 );


char* board419297437 = gamma_board(board3);
assert( board419297437 != NULL );
assert( strcmp(board419297437, 
"3411\n"
"1.43\n"
".3.4\n"
"21.2\n") == 0);
free(board419297437);
board419297437 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 2, 0) == 1 );
assert( gamma_move(board1, 3, 0, 3) == 0 );
assert( gamma_move(board2, 3, 0, 0) == 1 );
assert( gamma_move(board3, 3, 2, 2) == 0 );
assert( gamma_move(board1, 4, 2, 1) == 1 );
assert( gamma_move(board2, 4, 2, 0) == 0 );
assert( gamma_move(board3, 4, 3, 2) == 0 );
assert( gamma_move(board1, 1, 2, 2) == 1 );


char* board394842442 = gamma_board(board1);
assert( board394842442 != NULL );
assert( strcmp(board394842442, 
"3.24\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board394842442);
board394842442 = NULL;
assert( gamma_move(board2, 1, 0, 2) == 0 );


char* board175549821 = gamma_board(board2);
assert( board175549821 != NULL );
assert( strcmp(board175549821, 
"4231\n"
"31..\n"
"4.11\n"
"3422\n") == 0);
free(board175549821);
board175549821 = NULL;
assert( gamma_move(board3, 1, 0, 3) == 0 );


char* board282653224 = gamma_board(board3);
assert( board282653224 != NULL );
assert( strcmp(board282653224, 
"3411\n"
"1.43\n"
".3.4\n"
"2122\n") == 0);
free(board282653224);
board282653224 = NULL;
assert( gamma_move(board1, 2, 2, 0) == 0 );
assert( gamma_move(board2, 2, 3, 1) == 0 );
assert( gamma_move(board3, 2, 3, 0) == 0 );
assert( gamma_move(board1, 3, 2, 3) == 0 );
assert( gamma_move(board2, 3, 1, 1) == 1 );
assert( gamma_move(board3, 3, 1, 3) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 0, 1) == 1 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board332675476 = gamma_board(board1);
assert( board332675476 != NULL );
assert( strcmp(board332675476, 
"3.24\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board332675476);
board332675476 = NULL;
assert( gamma_move(board2, 1, 1, 1) == 0 );


char* board296915837 = gamma_board(board2);
assert( board296915837 != NULL );
assert( strcmp(board296915837, 
"4231\n"
"31..\n"
"4311\n"
"3422\n") == 0);
free(board296915837);
board296915837 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 1 );


char* board874633789 = gamma_board(board3);
assert( board874633789 != NULL );
assert( strcmp(board874633789, 
"3411\n"
"1143\n"
"43.4\n"
"2122\n") == 0);
free(board874633789);
board874633789 = NULL;
assert( gamma_move(board1, 2, 3, 2) == 0 );
assert( gamma_move(board2, 2, 1, 1) == 0 );
assert( gamma_move(board3, 2, 2, 2) == 0 );
assert( gamma_move(board1, 3, 0, 1) == 0 );
assert( gamma_move(board2, 3, 1, 3) == 0 );
assert( gamma_move(board3, 3, 1, 0) == 0 );
assert( gamma_move(board1, 4, 1, 0) == 0 );
assert( gamma_move(board2, 4, 0, 3) == 0 );
assert( gamma_move(board3, 4, 2, 1) == 1 );
assert( gamma_move(board1, 1, 3, 3) == 0 );


char* board422692176 = gamma_board(board1);
assert( board422692176 != NULL );
assert( strcmp(board422692176, 
"3.24\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board422692176);
board422692176 = NULL;
assert( gamma_move(board2, 1, 1, 1) == 0 );


char* board653925331 = gamma_board(board2);
assert( board653925331 != NULL );
assert( strcmp(board653925331, 
"4231\n"
"31..\n"
"4311\n"
"3422\n") == 0);
free(board653925331);
board653925331 = NULL;
assert( gamma_move(board3, 1, 0, 1) == 0 );


char* board857753876 = gamma_board(board3);
assert( board857753876 != NULL );
assert( strcmp(board857753876, 
"3411\n"
"1143\n"
"4344\n"
"2122\n") == 0);
free(board857753876);
board857753876 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 2, 0) == 0 );
assert( gamma_move(board1, 3, 3, 1) == 0 );
assert( gamma_move(board2, 3, 3, 1) == 0 );
assert( gamma_move(board3, 3, 3, 0) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 3, 2) == 1 );
assert( gamma_move(board3, 4, 3, 0) == 0 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board411567952 = gamma_board(board1);
assert( board411567952 != NULL );
assert( strcmp(board411567952, 
"3.24\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board411567952);
board411567952 = NULL;
assert( gamma_move(board2, 1, 1, 1) == 0 );


char* board922156800 = gamma_board(board2);
assert( board922156800 != NULL );
assert( strcmp(board922156800, 
"4231\n"
"31.4\n"
"4311\n"
"3422\n") == 0);
free(board922156800);
board922156800 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 0 );


char* board446745076 = gamma_board(board3);
assert( board446745076 != NULL );
assert( strcmp(board446745076, 
"3411\n"
"1143\n"
"4344\n"
"2122\n") == 0);
free(board446745076);
board446745076 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 0 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 3, 0) == 0 );
assert( gamma_move(board1, 3, 0, 3) == 0 );
assert( gamma_move(board2, 3, 0, 3) == 0 );
assert( gamma_move(board3, 3, 3, 1) == 0 );
assert( gamma_move(board1, 4, 2, 3) == 0 );
assert( gamma_move(board2, 4, 2, 2) == 1 );
assert( gamma_move(board3, 4, 0, 0) == 0 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board638415151 = gamma_board(board1);
assert( board638415151 != NULL );
assert( strcmp(board638415151, 
"3.24\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board638415151);
board638415151 = NULL;
assert( gamma_move(board2, 1, 0, 2) == 0 );


char* board980004462 = gamma_board(board2);
assert( board980004462 != NULL );
assert( strcmp(board980004462, 
"4231\n"
"3144\n"
"4311\n"
"3422\n") == 0);
free(board980004462);
board980004462 = NULL;
assert( gamma_move(board3, 1, 2, 0) == 0 );


char* board723556436 = gamma_board(board3);
assert( board723556436 != NULL );
assert( strcmp(board723556436, 
"3411\n"
"1143\n"
"4344\n"
"2122\n") == 0);
free(board723556436);
board723556436 = NULL;
assert( gamma_move(board1, 2, 2, 1) == 0 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 1, 2) == 0 );
assert( gamma_move(board1, 3, 1, 3) == 1 );
assert( gamma_move(board2, 3, 0, 2) == 0 );
assert( gamma_move(board3, 3, 1, 0) == 0 );
assert( gamma_move(board1, 4, 1, 2) == 0 );
assert( gamma_move(board2, 4, 0, 2) == 0 );
assert( gamma_move(board3, 4, 0, 1) == 0 );
assert( gamma_move(board1, 1, 3, 2) == 0 );


char* board338007343 = gamma_board(board1);
assert( board338007343 != NULL );
assert( strcmp(board338007343, 
"3324\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board338007343);
board338007343 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 0 );


char* board268898338 = gamma_board(board2);
assert( board268898338 != NULL );
assert( strcmp(board268898338, 
"4231\n"
"3144\n"
"4311\n"
"3422\n") == 0);
free(board268898338);
board268898338 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 0 );


char* board482856345 = gamma_board(board3);
assert( board482856345 != NULL );
assert( strcmp(board482856345, 
"3411\n"
"1143\n"
"4344\n"
"2122\n") == 0);
free(board482856345);
board482856345 = NULL;
assert( gamma_move(board1, 2, 3, 2) == 0 );
assert( gamma_move(board2, 2, 0, 1) == 0 );
assert( gamma_move(board3, 2, 0, 2) == 0 );
assert( gamma_move(board1, 3, 3, 3) == 0 );
assert( gamma_move(board2, 3, 2, 3) == 0 );
assert( gamma_move(board3, 3, 3, 2) == 0 );
assert( gamma_move(board1, 4, 2, 1) == 0 );
assert( gamma_move(board2, 4, 3, 3) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 0 );
assert( gamma_move(board1, 1, 2, 1) == 0 );


char* board577974719 = gamma_board(board1);
assert( board577974719 != NULL );
assert( strcmp(board577974719, 
"3324\n"
"4411\n"
"2.42\n"
".323\n") == 0);
free(board577974719);
board577974719 = NULL;
assert( gamma_move(board2, 1, 2, 1) == 0 );


char* board393725065 = gamma_board(board2);
assert( board393725065 != NULL );
assert( strcmp(board393725065, 
"4231\n"
"3144\n"
"4311\n"
"3422\n") == 0);
free(board393725065);
board393725065 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 0 );


char* board633205933 = gamma_board(board3);
assert( board633205933 != NULL );
assert( strcmp(board633205933, 
"3411\n"
"1143\n"
"4344\n"
"2122\n") == 0);
free(board633205933);
board633205933 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 0 );
assert( gamma_move(board2, 2, 1, 2) == 0 );
assert( gamma_move(board3, 2, 0, 1) == 0 );
assert( gamma_move(board1, 3, 1, 1) == 1 );
assert( gamma_move(board2, 3, 0, 2) == 0 );
assert( gamma_move(board3, 3, 0, 2) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 0, 3) == 0 );
assert( gamma_move(board3, 4, 0, 0) == 0 );


gamma_delete(board1);


gamma_delete(board3);


gamma_delete(board2);

    return 0;
}

