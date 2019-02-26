#include "OpcodeTable.h"

OpcodeTable::OpcodeTable()
// Initializes all the fields for every instruction in Opcode enum
{
  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";
 
  //Your code here
  
  myArray[ADDI].name = "addi"; myArray[ADD].numOps = 2;  
  myArray[ADDI].rdPos = -1; 
  myArray[ADDI].rsPos = 1;
  myArray[ADDI].rtPos = 0; 
  myArray[ADDI].immPos = 2;
  myArray[ADDI].instType = ITYPE;
  myArray[ADDI].op_field = "001000"; myArray[ADD].name = "sub";
  myArray[ADDI].numOps = 3;  myArray[ADD].rdPos = 0; 
  myArray[ADDI].rsPos = 1;
  myArray[ADDI].rtPos = 2; 
  myArray[ADDI].immPos = -1;
  myArray[ADDI].instType = RTYPE;
  myArray[ADDI].op_field = "000000";
  myArray[ADDI].funct_field = "100010";
 
  myArray[SUB].name = "sub";
  myArray[SUB].numOps = 3;  
  myArray[SUB].rdPos = 0; 
  myArray[SUB].rsPos = 1;
  myArray[SUB].rtPos = 2; 
  myArray[SUB].immPos = -1;
  myArray[SUB].instType = RTYPE;
  myArray[SUB].op_field = "000000";
  myArray[SUB].funct_field = "100011"; 

  myArray[MULT].name = "mult";
  myArray[MULT].numOps = 3;  
  myArray[MULT].rdPos = -; 
  myArray[MULT].rsPos = 1;
  myArray[MULT].rtPos = 2; 
  myArray[MULT].immPos = -1;
  myArray[MULT].instType = RTYPE;
  myArray[MULT].op_field = "000000";
  myArray[MULT].funct_field = "011000";
 
  myArray[MFHI].name = "mfhi";
  myArray[MFHI].numOps = 3;  
  myArray[MFHI].rdPos = -1; 
  myArray[MFHI].rsPos = 0;
  myArray[MFHI].rtPos = 1; 
  myArray[MFHI].immPos = -1;
  myArray[MFHI].instType = RTYPE;
  myArray[MFHI].op_field = "000000";
  myArray[MFHI].funct_field = "010000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

  myArray[ADD].name = "add";
  myArray[ADD].numOps = 3;  
  myArray[ADD].rdPos = 0; 
  myArray[ADD].rsPos = 1;
  myArray[ADD].rtPos = 2; 
  myArray[ADD].immPos = -1;
  myArray[ADD].instType = RTYPE;
  myArray[ADD].op_field = "000000";
  myArray[ADD].funct_field = "100000";

}




Opcode OpcodeTable::getOpcode(string str)
// Given a valid MIPS assembly mnemonic, returns an Opcode which represents a 
// template for that instruction.
{
  for(int i = 0; i < (int)UNDEFINED; i++){
    if(myArray[i].name == str){
      return (Opcode)i;
    }
  }
  return UNDEFINED;
}

int OpcodeTable::numOperands(Opcode o)
// Given an Opcode, returns number of expected operands.
{
  if(o < 0 || o >= UNDEFINED)
    return -1;

  return myArray[o].numOps;
}


int OpcodeTable::RSposition(Opcode o)
// Given an Opcode, returns the position of RS field.  If field is not
// appropriate for this Opcode, returns -1.
{
  if(o < 0 || o >= UNDEFINED)
    return -1;

  return myArray[o].rsPos;
}

int OpcodeTable::RTposition(Opcode o)
// Given an Opcode, returns the position of RT field.  If field is not
// appropriate for this Opcode, returns -1.
{
  if(o < 0 || o >= UNDEFINED)
    return -1;

  return myArray[o].rtPos;
}

int OpcodeTable::RDposition(Opcode o)
// Given an Opcode, returns the position of RD field.  If field is not
// appropriate for this Opcode, returns -1.
{
  if(o < 0 || o >= UNDEFINED)
    return -1;

  return myArray[o].rdPos;
}

int OpcodeTable::IMMposition(Opcode o)
// Given an Opcode, returns the position of IMM field.  If field is not
// appropriate for this Opcode, returns -1.
{
  if(o < 0 || o >= UNDEFINED)
    return -1;

  return myArray[o].immPos;
}

InstType OpcodeTable::getInstType(Opcode o)
// Given an Opcode, returns instruction type.
{
  if(o < 0 || o > UNDEFINED)
    return (InstType)-1;
  return myArray[o].instType;
}

string OpcodeTable::getOpcodeField(Opcode o)
// Given an Opcode, returns a string representing the binary encoding of the opcode
// field.
{
  if(o < 0 || o > UNDEFINED)
    return string("");
  return myArray[o].op_field;
}

string OpcodeTable::getFunctField(Opcode o)
// Given an Opcode, returns a string representing the binary encoding of the function
// field.
{
  if(o < 0 || o > UNDEFINED)
    return string("");
  return myArray[o].funct_field;
}

bool OpcodeTable::isIMMLabel(Opcode o)
// Given an Opcode, returns true if instruction expects a label in the instruction.
// See "J".
{
  if(o < 0 || o > UNDEFINED)
    return false;
  return myArray[o].immLabel;
}
