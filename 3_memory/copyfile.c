#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy infile outfile\n");
    }

    FILE *infile = fopen(argv[1], "r");
    FILE *outfile = fopen(argv[2], "w");

    char c = fgetc(infile);
    do
    {
        fputc(c, outfile);
        c = fgetc(infile);
    }
    while (c != EOF);

    fclose(infile);
    fclose(outfile);
}