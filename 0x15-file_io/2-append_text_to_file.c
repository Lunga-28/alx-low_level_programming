#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

/**
 * append_text_to_file - append text to the end of a the file
 * @filename: name of file
 * @text_content: text to append to file
 *
 * Return: 1 if success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor = 0, err_code = 0, len = 0;


    if (!filename)
        return (-1);
    else if (!text_content || !text_content[0])
        return (1);
    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    if (file_descriptor < 0)
        return (-1);

    for (len = 0; text_content[len]; len++)
        continue;
    
    err_code = write(file_descriptor, text_content, len);
    if (err_code < 0)
        return (-1);
    
    close(file_descriptor);
    return (1);
}
