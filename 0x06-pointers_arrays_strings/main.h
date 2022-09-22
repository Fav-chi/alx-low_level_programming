1 ifndef _main_h_
2 #define _main_h_
3
4 char *_strcat(char *dest, char *src);
5 char *_strncat(char *dest, char *src, int n);
6 char *_strncpy(char *dest, char *src, int n);
7 int _strcmp(char *s1, char *s2);
8 void reverse_array(int *a, int n);
9 char *string_toupper(char *);
10 char *cap_string(char *);
11 char *leet(char *);
12 char *rot13(char *);
13 void print_number(int n);
14 char *infinite_add(char *n1, char *n2, char *r, int size_r);
15 void print_buffer(char *b, int size);
16 char *add_strings(char *n1, char *n2, char *r, int r_index);
17
18 #endif
