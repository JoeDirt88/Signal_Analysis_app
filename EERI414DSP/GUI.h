#pragma once
#include "Globals.h"
#include "Windows.h"

// create an ofstream for the file output (see the link on streams for
// more info)
// create a name for the file output

int funcy = 0;
namespace EERI414DSP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  X_But;

	private: System::Windows::Forms::Label^  P1_Tit;
	private: System::Windows::Forms::GroupBox^  Box_Tit;
	private: System::Windows::Forms::Button^  S_But;

	private: System::Windows::Forms::TabControl^  DISP_P;
	private: System::Windows::Forms::TabPage^  AnalogueDomainTF;

	private: System::Windows::Forms::TabPage^  DigitalDomainTF;

	private: System::Windows::Forms::TabPage^  InputSignal;

	private: System::Windows::Forms::TabPage^  InputSignalFFT;

	private: System::Windows::Forms::TabPage^  Type2Output;

	private: System::Windows::Forms::GroupBox^  CMD_BOX;
	private: System::Windows::Forms::TextBox^  CMD_DISP;
	public: System::Windows::Forms::ProgressBar^  PROG_B;
	private: System::Windows::Forms::TabPage^  Type2FFT;
	public:
	private: System::Windows::Forms::TabPage^  CanonicalOutput;
	private: System::Windows::Forms::TabPage^  CanonicalFFT;
	private:




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->X_But = (gcnew System::Windows::Forms::Button());
			this->P1_Tit = (gcnew System::Windows::Forms::Label());
			this->Box_Tit = (gcnew System::Windows::Forms::GroupBox());
			this->PROG_B = (gcnew System::Windows::Forms::ProgressBar());
			this->S_But = (gcnew System::Windows::Forms::Button());
			this->DISP_P = (gcnew System::Windows::Forms::TabControl());
			this->AnalogueDomainTF = (gcnew System::Windows::Forms::TabPage());
			this->DigitalDomainTF = (gcnew System::Windows::Forms::TabPage());
			this->InputSignal = (gcnew System::Windows::Forms::TabPage());
			this->InputSignalFFT = (gcnew System::Windows::Forms::TabPage());
			this->Type2Output = (gcnew System::Windows::Forms::TabPage());
			this->Type2FFT = (gcnew System::Windows::Forms::TabPage());
			this->CanonicalOutput = (gcnew System::Windows::Forms::TabPage());
			this->CanonicalFFT = (gcnew System::Windows::Forms::TabPage());
			this->CMD_BOX = (gcnew System::Windows::Forms::GroupBox());
			this->CMD_DISP = (gcnew System::Windows::Forms::TextBox());
			this->Box_Tit->SuspendLayout();
			this->DISP_P->SuspendLayout();
			this->CMD_BOX->SuspendLayout();
			this->SuspendLayout();
			// 
			// X_But
			// 
			this->X_But->Location = System::Drawing::Point(924, 14);
			this->X_But->Name = L"X_But";
			this->X_But->Size = System::Drawing::Size(80, 20);
			this->X_But->TabIndex = 0;
			this->X_But->Text = L"EXIT";
			this->X_But->UseVisualStyleBackColor = true;
			this->X_But->Click += gcnew System::EventHandler(this, &GUI::X_But_Click);
			// 
			// P1_Tit
			// 
			this->P1_Tit->AutoSize = true;
			this->P1_Tit->Font = (gcnew System::Drawing::Font(L"Lucida Console", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_Tit->Location = System::Drawing::Point(6, 14);
			this->P1_Tit->Name = L"P1_Tit";
			this->P1_Tit->Size = System::Drawing::Size(716, 47);
			this->P1_Tit->TabIndex = 2;
			this->P1_Tit->Text = L"EERI 414 DSP APPLICATION";
			// 
			// Box_Tit
			// 
			this->Box_Tit->Controls->Add(this->PROG_B);
			this->Box_Tit->Controls->Add(this->S_But);
			this->Box_Tit->Controls->Add(this->P1_Tit);
			this->Box_Tit->Controls->Add(this->X_But);
			this->Box_Tit->Location = System::Drawing::Point(2, 2);
			this->Box_Tit->Name = L"Box_Tit";
			this->Box_Tit->Size = System::Drawing::Size(1025, 69);
			this->Box_Tit->TabIndex = 3;
			this->Box_Tit->TabStop = false;
			this->Box_Tit->Text = L"APPLICATION MAIN CONTROL";
			// 
			// PROG_B
			// 
			this->PROG_B->AccessibleRole = System::Windows::Forms::AccessibleRole::ProgressBar;
			this->PROG_B->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PROG_B->ForeColor = System::Drawing::Color::Lime;
			this->PROG_B->Location = System::Drawing::Point(729, 14);
			this->PROG_B->Name = L"PROG_B";
			this->PROG_B->Size = System::Drawing::Size(189, 43);
			this->PROG_B->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->PROG_B->TabIndex = 4;
			// 
			// S_But
			// 
			this->S_But->Location = System::Drawing::Point(924, 37);
			this->S_But->Name = L"S_But";
			this->S_But->Size = System::Drawing::Size(80, 20);
			this->S_But->TabIndex = 3;
			this->S_But->Text = L"START";
			this->S_But->UseVisualStyleBackColor = true;
			this->S_But->Click += gcnew System::EventHandler(this, &GUI::S_But_Click);
			// 
			// DISP_P
			// 
			this->DISP_P->Controls->Add(this->AnalogueDomainTF);
			this->DISP_P->Controls->Add(this->DigitalDomainTF);
			this->DISP_P->Controls->Add(this->InputSignal);
			this->DISP_P->Controls->Add(this->InputSignalFFT);
			this->DISP_P->Controls->Add(this->Type2Output);
			this->DISP_P->Controls->Add(this->Type2FFT);
			this->DISP_P->Controls->Add(this->CanonicalOutput);
			this->DISP_P->Controls->Add(this->CanonicalFFT);
			this->DISP_P->Location = System::Drawing::Point(2, 78);
			this->DISP_P->Name = L"DISP_P";
			this->DISP_P->SelectedIndex = 0;
			this->DISP_P->Size = System::Drawing::Size(722, 562);
			this->DISP_P->TabIndex = 4;
			// 
			// AnalogueDomainTF
			// 
			this->AnalogueDomainTF->BackColor = System::Drawing::Color::Transparent;
			this->AnalogueDomainTF->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AnalogueDomainTF.BackgroundImage")));
			this->AnalogueDomainTF->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AnalogueDomainTF->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AnalogueDomainTF->Location = System::Drawing::Point(4, 21);
			this->AnalogueDomainTF->Name = L"AnalogueDomainTF";
			this->AnalogueDomainTF->Padding = System::Windows::Forms::Padding(3);
			this->AnalogueDomainTF->Size = System::Drawing::Size(714, 537);
			this->AnalogueDomainTF->TabIndex = 0;
			this->AnalogueDomainTF->Text = L"Analogue Domain TF";
			// 
			// DigitalDomainTF
			// 
			this->DigitalDomainTF->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DigitalDomainTF.BackgroundImage")));
			this->DigitalDomainTF->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DigitalDomainTF->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DigitalDomainTF->Location = System::Drawing::Point(4, 21);
			this->DigitalDomainTF->Name = L"DigitalDomainTF";
			this->DigitalDomainTF->Padding = System::Windows::Forms::Padding(3);
			this->DigitalDomainTF->Size = System::Drawing::Size(714, 537);
			this->DigitalDomainTF->TabIndex = 1;
			this->DigitalDomainTF->Text = L"Digital Domain TF";
			this->DigitalDomainTF->UseVisualStyleBackColor = true;
			// 
			// InputSignal
			// 
			this->InputSignal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InputSignal.BackgroundImage")));
			this->InputSignal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->InputSignal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->InputSignal->Location = System::Drawing::Point(4, 21);
			this->InputSignal->Name = L"InputSignal";
			this->InputSignal->Padding = System::Windows::Forms::Padding(3);
			this->InputSignal->Size = System::Drawing::Size(714, 537);
			this->InputSignal->TabIndex = 2;
			this->InputSignal->Text = L"Input Signal";
			this->InputSignal->UseVisualStyleBackColor = true;
			// 
			// InputSignalFFT
			// 
			this->InputSignalFFT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InputSignalFFT.BackgroundImage")));
			this->InputSignalFFT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->InputSignalFFT->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->InputSignalFFT->Location = System::Drawing::Point(4, 21);
			this->InputSignalFFT->Name = L"InputSignalFFT";
			this->InputSignalFFT->Padding = System::Windows::Forms::Padding(3);
			this->InputSignalFFT->Size = System::Drawing::Size(714, 537);
			this->InputSignalFFT->TabIndex = 3;
			this->InputSignalFFT->Text = L"Input Signal FFT";
			this->InputSignalFFT->UseVisualStyleBackColor = true;
			// 
			// Type2Output
			// 
			this->Type2Output->BackColor = System::Drawing::Color::Transparent;
			this->Type2Output->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Type2Output.BackgroundImage")));
			this->Type2Output->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Type2Output->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Type2Output->Location = System::Drawing::Point(4, 21);
			this->Type2Output->Name = L"Type2Output";
			this->Type2Output->Padding = System::Windows::Forms::Padding(3);
			this->Type2Output->Size = System::Drawing::Size(714, 537);
			this->Type2Output->TabIndex = 4;
			this->Type2Output->Text = L"Type 2 Output";
			// 
			// Type2FFT
			// 
			this->Type2FFT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Type2FFT.BackgroundImage")));
			this->Type2FFT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Type2FFT->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Type2FFT->Location = System::Drawing::Point(4, 21);
			this->Type2FFT->Name = L"Type2FFT";
			this->Type2FFT->Padding = System::Windows::Forms::Padding(3);
			this->Type2FFT->Size = System::Drawing::Size(714, 537);
			this->Type2FFT->TabIndex = 5;
			this->Type2FFT->Text = L"Type 2 FFT";
			this->Type2FFT->UseVisualStyleBackColor = true;
			// 
			// CanonicalOutput
			// 
			this->CanonicalOutput->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CanonicalOutput.BackgroundImage")));
			this->CanonicalOutput->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CanonicalOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CanonicalOutput->Location = System::Drawing::Point(4, 21);
			this->CanonicalOutput->Name = L"CanonicalOutput";
			this->CanonicalOutput->Padding = System::Windows::Forms::Padding(3);
			this->CanonicalOutput->Size = System::Drawing::Size(714, 537);
			this->CanonicalOutput->TabIndex = 6;
			this->CanonicalOutput->Text = L"Canonical Output";
			this->CanonicalOutput->UseVisualStyleBackColor = true;
			// 
			// CanonicalFFT
			// 
			this->CanonicalFFT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CanonicalFFT.BackgroundImage")));
			this->CanonicalFFT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CanonicalFFT->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CanonicalFFT->Location = System::Drawing::Point(4, 21);
			this->CanonicalFFT->Name = L"CanonicalFFT";
			this->CanonicalFFT->Padding = System::Windows::Forms::Padding(3);
			this->CanonicalFFT->Size = System::Drawing::Size(714, 537);
			this->CanonicalFFT->TabIndex = 7;
			this->CanonicalFFT->Text = L"Canonical FFT";
			this->CanonicalFFT->UseVisualStyleBackColor = true;
			// 
			// CMD_BOX
			// 
			this->CMD_BOX->BackColor = System::Drawing::SystemColors::Control;
			this->CMD_BOX->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CMD_BOX.BackgroundImage")));
			this->CMD_BOX->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->CMD_BOX->Controls->Add(this->CMD_DISP);
			this->CMD_BOX->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CMD_BOX->ForeColor = System::Drawing::Color::Lime;
			this->CMD_BOX->Location = System::Drawing::Point(731, 78);
			this->CMD_BOX->Name = L"CMD_BOX";
			this->CMD_BOX->Size = System::Drawing::Size(296, 562);
			this->CMD_BOX->TabIndex = 5;
			this->CMD_BOX->TabStop = false;
			this->CMD_BOX->Text = L"CMD OUTPUT";
			// 
			// CMD_DISP
			// 
			this->CMD_DISP->BackColor = System::Drawing::SystemColors::Desktop;
			this->CMD_DISP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CMD_DISP->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CMD_DISP->ForeColor = System::Drawing::Color::Lime;
			this->CMD_DISP->Location = System::Drawing::Point(6, 21);
			this->CMD_DISP->Multiline = true;
			this->CMD_DISP->Name = L"CMD_DISP";
			this->CMD_DISP->ReadOnly = true;
			this->CMD_DISP->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->CMD_DISP->Size = System::Drawing::Size(284, 482);
			this->CMD_DISP->TabIndex = 0;
			this->CMD_DISP->Text = L">> OUTPUT INFO WILL BE DISPLAYED HERE:\r\n>> ";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 11);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1028, 640);
			this->Controls->Add(this->CMD_BOX);
			this->Controls->Add(this->DISP_P);
			this->Controls->Add(this->Box_Tit);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GUI";
			this->Text = L"GUI MAIN";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->Box_Tit->ResumeLayout(false);
			this->Box_Tit->PerformLayout();
			this->DISP_P->ResumeLayout(false);
			this->CMD_BOX->ResumeLayout(false);
			this->CMD_BOX->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void	X_But_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}
	private: System::Void	S_But_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		// create and open the .txt file
		std::ofstream TFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/TF.txt");
		TFFile << "TFX" << "," << "TFMAG" << "," << "TFPHA" << "," << "TFPHA_UN" << endl; //339
		std::ofstream TFsFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/TFs.txt");
		TFsFile << "TFsX" << "," << "TFsMAG" << "," << "TFsPHA" << "," << "TFsPHA_UN" << endl; //353
		std::ofstream INFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/IN.txt");
		INFile 	<< "axX" << "," << "Original" << endl; //373
		std::ofstream DFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/DF.txt");
		DFFile << "axX" << "," << "axY" << endl; //374
		std::ofstream CFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/CF.txt");
		CFFile << "axX" << "," << "canY" << endl; //387
		std::ofstream FFTDFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/FFTD.txt");
		FFTDFFile << "FFTaxX" << "," << "FFT_D" << endl; //414
		std::ofstream FFTCFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/FFTC.txt");
		FFTCFFile << "FFTaxX" << "," << "FFT_C" << endl; //415
		std::ofstream FFTOFFile("D://Administrative/Documents/Visual Studio 2017/Projects/EERI414DSP/EERI414DSP/FFTO.txt");
		FFTOFFile << "FFTaxX" << "," << "FFT_O" << endl; //416
		
		if(funcy == 0)
		{
			this->S_But->Text = L"START";
			// DISPLAY FIRST CALCULATIONS
			CMD_1();
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> " +
				L"\r\n>> CALCULATING FILTER ORDER..." +
				L"\r\n>> " +
				L"\r\n>> Loop 1: ";
			capk1 = ELLIPDEG(ellipK1, (5.5511*pow(10, -17)));
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> Loop 1 Result:     " + round(capk1 * mul) / mul +
				L"\r\n>> " +
				L"\r\n>> Loop 2: ";
			capk2 = ELLIPDEG(ellipK2, (1.1102*pow(10, -16)));
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> Loop 2 Result:     " + round(capk2 * mul) / mul +
				L"\r\n>> " +
				L"\r\n>> Loop 3: ";
			capk11 = ELLIPDEG(ellipK11, (2.2204*pow(10, -16)));
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> Loop 3 Result:     " + round(capk11 * mul) / mul +
				L"\r\n>> " +
				L"\r\n>> Loop 4: ";
			capk12 = ELLIPDEG(ellipK12, (8.8818*pow(10, -16)));
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> Loop 4 Result:     " + round(capk12 * mul) / mul;
			OO = ((floor(capk1)*floor(capk12)) / (floor(capk2)*floor(capk11)));
			wn1 = Omp1;
			wn2 = Omp2;
			// Z-DOMAIN LOOP
			for (int c = 0;c<Sps;c++)
			{
				TF[c] = double(c * 10) / Sps;
				Z.real(cos(pi*double(c) / Sps));
				Z.imag(sin(pi*double(c) / Sps));
				numC = num[0] + num[1] * pow(Z, -1) + num[2] * pow(Z, -2) + num[3] * pow(Z, -3) + num[4] * pow(Z, -4);
				denC = den[0] + den[1] * pow(Z, -1) + den[2] * pow(Z, -2) + den[3] * pow(Z, -3) + den[4] * pow(Z, -4);
				T = numC / denC;
				magT[c] = 20 * log10(sqrt(pow(T.real(), 2) + pow(T.imag(), 2)));
				phaT[c] = (atan(T.imag() / T.real())) * 180 / pi;
				phaT_nowrap[c] = (std::arg(T)) * 180 / pi;
				TFFile << TF[c] << "," << magT[c] << "," << phaT[c] << "," << phaT_nowrap[c] << endl;
				
			}
			OutputDebugString("\r\nZD DONE");
			// S-DOMAIN LOOP
			for (int d = 0;d<Sps;d++)
			{
				TFs[d] = double(d * 10) / Sps;
				S.real(0);
				S.imag(double(d * 10) / double(Sps));
				numsC = nums[0] + nums[1] * pow(S, 1) + nums[2] * pow(S, 2) + nums[3] * pow(S, 3) + nums[4] * pow(S, 4);
				densC = dens[0] + dens[1] * pow(S, 1) + dens[2] * pow(S, 2) + dens[3] * pow(S, 3) + dens[4] * pow(S, 4);
				Ts = numsC / densC;
				magTs[d] = 20 * log10(sqrt(pow(Ts.real(), 2) + pow(Ts.imag(), 2)));
				phaTs[d] = (atan(Ts.imag() / Ts.real())) * 180 / pi;
				phaTs_nowrap[d] = (std::arg(Ts)) * 180 / pi;
				TFsFile << TFs[d] << "," << magTs[d] << "," << phaTs[d] << "," << phaTs_nowrap[d] << endl;

			}
			OutputDebugString("\r\nSD DONE");
			CMD_2();
			for (int f = 0;f<int(Origin.size());f++)
			{
				axX[f] = double(f * 10) / Sps;
				if (f>(OO - 1))
				{
					pointN[f] = Origin[f];
					for (int g = 0;g<OO;g++)
					{
						pointN[f] = pointN[f] - pointN[f - g - 1] * den[g + 1];
					}
					axY[f] = 0;
					for (int h = 0;h <= OO;h++)
					{
						axY[f] = axY[f] + pointN[f - h] * num[h];
					}
				}
				INFile << axX[f] << "," << Origin[f] << endl;
				DFFile << axX[f] << "," << axY[f] << endl;
			}
			OutputDebugString("\r\nIN and DF DONE");

			for (int c = 0;c<int(Origin.size());c++)
			{
				if (c>2)
				{
					X1st[c] = Origin[c] + X1st[c - 1] * bCAN1[0] + X1st[c - 1] * bCAN1[1];
					X2nd[c] = X1st[c] + X1st[c - 1] * fCAN1[0] + X1st[c - 2] * fCAN1[1];
					X3rd[c] = X2nd[c] + X3rd[c - 1] * bCAN2[0] + X3rd[c - 2] * bCAN2[1];
					X4th[c] = X3rd[c] + X3rd[c - 1] * fCAN2[0] + X3rd[c - 2] * fCAN2[1];
				}
				canY[c] = X4th[c] * gCAN;
				CFFile << axX[c] << "," << canY[c] << endl;
			}
			OutputDebugString("\r\nCF DONE");
			CMD_3();

			OutputDebugString("\r\n\r\nFFT Start");
			FFTaxX.resize(Origin.size());
			FFT_O.resize(Origin.size());
			FFT_D.resize(Origin.size());
			FFT_C.resize(Origin.size());
			for (int y = 0;y<Origin.size();y++)
			{
				if (y<FFTsize)
				{
					FFTaxX[y] = (double(y)*Sps / double(Origin.size()))/10;
				}
				FFT_O[y], FFT_O_r, FFT_O_r = 0;
				FFT_D[y], FFT_D_r, FFT_D_r = 0;
				FFT_C[y], FFT_C_r, FFT_C_r = 0;
				OutputDebugString("\r\n y");
				OutputDebugString(" z:\r\n");
				for (int z = 0;z<FFTsize;z++)
				{
					double On = (2.0*pi*double(z)*double(y)) / Origin.size();
					FFT_O_r += Origin[z] * ( cos(On));
					FFT_O_i += Origin[z] * (-sin(On));
					FFT_D_r +=    axY[z] * ( cos(On));
					FFT_D_i +=    axY[z] * (-sin(On));
					FFT_C_r +=   canY[z] * ( cos(On));
					FFT_C_i +=   canY[z] * (-sin(On));
					
				}
				OutputDebugString("Calc ");
				FFT_O[y] = sqrt(pow(FFT_O_r, 2) + pow(FFT_O_i, 2));
				FFT_D[y] = sqrt(pow(FFT_D_r, 2) + pow(FFT_D_i, 2));
				FFT_C[y] = sqrt(pow(FFT_C_r, 2) + pow(FFT_C_i, 2));
				OutputDebugString("Write1 ");
				FFTDFFile << FFTaxX[y] << "," << FFT_D[y] << endl;
				OutputDebugString("Write2 ");
				FFTCFFile << FFTaxX[y] << "," << FFT_C[y] << endl;
				OutputDebugString("Write3 ");
				FFTOFFile << FFTaxX[y] << "," << FFT_O[y] << endl;
				OutputDebugString("y");
			}
			OutputDebugString("FFTs DONE");
			CMD_4();
			this->S_But->Text = L"PLOT";
		}
		else
		{
			CMD_5();
			double RangeX = double(Origin.size()) / Sps;
			double MagdB = 5;
			double Gain = 0.7;
			this->S_But->Text = L"PLOTTING...";
		}
		funcy++;
		TFFile.close();
		TFsFile.close();
		INFile.close();
		DFFile.close();
		CFFile.close();
		FFTDFFile.close();
		FFTCFFile.close();
		FFTOFFile.close();
	}
	void					CMD_1()
	{
		this->CMD_DISP->Text = this->CMD_DISP->Text + 
			L"\r\n>> ENTERING WARP SPEED..." +
			L"\r\n>> " +
			L"\r\n>> Sampling Frequency:     " + round(fs * mul) / mul +
			L"\r\n>> Lower Passband Edge:    " + round(pbel * mul) / mul +
			L"\r\n>> Upper Passband Edge:    " + round(pbeh * mul) / mul +
			L"\r\n>> Lower Stopband Edge:    " + round(sbel * mul) / mul +
			L"\r\n>> Upper Stopband Edge:    " + round(sbeh * mul) / mul +
			L"\r\n>> Peak Passband Ripple:   " + round(ppr * mul) / mul +
			L"\r\n>> Min SB attenuation:     " + round(msba * mul) / mul +
			L"\r\n>> Input Signal Frequency: " + round(dif * mul) / mul +
			L"\r\n>> pi:                     " + round(pi * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> 2.1 NORMALIZED ANGULAR " + 
			L"\r\n>>     FREQUENCIES, PRE - " +
			L"\r\n>>     WARPED VALUES AND "
			L"\r\n>>     CONCLUSIONS" +
			L"\r\n>> ===================================" +
			L"\r\n>> omega:          | OMEGA:" + 
			L"\r\n>> ===================================" +
			L"\r\n>> om_p1: " + round(Omp1 * mul) / mul + "pi | OM_p1: " + round(OMp1 * mul) / mul +
			L"\r\n>> om_p2: " + round(Omp2 * mul) / mul + "pi | OM_p2: " + round(OMp2 * mul) / mul +
			L"\r\n>> om_s1: " + round(Oms1 * mul) / mul + "pi | OM_s1: " + round(OMs1 * mul) / mul +
			L"\r\n>> om_s2: " + round(Oms2 * mul) / mul + "pi | OM_s2: " + round(OMs2 * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> Omega_p_2:              " + round(Omp0Q * mul) / mul +
			L"\r\n>> Omega_s_2:              " + round(Oms0Q * mul) / mul +
			L"\r\n>> Bandwidth:              " + round(Bws * mul) / mul +
			L"\r\n>> Omega_p1 modified:      " + round(Op1m * mul) / mul +
			L"\r\n>> Omega_p1_2:             " + round(Op1mQ * mul) / mul +
			L"\r\n>> Omega_s:                " + round(Os * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> 2.2 LOW-PASS FILTER PROTOTYPE" +
			L"\r\n>> ===================================" +
			L"\r\n>> Omega_p:                " + round(Op * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> 2.4 MINIMUM STOP-BAND ATTENUATION" +
			L"\r\n>>     AND PEAK PASS-BAND RIPPLE" +
			L"\r\n>> ===================================" +
			L"\r\n>> sigma_p:              " + round(Sigp * mul) / mul +
			L"\r\n>> sigma_s:              " + round(Sigs * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> 2.5 TRANSFORMATION INTERMEDIATE " +
			L"\r\n>> ===================================" +
			L"\r\n>>     CALCULATIONS" ;
	}
	void					CMD_2()
	{
		this->CMD_DISP->Text = this->CMD_DISP->Text +
			L"\r\n>> ===================================" +
			L"\r\n>> Omega_c:              " + round(Oc * mul) / mul +
			L"\r\n>> Omega_T:              " + round(OT * mul) / mul +
			L"\r\n>> Filter Order:         " + round(OO * mul) / mul +
			L"\r\n>> ===================================" +
			L"\r\n>> || DIRECT FORM CALCULATION       ||";
	}
	void					CMD_3()
	{
		this->CMD_DISP->Text = this->CMD_DISP->Text +
			L"\r\n>> ===================================" +
			L"\r\n>> || CCANONICAL FORM CALCULATION   ||";
	}
	void					CMD_4()
	{
		this->CMD_DISP->Text = this->CMD_DISP->Text +
			L"\r\n>> ===================================" +
			L"\r\n>> || PERFORMED FFTs CALCULATION    ||" +
			L"\r\n>> ===================================" +
			L"\r\n>> ";
	}
	void					CMD_5()
	{
		this->CMD_DISP->Text =	
			L">> ==================================" +
			L"\r\n>> || CALCULATIONS COMPLETED       ||" +
			L"\r\n>> || GRAPHS BEING DRAWN           ||" +
			L"\r\n>> ==================================" +
			L"\r\n>> ";
	}
	void					ProgBAR(double x, double y)
	{
		double numer = x;
		double denom = y;
		double prognum = 0;
		if (((denom - numer) / (denom)) * 100 > 0)
		{
			prognum = ceil(((denom - numer)/ (denom)) * 100);
		}
		else
		{
			prognum = 0;
		}
		this->PROG_B->Value = static_cast<int>(prognum);
	}
	double					ELLIPDEG(double m, double tol)
	{
		ProgBAR(0, 1);
		kret = 0;
		double a0 = 1;
		double b0 = sqrt(1 - m);
		double a1, b1, c1, w1, c0;
		double s0 = m;
		double i1 = 0;
		double mm = std::numeric_limits<double>::infinity();
		this->CMD_DISP->Text = this->CMD_DISP->Text +
			L"\r\n>> tol:    " + tol +
			L"\r\n>> m:      " + m +
			L"\r\n>> mm[0]:  " + mm;
		while (mm > tol)
		{
			ProgBAR(tol, mm);
			a1 = (a0 + b0) / 2;
			b1 = sqrt(a0*b0);
			c1 = (a0 - b0) / 2;
			i1 += 1;
			w1 = pow(2,i1)*pow(c1, 2);
			mm = w1;
			this->CMD_DISP->Text = this->CMD_DISP->Text +
				L"\r\n>> mm["+i1+"]:  "+ mm;
			s0 = s0 + w1;
			a0 = a1;
			b0 = b1;
			c0 = c1;
		}
		kret = (pi / (2 * a1));
		e = kret*(1 - s0 / 2);
		return (kret);
	}
	void					Mobius_E(double Ord, double Rs, double Rp, double Wnat1, double Wnat2)
	{
		// we are sending analogue values
		// step 1: get analog, pre - warped frequencies
		double fsn = 2;
		// step 2: convert to low - pass prototype estimate
		double Bw = (2 * fsn*tan(pi*Wnat2 / fsn)) - (2 * fsn*tan(pi*Wnat1 / fsn));						// Band Width
		double Wn = (2 * fsn*tan(pi*Wnat2 / fsn))*(2 * fsn*tan(pi*Wnat1 / fsn));				// Center Frequency

		// step 3: Get N - th order elliptic lowpass analog prototype
		E_LP_A_P(Ord, Rp, Rs);

		//	Transform to state - space
		//zp_2_ss(z_ap, p_ap, k_ap);

		// step 4: Transform to lowpass, bandpass, highpass, or bandstop of desired Wn
		//[a, b, c, d] = lp_2_bs(a, b, c, d, Wn, Bw);

		// step 5: Use Bilinear transformation to find discrete equivalent :
		//[a, b, c, d] = bilinear(a, b, c, d, fs);

		// Transform to zero - pole - gain and polynomial forms :
		//[z, p, k] = ss2zp(a, b, c, d, 1);
		//num = z;
		//den = p;
		//z = k;

		//zinf = ltipack.getTolerance('infzero', zeroLimitFlag);
		//[z, k] = ltipack.sszero(a, b, c, d, [], zinf);
		//num = k * poly(z);
		//num = [zeros(1, length(den) - length(num))  num];
	}
	void					Mobius_LP2BS(double Omega0, double BandW)
	{

	}
	void					Mobius_Bil()
	{

	}
	void					E_LP_A_P(double n, double rp, double rs)
	{
		using namespace std::complex_literals;
		double N = n;
		double Ap = rp;
		double As = rs;
		double Gp = pow(10, (-Ap / 20));											// passband gain
		double ep = sqrt(pow(10, (Ap / 10) - 1));								// ripple factors
		double es = sqrt(pow(10, (As / 10) - 1));

		double k1 = ep / es;
		// solve degree equation
		double toler = 2.2204*pow(10, -16);
		double L = floor(N / 2);
		double ii[] = { 1,2 };
		double ui[] = { ((2 * ii[0] - 1) / N),((2 * ii[1] - 1) / N) };
		double kmin = 1 * pow(10, -6);
		double kc = sqrt(1 - pow(k1, 2));										// complement of k1
																				// create function for product of elements
		int size = sn_E(ui, kc, toler);
		double S[10];
		for (int i = 0, length =10; i < length; ++i)
		{
			S[i] = w_sn_E[i];												// filter zeros = poles of elliptic rational function
		}
		double P = prod(S);
		double kp = pow(kc, N) * pow(P, 4);										// complement of k
		double k = sqrt(1 - pow(kp, 2));
		double r = mod(N, 2);													// L is the number of second - order sections
		size = cd_E(ui, k, toler);
		double zeta_i[10];															// zeros of elliptic rational function
		for (int i = 0, length = 10; i < length; ++i)
		{
			zeta_i[i] = w_cd_E[i];												// filter zeros = poles of elliptic rational function
		}

		std::complex<double> j(0, 1);
		std::complex<double> z[10];
		for (int i = 0, length = 10; i < length; ++i)
		{
			z[i] = j / (k*zeta_i[i]);											// filter zeros = poles of elliptic rational function
		}

		std::complex<double> va(-1, 0);
		std::complex<double> v0 = (va*asn_E((j / ep), k1, toler) / N);
		std::complex<double> uim[10];
		for (int i = 0, length = 10; i < length; ++i)
		{
			uim[i] = ui[i] - 1i*v0;
		}
		ccd_E(uim, k, toler);
		std::complex<double> pp[10];
		for (int i = 0, length = 10; i < length; ++i)
		{
			pp[i] = w_ccd_E[i];
		}
		std::complex<double> p[10];                                 // filter poles
		for (int i = 0, length = 10; i < length; ++i)
		{
			p[i] = pp[i] * j;
		}
		csn_E(1i*v0, k, toler);
		std::complex<double> *pp0[] = { 0,0,0,0,0,0,0,0,0,0 };
		for (int i = 0, length = 10; i < length; ++i)
		{
			//pp0[i] = w_csn_E[i];
		}
		std::complex<double> p0[10];                                 // filter poles
		for (int i = 0, length = 10; i < length; ++i)
		{
			//p0[i] = pp0[i]*j;
		}
		for (int i = 0, length = 2; i < length; ++i)
		{
			for (int j = 0, length = 2; j < length; ++j)
			{
				if (j == 0)
				{
					z_ap[i + j] = z[i];
				}
				else
				{
					z_ap[i + j] = std::conj(z[i]);
				}

			}
		}
		for (int i = 0, length = 2; i < length; ++i)
		{
			for (int j = 0, length = 2; j < length; ++j)
			{
				if (j == 0)
				{
					p_ap[i + j] = p[i];
				}
				else
				{
					p_ap[i + j] = std::conj(p[i]);
				}

			}
		}
		p_ap[5] = p0[0];
		double H0 = pow(Gp, (1 - r));                                         // dc gain
		k_ap = abs(H0*cprod(p) / cprod(z));
	}
	double					prod(double A[])
	{
		double Cap_pi = A[0];
		for (int i = 1, length = sizeof(A); i < length; ++i)
		{
			Cap_pi = Cap_pi * A[i];
		}
		return (Cap_pi);
	}
	std::complex<double>	cprod(std::complex<double> A[])
	{
		std::complex<double> Cap_pi = A[0];
		for (int i = 1, length = sizeof(A); i < length; ++i)
		{
			Cap_pi = Cap_pi * A[i];
		}
		return (Cap_pi);
	}
	int						sn_E(double u[], double k, double t)
	{
		double tol = t;
		int count = landen(k, tol);
		for (int i = 0, length = sizeof(u); i < length; ++i)
		{
			w_sn_E[i] = (sin((u[i] * pi) / 2));
		}

		for (int j = count; j = 0; --j)
		{
			w_sn_E[j] = (((1 + v[j])*w_sn_E[j]) / (1 + v[j] * pow(w_sn_E[j], 2)));
		}
		return(count);
	}
	void					csn_E(std::complex<double> u, double k, double t)
	{
		double tol = t;
		int count = landen(k, tol);
		std::complex<double> u1(1, 0);
		std::complex<double> u2(2, 0);
		for (int i = 0, length = sizeof(u); i < length; ++i)
		{
			w_csn_E[i] = (sin((u* pi) / u2));
		}

		for (int j = count; j = 0; --j)
		{
			w_csn_E[j] = (((1 + v[j])*w_csn_E[j]) / (u1 + v[j] * pow(w_csn_E[j], 2)));
		}
	}
	std::complex<double>	asn_E(std::complex<double> w, double k, double t)
	{
		double tol = t;
		std::complex<double> u2 = acd_E(w, k, tol);
		std::complex<double> u1(1, 0);
		std::complex<double> u = u1 - u2;
		return (u);
	}
	int						cd_E(double u[], double k, double t)
	{
		double tol = t;
		int count = landen(k, tol);
		for (int i = 0, length = sizeof(u); i < length; ++i)
		{
			w_cd_E[i] = (cos((u[i] * pi) / 2));
		}

		for (int j = count; j = 0; --j)
		{
			w_cd_E[j] = (((1 + v[j])*w_cd_E[j]) / (1 + v[j] * pow(w_cd_E[j], 2)));
		}
		return(count);
	}
	void					ccd_E(std::complex<double> u[], double k, double t)
	{
		double tol = t;
		int count = landen(k, tol);
		std::complex<double> d2(2, 0);
		std::complex<double> d1(1, 0);
		std::complex<double> w[sizeof(u)];
		for (int i = 0, length = sizeof(u); i < length; ++i)
		{
			w_ccd_E[i] = (cos((u[i] * pi) / d2));
		}

		for (int j = count; j = 0; --j)
		{
			w_ccd_E[j] = (((1 + v[j])*w_ccd_E[j]) / (d1 + v[j] * pow(w_ccd_E[j], 2)));
		}
	}
	std::complex<double>	acd_E(std::complex<double> w, double k, double t)
	{
		double tol = t;
		int count = landen(k, tol);
		double v1[10];
		std::complex<double> w1[10];
		std::complex<double> u;
		for (int i = 0, length = count; i < length; ++i)
		{
			if (i = 0)
			{
				v1[i] = k;
				w1[i] = w;
			}
			else
			{
				v1[i] = v[i] * (i - 1);
				w1[i] = w;
			}
			std::complex<double> a(1, 0);
			w1[i] = ((w1[i]) / (a + sqrt(a - pow(w, 2) * pow(v1[i], 2)))) * (2 / (1 + v[i]));
		}

		if (std::real(w) == 1)
		{
			std::complex<double> u(0, 0);
		}
		else
		{
			std::complex<double> u = (2 / pi) * acos(w);
		}
		ELLIPK(k, tol);
		double R = Ks[1] / Ks[0];
		u = (srem(std::real(u), 4), (srem(std::imag(u), 2 * R)));
		return(u);
	}
	void					ELLIPK(double k, double t)
	{
		double tol = t;
		double kmin = 1 * pow(10, -6);
		double kmax = sqrt(1 - pow(kmin, 2));
		double K;
		double Kprime;
		if (k == 1)
		{
			K = std::numeric_limits<double>::infinity();
		}
		else
		{
			if (k > kmax)									// floating point resolution limits this to kmax < k < 1 - eps
			{
				double kp = sqrt(1 - pow(k, 2));             // k > kmax is equivalent to kp < kmin
				double L = -log(kp / 4);
				K = L + (L - 1)*(pow(kp, 2) / 4);
			}
			else
			{
				int count = landen(k, tol);
				double v_l[10];
				for (int j = count; j = 0; --j)
				{
					v_l[j] = v[j];
				}
				K = prod(1 + v_l) * pi / 2;
			}
		}

		if (k == 0)
		{
			Kprime = std::numeric_limits<double>::infinity();
		}
		else
		{
			if (k < kmin)
			{
				double L = -log(k / 4);
				Kprime = L + (L - 1)*(pow(k, 2) / 4);
			}
			else
			{
				double kp = sqrt(1 - pow(k, 2));
				int count = landen(kp, tol);
				double v_lp[10];
				for (int j = count; j = 0; --j)
				{
					v_lp[j] = v[j];
				}
				Kprime = prod(1 + v_lp) * pi / 2;
			}
		}
		Ks[0] = K;
		Ks[1] = Kprime;
	}
	double					mod(double n, double div)
	{
		double ntrunc = floor(n / div);
		double ndiff = n - (ntrunc*div);
		return(ndiff);
	}
	double					rem(double n, double div)
	{
		if (div != 0)
		{
			if (n>0)
			{
				double ntrunc = floor(abs(n) / abs(div));
				double ndiff = n - (ntrunc*abs(div));
				double ret = abs(ndiff);
				return (ret);
			}
			else
			{
				double ntrunc = floor(abs(n) / abs(div));
				double ndiff = n - (ntrunc*abs(div));
				double ret = abs(ndiff)*-1;
				return (ret);
			}
		}
		else
		{
			return (0);
		}
	}
	double					srem(double n, double div)
	{
		double Z = rem(n, div);							// bring into interval[-Y, Y]
		if (Z > 0)
		{
			Z = Z - div*(1)*(abs(Z)>div / 2);			// bring into interval[-Y / 2, Y / 2]
		}
		else
		{
			Z = Z - div*(-1)*(abs(Z)>div / 2);			// bring into interval[-Y / 2, Y / 2]
		}
		double ret = Z;
		return (ret);
	}
	int						landen(double k, double t)
	{
		double tol = t;
		int count_V = 0;
		if (k == 1)
		{
			v[count_V] = k;
			count_V += 1;
			return (count_V);
		}
		
		else
		{
			while (k > tol)
			{
				k = pow((k / (1 + sqrt(1 - pow(k, 2)))), 2);
				v[count_V] = k;
				count_V += 1;
			}
		}
		return (count_V);
	}
	void					Graph()
	{
		// CREATE DISPLAY GRAPH CONTENT HERE
	}
private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
