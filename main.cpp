#include<iostream>
#include <cstdio>

using namespace std;





int main() {
    char sym;




    FILE* readfile, * writefile;
    if (fopen_s(&readfile, "D:\\file.txt", "r") != NULL)
        printf("Error opened file");
    else
    {
        if (fopen_s(&writefile, "D:\\file2.txt", "w") != NULL)
            printf("Error opened file");
        else
        {
            while ((sym = fgetc(readfile)) != EOF) {
                if (sym == '0')
                    fputc('1', writefile);
                else if (sym == '1')
                    fputc('0', writefile);
                else
                    fputc(sym, writefile);
            }
            fclose(readfile);
            fclose(writefile);
        }
    }
}