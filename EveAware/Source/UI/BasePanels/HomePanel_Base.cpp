///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "HomePanel_Base.h"

///////////////////////////////////////////////////////////////////////////

HomePanel_Base::HomePanel_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );


	bSizer9->Add( 0, 0, 1, wxEXPAND, 0 );

	m_panel5 = new wxPanel( this, wxID_ANY, wxPoint( -1,-1 ), wxSize( 700,500 ), wxTAB_TRAVERSAL );
	m_panel5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panel5->SetMaxSize( wxSize( 700,500 ) );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_panel8 = new wxPanel( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel8->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_panel35 = new wxPanel( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText16 = new wxStaticText( m_panel35, wxID_ANY, _("Home"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText16->Wrap( -1 );
	m_staticText16->SetFont( wxFont( 36, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("Impact") ) );

	bSizer70->Add( m_staticText16, 1, wxALL|wxEXPAND, 1 );


	m_panel35->SetSizer( bSizer70 );
	m_panel35->Layout();
	bSizer70->Fit( m_panel35 );
	bSizer14->Add( m_panel35, 1, wxEXPAND | wxALL, 5 );

	m_panel33 = new wxPanel( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxHORIZONTAL );


	bSizer67->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel33, wxID_ANY, _("Calculators"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_HEAVY, true, wxT("Arial Black") ) );

	bSizer68->Add( m_staticText4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_MarketButton = new wxBitmapButton( m_panel33, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_MarketButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/Home_MarketButton.png"), wxBITMAP_TYPE_ANY ) );
	m_MarketButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	bSizer68->Add( m_MarketButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_CombatButton = new wxBitmapButton( m_panel33, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE );

	m_CombatButton->SetBitmap( wxBitmap( wxT("Assets/Bitmap/Home_CombatButton.png"), wxBITMAP_TYPE_ANY ) );
	m_CombatButton->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	bSizer68->Add( m_CombatButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer67->Add( bSizer68, 1, wxEXPAND, 5 );


	bSizer67->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxVERTICAL );

	m_staticText15 = new wxStaticText( m_panel33, wxID_ANY, _("ESI"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_HEAVY, true, wxT("Arial Black") ) );

	bSizer69->Add( m_staticText15, 0, wxALIGN_CENTER|wxALL, 1 );


	bSizer67->Add( bSizer69, 1, wxEXPAND, 5 );


	bSizer67->Add( 0, 0, 1, wxEXPAND, 5 );


	m_panel33->SetSizer( bSizer67 );
	m_panel33->Layout();
	bSizer67->Fit( m_panel33 );
	bSizer14->Add( m_panel33, 1, wxEXPAND, 5 );


	bSizer14->Add( 0, 0, 1, wxEXPAND, 5 );


	m_panel8->SetSizer( bSizer14 );
	m_panel8->Layout();
	bSizer14->Fit( m_panel8 );
	bSizer11->Add( m_panel8, 1, wxALL|wxEXPAND, 2 );


	m_panel5->SetSizer( bSizer11 );
	m_panel5->Layout();
	bSizer9->Add( m_panel5, 0, wxALIGN_CENTER|wxALL, 0 );


	bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer9 );
	this->Layout();

	// Connect Events
	m_CombatButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HomePanel_Base::OnCombatClick ), NULL, this );
}

HomePanel_Base::~HomePanel_Base()
{
}
