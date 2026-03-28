///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "IntroPanel_Base.h"

///////////////////////////////////////////////////////////////////////////

IntroPanel_Base::IntroPanel_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_simplebook1 = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_simplebook1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	m_panel5 = new wxPanel( m_simplebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );

	m_simplebook1->AddPage( m_panel5, _("a page"), false );
	m_panel6 = new wxPanel( m_simplebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_simplebook1->AddPage( m_panel6, _("a page"), false );

	bSizer8->Add( m_simplebook1, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
}

IntroPanel_Base::~IntroPanel_Base()
{
}
