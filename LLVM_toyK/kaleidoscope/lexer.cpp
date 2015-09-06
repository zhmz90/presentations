#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>


// Lexer
//#######################
enum Token
{
    tok_eof = -1,

    tok_def = -2,
    tok_extern = -3,

    tok_identifier = -4,
    tok_number = -5
};

static std::string IdentifierStr; // tok_identifier
static double NumVal;   // tok_number
static int CurTok;

// return the next token from STDIN
static int gettok()
{
    static int LastChar = ' ';
    while (isspace(LastChar))
        LastChar = getchar();

    if (isalpha(LastChar))
    {
        IdentifierStr = LastChar;
        while (isalnum((LastChar = getchar())))
            IdentifierStr += LastChar;

        if (IdentifierStr == "def")
            return tok_def;
        if (IdentifierStr == "extern")
            return tok_extern;

        return tok_identifier;
    }

    if (isdigit(LastChar) || LastChar == '.')
    {
        std::string NumStr;
        do {
            NumStr += LastChar;
            LastChar = getchar();
        } while (isdigit(LastChar) || LastChar == '.');
    
        NumVal = strtod(NumStr.c_str(), 0);
        return tok_number;
    }

    if (LastChar == '#')
    {
        do
            LastChar = getchar();
        while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');
    
        if (LastChar != EOF)
            return gettok();
    }
    
    if (LastChar == EOF)
        return tok_eof;

    int ThisChar = LastChar;
    LastChar = getchar();
    return ThisChar;
}


static void main_loop()
{
    while (1)
    {
        fprintf(stderr,"kaleidoscope>");
        CurTok = gettok();

        fprintf(stderr,"%d\n",CurTok);
    }

}


int main(void)
{
    const char *s = "enum Token\n{\ntok_eof = -1,\ntok_def = -2,\ntok_extern = -3,\ntok_identifier = -4,\ntok_number = -5 \n};\n";

    fprintf(stderr,"%s",s);
    fprintf(stderr,"EOF is %d\n",EOF);
   
    main_loop();

    return 0;
}
