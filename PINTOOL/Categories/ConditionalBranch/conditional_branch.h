#pragma once
#include <TaintEngine\TaintManager.h>

namespace CONDITIONAL_BR 
{
// CALLBACKS 
void cJB  (INS &ins);
void cJNB (INS &ins);
void cJS  (INS &ins);
void cJNS (INS &ins);
void cJO  (INS &ins);
void cJNO (INS &ins);
void cJP  (INS &ins);
void cJNP (INS &ins);
void cJZ  (INS &ins);
void cJNZ (INS &ins);
void cJBE (INS &ins);
void cJNBE(INS &ins);
void cJL  (INS &ins);
void cJNL (INS &ins);
void cJLE (INS &ins);
void cJNLE(INS &ins);

// SIMULATE 
void sBELOW   (THREADID tid, bool isTaken, ADDRINT insAddress);
void sSIGN    (THREADID tid, bool isTaken, ADDRINT insAddress);
void sOVERFLOW(THREADID tid, bool isTaken, ADDRINT insAddress);
void sPARITY  (THREADID tid, bool isTaken, ADDRINT insAddress);
void sZERO    (THREADID tid, bool isTaken, ADDRINT insAddress);
void sLESS    (THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);
void sBELOW_OR_EQUAL(THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);
void sLESS_OR_EQUAL (THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);

void sNOT_BELOW   (THREADID tid, bool isTaken, ADDRINT insAddress);
void sNOT_SIGN    (THREADID tid, bool isTaken, ADDRINT insAddress);
void sNOT_OVERFLOW(THREADID tid, bool isTaken, ADDRINT insAddress);
void sNOT_PARITY  (THREADID tid, bool isTaken, ADDRINT insAddress);
void sNOT_ZERO    (THREADID tid, bool isTaken, ADDRINT insAddress);
void sNOT_LESS    (THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);
void sNOT_BELOW_OR_EQUAL(THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);
void sNOT_LESS_OR_EQUAL (THREADID tid, bool isTaken, ADDRINT eflagsValue, ADDRINT insAddress);
} // namespace CONDITIONAL_BR