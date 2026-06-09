
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"
#include <string.h>

// Function's Prototypes
void    test_all_is(void);
void    test_is(int(*ft_test)(int c), int (*f_original)(int c), char *txt);
int main(void)
{
    test_all_is();

    // TESTS FOR FT_MEMSET
    char    buffer[] = "Hello World";
    char    buffer2[] = "Hello World";

    void *res = ft_memset(buffer, 'c', 10);
    void *res2 = memset(buffer2, 'c', 10);

    printf("TESTING FT_MEMSET...\n");
    if (res != buffer || res2 != buffer2)
    {
        printf("Error: contents do not match");
        return (1);
    }
    if (memcmp(buffer, buffer2, sizeof(buffer)) != 0)
    {
        printf("Error: memory contents do not match");
        return (1);
    }
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    // TESTS FOR BZERO
    char    buffer3[] = "Hello World";
    char    buffer4[] = "Hello World";

    ft_bzero(buffer3, 10);
    bzero(buffer4, 10);
    printf("TESTING FT_BZERO\n");
    if (memcmp(buffer3, buffer4, sizeof(buffer3)) != 0)
    {   
        printf("ERROR: memory contents do not match\n");
        return (1);
    }
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    // TESTING FT_MEMCPY
    char    str[] = "Ola";
    char    str1[4];

    printf("TESTING FT_MEMCPY\n");
    ft_memcpy(str1, str, 4);
    if (memcmp(str, str1, 4) != 0)
    {
        printf("Error: memory contents do not match\n");
        return (1);
    }
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    // TESTING FT_MEMMOVE
    char    arr_dest[10];
    char    arr_src[] = "ola mundo";
    char    arr_dest_ft[10];
    char    arr_src_ft[] = "ola mundo";

    printf("TESTING FT_MEMMOVE\n");
    ft_memmove(arr_dest_ft, arr_src_ft, 6);
    memmove(arr_dest, arr_src, 6);
    if (memcmp(arr_dest, arr_dest_ft, 6) != 0)
    {
        printf("ERROR: memory contents do not match...\n");
        return (1);
    }
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    // TEST FOR FT_STRLCPY
    char    dest_ft[10];
    char    src_ft[] = "";
    char    dest[10];
    char    src[] = "";

    printf("TESTING FT_STRLCPY\n");
    ft_strlcpy(dest_ft, src_ft, 5);
    strlcpy(dest, src, 5);
    if(strcmp(dest_ft, dest) != 0)
    {
        printf("ERROR: strings do not match..;\n");
        return (1);
    }
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    
    // TESTING FT_STRLCAT
    char    dest_ft1[6] = "Hello";
    char    src_ft1[] = " Mundo";
    char    dest1[6] = "Hello";
    char    src1[] = " Mundo";
    
    printf("TESTING FT_STRLCAT\n");
    ft_strlcat(dest_ft1, src_ft1, 3);
    strlcat(dest1, src1, 3);
    printf("Test case 1: ft_strlcat -> %s\n strlcat -> %s\n", dest_ft1, dest1);
    if (strcmp(dest_ft1, dest1) != 0)
    {
        printf("ERROR: strings do not match...\n");
        return (1);
    }
    //if (ft_strlcat(dest_ft1, src_ft1, 10) != strlcat(dest1, src1, 10))
    //{
        printf("checking return value for ft_strlcat: %ld, ", ft_strlcat(dest_ft1, src_ft1, 3));
        printf("checking return value for strlcat: %ld\n", strlcat(dest1, src1, 3));
    //}
    printf("SUCCESS!\n\n");
printf("###############################################\n\n");    // TESTING FT_TOUPPER
    char    test_upper = 'a';
    char    res_fttoupper;
    char    res_toupper;
    printf("TESTING FT_TOUPPER...\n");
    res_fttoupper = ft_toupper(test_upper);
    res_toupper = toupper(test_upper);
    if (res_fttoupper != res_toupper)
    {
        printf("ERROR: characters do not match...\n");
        return (1);
    }
    printf("%c, %c\n", ft_toupper(test_upper), toupper(test_upper));
    printf("SUCCESS!\n\n");
    printf("###############################################\n\n");
    // TESTING FT_TOLOWER
    char    test_lower = 'A';
    char    res_ft_tolower;
    char    res_tolower;
    printf("TESTING FT_TOLOWER...\n");
    res_ft_tolower = ft_tolower(test_lower);
    res_tolower = tolower(test_lower);
    if (res_ft_tolower != res_tolower)
    {
        printf("%c, %c\n", res_ft_tolower, res_tolower);
        printf("ERROR: characters do not match...\n");
        return (1);
    }
    printf("%c, %c\n", ft_tolower(test_lower), tolower(test_lower));
    printf("SUCCESS!\n\n");
    printf("###############################################\n\n");
    // TESTING FT_STRCHR
    char    string[5] = "abcd";
    // char    string1[8] = "'\0'acf";

    printf("TESTING FT_STRCHR...\n");
    printf("%c, %c\n\n", *ft_strchr(string, 'c'), *strchr(string, 'a'));
    printf("SUCCESS!\n\n");
    printf("###############################################\n\n");

    printf("TESTING FT_STRNSTR...\n");
    char    ftstrnstr[] = "abacaxi";
    char    str_needle[] = "cax";
    
    printf("%c\n", *ft_strnstr(ftstrnstr, str_needle, 7));
    printf("%c\n\n", *strnstr(ftstrnstr, str_needle, 7));
    printf("###############################################\n\n");
    printf("TESTING FT_STRTRIM...\n");
    const char s1[] = "";
    const char set[] = "";

    printf("%s", ft_strtrim(s1, set));
    return (0);
}

//Function that receives another function and compares it with its original.

void    test_is(int(*ft_test)(int c), int (*f_original)(int c), char *txt)
{
    int i;

    i = 0;
    printf("Tests for %s...\n", txt);
    while (i <= 255)
    {
        assert((((*ft_test)(i) != 0) == ((*f_original)(i) != 0)));
            i++;
    }
    printf("%s: OK!\n\n", txt);
    printf("###############################################\n\n");
}

void    test_all_is(void)
{
    test_is(ft_isalpha, isalpha, "ft_isalpha");
    test_is(ft_isdigit, isdigit, "ft_isdigit");
    test_is(ft_isalnum, isalnum, "ft_isalnum");
    test_is(ft_isascii, isascii, "ft_isascii");
}

// void    ft_memset_test(void (*my_function)(void *s, int c, size_t n), void (*f_original)(void *s, int c, size_t n), )
// {
   
//     return (0);
// }