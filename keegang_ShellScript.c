#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <stdbool.h>

int main(){
    return 0;
}
int parseInput(char* input, char* splitWords[]){

}
void promptUser(bool isBatch){

}
void printError(){

}
char redirectCommand(char* special, char* line, bool* isRedirectm, char* tool[], char* outputTokens[], bool* isExits){

}
void launchProcesses(char* tokens[], int numToekns, bool isRedirect){

}
bool exitProgram(char* tokens[], int numTokens){

}
void changeDirectories(char* tokens[], int numTokens){

}
void printHelp(char* str, int index){

}
char* executeCommand(char* cmd, bool* isRedirect, char* tokens[], char* outputTokens[], bool *isExists){

}
