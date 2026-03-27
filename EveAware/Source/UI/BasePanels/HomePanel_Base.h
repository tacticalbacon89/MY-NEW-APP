///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class HomePanel_Base
///////////////////////////////////////////////////////////////////////////////
class HomePanel_Base : public wxPanel
{
	private:

	protected:
		wxPanel* m_panel5;
		wxPanel* m_panel8;
		wxPanel* m_panel35;
		wxStaticText* m_staticText16;
		wxPanel* m_panel33;
		wxStaticText* m_staticText4;
		wxBitmapButton* m_MarketButton;
		wxBitmapButton* m_CombatButton;
		wxStaticText* m_staticText15;

		// Virtual event handlers, override them in your derived class
		virtual void OnCombatClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		HomePanel_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1400,700 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~HomePanel_Base();

};

