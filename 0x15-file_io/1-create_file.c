#include "main.h"
​
/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
    int fr, s_writ;
    
    
    if(!filename)
        return (-1);
        
    fr = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    
    if(fr == -1)
        return (-1);
    if(!text_content)
        return (1);
        
        
    s_writ = write(fr, text_content, strlen(text_content));
    
    close(fr);
    
    if(s_writ == -1)
    {
        close(fr);
        
        return (-1);
    }
    
    return (1);
    
}
