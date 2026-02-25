#include "pch.h"
#include "Sample.h"

#include <iostream>
#include <windows.h>

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
	AllocConsole();
	std::freopen("CONOUT$", "w", stdout);
	std::freopen("CONIN$", "r", stdin); 

	std::cout << "Console initialized\n";

	Sample tmp;
	tmp.PrintSampleData();

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}

void load_data() {

}