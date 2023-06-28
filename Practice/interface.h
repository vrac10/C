struct Book
{
    int id;
    char title[100];
    char author[50];
    int price;
    int year;
}s[50];

void read(int n);
void display(int n);
void fetch_y(int year, int n);
void details(char *authorname, int n);
