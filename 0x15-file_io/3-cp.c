#include "main.h"
#define BUFFERSIZE 1204
/**
  * main - ...
  * @argc: ...
  * @argv: ...
  * Return: ...
  */
int main(int argc, char **argv)
{
    int file_1;
    int file_out;
    int read_f;
    int ck;
    char buffer[BUFFERSIZE];
    
    mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
    
    if(argc != 3)
    
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
    file_1 = open(argv[1], O_RDONLY);
    if(file_1 == -1)
    
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
        
    file_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
    
    if(file_out == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
        
    read_f = ck = 1;
    while(read_f)
    {
        read_f = read(file_1, buffer, BUFFERSIZE);
        
        if(read_f == -1)
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
            
        if(read_f > 0)
        {
            ck = write(file_out, buffer, read_f);
            if(ck == -1)
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
        }
    }
    ck = close(file_1);
    
    if(ck == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1), exit(100);
        
    ck = close(file_out);
    
    if(ck == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_out), exit(100);
        
        
    return (0);
}
