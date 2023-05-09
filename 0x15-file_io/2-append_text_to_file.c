#include "main.h"
/**
  * append_text_to_file - ...
  * @filename: ....
  * @text_content: ...
  * Return: ...
  */
int append_text_to_file(const char *filename, char *text_content)
{
    int fr, check, x ;
    
    if(filename == NULL)
        return (-1);
        
    if(text_content == NULL)
        return (1);
        
    fr = open(filename, O_APPEND | O_WRONLY);
    
    if(fr == -1)
        return (-1);
        
    for(x = 0; text_content[x] != '\0'; x++)
        ;
        
    check = write(fr, text_content, x);
    
    if(check == -1)
        return (-1);
        
    close(fr);
    
    return (1);
}
