# 42Barcelona_01_Libft
The aim of this project is to code a C library regrouping usual functions that i’ll be allowed to use in all your other projects in the school.

## In this project, the following functions have been recode.

#### • isalpha
#### • isdigit
#### • isalnum        
#### • isascii
#### • isprint
#### • strlen
#### • memset
#### • bzero
#### • memcpy         
#### • memmove
#### • strlcpy        
#### • strlcat
#### • toupper        
#### • tolower
#### • strchr         
#### • strrchr
#### • strncmp        
#### • memchr
#### • memcmp   
#### • strnstr
#### • atoi
#### • calloc
#### • strdup

## And the following ones have been added

### • ft_substr:
**Prototype:** 
>_char *ft_substr(char const *s, unsigned int start, size_t len)_

**Description:** 
>_Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’._

### • ft_strjoin: 
**Prototype:** 
>_char *ft_strjoin(char const *s1, char const *s2);_

**Description:** 
>_Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’._
_
### • ft_strtrim:
**Prototype:** 
>_char *ft_strtrim(char const *s1, char const *set);_

**Description:** 
>_Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string._

### • ft_split:
**Prototype:** 
>_char **ft_split(char const *s, char c);_

**Description:** 
>_Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer._

### • ft_itoa:
**Prototype:** 
>_char *ft_itoa(int n);_

**Description:** 
>_Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled._

### • ft_strmapi: 
**Prototype:** 
>_char *ft_strmapi(char const *s, char (*f)(unsigned int, char));_

**Description:**  
>_Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc) resulting from successive applications of ’f’._

### • ft_striteri:
**Prototype:** 
>_void ft_striteri(char *s, void (*f)(unsigned int, char*));_

**Description:** 
>_Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary._

### • ft_putchar_fd:
**Prototype:** 
>_void ft_putchar_fd(char c, int fd);_

**Description:** 
>_Outputs the character ’c’ to the given file descriptor._

### • ft_putstr_fd:
**Prototype:** 
>_void ft_putstr_fd(char *s, int fd);_

**Description:** 
>_Outputs the string ’s’ to the given file descriptor._

### • ft_putendl_fd:
**Prototype:** 
>_void ft_putendl_fd(char *s, int fd);_

**Description:** 
>_Outputs the string ’s’ to the given file descriptor followed by a newline._

### • ft_putnbr_fd:
**Prototype:** 
>_void ft_putnbr_fd(int n, int fd);_

**Description:** 
>_Outputs the integer ’n’ to the given file descriptor._

## Bonus part

### • ft_lstnew:
**Prototype:** 
>_t_list *ft_lstnew(void *content);_

**Description:**
> _Allocates (with malloc) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL._

### • ft_lstadd_front:
**Prototype:** 
> _void ft_lstadd_front(t_list **lst, t_list *new);_

**Description:**
>_Adds the node ’new’ at the beginning of the list._

## • ft_lstsize:
**Prototype:** 
>_int ft_lstsize(t_list *lst);_

**Description:** 
>_Counts the number of nodes in a list._

## • ft_lstadd_back:
**Prototype:** 
>_void ft_lstadd_back(t_list **lst, t_list *new);_

**Description** 
>_Adds the node ’new’ at the end of the list._

## • ft_lstdelone:
**Prototype:**
>_void ft_lstdelone(t_list *lst, void (*del)(void*));_

**Description:** 
>_Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed._

## • ft_lstclear:
**Prototype:**
>_void ft_lstclear(t_list **lst, void (del)(void));_

**Description:**
_Deletes and frees the given node and every successor of that node, using the function 'del' and free. Finally, the pointer to the list must be set to NULL._

## • ft_lstiter:
**Prototype:**
>_void ft_lstiter(t_list *lst, void (f)(void));_

**Description:**
>_Iterates the list 'lst' and applies the function 'f' on the content of each node._

## • ft_lstmap:
**Prototype:**
>_t_list *ft_lstmap(t_list *lst, void *(f)(void), void (del)(void));_

**Description:**
_Iterates the list 'lst' and applies the function 'f' on the content of each node. Creates a new list resulting from the successive applications of the function 'f'. The 'del' function is used to delete the content of a node if needed._


