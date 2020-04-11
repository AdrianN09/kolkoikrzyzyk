#pragma once

namespace kolkoikrzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for okno
	/// </summary>
	public ref class okno : public System::Windows::Forms::Form
	{
	public:
		okno(void)
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
		~okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	protected:


	private: System::Windows::Forms::Button^  button1;








	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(okno::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(473, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(473, 163);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(608, 402);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 130);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &okno::button1_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(417, 452);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(110, 50);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &okno::button10_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(152, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 130);
			this->button2->TabIndex = 19;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &okno::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(292, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 130);
			this->button3->TabIndex = 20;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &okno::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(12, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 130);
			this->button4->TabIndex = 21;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &okno::button4_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(152, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 130);
			this->button5->TabIndex = 22;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &okno::button5_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(292, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 130);
			this->button6->TabIndex = 23;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &okno::button6_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(12, 284);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(134, 130);
			this->button7->TabIndex = 24;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &okno::button7_Click);
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(152, 284);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 130);
			this->button8->TabIndex = 25;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &okno::button8_Click);
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(292, 284);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 130);
			this->button9->TabIndex = 26;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &okno::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(623, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 25);
			this->label1->TabIndex = 27;
			this->label1->Text = L"kolej";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(623, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 25);
			this->label3->TabIndex = 28;
			this->label3->Text = L"kolej";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &okno::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(623, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 29;
			this->label2->Text = L"kó³ka";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(623, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"krzy¿yka";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(84, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(582, 91);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Kó³ko wygrywa";
			this->label5->Visible = false;
			// 
			// okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 528);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"okno";
			this->Text = L"okno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool kolko = true, krzyzyk = false;
		bool zablokuj1 = false, zablokuj2 = false, zablokuj3 = false, zablokuj4 = false, zablokuj5 = false, zablokuj6 = false, zablokuj7 = false, zablokuj8 = false, zablokuj9 = false;
		///int lewyDolny = 0, srodekDolny = 0, prawyDolny = 0, srodekLewy = 0, srodekSrodek = 0;
		///int srodekPrawy = , gornyLewy = false, gornySrodek = false, 
		

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 

				 if (zablokuj1 == false)
				 {
					if (kolko == true)
					 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
					 }
				 else
					 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
					 }

				 if (kolko == true)
					 {
					button1->Image = pictureBox1->Image;
					kolko = false;
					krzyzyk = true;
					 }
				 else
					 {
					 button1->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
					 }

					 if ((button1->Image == pictureBox1->Image) && (button2->Image == pictureBox1->Image) && (button3->Image == pictureBox1->Image))
					 {
						 label5->Text = "kó³ko wygrywa";
						 label5->Visible = true;
						 label1->Visible = false;
						 label2->Visible = false;
						 label3->Visible = false;
						 label4->Visible = false;
					 }
					 zablokuj1 = true;

					if ((button4->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button6->Image == pictureBox1->Image))
					 {
						 label5->Text = "kó³ko wygrywa";
						 label5->Visible = true;
						 label1->Visible = false;
						 label2->Visible = false;
						 label3->Visible = false;
						 label4->Visible = false;
					 }

					if ((button7->Image == pictureBox1->Image) && (button8->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					if ((button1->Image == pictureBox1->Image) && (button4->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button2->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button8->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button6->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button1->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					 if ((button1->Image == pictureBox1->Image) && (button2->Image == pictureBox1->Image) && (button3->Image == pictureBox1->Image))
					 {
					 label5->Visible = true;
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = false;
					 label4->Visible = false;
					 }
					 zablokuj1 = true;

					if ((button4->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button6->Image == pictureBox1->Image))
					 {
						 label5->Text = "kó³ko wygrywa";
						 label5->Visible = true;
						 label1->Visible = false;
						 label2->Visible = false;
						 label3->Visible = false;
						 label4->Visible = false;
					 }

					if ((button7->Image == pictureBox1->Image) && (button8->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					if ((button1->Image == pictureBox1->Image) && (button4->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button2->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button8->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button6->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button1->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					/// dla x

					if ((button1->Image == pictureBox2->Image) && (button2->Image == pictureBox2->Image) && (button3->Image == pictureBox2->Image))
					{
						label5->Text = "krzy¿yk wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					zablokuj1 = true;

					if ((button4->Image == pictureBox2->Image) && (button5->Image == pictureBox2->Image) && (button6->Image == pictureBox2->Image))
					{
						label5->Text = "krzy¿yk wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					if ((button7->Image == pictureBox2->Image) && (button8->Image == pictureBox2->Image) && (button9->Image == pictureBox2->Image))
					{
						/// w tym miejscu
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

					if ((button1->Image == pictureBox1->Image) && (button4->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button2->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button8->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button6->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button1->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button9->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}
					if ((button3->Image == pictureBox1->Image) && (button5->Image == pictureBox1->Image) && (button7->Image == pictureBox1->Image))
					{
						label5->Text = "kó³ko wygrywa";
						label5->Visible = true;
						label1->Visible = false;
						label2->Visible = false;
						label3->Visible = false;
						label4->Visible = false;
					}

				 }


				 
						
				 
				 

				 	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (zablokuj2 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button2->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button2->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj2 = true;
			 }
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1->Image = pictureBox3->Image;
			 button2->Image = pictureBox3->Image;
			 button3->Image = pictureBox3->Image;
			 button4->Image = pictureBox3->Image;
			 button5->Image = pictureBox3->Image;
			 button6->Image = pictureBox3->Image;
			 button7->Image = pictureBox3->Image;
			 button8->Image = pictureBox3->Image;
			 button9->Image = pictureBox3->Image;
			 label1->Visible = true;
			 label2->Visible = true;
			 label3->Visible = false;
			 label4->Visible = false;
			 zablokuj1 = false;
			 zablokuj2 = false;
			 zablokuj3 = false;
			 zablokuj4 = false;
			 zablokuj5 = false;
			 zablokuj6 = false;
			 zablokuj7 = false;
			 zablokuj8 = false;
			 zablokuj9 = false;
			 label5->Visible = false;
			 kolko = true;
			 krzyzyk = false;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj3 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button3->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button3->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj3 = true;
			 }
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj4 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button4->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button4->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj4 = true;
			 }
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj5 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button5->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button5->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj5 = true;
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj6 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button6->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button6->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj6 = true;
			 }
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj7 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button7->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button7->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj7 = true;
			 }
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj8 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button8->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button8->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj8 = true;
			 }
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (zablokuj9 == false)
			 {
				 if (kolko == true)
				 {
					 label1->Visible = false;
					 label2->Visible = false;
					 label3->Visible = true;
					 label4->Visible = true;
				 }
				 else
				 {
					 label3->Visible = false;
					 label4->Visible = false;
					 label1->Visible = true;
					 label2->Visible = true;
				 }

				 if (kolko == true)
				 {
					 button9->Image = pictureBox1->Image;
					 kolko = false;
					 krzyzyk = true;
				 }
				 else
				 {
					 button9->Image = pictureBox2->Image;
					 kolko = true;
					 krzyzyk = false;
				 }
				 zablokuj9 = true;
			 }
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
