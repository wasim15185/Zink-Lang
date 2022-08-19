
/*
MIT License
Copyright (c) 2022 Wasim Akram Biswas
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/



#include"Zink.hpp"
#include<vector>
#include<cstdint>
#include<Token.hpp>
#include<TokenType.hpp>
#include<scanner.hpp>



using namespace std;
using namespace zink;
using namespace frontend;

// defination of function
static void run(const string& line); 
static void repl();

static void repl()
{
    char* line = (char*)malloc(1024);

    cout << "\n\t Zink Programming Language (Beta) \n"
        << endl;

    while (true)
    {
        cout << " > ";

        cin.getline(line, 1024);


        if (strlen(line) == 0)
            continue;

        run(line);
    }
}

static void run(const string& line) {
    cout << line + "\n";

  //  Scanner* scanner = new Scanner();

}



int main()
{
 
    repl();

	cout << "Program is exit... \n" << frontend::TokenTypeName::getName(frontend:: TokenType::LET) << endl;

	return 0;
}