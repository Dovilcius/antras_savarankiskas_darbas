#pragma once
#include "Header.h"
#include "Class.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Studentas duomenys();
	vector<Studentas> sarasas;
	vector<int> vertinimai;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			richTextBox1->Text = System::IO::File::ReadAllText("studentu_balai.txt");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiFailąToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ išsaugotiFailąĮToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rūšiuotiPagalVardąToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rūšiuotiPagalBaląToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiFailąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiFailąĮToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rūšiuotiPagalVardąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rūšiuotiPagalBaląToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->Location = System::Drawing::Point(724, 83);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Atidaryti failą";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Location = System::Drawing::Point(724, 156);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Išsaugoti failą į...";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->richTextBox1->Location = System::Drawing::Point(13, 57);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(703, 419);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->Location = System::Drawing::Point(724, 231);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(221, 47);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Rūšiuoti pagal vardą";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->Location = System::Drawing::Point(724, 305);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(221, 48);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Rūšiuoti pagal balą";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(960, 36);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->atidarytiFailąToolStripMenuItem,
					this->išsaugotiFailąĮToolStripMenuItem, this->rūšiuotiPagalVardąToolStripMenuItem, this->rūšiuotiPagalBaląToolStripMenuItem,
					this->uždarytiToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(73, 30);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// atidarytiFailąToolStripMenuItem
			// 
			this->atidarytiFailąToolStripMenuItem->Name = L"atidarytiFailąToolStripMenuItem";
			this->atidarytiFailąToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->atidarytiFailąToolStripMenuItem->Text = L"Atidaryti failą";
			this->atidarytiFailąToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiFailąToolStripMenuItem_Click);
			// 
			// išsaugotiFailąĮToolStripMenuItem
			// 
			this->išsaugotiFailąĮToolStripMenuItem->Name = L"išsaugotiFailąĮToolStripMenuItem";
			this->išsaugotiFailąĮToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->išsaugotiFailąĮToolStripMenuItem->Text = L"išsaugoti failą į...";
			this->išsaugotiFailąĮToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::išsaugotiFailąĮToolStripMenuItem_Click);
			// 
			// rūšiuotiPagalVardąToolStripMenuItem
			// 
			this->rūšiuotiPagalVardąToolStripMenuItem->Name = L"rūšiuotiPagalVardąToolStripMenuItem";
			this->rūšiuotiPagalVardąToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->rūšiuotiPagalVardąToolStripMenuItem->Text = L"Rūšiuoti pagal vardą";
			this->rūšiuotiPagalVardąToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::rūšiuotiPagalVardąToolStripMenuItem_Click);
			// 
			// rūšiuotiPagalBaląToolStripMenuItem
			// 
			this->rūšiuotiPagalBaląToolStripMenuItem->Name = L"rūšiuotiPagalBaląToolStripMenuItem";
			this->rūšiuotiPagalBaląToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->rūšiuotiPagalBaląToolStripMenuItem->Text = L"Rūšiuoti pagal balą";
			this->rūšiuotiPagalBaląToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::rūšiuotiPagalBaląToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(276, 34);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uždarytiToolStripMenuItem_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->Location = System::Drawing::Point(828, 429);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 47);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Uždaryti";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click_1);
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->BackColor = System::Drawing::SystemColors::Menu;
			this->info->Location = System::Drawing::Point(88, 9);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(37, 20);
			this->info->TabIndex = 9;
			this->info->Text = L"Info";
			this->info->Click += gcnew System::EventHandler(this, &Form1::info_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(960, 497);
			this->Controls->Add(this->info);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Studentai";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
		};
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
		};
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream datafile;
		datafile.open("studentu_balai.txt");
		string o = "null", vardass = "null", pavardee = "null";
		double balaii = 0;
		string arr[50];
		getline(datafile, o);
		int skaiciuotii = y(o);
		while (datafile.peek() != EOF) {
			getline(datafile, o);
			stringstream sar(o);
			for (int i = 0; i < skaiciuotii; i++) {
				sar >> arr[i];
				if (i == 0) { vardass = arr[i]; }
				else if (i == 1) { pavardee = arr[i]; }
				else if (i > 1 && i + 1 < skaiciuotii) { vertinimai.push_back(stoi(arr[i])); }
				else if (i + 1 ==skaiciuotii) { balaii = stoi(arr[i]); }
			};
			Studentas duomenys(vardass, pavardee, vertinimai, balaii);
			sarasas.push_back(duomenys);
			vertinimai.clear();

		}
		list<Studentas>sarasiukas(sarasas.begin(), sarasas.end());
		sarasiukas.sort(pirmas);
		vector<Studentas>nk(sarasiukas.begin(), sarasiukas.end());
		ofstream Rusiuotas("rusiuotas.txt");
		Rusiuotas << setw(20) << left << "Vardas" << setw(30) << left << "Pavarde" << left << setw(30) << "Galutinis balas" << "\n";
		for (int i = 0; i < nk.size(); i++) {
			Rusiuotas << setw(20) << left << nk[i].GetVardas() << setw(30) << left << nk[i].GetPavarde() << setw(30) << left << nk[i].GetGALUTINIS() << "\n";
		}
		datafile.close();
		Rusiuotas.close();
		sarasiukas.clear();
		sarasas.clear();
		nk.clear();


		richTextBox1->Text = System::IO::File::ReadAllText("rusiuotas.txt");

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream datafile;
		datafile.open("studentu_balai.txt");
		string o = "null", vardass = "null", pavardee = "null";
		double balaii = 0;
		string arr[50];
		getline(datafile, o);
		int skaiciuotii = y(o);
		while (datafile.peek() != EOF) {
			getline(datafile, o);
			stringstream sar(o);
			for (int i = 0; i < skaiciuotii; i++) {
				sar >> arr[i];
				if (i == 0) { vardass = arr[i]; }
				else if (i == 1) { pavardee = arr[i]; }
				else if (i > 1 && i + 1 < skaiciuotii) { vertinimai.push_back(stoi(arr[i])); }
				else if (i + 1 == skaiciuotii) { balaii = stoi(arr[i]); }
			};
			Studentas duomenys(vardass, pavardee, vertinimai, balaii);
			sarasas.push_back(duomenys);
			vertinimai.clear();

		}
		list<Studentas>sarasiukas(sarasas.begin(), sarasas.end());
		sarasiukas.sort(antras);
		vector<Studentas>nk(sarasiukas.begin(), sarasiukas.end());
		ofstream Rusiuotas("rusiuotas.txt");
		Rusiuotas << setw(20) << left << "Vardas" << setw(30) << left << "Pavarde" << setw(30) << left << "Galutinis balas" << "\n";
		for (int i = 0; i < nk.size(); i++) {
			Rusiuotas << setw(20) << left << nk[i].GetVardas() << setw(30) << left << nk[i].GetPavarde() << setw(30) << left << nk[i].GetGALUTINIS() << "\n";
		}
		datafile.close();
		Rusiuotas.close();
		sarasiukas.clear();
		sarasas.clear();
		nk.clear();


		richTextBox1->Text = System::IO::File::ReadAllText("rusiuotas.txt");
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Form1::Close();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("PIT-21-I-NT / Dovile Virsiliene", "Antras savarankiskas darbas", MessageBoxButtons::OK);
	}
	private: System::Void atidarytiFailąToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button1_Click(sender, e);
	}
	private: System::Void išsaugotiFailąĮToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button2_Click(sender, e);
	}
	private: System::Void rūšiuotiPagalVardąToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button3_Click(sender, e);
	}
	private: System::Void rūšiuotiPagalBaląToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button4_Click(sender, e);
	}
	private: System::Void uždarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form1::button5_Click_1(sender, e);
	}
	};

};