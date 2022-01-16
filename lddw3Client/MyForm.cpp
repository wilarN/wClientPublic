#include "MyForm.h"
#include "include.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    lddw3Client::MyForm form;
    Application::Run(% form);
}
