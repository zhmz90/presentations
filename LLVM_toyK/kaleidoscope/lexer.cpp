enum Token {
    tok_eof = -1,
    tok_def = -2, tok_extern = -3,
    tok_identifier = -4, tok_number = -5,
};
static std::string IdentifierStr; // tok_identifier
static double NumVal; // tok_number

static int get_tok()
{
    static int LastChar = ' ';

    // skip any whitespace
    while (isspace(LastChar))
        LastChar = getChar();

    if (isalpha(LastChar)) // identifier:[a-zA-z][a-zA-Z]*
    {
        IdentifierStr = LastChar;
        while (isalnum(LastChar = getChar())) // [a-zA-z][a-zA-Z0-9]*
            IdentifierStr += LastChar;
        
        if (IdentifierStr == "def") return tok_def;
        if (IdentifierStr == "extern") return tok_extern;
        return tok_identifier;
    }

    if (isdigit(LastChar) || LastChar == '.' )
    {
        std::string NumStr;
        do {
            NumStr += LastChar;
            LastChar = getChar();
        } while (isdigit(LastChar() || LastChar == '.'));
    
        NumVal = strtod(NumStr.c_str(), 0);
        return tok_number;
    }

    if (LastChar == '#')
    {
        do LastChar = getchar();
        while (LastChar != EOF && LastChar != '\n' &&  LastChar != '\r');
    
        if (LastChar != EOF)
            return gettok();
    }
    
    if (LastChar == EOF)
        return tok_eof;
    
    int ThisChar = LastChar;
    LastChar = getchar();
    return ThisChar;
}

