#include "kernel/types.h"
#include "user/user.h"
int main (int argc,char const *argv[])
{
    if(argc !=2){
        fprintf(2,"usage:sleep<time>\n");
        exit(1);
    }
    int ticks=atoi(argv[1]);
    int ret =sleep(ticks);
    exit (ret);

}