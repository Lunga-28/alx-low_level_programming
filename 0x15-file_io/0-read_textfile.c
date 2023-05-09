#include "main.h"
/**
* read_textfile - Read a file and prints in POSIX stdout.
* @filename: File to be read.
* @letters: Number of letter to be read and print.
* Return: size of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fr= open(filename, O_RDONLY), size;
    char *bufff = malloc(sizeof(char) * letters);
    
    if(!filename)
        return (0);
        
    if(!bufff)
        return (0);
        
    size = write(STDOUT_FILENO, bufff, read(fr, bufff, letters));
    if(fr == -1 || size == -1)
        return (0);
        
    close(fr);
    free(bufff);
    return (size);
}
