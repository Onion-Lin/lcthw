#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
    int i = 0;

    //why skip argv[0] ----  because argv[0] is ./your_program,its fixed
    for (i = 0;i<argc;i++){
        printf("argv %d : %s\n",i,argv[i]);
    }
    char* states[] = {"California",NULL,"Washington","Taxes"};

    #define numb 4
    for(i = 0;i < numb;i++){
        strcpy (argv[0],(states[3]));      // a[3]解引用完毕，表示数组内容物，a就算指针，解引用之后是内容物，若是指针数组可能需要第二次解引用
        printf("state %d:%s\n",i,states[i]);
    }
    strcpy (argv[0],(states[0]));

    return 0;
}