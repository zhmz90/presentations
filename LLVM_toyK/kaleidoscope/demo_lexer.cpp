#include "library.h"

#include "lexer.cpp"

static void main_loop()
{
    while (1)
    {
        fprintf(stderr,"kaleidoscope>");
        switch (CurTok)
        {
            case 1: //tok_eof:
                return;
            case ';':
              //  getNextToken();
                break;
        
        }

    }

}


int main(void)
{
    main_loop();

    return 0;
}
