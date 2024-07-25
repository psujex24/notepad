#pragma once
#include "MyForm1.h"
#include <Windows.h>
namespace notatnik {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            nazwaPliku = "";
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::RichTextBox^ tresc;
    protected:


    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ nowyToolStripMenuItem;

    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ otwórzToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapiszJakoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem2;
    private: System::Windows::Forms::ToolStripMenuItem^ zakoñczToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ edycjaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ wytnijCtrlXToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ kopiujCtrlToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ wklToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zawijanieWierszyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ czcionkaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapraszamNaGitHubaToolStripMenuItem;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

    private: System::String^ nazwaPliku;
    private: System::Windows::Forms::FontDialog^ fontDialog1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->tresc = (gcnew System::Windows::Forms::RichTextBox());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapiszJakoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->wytnijCtrlXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->kopiujCtrlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->wklToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zawijanieWierszyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapraszamNaGitHubaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // tresc
            // 
            this->tresc->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tresc->Location = System::Drawing::Point(0, 24);
            this->tresc->Name = L"tresc";
            this->tresc->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
            this->tresc->Size = System::Drawing::Size(284, 237);
            this->tresc->TabIndex = 0;
            this->tresc->Text = L"";
            this->tresc->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
            this->tresc->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tresc_KeyDown);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->plikToolStripMenuItem,
                    this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->pomocToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(284, 24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // plikToolStripMenuItem
            // 
            this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
                this->nowyToolStripMenuItem,
                    this->toolStripMenuItem1, this->otwórzToolStripMenuItem, this->zapiszToolStripMenuItem, this->zapiszJakoToolStripMenuItem, this->toolStripMenuItem2,
                    this->zakoñczToolStripMenuItem
            });
            this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
            this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
            this->plikToolStripMenuItem->Text = L"&Plik";
            // 
            // nowyToolStripMenuItem
            // 
            this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
            this->nowyToolStripMenuItem->Size = System::Drawing::Size(135, 22);
            this->nowyToolStripMenuItem->Text = L"&Nowy";
            this->nowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nowyToolStripMenuItem_Click);
            // 
            // toolStripMenuItem1
            // 
            this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
            this->toolStripMenuItem1->Size = System::Drawing::Size(132, 6);
            // 
            // otwórzToolStripMenuItem
            // 
            this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
            this->otwórzToolStripMenuItem->Size = System::Drawing::Size(135, 22);
            this->otwórzToolStripMenuItem->Text = L"&Otwórz";
            this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::otwórzToolStripMenuItem_Click);
            // 
            // zapiszToolStripMenuItem
            // 
            this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
            this->zapiszToolStripMenuItem->Size = System::Drawing::Size(135, 22);
            this->zapiszToolStripMenuItem->Text = L"Za&pisz";
            this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapiszToolStripMenuItem_Click);
            // 
            // zapiszJakoToolStripMenuItem
            // 
            this->zapiszJakoToolStripMenuItem->Name = L"zapiszJakoToolStripMenuItem";
            this->zapiszJakoToolStripMenuItem->Size = System::Drawing::Size(135, 22);
            this->zapiszJakoToolStripMenuItem->Text = L"Zapi&sz jako ";
            this->zapiszJakoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapiszJakoToolStripMenuItem_Click);
            // 
            // toolStripMenuItem2
            // 
            this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
            this->toolStripMenuItem2->Size = System::Drawing::Size(132, 6);
            // 
            // zakoñczToolStripMenuItem
            // 
            this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
            this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(135, 22);
            this->zakoñczToolStripMenuItem->Text = L"Zakoñ&cz";
            this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zakoñczToolStripMenuItem_Click);
            // 
            // edycjaToolStripMenuItem
            // 
            this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->wytnijCtrlXToolStripMenuItem,
                    this->kopiujCtrlToolStripMenuItem, this->wklToolStripMenuItem
            });
            this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
            this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
            this->edycjaToolStripMenuItem->Text = L"&Edycja";
            // 
            // wytnijCtrlXToolStripMenuItem
            // 
            this->wytnijCtrlXToolStripMenuItem->Name = L"wytnijCtrlXToolStripMenuItem";
            this->wytnijCtrlXToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->wytnijCtrlXToolStripMenuItem->Text = L"W&ytnij    Ctrl+X";
            this->wytnijCtrlXToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wytnijCtrlXToolStripMenuItem_Click);
            // 
            // kopiujCtrlToolStripMenuItem
            // 
            this->kopiujCtrlToolStripMenuItem->Name = L"kopiujCtrlToolStripMenuItem";
            this->kopiujCtrlToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->kopiujCtrlToolStripMenuItem->Text = L"Kop&iuj    Ctrl+C";
            this->kopiujCtrlToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::kopiujCtrlToolStripMenuItem_Click);
            // 
            // wklToolStripMenuItem
            // 
            this->wklToolStripMenuItem->Name = L"wklToolStripMenuItem";
            this->wklToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->wklToolStripMenuItem->Text = L"Wkle&j     Ctrl+V";
            this->wklToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wklToolStripMenuItem_Click);
            // 
            // formatToolStripMenuItem
            // 
            this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->zawijanieWierszyToolStripMenuItem,
                    this->czcionkaToolStripMenuItem
            });
            this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
            this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
            this->formatToolStripMenuItem->Text = L"&Format";
            // 
            // zawijanieWierszyToolStripMenuItem
            // 
            this->zawijanieWierszyToolStripMenuItem->Checked = true;
            this->zawijanieWierszyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
            this->zawijanieWierszyToolStripMenuItem->Name = L"zawijanieWierszyToolStripMenuItem";
            this->zawijanieWierszyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
            this->zawijanieWierszyToolStripMenuItem->Text = L"Z&awijanie wierszy";
            this->zawijanieWierszyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zawijanieWierszyToolStripMenuItem_Click);
            // 
            // czcionkaToolStripMenuItem
            // 
            this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
            this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(165, 22);
            this->czcionkaToolStripMenuItem->Text = L"&Czcionka";
            this->czcionkaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::czcionkaToolStripMenuItem_Click);
            // 
            // pomocToolStripMenuItem
            // 
            this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
            this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
            this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
            this->pomocToolStripMenuItem->Text = L"P&omoc";
            // 
            // informacjeToolStripMenuItem
            // 
            this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->oProgramieToolStripMenuItem,
                    this->zapraszamNaGitHubaToolStripMenuItem
            });
            this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
            this->informacjeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->informacjeToolStripMenuItem->Text = L"I&nformacje";
            // 
            // oProgramieToolStripMenuItem
            // 
            this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
            this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(193, 22);
            this->oProgramieToolStripMenuItem->Text = L"O p&rogramie";
            this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oProgramieToolStripMenuItem_Click);
            // 
            // zapraszamNaGitHubaToolStripMenuItem
            // 
            this->zapraszamNaGitHubaToolStripMenuItem->Name = L"zapraszamNaGitHubaToolStripMenuItem";
            this->zapraszamNaGitHubaToolStripMenuItem->Size = System::Drawing::Size(193, 22);
            this->zapraszamNaGitHubaToolStripMenuItem->Text = L"Zapraszam na gi&tHuba";
            this->zapraszamNaGitHubaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapraszamNaGitHubaToolStripMenuItem_Click);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
            this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk_1);
            // 
            // saveFileDialog1
            // 
            this->saveFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
            this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->tresc);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"Mój notatnik";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void openFileDialog1_FileOk_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
    {
        System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
        tresc->Text = sr->ReadToEnd();
        sr->Close();
    }

    private: System::Void buttonOpenFile_Click(System::Object^ sender, System::EventArgs^ e)
    {

    }
    private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void fToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void otwórzToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            try
            {
                tresc->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
                nazwaPliku = openFileDialog1->FileName;
            }
            catch (...)
            {
                MessageBox::Show("B³¹d otwarcia pliku. upewnij siê, ¿e Plik istnijee na dysku");
            }
        }
    }
    private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
    }
    private: System::Void zapiszJakoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            try
            {
                tresc->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
                nazwaPliku = saveFileDialog1->FileName;
            }
            catch (...)
            {
                MessageBox::Show("Zapis nie zapisuje :<");
            }
        }
    };
    private: System::Void MyForm::zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (nazwaPliku != "")
        {
            // U¿yj PlainText zamiast RichText
            tresc->SaveFile(nazwaPliku, RichTextBoxStreamType::PlainText);
        }
        else
        {
            zapiszJakoToolStripMenuItem_Click(sender, e);
        }
    }

    private: System::Void MyForm::nowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Wywo³anie MessageBox z pytaniem
        System::Windows::Forms::DialogResult result = MessageBox::Show("Czy na pewno utworzyæ nowy plik?", "Potwierdzenie", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

        // Sprawdzenie wyniku
        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            // Tutaj umieœæ kod do utworzenia nowego pliku
            // Na przyk³ad mo¿na wyczyœciæ zawartoœæ RichTextBox
            tresc->Clear();
            nazwaPliku = ""; // W przypadku nowego pliku nazwaPliku powinna byæ pusta
        }
        else if (result == System::Windows::Forms::DialogResult::No)
        {
            // Nic nie robimy, u¿ytkownik wybra³ "Nie"
        }
        else if (result == System::Windows::Forms::DialogResult::Cancel)
        {
            // Nic nie robimy, u¿ytkownik wybra³ "Anuluj"
        }
    }
    private: System::Void MyForm::tresc_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
    {
        // Tutaj umieœæ kod do obs³ugi zdarzenia KeyDown
        if (e->Control && e->KeyCode == Keys::S)
        {
            // Obs³uga kombinacji Ctrl + S
            // Na przyk³ad zapisz plik
            zapiszToolStripMenuItem_Click(sender, e);

        }
        else if (e->Control && e->KeyCode == Keys::N)
        {
            nowyToolStripMenuItem_Click(sender, e);
        }
        else if (e->KeyCode == Keys::Escape)
        {
            // Obs³uga klawisza Escape
            // Na przyk³ad anulowanie operacji
            MessageBox::Show("Anulowano operacjê (Esc)");
        }
    }
    private: System::Void zakoñczToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        System::Windows::Forms::DialogResult result = MessageBox::Show("Czy na pewno chcesz wyjsc z aplikacjk?", "Potwierdzenie", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

        // Sprawdzenie wyniku
        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            Application::Exit();
        }
        else if (result == System::Windows::Forms::DialogResult::No)
        {
            // Nic nie robimy, u¿ytkownik wybra³ "Nie"
        }
    }
    private: private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
    {
        // Zapytaj u¿ytkownika o potwierdzenie zamkniêcia aplikacji
        System::Windows::Forms::DialogResult result = MessageBox::Show("Czy na pewno chcesz wyjœæ z aplikacji?", "Potwierdzenie", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

        // SprawdŸ odpowiedŸ u¿ytkownika
        if (result == System::Windows::Forms::DialogResult::No)
        {
            // Jeœli u¿ytkownik klikn¹³ "Nie", anuluj zamykanie formularza
            e->Cancel = true;
        }
    }
    private: System::Void wytnijCtrlXToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tresc->Cut();
    }
    private: System::Void kopiujCtrlToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tresc->Copy();
    }
    private: System::Void wklToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tresc->Paste();
    }
    private: System::Void zawijanieWierszyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        zawijanieWierszyToolStripMenuItem->Checked = !zawijanieWierszyToolStripMenuItem->Checked; // prze³¹czanie stanu Checked

        if (zawijanieWierszyToolStripMenuItem->Checked)
        {
            tresc->WordWrap = true; // w³¹czenie zawijania wierszy
            tresc->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical; // ustawienie paska przewijania na pionowy
        }
        else
        {
            tresc->WordWrap = false; // wy³¹czenie zawijania wierszy
            tresc->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Both; // ustawienie obu pasków przewijania
        }
    }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void czcionkaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Utwórz now¹ instancjê FontDialog
        System::Windows::Forms::FontDialog^ fontDialog = gcnew System::Windows::Forms::FontDialog();

        // Ustaw aktualn¹ czcionkê RichTextBox jako domyœln¹ w dialogu
        fontDialog->Font = tresc->Font;

        // Wyœwietl FontDialog i sprawdŸ, czy u¿ytkownik wybra³ czcionkê
        if (fontDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            // Ustaw czcionkê RichTextBox na wybran¹ przez u¿ytkownika
            tresc->Font = fontDialog->Font;
        }
    }
    private: System::Void oProgramieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        MyForm1^ form = gcnew MyForm1();  // Tworzenie nowej instancji formularza MyForm1
        form->ShowDialog();               // Wywo³anie metody ShowDialog() na formularzu
    }
    private: System::Void zapraszamNaGitHubaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Definicja adresu URL
        System::String^ url = "https://github.com/psujex24";

        try
        {
            // Otwieranie adresu URL w domyœlnej przegl¹darce
            System::Diagnostics::Process::Start(url);
        }
        catch (System::Exception^ ex)
        {
            // Obs³uga ewentualnych b³êdów
            MessageBox::Show("Wyst¹pi³ b³¹d podczas otwierania przegl¹darki: " + ex->Message,
                "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    };
}