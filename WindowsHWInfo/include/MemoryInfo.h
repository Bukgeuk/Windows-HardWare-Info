#pragma once

#include <iostream>
#include <Windows.h>
#include <sysinfoapi.h>

namespace WindowsHWInfo
{
	enum MemoryUnit {
		Byte,
		KiloByte,
		MegaByte,
		GigaByte,
	};

	class MemoryStatus
	{
	public:
		MemoryUnit ReturnUnit = MemoryUnit::Byte;
		DWORD MemoryUtilization;
		double TotalPhysicsMemory;
		double AvailPhysicsMemory;
		double TotalVirtualMemory;
		double AvailVirtualMemory;
		double IsInterger = true;
		void operator=(MemoryStatus& Target);
		void GetMemoryInfo();
	private:
		const int __DIV = 1024;
	};

	bool operator==(MemoryStatus& A, MemoryStatus& B); // ���� ������ true
	bool operator!=(MemoryStatus& A, MemoryStatus& B); // �ϳ��� �ٸ��� true
	bool operator|=(MemoryStatus& A, MemoryStatus& B); // �ϳ��� ������ true
	bool operator&=(MemoryStatus& A, MemoryStatus& B); // ���� �ٸ��� true
}
