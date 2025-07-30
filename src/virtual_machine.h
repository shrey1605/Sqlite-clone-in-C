#ifndef VIRTUAL_MACHINE_H_
#define VIRTUAL_MACHINE_H_

#include "common.h"

ExecuteResult execute_insert(Statement* statement, Table* table);
ExecuteResult execute_select(Statement* statement, Table* table);
ExecuteResult  execute_statement(Statement* statement, Table* table);

#endif