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



			 GameManager * game = new GameManager();
			 LevelManager* lvl = new LevelManager();
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label6;




	protected:

	private: int choosenNpc = 0;
	private: int choosenItem = 0;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label10;

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
				 this->button15 = (gcnew System::Windows::Forms::Button());
				 this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
				 this->button16 = (gcnew System::Windows::Forms::Button());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->button17 = (gcnew System::Windows::Forms::Button());
				 this->button18 = (gcnew System::Windows::Forms::Button());
				 this->button19 = (gcnew System::Windows::Forms::Button());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->button20 = (gcnew System::Windows::Forms::Button());
				 this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
				 this->listBox1 = (gcnew System::Windows::Forms::ListBox());
				 this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
				 this->label10 = (gcnew System::Windows::Forms::Label());
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
				 this->button1->Click += gcnew System::EventHandler(this, &windowManager::button1_Click_2);
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
				 this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button4->Location = System::Drawing::Point(639, 189);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(125, 39);
				 this->button4->TabIndex = 12;
				 this->button4->Text = L"Wydaj PU na 25 HP";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Visible = false;
				 this->button4->Click += gcnew System::EventHandler(this, &windowManager::button4_Click);
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
				 this->button5->Click += gcnew System::EventHandler(this, &windowManager::button5_Click);
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
				 this->button6->Click += gcnew System::EventHandler(this, &windowManager::button6_Click);
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
				 this->comboBox3->Location = System::Drawing::Point(234, 617);
				 this->comboBox3->Name = L"comboBox3";
				 this->comboBox3->Size = System::Drawing::Size(161, 24);
				 this->comboBox3->TabIndex = 17;
				 this->comboBox3->Text = L"Wybierz przedmiot";
				 this->comboBox3->Visible = false;
				 // 
				 // comboBox4
				 // 
				 this->comboBox4->FormattingEnabled = true;
				 this->comboBox4->Location = System::Drawing::Point(234, 689);
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
				 this->button8->Click += gcnew System::EventHandler(this, &windowManager::button8_Click);
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
				 this->button9->Click += gcnew System::EventHandler(this, &windowManager::button9_Click);
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
				 this->button10->Click += gcnew System::EventHandler(this, &windowManager::button10_Click);
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
				 this->button11->Click += gcnew System::EventHandler(this, &windowManager::button11_Click);
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
				 this->button12->Click += gcnew System::EventHandler(this, &windowManager::button12_Click);
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
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->label4->Location = System::Drawing::Point(395, 9);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(171, 25);
				 this->label4->TabIndex = 30;
				 this->label4->Text = L"Trafiles do miasta:";
				 this->label4->Visible = false;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(421, 80);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(168, 51);
				 this->label5->TabIndex = 31;
				 this->label5->Text = L"Natrafiles na przeciwnika!\r\nNazwa:\r\nPoziom:";
				 this->label5->Visible = false;
				 // 
				 // button15
				 // 
				 this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button15->Location = System::Drawing::Point(399, 617);
				 this->button15->Name = L"button15";
				 this->button15->Size = System::Drawing::Size(200, 75);
				 this->button15->TabIndex = 32;
				 this->button15->Text = L"Naucz sie";
				 this->button15->UseVisualStyleBackColor = true;
				 this->button15->Visible = false;
				 this->button15->Click += gcnew System::EventHandler(this, &windowManager::button15_Click);
				 // 
				 // comboBox5
				 // 
				 this->comboBox5->FormattingEnabled = true;
				 this->comboBox5->Location = System::Drawing::Point(603, 649);
				 this->comboBox5->Name = L"comboBox5";
				 this->comboBox5->Size = System::Drawing::Size(161, 24);
				 this->comboBox5->TabIndex = 33;
				 this->comboBox5->Text = L"Wybierz przedmiot";
				 this->comboBox5->Visible = false;
				 // 
				 // button16
				 // 
				 this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button16->Location = System::Drawing::Point(218, 255);
				 this->button16->Name = L"button16";
				 this->button16->Size = System::Drawing::Size(200, 75);
				 this->button16->TabIndex = 34;
				 this->button16->Text = L"Sprawdz statystyki zaklecia do nauczenia sie";
				 this->button16->UseVisualStyleBackColor = true;
				 this->button16->Visible = false;
				 this->button16->Click += gcnew System::EventHandler(this, &windowManager::button16_Click);
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(421, 256);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(212, 17);
				 this->label6->TabIndex = 35;
				 this->label6->Text = L"Statystyki zaklecia do nauczenia";
				 this->label6->Visible = false;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(767, 189);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(115, 17);
				 this->label7->TabIndex = 36;
				 this->label7->Text = L"Statystyki gracza";
				 this->label7->Visible = false;
				 // 
				 // button17
				 // 
				 this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button17->Location = System::Drawing::Point(639, 234);
				 this->button17->Name = L"button17";
				 this->button17->Size = System::Drawing::Size(125, 39);
				 this->button17->TabIndex = 37;
				 this->button17->Text = L"Wydaj PU na 10 many";
				 this->button17->UseVisualStyleBackColor = true;
				 this->button17->Visible = false;
				 this->button17->Click += gcnew System::EventHandler(this, &windowManager::button17_Click);
				 // 
				 // button18
				 // 
				 this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button18->Location = System::Drawing::Point(639, 282);
				 this->button18->Name = L"button18";
				 this->button18->Size = System::Drawing::Size(125, 39);
				 this->button18->TabIndex = 38;
				 this->button18->Text = L"Wydaj PU na 10 ataku";
				 this->button18->UseVisualStyleBackColor = true;
				 this->button18->Visible = false;
				 this->button18->Click += gcnew System::EventHandler(this, &windowManager::button18_Click);
				 // 
				 // button19
				 // 
				 this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button19->Location = System::Drawing::Point(218, 336);
				 this->button19->Name = L"button19";
				 this->button19->Size = System::Drawing::Size(200, 75);
				 this->button19->TabIndex = 39;
				 this->button19->Text = L"Sprawdz statystyki przedmiotu do ubrania";
				 this->button19->UseVisualStyleBackColor = true;
				 this->button19->Visible = false;
				 this->button19->Click += gcnew System::EventHandler(this, &windowManager::button19_Click);
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(215, 414);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(270, 17);
				 this->label8->TabIndex = 40;
				 this->label8->Text = L"Sprawdz statystyki przedmiotu do ubrania";
				 this->label8->Visible = false;
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(421, 414);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(125, 17);
				 this->label9->TabIndex = 41;
				 this->label9->Text = L"Aktualnie ubierany";
				 this->label9->Visible = false;
				 // 
				 // button20
				 // 
				 this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(238)));
				 this->button20->Location = System::Drawing::Point(639, 331);
				 this->button20->Name = L"button20";
				 this->button20->Size = System::Drawing::Size(125, 39);
				 this->button20->TabIndex = 42;
				 this->button20->Text = L"Ubierz przedmiot";
				 this->button20->UseVisualStyleBackColor = true;
				 this->button20->Visible = false;
				 this->button20->Click += gcnew System::EventHandler(this, &windowManager::button20_Click);
				 // 
				 // comboBox6
				 // 
				 this->comboBox6->FormattingEnabled = true;
				 this->comboBox6->Location = System::Drawing::Point(624, 376);
				 this->comboBox6->Name = L"comboBox6";
				 this->comboBox6->Size = System::Drawing::Size(140, 24);
				 this->comboBox6->TabIndex = 43;
				 this->comboBox6->Text = L"Wybierz przedmiot";
				 this->comboBox6->Visible = false;
				 // 
				 // listBox1
				 // 
				 this->listBox1->FormattingEnabled = true;
				 this->listBox1->ItemHeight = 16;
				 this->listBox1->Location = System::Drawing::Point(395, 216);
				 this->listBox1->Name = L"listBox1";
				 this->listBox1->Size = System::Drawing::Size(212, 340);
				 this->listBox1->TabIndex = 44;
				 this->listBox1->Visible = false;
				 // 
				 // comboBox7
				 // 
				 this->comboBox7->FormattingEnabled = true;
				 this->comboBox7->Location = System::Drawing::Point(504, 608);
				 this->comboBox7->Name = L"comboBox7";
				 this->comboBox7->Size = System::Drawing::Size(156, 24);
				 this->comboBox7->TabIndex = 45;
				 this->comboBox7->Text = L"Wybierz przedmiot";
				 this->comboBox7->Visible = false;
				 this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &windowManager::comboBox7_SelectedIndexChanged);
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(613, 517);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(120, 17);
				 this->label10->TabIndex = 46;
				 this->label10->Text = L"Wybrane zaklecie";
				 this->label10->Visible = false;
				 // 
				 // windowManager
				 // 
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				 this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(982, 753);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->comboBox7);
				 this->Controls->Add(this->comboBox6);
				 this->Controls->Add(this->button20);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->button19);
				 this->Controls->Add(this->button18);
				 this->Controls->Add(this->button17);
				 this->Controls->Add(this->label7);
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
				 this->Controls->Add(this->button15);
				 this->Controls->Add(this->comboBox5);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->button16);
				 this->Controls->Add(this->listBox1);
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

	private: void cityLayout() {

		this->button1->Visible = true;
		this->button2->Visible = true;
		this->button3->Visible = true;
		this->button4->Visible = true;
		this->button5->Visible = true;
		this->button6->Visible = true;
		this->button7->Visible = true;
		this->button8->Visible = true;
		this->button9->Visible = true;
		this->button16->Visible = true;
		this->button15->Visible = true;
		this->button17->Visible = true;
		this->button18->Visible = true;
		this->button19->Visible = true;
		this->button20->Visible = true;
		this->comboBox2->Visible = true;
		this->comboBox3->Visible = true;
		this->comboBox4->Visible = true;
		this->comboBox5->Visible = true;
		this->comboBox6->Visible = true;
		this->comboBox7->Visible = false;
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label6->Visible = true;
		this->label7->Visible = true;
		this->label8->Visible = true;
		this->label9->Visible = true;
		this->label10->Visible = false;

		this->startButton->Visible = false;
		this->startGameButton->Visible = false;
		this->newGameButton->Visible = false;
		this->loadButton->Visible = false;
		this->exitButton->Visible = false;
		this->button10->Visible = false;
		this->button11->Visible = false;
		this->button12->Visible = false;
		this->button13->Visible = false;
		this->button14->Visible = false;
		this->comboBox1->Visible = false;
		this->label5->Visible = false;
		this->textBox1->Visible = false;

		this->label1->ResetText();
		this->label2->ResetText();
		this->label3->ResetText();
		this->label5->ResetText();
		this->label6->ResetText();
		this->label7->ResetText();
		this->comboBox2->Items->Clear();
		this->comboBox3->Items->Clear();
		this->comboBox4->Items->Clear();
		this->comboBox5->Items->Clear();
		this->comboBox6->Items->Clear();
		this->comboBox2->ResetText();
		this->comboBox3->ResetText();
		this->comboBox4->ResetText();
		this->comboBox5->ResetText();
		this->comboBox6->ResetText();
		this->listBox1->Visible = false;
		this->pictureBox1->Visible = true;
		this->pictureBox2->Visible = false;
	}

	private: void menuLayout() {

		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button9->Visible = false;
		this->button10->Visible = false;
		this->button11->Visible = false;
		this->button12->Visible = false;
		this->button13->Visible = false;
		this->button14->Visible = false;
		this->button15->Visible = false;
		this->button16->Visible = false;
		this->button17->Visible = false;
		this->button18->Visible = false;
		this->button19->Visible = false;
		this->button20->Visible = false;
		this->comboBox2->Visible = false;
		this->comboBox3->Visible = false;
		this->comboBox4->Visible = false;
		this->comboBox5->Visible = false;
		this->comboBox6->Visible = false;
		this->comboBox7->Visible = false;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = false;
		this->newGameButton->Visible = true;
		this->loadButton->Visible = true;
		this->exitButton->Visible = true;
		this->listBox1->Visible = false;
		this->pictureBox1->Visible = false;
		this->pictureBox2->Visible = false;

	}

	private: void dungeonLayout() {


		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button4->Visible = false;
		this->button5->Visible = false;
		this->button6->Visible = false;
		this->button7->Visible = false;
		this->button8->Visible = false;
		this->button9->Visible = false;
		this->button15->Visible = false;
		this->button16->Visible = false;
		this->button17->Visible = false;
		this->button18->Visible = false;
		this->button19->Visible = false;
		this->button20->Visible = false;
		this->comboBox2->Visible = false;
		this->comboBox3->Visible = false;
		this->comboBox4->Visible = false;
		this->comboBox5->Visible = false;
		this->comboBox6->Visible = false;
		this->comboBox7->Visible = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = false;
		this->label7->Visible = true;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label10->Visible = true;

		this->button10->Visible = true;
		this->button11->Visible = true;
		this->button12->Visible = true;
		this->button13->Visible = true;
		this->button14->Visible = true;
		this->button10->Enabled = false;
		this->button11->Enabled = false;
		this->button12->Enabled = false;
		this->button13->Enabled = true;
		this->button14->Enabled = true;
		this->listBox1->Visible = true;
		this->pictureBox1->Visible = false;
		this->pictureBox2->Visible = true;

		this->listBox1->Items->Clear();

		this->comboBox7->Items->Clear();
		this->comboBox7->ResetText();
	}

	private: void generateCity() {

		MapGenerator* city = game->getMap();
		std::vector<Npc*> npcs = city->getNpcs();
		std::string cityNameText = "Trafiles do miasta: " + city->getName();
		const char* tmp1 = cityNameText.c_str();
		System::String^ tmp = gcnew String(tmp1);
		this->label4->Text = tmp;

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

	private: void generateDungeon() {
		MapGenerator* dungeon = game->getMap();
		std::vector<Enemy*> enemies = dungeon->getEnemies();
		showDungeonInfo();
		showEnemyInfo(dungeon->getEnemies()[0]);

	}
	private: void showDungeonInfo() {
		MapGenerator* dungeon = game->getMap();
		std::string dungNameText = "Trafiles do : " + dungeon->getName()
			+ "\nIlosc przeciwnikow: " + std::to_string(dungeon->getEnemies().size())
			+ "\nPoziom trudnosci: :" + std::to_string(dungeon->getDifficult());
		const char* tmp1 = dungNameText.c_str();
		System::String^ tmp = gcnew String(tmp1);
		this->label4->Text = tmp;
	}
	private: void nextEnemy() {
		this->listBox1->Items->Clear();
		game->getPlayer()->addItemToBp(game->getMap()->getEnemies()[0]->dropItem());
		std::string log = "Zabiles przeciwnika!";
		updateBattleLog(log);
		log = "Znalazles przy nim: "
			+ game->getMap()->getEnemies()[0]->dropItem()->getName() + " "
			+ game->getMap()->getEnemies()[0]->dropItem()->getType();
		updateBattleLog(log);
		showDungeonInfo();
		this->button10->Enabled = false;
		this->button11->Enabled = false;
		this->button12->Enabled = false;
		this->button13->Enabled = true;
		this->button14->Enabled = true;
		lvl->getExp(game->getPlayer(), game->getMap()->getEnemies()[0]);
		if (game->getPlayer()->getExp() >= lvl->getMaxExpPerLvl() && game->getPlayer()->getLevel() < lvl->getMaxLvl()) {
			log = "Awansowales!";
			updateBattleLog(log);
			lvl->levelUp(game->getPlayer());
		}
		game->getMap()->killEnemy();
		if (game->getMap()->getEnemies().size() == 0) {
			game->goToDangeon(game->getPlayer());
			generateDungeon();
			this->listBox1->Items->Clear();
			log = "Po pokonaniu wszystki przeciwnikow trafiles";
			updateBattleLog(log);
			log = " do nasetpnego lochu";
			updateBattleLog(log);
			showDungeonInfo();

		}
		else {
			showDungeonInfo();
			showEnemyInfo(game->getMap()->getEnemies()[0]);
		}
		updatePlayerInfo();


	}
	private: void showEnemyInfo(Enemy* enemy) {
		if (game->getMap()->getEnemies().size() > 0)
		{
			std::string info = "Natrafiles na przeciwnika!\nNazwa: "
				+ enemy->getName()
				+ "\nPoziom: " + std::to_string(enemy->getLevel())
				+ "\nZycie: " + std::to_string(enemy->getHp()+enemy->getBonusHp())
				+ "\nMana: " + std::to_string(enemy->getMana())
				+ "\nPancerz: " + std::to_string(enemy->getArmor()+ enemy->getBonusArmor());
			const char * inf = info.c_str();
			System::String^ text = gcnew String(inf);
			this->label5->Text = text;
		}
	}
	private: void showItemInfo(System::Windows::Forms::Label^ label, Items* item) {
		label->ResetText();
		std::string info = "\n" + item->getName() + " " + item->getType() + "\nCena: " + std::to_string(item->getPrice()) + "\nObrazenia: " + std::to_string(item->getDmg()) + "\nBonusowe zycie: " + std::to_string(item->getHp()) + "\nBonusowa mana: " + std::to_string(item->getMana()) + "\nBonusowey pancerz: " + std::to_string(item->getArmor()) + "\nWymagany poziom: " + std::to_string(item->getItemLvl());
		const char* text = info.c_str();
		System::String^ tmp = gcnew String(text);
		label->Text += tmp;
	}
	private: void showSkillInfo(System::Windows::Forms::Label^ label, Skills* skill) {
		label->ResetText();
		std::string info = "\n" + skill->getName()
			+ "\nTyp: " + skill->getType()
			+ "\nCena: " + std::to_string(skill->getPrice())
			+ "\nWartosc bonusu: " + std::to_string(skill->getValue())
			+ "\nKoszt many: " + std::to_string(skill->getMana())
			+ "\nWymagany poziom: " + std::to_string(skill->getSkillLevel());
		const char* text = info.c_str();
		System::String^ tmp = gcnew String(text);
		label->Text += tmp;
	}
	private: void updateTraderInfo() {
		this->comboBox4->Items->Clear();
		this->comboBox5->Items->Clear();
		this->comboBox4->ResetText();
		this->comboBox5->ResetText();
		System::Object^ choose = comboBox2->SelectedItem;
		if (!choose)
		{

		}
		else {
			System::String^ name = choose->ToString();
			std::string sname = msclr::interop::marshal_as<std::string>(name);
			choosenNpc = sname[0] - 49;
			MapGenerator* map = game->getMap();
			Npc* npc = map->getNpcs()[choosenNpc];
			std::string smth = "";
			if (npc->getType() == "Nauczyciel") {
				smth += "\nMoze nauczyc: ";
				for (int i = 0; i < npc->getSkills().size(); i++)
				{
					smth += "\n";
					std::string tmp = std::to_string(i + 1) + ". " + npc->getSkills()[i]->getName();
					smth += tmp;
					const char *tt = tmp.c_str();
					System::String^ s = gcnew String(tt);
					this->comboBox5->Items->Add(s);
				}
			}
			else {
				smth += "\nMoze sprzedac: ";
				for (int i = 0; i < npc->getItems().size(); i++)
				{
					smth += "\n";
					std::string tmp = std::to_string(i + 1) + ". " + npc->getItems()[i]->getName() + " " + npc->getItems()[i]->getType();
					smth += tmp;
					const char *tt = tmp.c_str();
					System::String^ s = gcnew String(tt);
					this->comboBox4->Items->Add(s);
				}

			}
			std::string text = "Imie: " + npc->getName() + "\nZawod: " + npc->getType() + "\nIlosc pieniedzy: " + std::to_string(npc->getMoney()) + smth;
			const char* tmp1 = text.c_str();
			System::String^ tmp = gcnew String(tmp1);
			this->label1->Text = tmp;
		}
	}
	private: void updatePlayerInfo() {
		Player* player = game->getPlayer();
		player->getBonuses();
		this->comboBox3->Items->Clear();
		this->comboBox3->ResetText();
		this->comboBox6->Items->Clear();
		this->comboBox6->ResetText();
		this->label7->ResetText();

		std::string t = "Statystyki gracza: " + player->getName()
			+ "\nPieniadze: " + std::to_string(player->getMoney())
			+ "\nPoziom: " + std::to_string(player->getLevel())
			+ "\nExp:" + std::to_string(player->getExp()) + "/" + std::to_string(lvl->getMaxExpPerLvl())
			+ "\nPunkty umiejetnosci: " + std::to_string(player->getSkillPoints())
			+ "\nZycie: " + std::to_string(player->getHp() + player->getBonusHp())
			+ "\nPancerz:	" + std::to_string(player->getArmor() + player->getBonusArmor())
			+ "\nMana: " + std::to_string(player->getMana() + player->getBonusMana())
			+ "\nObrazenia: " + std::to_string(player->getDmg() + player->getBonusDmg())
			+ "\nIlosc umjejetnosci: " + std::to_string(player->getSkills().size())
			+ "\nIlosc przedmiotow: " + std::to_string(player->getBp().size());
		std::string items = "\nUbierane przedmioty:";
		for (int i = 0; i < player->getInventory().size(); i++)
		{
			items += "\n" + player->getInventory()[i]->getName() + " " + player->getInventory()[i]->getType();
		}
		t += items;
		const char* text = t.c_str();
		System::String^ tmp = gcnew String(text);
		this->label7->Text += tmp;
		for (int j = 0; j < player->getBp().size(); j++)
		{
			std::string name = player->getBp()[j]->getName();
			std::string type = player->getBp()[j]->getType();
			std::string tmpp = std::to_string(j + 1) + ". " + name + " " + type;
			const char *ttemp = tmpp.c_str();
			System::String^ st = gcnew String(ttemp);
			this->comboBox3->Items->Add(st);
			this->comboBox6->Items->Add(st);
		}
	}
	private: void updateBattleLog(std::string log) {
		//std::string logEntry = "Rozpoczales walke z " + game->getMap()->getEnemies()[0]->getName() + log;
		const char* text = log.c_str();
		System::String^ tmp = gcnew String(text);
		this->listBox1->Items->Add(tmp);
	}
	private: void checkAlive() {
		if (!game->getPlayer()->checkAlive()) {
			menuLayout();
			this->label4->Visible = true;
			this->label4->Text = "PRZEGRALES!";

		}
	}
	private: void enemyTour() {
		if (game->getMap()->getEnemies()[0]->incrasedArmor)
		{
			game->getMap()->getEnemies()[0]->setArmor(game->getMap()->getEnemies()[0]->getArmor() - game->getMap()->getEnemies()[0]->incrasedArmorVal);
			game->getMap()->getEnemies()[0]->incrasedArmor = false;
		}
		std::string log;
		int val = game->getMap()->getEnemies()[0]->attack();
		if (val == 0) {
			log = "Przeciwnik cos knuje, nie zaatakowal cie.";
			updateBattleLog(log);
		}
		else {
			log = "Pzeciwnik uderza za: " + std::to_string(val);
			updateBattleLog(log);
			game->getPlayer()->getHit(val);
		}


	}
	private: Items * getSelectedItemNpc(System::Windows::Forms::ComboBox^ comboBox) {
		Items *item = new Items();
		System::Object^ choose = comboBox->SelectedItem;
		if (!choose) return item;
		System::String^ name = choose->ToString();
		std::string strname = msclr::interop::marshal_as<std::string>(name);
		int i = strname[0] - 49;
		choosenItem = i;
		return game->getMap()->getNpcs()[choosenNpc]->getItems()[i];
	}
	private: Items * getSelectedItemPlayer(System::Windows::Forms::ComboBox^ comboBox) {
		Items *item = new Items();
		System::Object^ choose = comboBox->SelectedItem;
		if (!choose) return item;
		System::String^ name = choose->ToString();
		std::string strname = msclr::interop::marshal_as<std::string>(name);
		int i = strname[0] - 49;
		choosenItem = i;
		return game->getPlayer()->getBp()[i];
	}
	private: Skills * getSelectedSkillNpc(System::Windows::Forms::ComboBox^ comboBox) {
		Skills* skill = new Skills();
		System::Object^ choose = comboBox->SelectedItem;
		if (!choose) return skill;
		System::String^ name = choose->ToString();
		std::string strname = msclr::interop::marshal_as<std::string>(name);
		int i = strname[0] - 49;
		choosenItem = i;
		return game->getMap()->getNpcs()[choosenNpc]->getSkills()[i];
	}
	private: Skills * getSelectedSkillPlayer(System::Windows::Forms::ComboBox^ comboBox) {
		Skills* skill = new Skills();
		System::Object^ choose = comboBox->SelectedItem;
		if (!choose) return skill;
		System::String^ name = choose->ToString();
		std::string strname = msclr::interop::marshal_as<std::string>(name);
		int i = strname[0] - 49;
		choosenItem = i;
		return game->getPlayer()->getSkills()[i];
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
		this->comboBox1->Items->Clear();
		if (file.is_open()) {
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
			FileManager *file;
			game->goToCity(file->loadGame(sname));
			lvl->setMaxExp(file->loadGame(sname));
			cityLayout();
			generateCity();

		}

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		System::Object^ name = textBox1->Text;
		System::String^ pName = name->ToString();
		std::string playerName = msclr::interop::marshal_as<std::string>(pName);
		Player* player = new Player();
		player->setName(playerName);
		game->goToCity(player);
		cityLayout();
		generateCity();
		updatePlayerInfo();


	}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		game->goToDangeon(game->getPlayer());
		generateDungeon();
		dungeonLayout();
		updatePlayerInfo();
		for (int i = 0; i < game->getMap()->getEnemies().size(); i++)
		{
			std::string log = game->getMap()->getEnemies()[i]->getName();
			updateBattleLog(log);
		}


	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int j = 0; j < game->getPlayer()->getSkills().size(); j++)
		{
			std::string name = game->getPlayer()->getSkills()[j]->getName();
			std::string type = game->getPlayer()->getSkills()[j]->getType();
			std::string tmpp = std::to_string(j + 1) + ". " + name + " " + type;
			const char *ttemp = tmpp.c_str();
			System::String^ st = gcnew String(ttemp);
			this->comboBox7->Items->Add(st);
		}
		this->button10->Enabled = true;
		this->button11->Enabled = true;
		this->button12->Enabled = true;
		this->button13->Enabled = false;
		this->button14->Enabled = false;
		std::string log = "Rozpoczales walke z " + game->getMap()->getEnemies()[0]->getName();
		updateBattleLog(log);

	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

		game->goToCity(game->getPlayer());
		cityLayout();
		generateCity();
		updatePlayerInfo();

	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		menuLayout();
		game->~GameManager();

	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

		updateTraderInfo();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* item = getSelectedItemNpc(this->comboBox4);
		showItemInfo(this->label2, item);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* item = getSelectedItemPlayer(this->comboBox3);
		showItemInfo(this->label3, item);
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		Skills* skill = getSelectedSkillNpc(this->comboBox5);
		showSkillInfo(this->label6, skill);
	}
	private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		FileManager* save = new FileManager();
		save->saveGame(game->getPlayer(), game->getPlayer()->getName() + ".txt");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (game->getPlayer()->getSkillPoints() == 0)
		{

		}
		else {
			game->getPlayer()->increaseHp(25);
			game->getPlayer()->increaseMaxHp(25);
			game->getPlayer()->setSkillPoints(game->getPlayer()->getSkillPoints() - 1);
			updatePlayerInfo();
		}

	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		if (game->getPlayer()->getSkillPoints() == 0)
		{

		}
		else {
			game->getPlayer()->increaseMana(10);
			game->getPlayer()->increaseMaxMana(10);
			game->getPlayer()->setSkillPoints(game->getPlayer()->getSkillPoints() - 1);
			updatePlayerInfo();
		}
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		if (game->getPlayer()->getSkillPoints() == 0)
		{

		}
		else {
			game->getPlayer()->setDmg(game->getPlayer()->getDmg() + 5);
			game->getPlayer()->setSkillPoints(game->getPlayer()->getSkillPoints() - 1);
			updatePlayerInfo();
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* item = getSelectedItemNpc(this->comboBox4);
		if (item->getName() != "Nieznany") {
			game->getPlayer()->buyItem(choosenItem, game->getMap()->getNpcs()[choosenNpc]);
			updatePlayerInfo();
			updateTraderInfo();
		}

	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* bpItem = getSelectedItemPlayer(this->comboBox6);
		Items* invItem = new Items();
		for (int i = 0; i < game->getPlayer()->getInventory().size(); i++)
		{
			if (game->getPlayer()->getInventory()[i]->getType() == bpItem->getType()) {
				invItem = game->getPlayer()->getInventory()[i];
			}
		}
		showItemInfo(this->label8, bpItem);
		showItemInfo(this->label9, invItem);

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* item = getSelectedItemPlayer(this->comboBox3);
		if (item->getName() != "Nieznany")
		{
			game->getPlayer()->sellItem(choosenItem, game->getMap()->getNpcs()[choosenNpc]);
			updatePlayerInfo();
			updateTraderInfo();
		}
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		Skills* skill = getSelectedSkillNpc(this->comboBox5);
		if (skill->getName() != "Nieznany" || skill->getSkillLevel() <= game->getPlayer()->getLevel())
		{
			game->getPlayer()->learnSkill(skill, game->getMap()->getNpcs()[choosenNpc]);
			updatePlayerInfo();
			updateTraderInfo();
		}
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		Items* item = getSelectedItemPlayer(this->comboBox6);
		if (item->getName() != "Nieznany") {
			game->getPlayer()->addItemToInv(item, choosenItem);
			updatePlayerInfo();
		}
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (game->getPlayer()->incrasedArmor) {
			game->getPlayer()->setArmor(game->getPlayer()->getArmor() - game->getPlayer()->incrasedArmorVal);
			game->getPlayer()->incrasedArmor = false;
		}
		std::string log = "Atakujesz za: " + std::to_string(game->getPlayer()->attack());
		game->getMap()->getEnemies()[0]->getHit(game->getPlayer()->attack());
		updateBattleLog(log);

		if (game->getMap()->getEnemies()[0]->getHp() <= 0)
		{
			nextEnemy();
		}
		else {
			enemyTour();
			showEnemyInfo(game->getMap()->getEnemies()[0]);
			updatePlayerInfo();
			checkAlive();
		}
		updatePlayerInfo();



	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (game->getPlayer()->incrasedArmor) {
			game->getPlayer()->setArmor(game->getPlayer()->getArmor() - game->getPlayer()->incrasedArmorVal);
			game->getPlayer()->incrasedArmor = false;
		}
		std::string log = "Bronisz (zwiekszony pancerz) ";// +std::to_string(game->getPlayer()->defend());
		updateBattleLog(log);
		game->getPlayer()->defend();
		showEnemyInfo(game->getMap()->getEnemies()[0]);
		enemyTour();
		updatePlayerInfo();
		checkAlive();
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		Skills* skill = getSelectedSkillPlayer(this->comboBox7);
		if (skill->getName() == "Nieznany")
		{

		}
		else
		{
			if (game->getPlayer()->incrasedArmor) {
				game->getPlayer()->setArmor(game->getPlayer()->getArmor() - game->getPlayer()->incrasedArmorVal);
				game->getPlayer()->incrasedArmor = false;
			}
			std::string log = "Rzucasz zaklecie: " + skill->getName();
			game->getMap()->getEnemies()[0]->getHit(game->getPlayer()->useSkill(skill));
			updateBattleLog(log);

			if (game->getMap()->getEnemies()[0]->getHp() <= 0)
			{
				nextEnemy();
			}
			else {
				showEnemyInfo(game->getMap()->getEnemies()[0]);
				enemyTour();
				updatePlayerInfo();
				checkAlive();
			}


		}
		updatePlayerInfo();
	}
	private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Skills* skill = getSelectedSkillPlayer(this->comboBox7);
		showSkillInfo(this->label10, skill);
	}
	};
}
