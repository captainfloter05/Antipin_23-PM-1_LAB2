typedef struct Furniture{
char name[40];
char material[40];
int per;//"per"-срок гарантии (в месяцах)
}Furniture;
void create(Furniture**arr, int *n);
void read(Furniture**arr, int *n);
void write(Furniture*arr, int n);
void search(Furniture*arr, int n);
