#pragma once

#include <iostream>
#include <Windows.h>
#include <sysinfoapi.h>
#include <string>

namespace WindowsHWInfo
{
	enum OSbit {
		_32bit = 1,
		_64bit
	};

	class OperatingSystemInfo
	{
	public:
		std::wstring WindowsVersion;
		OSbit WindowsBit;
		void operator=(OperatingSystemInfo& Target);
		void GetOSInfo();
	private:
		bool Is64Bit();
	};

	bool operator==(OperatingSystemInfo& A, OperatingSystemInfo& B); // ���� ������ true
	bool operator!=(OperatingSystemInfo& A, OperatingSystemInfo& B); // �ϳ��� �ٸ��� true
	bool operator|=(OperatingSystemInfo& A, OperatingSystemInfo& B); // �ϳ��� ������ true
	bool operator&=(OperatingSystemInfo& A, OperatingSystemInfo& B); // ���� �ٸ��� true
}
