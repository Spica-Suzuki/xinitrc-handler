#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

FILE *filePointer;
filePointer = fopen(".xinitrc", "w");

if ( filePointer == NULL )
    {
        printf( ".xinitrc file failed to open." ) ;
    }
    else
    {
        if ( strlen ( argv[1] ) > 0 )
        {
            fputs(argv[1], filePointer) ;
            fputs("\n", filePointer) ;
        }
        fclose(filePointer);
        printf("Success\n");
    }

return 0;
}
