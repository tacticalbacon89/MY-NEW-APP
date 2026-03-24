///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Cal_CorePanel_Base.h"

///////////////////////////////////////////////////////////////////////////

Cal_CorePanel_Base::Cal_CorePanel_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	wxBoxSizer* Cal_CoreLayoutSizer;
	Cal_CoreLayoutSizer = new wxBoxSizer( wxVERTICAL );

	m_BackButton = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_BackButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/Back_icon.png"), wxBITMAP_TYPE_ANY ) );
	m_BackButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );

	Cal_CoreLayoutSizer->Add( m_BackButton, 0, wxALL, 5 );

	m_MenuBorderColorPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_MenuBorderColorPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	wxBoxSizer* MenuSizer;
	MenuSizer = new wxBoxSizer( wxVERTICAL );

	m_MenuPanel = new wxPanel( m_MenuBorderColorPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_MenuPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	wxBoxSizer* MenuContentPositionSizer;
	MenuContentPositionSizer = new wxBoxSizer( wxHORIZONTAL );


	MenuContentPositionSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* MenuContentTextSizer1;
	MenuContentTextSizer1 = new wxBoxSizer( wxVERTICAL );

	SelectionPrompt = new wxStaticText( m_MenuPanel, wxID_ANY, _("Calculation Mode"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	SelectionPrompt->Wrap( -1 );
	SelectionPrompt->SetFont( wxFont( 20, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );
	SelectionPrompt->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	MenuContentTextSizer1->Add( SelectionPrompt, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* MenuContentTextSizer2;
	MenuContentTextSizer2 = new wxBoxSizer( wxHORIZONTAL );


	MenuContentTextSizer2->Add( 125, 0, 1, wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( m_MenuPanel, wxID_ANY, _("Offense"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );

	MenuContentTextSizer2->Add( m_staticText2, 0, wxALL, 5 );


	MenuContentTextSizer2->Add( 200, 0, 0, wxALL|wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( m_MenuPanel, wxID_ANY, _("Defense"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );

	MenuContentTextSizer2->Add( m_staticText3, 0, wxALL, 5 );


	MenuContentTextSizer2->Add( 0, 0, 1, wxEXPAND, 5 );


	MenuContentTextSizer1->Add( MenuContentTextSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* MenuContentButtonSizer;
	MenuContentButtonSizer = new wxBoxSizer( wxHORIZONTAL );


	MenuContentButtonSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_MissleDamageButton = new wxBitmapButton( m_MenuPanel, wxID_ANY, wxNullBitmap, wxPoint( -1,-1 ), wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_MissleDamageButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/Missle_Damage_Button.png"), wxBITMAP_TYPE_ANY ) );
	m_MissleDamageButton->SetBitmapPressed( wxBitmap( wxT("Assets/Bitmap/Missle_Damage_Button_Clicked.png"), wxBITMAP_TYPE_ANY ) );
	m_MissleDamageButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	MenuContentButtonSizer->Add( m_MissleDamageButton, 0, wxALL, 5 );

	m_TurretDamageButton = new wxBitmapButton( m_MenuPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_TurretDamageButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/TurretDmg_Button.png"), wxBITMAP_TYPE_ANY ) );
	m_TurretDamageButton->SetBitmapPressed( wxBitmap( wxT("Assets/Bitmap/TurretDmg_Button_Clicked.png"), wxBITMAP_TYPE_ANY ) );
	m_TurretDamageButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	MenuContentButtonSizer->Add( m_TurretDamageButton, 0, wxALL, 5 );


	MenuContentButtonSizer->Add( 200, 0, 0, wxALL|wxEXPAND, 5 );

	m_ShieldRepsButton = new wxBitmapButton( m_MenuPanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_ShieldRepsButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/Shield_Reps_Button.png"), wxBITMAP_TYPE_ANY ) );
	m_ShieldRepsButton->SetBitmapPressed( wxNullBitmap );
	m_ShieldRepsButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	MenuContentButtonSizer->Add( m_ShieldRepsButton, 0, wxALL, 5 );


	MenuContentButtonSizer->Add( 0, 0, 1, wxEXPAND, 5 );


	MenuContentTextSizer1->Add( MenuContentButtonSizer, 0, wxEXPAND, 5 );


	MenuContentPositionSizer->Add( MenuContentTextSizer1, 4, wxEXPAND, 5 );


	MenuContentPositionSizer->Add( 0, 0, 1, wxEXPAND, 5 );


	m_MenuPanel->SetSizer( MenuContentPositionSizer );
	m_MenuPanel->Layout();
	MenuContentPositionSizer->Fit( m_MenuPanel );
	MenuSizer->Add( m_MenuPanel, 1, wxEXPAND|wxALL, 2 );


	m_MenuBorderColorPanel->SetSizer( MenuSizer );
	m_MenuBorderColorPanel->Layout();
	MenuSizer->Fit( m_MenuBorderColorPanel );
	Cal_CoreLayoutSizer->Add( m_MenuBorderColorPanel, 1, wxALL|wxEXPAND, 20 );

	m_ContentBorderColorPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_ContentBorderColorPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	wxBoxSizer* ContentScrollWinSizer;
	ContentScrollWinSizer = new wxBoxSizer( wxVERTICAL );

	m_ContentScrollWin = new wxScrolledWindow( m_ContentBorderColorPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_ContentScrollWin->SetScrollRate( 5, 5 );
	m_ContentScrollWin->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_ContentPanel = new wxPanel( m_ContentScrollWin, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer12->Add( m_ContentPanel, 1, wxALL|wxEXPAND, 5 );


	m_ContentScrollWin->SetSizer( bSizer12 );
	m_ContentScrollWin->Layout();
	bSizer12->Fit( m_ContentScrollWin );
	ContentScrollWinSizer->Add( m_ContentScrollWin, 1, wxEXPAND | wxALL, 2 );


	m_ContentBorderColorPanel->SetSizer( ContentScrollWinSizer );
	m_ContentBorderColorPanel->Layout();
	ContentScrollWinSizer->Fit( m_ContentBorderColorPanel );
	Cal_CoreLayoutSizer->Add( m_ContentBorderColorPanel, 4, wxEXPAND | wxALL, 20 );


	this->SetSizer( Cal_CoreLayoutSizer );
	this->Layout();

	// Connect Events
	m_BackButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Cal_CorePanel_Base::OnCal_BackButton ), NULL, this );
}

Cal_CorePanel_Base::~Cal_CorePanel_Base()
{
}
