#pragma once
#include "FileManager.h"
#include "GameManager.h"
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace PORPGv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o windowManager
	/// </summary>
	public ref class windowManager : public System::Windows::Forms::Form
	{
	public:
		windowManager(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~windowManager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  newGameButton;
	protected:

	private: System::Windows::Forms::Button^  loadButton;

	private: System::Windows::Forms::Button^  exitButton;

	private: System::Windows::Forms::Button^  startGameButton;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



	private: GameManager * game = new GameManager();




	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(windowManager::typeid));
			this->newGameButton = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->startGameButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// newGameButton
			// 
			this->newGameButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newGameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newGameButton->Location = System::Drawing::Point(400, 250);
			this->newGameButton->Name = L"newGameButton";
			this->newGameButton->Size = System::Drawing::Size(200, 75);
			this->newGameButton->TabIndex = 0;
			this->newGameButton->Text = L"Rozpocznij now¹ grê";
			this->newGameButton->UseVisualStyleBackColor = true;
			this->newGameButton->Click += gcnew System::EventHandler(this, &windowManager::button1_Click);
			// 
			// loadButton
			// 
			this->loadButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->loadButton->Location = System::Drawing::Point(400, 350);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(200, 75);
			this->loadButton->TabIndex = 1;
			this->loadButton->Text = L"Wczytaj grê";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &windowManager::button2_Click);
			// 
			// exitButton
			// 
			this->exitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->exitButton->Location = System::Drawing::Point(400, 450);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(200, 75);
			this->exitButton->TabIndex = 2;
			this->exitButton->Text = L"Zakoñcz";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &windowManager::button3_Click);
			// 
			// startGameButton
			// 
			this->startGameButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startGameButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->startGameButton->Location = System::Drawing::Point(400, 473);
			this->startGameButton->Name = L"startGameButton";
			this->startGameButton->Size = System::Drawing::Size(200, 75);
			this->startGameButton->TabIndex = 4;
			this->startGameButton->Text = L"Start";
			this->startGameButton->UseVisualStyleBackColor = true;
			this->startGameButton->Visible = false;
			this->startGameButton->Click += gcnew System::EventHandler(this, &windowManager::startGameButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(400, 220);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(199, 24);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(392, 331);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Wprowadz imie Twojego bohatera";
			this->textBox1->Visible = false;
			// 
			// startButton
			// 
			this->startButton->AutoSize = true;
			this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->startButton->Location = System::Drawing::Point(400, 369);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(200, 75);
			this->startButton->TabIndex = 7;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Visible = false;
			this->startButton->Click += gcnew System::EventHandler(this, &windowManager::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(982, 753);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(770, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 75);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(770, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Wroc do menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &windowManager::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(770, 666);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 75);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Udaj sie w podroz";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &windowManager::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(770, 585);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 75);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Pokaz ekwipunek";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(12, 666);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 75);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Kup";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(12, 585);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 75);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Sprzedaj";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(12, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 75);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Podejdz do:";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &windowManager::button7_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(243, 40);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(161, 24);
			this->comboBox2->TabIndex = 16;
			this->comboBox2->Text = L"Wybierz NPC";
			this->comboBox2->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(243, 617);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(161, 24);
			this->comboBox3->TabIndex = 17;
			this->comboBox3->Text = L"Wybierz przedmiot";
			this->comboBox3->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(243, 689);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(161, 24);
			this->comboBox4->TabIndex = 18;
			this->comboBox4->Text = L"Wybierz przedmiot";
			this->comboBox4->Visible = false;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(12, 255);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 75);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Sprawdz statystyki przedmiotu do kupienia";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(12, 336);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(200, 75);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Sprawdz statystyki przedmiotu do sprzedania";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(240, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 68);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Imie:\r\nKto to:\r\nIlosc pieniedzy:\r\nPrzedmioty/umiejetnosci:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 17);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Statystyki przedmiotu do kupienia";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 17);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Statystyki przedmiotu do sprzedania";
			this->label3->Visible = false;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(37, 638);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(200, 75);
			this->button10->TabIndex = 24;
			this->button10->Text = L"Atak";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(271, 638);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(200, 75);
			this->button11->TabIndex = 25;
			this->button11->Text = L"Obrona";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(504, 638);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(200, 75);
			this->button12->TabIndex = 26;
			this->button12->Text = L"Rzuc zaklecie";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(736, 638);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(200, 75);
			this->button13->TabIndex = 27;
			this->button13->Text = L"Odpusc i udaj sie do miasta";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &windowManager::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(736, 517);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(200, 75);
			this->button14->TabIndex = 28;
			this->button14->Text = L"Walcz";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &windowManager::button14_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(982, 753);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(415, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Trafiles do miasta:";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(415, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 51);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Natrafiles na przeciwnika!\r\nNazwa:\r\nPoziom:";
			this->label5->Visible = false;
			// 
			// windowManager
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->startGameButton);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->loadButton);
			this->Controls->Add(this->newGameButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"windowManager";
			this->ShowIcon = false;
			this->Text = L"DungeonExplorer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void generateCity() {

		MapGenerator* city = game->getMap();
		std::vector<Npc*> npcs = city->getNpcs();
		std::string cityNameText = "Trafiles do miasta: " + city->getName();
		const char* tmp1 = cityNameText.c_str();
		System::String^ tmp = gcnew String(tmp1);
		this->label4->Text = tmp;
		this->label1->ResetText();
		this->label2->ResetText();
		this->label3->ResetText();
		this->label5->ResetText();
		this->comboBox2->Items->Clear();
		this->comboBox3->Items->Clear();
		this->comboBox4->Items->Clear();
		for (int i = 0; i < npcs.size(); i++)
		{
			std::string name = npcs[i]->getName();
			std::string type = npcs[i]->getType();
			std::string tmp = std::to_string(i + 1) + ". " + type + " " + name;
			const char *tmp2 = tmp.c_str();
			System::String^ npc = gcnew String(tmp2);
			this->comboBox2->Items->Add(npc);
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->startButton->Visible = true;
		this->textBox1->Visible = true;
		this->newGameButton->Visible = false;
		this->loadButton->Visible = false;
		this->exitButton->Visible = false;

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DestroyHandle();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		std::ifstream file;
		std::string line;
		FileManager *f = new FileManager();
		file.open(f->savesName);
		while (!file.eof()) {
			getline(file, line);
			const char *tmp = line.c_str();
			System::String^ save = gcnew String(tmp);
			this->comboBox1->Items->Add(save);

		}
		file.close();
		this->newGameButton->Visible = false;
		this->loadButton->Visible = false;
		this->exitButton->Visible = false;
		this->comboBox1->Visible = true;
		this->startGameButton->Visible = true;
	}

	private: System::Void startGameButton_Click(System::Object^  sender, System::EventArgs^  e) {

		System::Object^ choose = comboBox1->SelectedItem;
		if (!choose)
		{
			this->newGameButton->Visible = true;
			this->loadButton->Visible = true;
			this->exitButton->Visible = true;
			this->startGameButton->Visible = false;
			this->comboBox1->Visible = false;
		}
		else {
			System::String^ name = choose->ToString();
			std::string sname = msclr::interop::marshal_as<std::string>(name);

			this->startGameButton->Visible = false;
			this->comboBox1->Visible = false;
			this->pictureBox1->Visible = true;
			this->button1->Visible = true;
			this->button2->Visible = true;
			this->button3->Visible = true;
			this->button4->Visible = true;
			this->button5->Visible = true;
			this->button6->Visible = true;
			this->button7->Visible = true;
			this->button8->Visible = true;
			this->button9->Visible = true;
			this->comboBox2->Visible = true;
			this->comboBox3->Visible = true;
			this->comboBox4->Visible = true;
			this->label1->Visible = true;
			this->label2->Visible = true;
			this->label3->Visible = true;
			this->label4->Visible = true;
		}

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		System::Object^ name = textBox1->GetType();
		System::String^ pName = name->ToString();
		std::string playerName = msclr::interop::marshal_as<std::string>(pName);
		Player* player = new Player();
		player->setName(playerName);
		game->goToCity(player);/*
		MapGenerator* city = game->getMap();
		std::vector<Npc*> npcs = city->getNpcs();
		std::string cityNameText = "Trafiles do miasta: " + city->getName();
		const char* tmp1 = cityNameText.c_str();
		System::String^ tmp = gcnew String(tmp1);
		this->label4->Text = tmp;
		this->comboBox2->Items->Clear();
		for (int i = 0; i < npcs.size(); i++)
		{
			std::string name = npcs[i]->getName();
			std::string type = npcs[i]->getType();
			std::string tmp = std::to_string(i+1) + ". " + type + " " + name;
			const char *tmp2 = tmp.c_str();
			System::String^ npc = gcnew String(tmp2);
			this->comboBox2->Items->Add(npc);
		}*/
		this->label1->ResetText();
		this->label2->ResetText();
		this->label3->ResetText();
		this->label4->ResetText();
		generateCity();

		this->textBox1->Visible = false;
		this->startButton->Visible = false;
		this->pictureBox1->Visible = true;
		this->button1->Visible = true;
		this->button2->Visible = true;
		this->button3->Visible = true;
		this->button4->Visible = true;
		this->button5->Visible = true;
		this->button6->Visible = true;
		this->button7->Visible = true;
		this->button8->Visible = true;
		this->button9->Visible = true;
		this->comboBox2->Visible = true;
		this->comboBox3->Visible = true;
		this->comboBox4->Visible = true;
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
	}


	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button9->Visible = false;
		this->comboBox2->Visible = false;
		this->comboBox3->Visible = false;
		this->comboBox4->Visible = false;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = true;
		this->pictureBox1->Visible = false;

		this->pictureBox2->Visible = true;
		this->button10->Visible = true;
		this->button11->Visible = true;
		this->button12->Visible = true;
		this->button13->Visible = true;
		this->button14->Visible = true;
		this->button10->Enabled = false;
		this->button11->Enabled = false;
		this->button12->Enabled = false;
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		this->button10->Enabled = true;
		this->button11->Enabled = true;
		this->button12->Enabled = true;
		this->button13->Enabled = false;
		this->button14->Enabled = false;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

		game->goToCity(game->getPlayer());
		generateCity();
		this->pictureBox1->Visible = true;
		this->pictureBox2->Visible = false;
		this->button1->Visible = true;
		this->button2->Visible = true;
		this->button3->Visible = true;
		this->button4->Visible = true;
		this->button5->Visible = true;
		this->button6->Visible = true;
		this->button7->Visible = true;
		this->button8->Visible = true;
		this->button9->Visible = true;
		this->button10->Visible = false;
		this->button11->Visible = false;
		this->button12->Visible = false;
		this->button13->Visible = false;
		this->button14->Visible = false;
		this->comboBox2->Visible = true;
		this->comboBox3->Visible = true;
		this->comboBox4->Visible = true;
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = false;
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button9->Visible = false;
		this->comboBox2->Visible = false;
		this->comboBox3->Visible = false;
		this->comboBox4->Visible = false;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->pictureBox1->Visible = false;

		this->newGameButton->Visible = true;
		this->loadButton->Visible = true;
		this->exitButton->Visible = true;
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Object^ choose = comboBox2->SelectedItem;
		if (!choose)
		{

		}
		else {
			System::String^ name = choose->ToString();
			std::string sname = msclr::interop::marshal_as<std::string>(name);
			int npcId = sname[0] - 49;
			MapGenerator* map = game->getMap();
			Npc* npc = map->getNpcs()[npcId];
			std::string text = "Imie: " + npc->getName() + "\nZawod: " + npc->getType() + "\nIlosc pieniedzy: " + std::to_string(npc->getMoney());
			const char* tmp1 = text.c_str();
			System::String^ tmp = gcnew String(tmp1);
			this->label1->Text = tmp;
		}
	}
	};
}
