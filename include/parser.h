#pragma once
#include "exprtreenode.h"
#include "symtable.h"
#include <vector>
using namespace std;

class Parser {
public:
    vector<ExprTreeNode*> expr_trees;
    SymbolTable* symtable;

    Parser();
    ~Parser();

    void parse(vector<string> code);
};