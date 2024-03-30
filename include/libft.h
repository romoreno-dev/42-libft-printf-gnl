/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romoreno <romoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:01:03 by romoreno          #+#    #+#             */
/*   Updated: 2022/10/24 20:03:26 by romoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief (1) Checks if a character is alphabetic.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int		ft_isalpha(int c);

/**
 * @brief (2) Checks if a character is a digit.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a digit, 0 otherwise.
 */
int		ft_isdigit(int c);

/**
 * @brief (3) Checks if a character is alphanumeric.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int		ft_isalnum(int c);

/**
 * @brief (4) Checks if a character is ASCII.
 *
 * @param c The character to be checked.
 * @return 1 if the character is ASCII (Between 0 and 127), 0 otherwise.
 */
int		ft_isascii(int c);

/**
 * @brief (5) Checks if a character is printable.
 *
 * @param c The character to be checked.
 * @return 1 if the character is equals or greater than 32 and smaller
 * than 127 in ASCII code, 0 otherwise.
 */
int		ft_isprint(int c);

/**
 * @brief (6) Calculates the length of a string.
 *
 * @param s Pointer to the null-terminated byte string.
 * @return Length of the string.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief (7) Sets the first len bytes of a memory space
 * with a constant byte c.
 *
 * @param b Pointer to the memory area.
 * @param c Value to be set.
 * @param len Number of bytes to be set.
 * @return Pointer to the memory area.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * @brief (8) Sets the first n bytes of a memory space with zero.
 *
 * @param s Pointer to the memory area.
 * @param n  Number of bytes to be set.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief (9) Copies len bytes from memory area src to memory area dst.
 * In case of overlapping memory blocks, its behaviour is undefined.
 *
 * @param dst Pointer to the memory area.
 * @param src Pointer to the memory area.
 * @param n Number of bytes to be copied.
 * @return Pointer to the destination memory area.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief (10) Copies len bytes from memory area src to memory area dst.
 * Terminal null character is not copies, not ensuring null-termination.
 * Its safer than ft_memcpy in case of overlapping memory block, because
 * in such cases, the copy is performed in reverse mode.
 *
 * @param dst Pointer to the memory area.
 * @param src Pointer to the memory area.
 * @param len Number of bytes to be copied.
 * @return Pointer to the destination memory area.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief (11) Copies a string to a fixed-size buffer,
 * truncating the string.
 * Terminal null character is not copies, not ensuring null-termination.
 *
 * @param dst Pointer to the destination buffer.
 * @param src  Pointer to the source string.
 * @param size Size of the destination buffer.
 * @return Length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief (12) Appends a string to a fixed-size buffer,
 * ensuring null-termination.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string.
 * @param dstsize Size of the destination buffer.
 * @return Total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief (13) Converts a character to uppercase.
 *
 * @param c The character to be converted.
 * @return The uppercase converted character.
 */
int		ft_toupper(int c);

/**
 * @brief (14) Converts a character to lowercase.
 *
 * @param c The character to be converted.
 * @return The lowercase converted character.
 */
int		ft_tolower(int c);

/**
 * @brief (15) Locates the first occurrence of a character in a string.
 *
 * @param s Pointer to the null-terminated string to search in.
 * @param c The character to search for.
 * @return Pointer to the first occurrence of c in s, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief (16) Locates the last occurrence of a character in a string.
 *
 * @param s Pointer to the null-terminated string to search in.
 * @param c The character to search for.
 * @return Pointer to the last occurrence of c in s, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief (17) Compare the first n bytes of two strings s1 and s2
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @return n Zero if both strings are equals. Less than or greather than zero
 * if, respectively, s1 is less than or greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief (18) Locates the first occurrence of a character
 * in a memory block.
 *
 * @param s Pointer to the memory block.
 * @param c The character to search for (which is converted to unsigned char)
 * @return Pointer to the first occurrence of c in s, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief (19) Compares the first n bytes of memory blocks s1 and s2.
 *
 * @param s1 Pointer to the first memory block.
 * @param s2 Pointer to the second memory block.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero
 * @return n Zero if both strings are equals. Less than or greather than zero
 * if, respectively, s1 is less than or greater than s2.
 * */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief (20) Locates a substring needle in the string haystack
 * searching only in the first len characters.
 *
 * @param haystack String to search in.
 * @param needle String to search for.
 * @param len Maximum number of characters to search.
 * @return
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief (21) Converts the initial portion of a string to an integer.
 *
 * @param str Pointer to the string to convert.
 * @return The converted integer value.
 */
int		ft_atoi(const char *str);

/**
 * @brief (22) Allocates memory for count elements of size bytes
 * and initializes to zero.
 *
 * @param count Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return Pointer to the allocated memory block, or NULL if allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief (23) Duplicates a string.
 *
 * @param s1 Pointer to the string to duplicate.
 * @return Pointer to the newly allocated memory containing a duplicate string
 * or NULL if allocation fails.
 */
char	*ft_strdup(const char *s1);

/**
 * @brief (24) Extracts a substring from a string.
 *
 * @param s Pointer to the string.
 * @param start Starting index of the substring.
 * @param len Length of the substring.
 * @return Pointer to the newly allocated memory containing the substring,
 * or NULL if allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief (25) Concatenates two strings.
 *
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return Pointer to the newly allocated memory containing
 * the concatenated string, or NULL if allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief (26) Trims leading and trailing characters from a string.
 *
 * @param s1 Pointer to the string to trim.
 * @param set Pointer to the set of characters to trim.
 * @return Pointer to the newly allocated memory containing
 * the trimmed string, or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief (27) Splits a string into an array of substrings
 * based on a delimiter character.
 *
 * @param s Pointer to the string to split.
 * @param c Delimiter character.
 * @return Pointer to the newly allocated memory containing
 * the array of substrings, or NULL if allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief (28) Converts an integer to a string.
 *
 * @param n Integer to convert.
 * @return Pointer to the newly allocated memory containing
 * the string representation of the integer, or NULL if allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief (29) Applies a function to each character of a string,
 * creating a new string from the results.
 *
 * @param s Pointer to the string to map.
 * @param f Pointer to the mapping function.
 * @return Pointer to the newly allocated memory containing the mapped string,
 * or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief (30) Applies a function to each character of a string.
 *
 * @param s Pointer to the string to iterate over.
 * @param f Pointer to the iteration function.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief (31) Writes a character to a file descriptor.
 *
 * @param c Character to write.
 * @param fd File descriptor (1 stdout, 2 stderr, etc.).
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief (32) Writes a string to a file descriptor.
 *
 * @param s Character to write.
 * @param fd File descriptor (1 stdout, 2 stderr, etc.).
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief (33) Writes a string following by a newline character
 * to a file descriptor.
 *
 * @param s String to write.
 * @param fd File descriptor (1 stdout, 2 stderr, etc.).
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief (34) Writes am integer number to a file descriptor.
 *
 * @param n Integer to write.
 * @param fd File descriptor (1 stdout, 2 stderr, etc.).
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief (35) Allocates and returns a new element of a t_list.
 *
 * @param content The content to create the new element with.
 * @return Pointer to the new element, or NULL if allocation fails.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief (36) Adds the element 'new' at the beginning of the t_list.
 *
 * @param lst Address of a pointer to the first link of a list
 * @param new Element to add to the list
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief (37) Counts the number of elements in the t_list.
 *
 * @param lst Pointer to the beginning of the t_list.
 * @return Number of elements.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief (38) Returns the last element of a t_list.
 *
 * @param lst Pointer to the beginning of the t_list.
 * @return Pointer to the last element of the t_list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief (39) Adds the element 'new' at the end of the t_list.
 *
 * @param lst Address of a pointer to the first link of a list.
 * @param new Element to add to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief (40) Deletes a single element from a list and frees
 * the memory of the element's content using the function 'del'.
 *
 * @param lst The element to delete.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief (41) Deletes and frees the memory of all the elements
 * of a list using the function 'del'.
 *
 * @param lst Address of a pointer to the first link of a list.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief (43) Iterates the list 'lst' and applies the function 'f'
 * to each element.
 *
 * @param lst The beginning of the list.
 * @param f The address of the function to apply to each element.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief (Lift 43) Iterates the list 'lst' and applies the function 'f'
 * to each element to create a new list.
 *
 * @param lst The beginning of the list.
 * @param f The address of the function used to create the new element.
 * @param del The address of the function used to delete the content of
 * an element if needed.
 * @return The new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Prints the string str and, attending to the format
 * specifiers cspdiuxX, prints the variable arguments when if required.
 *
 * @param str String format with format specifiers
 * @param ... Variable arguments that are required by the string format
 * @return
 */
int		ft_printf(char const *str, ...);

/**
 * @brief (get_next_line) Reads a single line from a file descriptor.
 *
 * @param fd File descriptor (Example: 0 stdin).
 */
char	*get_next_line(int fd);

#endif
