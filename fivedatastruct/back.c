#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stackmode.h"
#include "back.h"
#include <unistd.h>


void init(struct stackParameters *mainstack){
    processInit();
    

}

void processInit(){
    
    devil();
    usleep(1000 * 1000);
    system("clear");
    usleep(1000 * 1000);
    printf("\033[0;31m");
    printf("Daemon Software by the Nick Gas Station\n");
    printf("YOU HAVE BEEN PWNED\n");
    printf("\033[0m");


    usleep(1000 * 1000);

    system("clear");
    srand(time(NULL));

    printf("/Downloading... \n/\n/");
    int i;
    for(i = 0; i < 100; i++){
        printf("#");
        fflush(stdout);
        usleep((rand() % 51)* 1000);
    }
    printf("\n\n");

    printf("/Initializing Stack\n/\n/");
    for(i = 0; i < 100; i++){
        printf("#");
        fflush(stdout);
        usleep((rand() % 51)* 1000);
    }
    printf("/\n/\n/");
    usleep(50 * 1000);
    printf("Successfully Installed FlAk@1.3");
    printf("/Sucessfully opened port 3389");
    printf("Pinging 129.152.11.49 with 32 bytes of data: \n");
    for(i = 0; i < 4; i++){
        printf("/Reply from 129.152.11.49: bytes=32 time=%dms TTL\n", rand() % 37);
        usleep((rand() % 250)* 1000);
    }
    printf("/\n/Ping statistics for 66.254.114.41:\n");
    printf("/\tPackets: Sent = 4, Received = 4, Lost = 0 (0%% Loss),\n");
    printf("/Approximate round trip times in mill-seconds\n");
    printf("/\tMinimum = 15ms, Maximum = 20ms, Average = 17ms\n/\n");
    printf("/ Initialization Done! Enter Any key to continue\n/\n");
    printf("/ <C:\\users\\admin> ");
    char hehe[20];
    
    fgets(hehe, 20, stdin);
    system("clear");


}

void programView(struct stackParameters *mainstack){
    printf("/\t\t\t MiniOS \n");
    printf("/\n");
    printf("/\t%d Bytes of Stack Memory Used\n", (mainstack->top + 1) * 4);
    printf("/\n");
    printf("/\t%d Bytes of Stack Memory Available\n", mainstack->size - (mainstack->top + 1) * 4 );
    printf("/\n");
    printf("/");
}

void devil(){
    printf("\033[0;35m");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⡠⢺⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢢⠀⠀⠀⠀\n");
    printf("⠀⠀⣰⠁⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀s⠀⠀⠀⠀⠀⠀⠀⢸⠀⢳⠀⠀⠀\n");
    printf("⠀⢠⡇⠀⢸⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠈⠀⠀⡇⠀⠀\n");
    printf("⠀⢸⡄⠀⠀⠢⣠⣴⡋⠉⠁⠀⠀⠀⠀⠀⠈⠻⣶⣄⡠⠃⠀⠀⡇⠀⠀\n");
    printf("⡀⠈⣧⠀⠀⠀⠈⡇⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡏⠀⠀⠀⢠⠇⠀⡀\n");
    printf("⣷⡀⠘⣆⠀⠀⠀⣿⠀⠀⠀⠀⠀⢀⣀⣠⡤⢾⣿⡁⠀⠀⢠⡟⠀⣴⡇\n");
    printf("⡏⢻⣦⡘⣷⣦⠼⠃⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠻⢷⣤⣴⡏⣠⡾⠃⠃\n");
    printf("⢳⠀⠙⢿⣿⡏⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠣⡀⠀⠀⠀⢹⣿⠟⠀⢰⠀\n");
    printf("⠈⢧⡀⢸⣿⣿⣀⡀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠈⣿⠀⢀⠌⠀\n");
    printf("⠀⠀⠙⢾⣿⣿⣿⣿⡗⢄⡀⠀⡀⠀⡀⠀⡀⠔⡿⠀⠀⠀⣿⠔⠁⠀⠀\n");
    printf("⠀⠀⠀⠀⢿⣿⡋⠉⠙⠒⠉⠙⡇⢀⡟⠉⠑⠊⠁⠀⠀⢠⠇⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠈⠻⡇⠀⠀⠀⢀⠀⠃⢸⣷⣀⠀⠀⠀⢀⡴⠃⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⣿⣶⣶⣖⠛⠦⠀⠈⡿⠟⢑⣶⣶⣾⠇⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢻⣯⠉⢩⠧⠄⠓⠒⠁⣔⢵⠈⣡⣿⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠈⢿⣧⠘⢜⣉⣁⣈⣉⣏⠄⢰⣿⠃⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠈⢿⡀⠀⠐⠒⠒⠒⠀⠀⣼⠃⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢤⣀⣀⣀⣀⣠⠜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⣉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("\033[0m");
}