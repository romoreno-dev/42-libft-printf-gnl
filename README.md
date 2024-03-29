
# Get started

- El repositorio dispone de un Makefile con las normas `$(NAME)`, `all`, `clean`, `fclean` y `re`
- Ejecutando el comando `make`, puede obtenerse la librería compilada `libft.a`. Se dispone de los prototipos de las funciones (separadas por el proyecto del cursus correspondiente) en el directorio `/include`
- Si eres estudiante y quisieras testear mi código con algún tester como `francinette`, recuerda que está pensado para los proyectos individualizados y que requiere que la declaración de los prototipos (`.h`) esté en el mismo directorio que los ficheros fuente `.src`

# Contenido

![holy_graph_libft.png](holy_graph_libft.png)

Este repositorio agrupa **los primeros tres proyectos del Cursus de 42**.

Dichos proyectos consisten en implementar diversas funciones de la Standard C Library (libc) a partir de su prototipo.
Pienso que no tendría sentido dedicar varios repositorios cuando los propios subjects del Cursus animan a su unión: 
> Una vez que superes este ejercicio, podrás incluir ft_printf() en tu libft, por lo
que podrás utilizarla en futuros proyectos en C.

En esta parte del Cursus se pretende asentar la introducción al lenguage C ya adquirida en la C Piscina y profundizar en aspectos como la gestión de memoria y las estructuras de datos.

En todo momento se sigue la [Norminette](https://github.com/42School/norminette), norma de estilo oficial del Campus. Esta no solo promueve un código claro y autoexplicativo, sino que también 
impone restricciones oportunamente diseñadas para que los proyectos supongan un verdadero reto de aprendizaje para el estudiante. Al mismo tiempo, los estudiantes que aún no tienen experiencia laboral como desarrolladores 
pueden ir acostumbrándose a los equipos de desarrollo, donde es fundamental seguir normas y estilos comunes para asegurar la calidad del software.

## libft 42 Project (Rank 00)
**Score: 125/100**
> Your first own library

Se desarrolla una librería personal de C, `libft.a`, que contiene:

#### Funciones de `<ctype.h>`:   
`ft_isalpha` - comprueba es una letra  
`ft_isdigit` - comprueba si es un dígito   
`ft_isalnum` - comprueba si es alfanumérico
`ft_isascii` - comprueba si es un carácter ASCII    
`ft_isprint` - comprueba si es un carácter imprimible   
`ft_toupper` - convierte un carácter a mayúsculas   
`ft_tolower` - convierte un carácter a minúsculas   

#### Funciones de `<string.h>`:    
`ft_memset` - llena una región de memoria con el byte que se indica   
`ft_strlen` - calcula la longitud de un string   
`ft_bzero` - llena una región de memoria con cero   
`ft_memcpy` - copia una región de memoria (sin considerar el solapamiento)   
`ft_memmove` - copia una región de memoria (considerando el solapamiento)   
`ft_strlcpy` - copia un string a un espacio especificado   
`ft_strlcat` - concatena un string a un espacio especificado   
`ft_strchr` - localiza la primera aparición de un carácter en un string   
`ft_strrchr` - localiza la última aparición carácter en un string   
`ft_strncmp` - compara dos strings   
`ft_memchr` - localiza la primera aparición de un carácter en una región de memoria    
`ft_memcmp` - compara dos regiones de memoria   
`ft_strnstr` - localiza un substring en un string   
`ft_strdup` - duplica un string, reservando la memoria necesaria    

#### Funciones de `<stdlib.h>`:   
`ft_atoi` - convierte la primera parte de un string a entero   
`ft_calloc` - reserva memoria e inicia sus valores a 0   

#### Funciones no estándar:
`ft_substr` - devuelve un substring de un string, reservando la memoria necesaria   
`ft_strjoin` - concatena dos strings, reservando la memoria necesaria   
`ft_strtrim` - devuelve string sin espacios al comienzo y al final, reservando la memoria necesaria    
`ft_split` - devuelve un array de los elementos de un string (delimitados por un separador)   
`ft_itoa` - convierte un entero a string   
`ft_strmapi` - aplica una función dada a cada carácter de un string,devolviendo un string con el resultado   
`ft_striteri` - aplica una función dada a cada carácter de un string para modificarlo   
`ft_putchar_fd` - imprime un carácter por la salida indicada por un file descriptor   
`ft_putstr_fd` - imprime un string por la salida indicada por un file descriptor   
`ft_putendl_fd` - imprime un string, seguido de una nueva línea, por la salida indicada por un file descriptor  
`ft_putnbr_fd` - imprime un número entero por la salida indicada por un file descriptor   

#### (BONUS)  
#### Funciones de listas enlazadas:  
`ft_lstnew` - crea un nuevo elemento de una lista `t_list` previamente definida   
`ft_lstadd_front` - añade un elemento al comienzo de la lista   
`ft_lstsize` - cuenta el número de elementos de la lista  
`ft_lstlast` - devuelve el último elemento de la lista  
`ft_lstadd_back` - añade un elemento al final de la lista  
`ft_lstclear` - elimina y libera la lista  
`ft_lstmap` - aplica una funcióna a cada elemento de la lista, devolviendo una nueva lista modificada  
`ft_lstiter` - aplica una función a cada elemento de la lista para modificarlo   


## - printf 42 Project (Rank 01)
Score: 100/100
> Because ft_putstr & ft_putnbr aren't enough

Se implementa la función `ft_printf` a imagen de la función original de `<stdio.h>`. 
La implementación pedida en la parte general es muy sencilla, puesto que solo pretende introducir el concepto de funciones variádicas en C. Son requeridos únicamente los especificadores de formato:
- `c` Imprime un carácter
- `s` Imprime un string
- `d`, `i` Imprime un entero
- `p` Imprime la dirección de memoria de un puntero (hexadecimal que comienza por 0x)
- `u` Imprime un entero sin signo
- `x` Imprime un número hexadecimal (minúsculas a-f)
- `X` Imprime un número hexadecimal (mayúsculas A-F)

#### (BONUS)
Existe una parte bonus que no fue realizada. Se anima al lector a profundizar en ella:

- Gestionar cualquier combinación de los siguientes flags: ’-0.’ y el ancho mínimo (field minimum width) bajo todas las conversiones posibles.  
- Gestionar todos los siguientes flags: ’# +’ (siendo uno de ellos un espacio).


## - get_next_line 42 Project (Rank 01)
Score: 112/100
> Reading a line on a fd is a way too tedious

Lee una línea de la entrada indicada mediante un file descriptor (Considerando como final de línea un salto de línea '\n' o el final del fichero).
Se recuerda que la entrada estándar corresponde a File Descriptor 0. 

Este proyecto introduce el concepto de variables estáticas en C.

#### (BONUS)
El bonus reta a realizar el proyecto utilizando una única variable estática y permitiendo la lectura de varios ficheros de forma simultánea.
