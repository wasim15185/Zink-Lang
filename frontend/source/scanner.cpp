#include"scanner.hpp"

using namespace zink;
using namespace frontend;

bool zink::frontend::Scanner::isAtEnd()
{
	return false;
}

Scanner::Scanner(std::string source)
{
	this->source = source;
}

Scanner::~Scanner()
{
}