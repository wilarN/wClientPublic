#pragma once

#include <windows.h>
#include <math.h>
#include <string>
#include "func.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>

namespace lddw3Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::TextBox^ usernameInputBox;
	private: System::Windows::Forms::TextBox^ passwordInputBox;
	protected:

	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::LinkLabel^ labelLinkDownRight;
	private: System::Windows::Forms::Button^ registerButton;

	private: System::Windows::Forms::Button^ loginButton;

	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ mainStuff;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameInputBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordInputBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->labelLinkDownRight = (gcnew System::Windows::Forms::LinkLabel());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->mainStuff = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::White;
			this->usernameLabel->Location = System::Drawing::Point(276, 120);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(106, 30);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"Username";
			// 
			// usernameInputBox
			// 
			this->usernameInputBox->Location = System::Drawing::Point(281, 154);
			this->usernameInputBox->Name = L"usernameInputBox";
			this->usernameInputBox->Size = System::Drawing::Size(100, 20);
			this->usernameInputBox->TabIndex = 1;
			// 
			// passwordInputBox
			// 
			this->passwordInputBox->Location = System::Drawing::Point(281, 231);
			this->passwordInputBox->Name = L"passwordInputBox";
			this->passwordInputBox->Size = System::Drawing::Size(100, 20);
			this->passwordInputBox->TabIndex = 3;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::Color::White;
			this->passwordLabel->Location = System::Drawing::Point(276, 197);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(99, 30);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			// 
			// labelLinkDownRight
			// 
			this->labelLinkDownRight->AutoSize = true;
			this->labelLinkDownRight->BackColor = System::Drawing::Color::Transparent;
			this->labelLinkDownRight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLinkDownRight->Location = System::Drawing::Point(12, 349);
			this->labelLinkDownRight->Name = L"labelLinkDownRight";
			this->labelLinkDownRight->Size = System::Drawing::Size(252, 13);
			this->labelLinkDownRight->TabIndex = 4;
			this->labelLinkDownRight->TabStop = true;
			this->labelLinkDownRight->Text = L" © 2022 D3v0 DEv3l0pM3n7.  All rights reserved.";
			this->labelLinkDownRight->VisitedLinkColor = System::Drawing::Color::Blue;
			this->labelLinkDownRight->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::labelLinkDownRight_LinkClicked);
			// 
			// registerButton
			// 
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->Location = System::Drawing::Point(281, 331);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(100, 23);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(280, 292);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(101, 21);
			this->loginButton->TabIndex = 6;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(482, 212);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(159, 150);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(281, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// mainStuff
			// 
			this->mainStuff->AutoSize = true;
			this->mainStuff->Location = System::Drawing::Point(52, 60);
			this->mainStuff->Name = L"mainStuff";
			this->mainStuff->Size = System::Drawing::Size(52, 13);
			this->mainStuff->TabIndex = 12;
			this->mainStuff->Text = L"main stuff";
			this->mainStuff->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(644, 371);
			this->Controls->Add(this->mainStuff);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->labelLinkDownRight);
			this->Controls->Add(this->passwordInputBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameInputBox);
			this->Controls->Add(this->usernameLabel);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"wClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Register clicked");
	try
	{
		// SELECT EXISTS(SELECT 1 FROM mysql.user WHERE user = 'username')
		// SHOW COLUMNS FROM `table` LIKE 'fieldname';
		/*
		* 
		*
		* 
		String^ connectionInfo = "Server=127.0.0.1;Uid=root;Pwd=;Database=masterDB";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		std::string tmpID;
		String^ Username = usernameInputBox->Text;
		String^ Password = passwordInputBox->Text;
		MySqlDataReader^ dataReader;
		tmpID = generate_random_id(10);
		int userID = std::stoi(tmpID);
		MySqlCommand^ connCmdInsert = gcnew MySqlCommand("insert into userinfotbl values(" + userID + ",'" + Username + "','" + Password + "')", conn);
		MySqlDataAdapter^ connCmdCheck = gcnew MySqlDataAdapter("select * from userinfotbl", conn);
		DataTable^ dt = gcnew DataTable();
		conn->Open();
		dataReader = connCmdInsert->ExecuteReader();
		MessageBox::Show("Command Executed");
		conn->Close();
		connCmdCheck->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
		*/
    
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void labelLinkDownRight_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}
