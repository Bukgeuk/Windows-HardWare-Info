#pragma once

#pragma comment(lib, "pdh.lib")
#include <iostream>
#include <Windows.h>
#include <sysinfoapi.h>
#include <string>

namespace WindowsHWInfo
{
	class ProcessorInfo
	{
	public:
		DWORD NumberOfThread;
		std::wstring ProcessorName;
		void operator=(ProcessorInfo& Target);
		void GetProcessorInfo();
	};

	bool operator==(ProcessorInfo& A, ProcessorInfo& B); // ���� ������ true
	bool operator!=(ProcessorInfo& A, ProcessorInfo& B); // �ϳ��� �ٸ��� true
	bool operator|=(ProcessorInfo& A, ProcessorInfo& B); // �ϳ��� ������ true
	bool operator&=(ProcessorInfo& A, ProcessorInfo& B); // ���� �ٸ��� true
}
