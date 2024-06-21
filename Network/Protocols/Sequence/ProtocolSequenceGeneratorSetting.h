#ifndef SEQUENCE_GENERATOR_SETTING_H
#define SEQUENCE_GENERATOR_SETTING_H

#include "Network/Protocols/SerialProtocol.h"

enum CMD_SEQUENCE_GENERATOR
{
    CMD_SEQUENCE_GENERATOR_EMPTY,
    CMD_SEQUENCE_GENERATOR_SQ_INPUT_MODE ,
    CMD_SEQUENCE_GENERATOR_SQ_TOTAL_STEP,
    CMD_SEQUENCE_GENERATOR_SQ_SAVE,
    CMD_SEQUENCE_GENERATOR_SQ_ID,
    CMD_SEQUENCE_GENERATOR_SQ_STEP_NUMBER = 0x0A,
    CMD_SEQUENCE_GENERATOR_SQ_PROCESS_NUMBER,
    CMD_SEQUENCE_GENERATOR_SQ_PROCESS_PARAMETER_BYTE,
    CMD_SEQUENCE_GENERATOR_SQ_PROCESS_PARAMETER_WORD,
    CMD_SEQUENCE_GENERATOR_SQ_PROCESS_PARAMETER_DWORD,
};

#endif // SEQUENCEGENERATORSETTING_H
