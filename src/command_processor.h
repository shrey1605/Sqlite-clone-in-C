#ifndef COMMAND_PROCESSOR_H_
#define COMMAND_PROCESSOR_H_

#include "common.h"

MetaCommandResult do_meta_command(InputBuffer* input_buffer, Table* table);
PrepareResult prepare_insert(InputBuffer* input_buffer, Statement* statement);
PrepareResult prepare_statement(InputBuffer* input_buffer, Statement* statement);

#endif