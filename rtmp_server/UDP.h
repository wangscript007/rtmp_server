/********************************************************************
	日期:	2016/12/14 11:05:46
	文件名:	UDP.h
	作者:	BrianYi
	
	用途:	UDP连接的实现
*********************************************************************/
#pragma once
#include "CommonSocket.h"
class UDP :
    public CommonSocket
{
public:
    UDP();
    UDP(const UDP& inUDP);
    ~UDP();
	void listen_on_port(const USHORT& inPort);
	INT32 send(const Address& inAddress, const char* inContent, const size_t& inSize);
    INT32 send(const std::string& inIP, const USHORT& inPort, const char* inContent, const size_t& inSize);
    INT32 receive(char* outContent, const size_t& inSize, IOType inIOType = Blocking);
    INT32 receive(char* outContent, const size_t& inSize, Address& outAddress, IOType inIOType = Blocking);
    INT32 receive(char* outContent, const size_t& inSize, std::string& outIP, USHORT& outPort, IOType inIOType = Blocking);
};

