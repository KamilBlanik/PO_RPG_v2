#pragma once

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
			// windowManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->loadButton);
			this->Controls->Add(this->newGameButton);
			this->Name = L"windowManager";
			this->ShowIcon = false;
			this->Text = L"DungeonExplorer";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
