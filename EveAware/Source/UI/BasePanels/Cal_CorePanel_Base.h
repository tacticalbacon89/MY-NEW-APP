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
#include <wx/bmpbuttn.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/scrolwin.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class Cal_CorePanel_Base
///////////////////////////////////////////////////////////////////////////////
class Cal_CorePanel_Base : public wxPanel
{
	private:

	protected:
		wxBitmapButton* m_BackButton;
		wxPanel* m_MenuBorderColorPanel;
		wxPanel* m_MenuPanel;
		wxStaticText* SelectionPrompt;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxBitmapButton* m_MissleDamageButton;
		wxBitmapButton* m_TurretDamageButton;
		wxBitmapButton* m_ShieldRepsButton;
		wxPanel* m_ContentBorderColorPanel;
		wxScrolledWindow* m_ContentScrollWin;
		wxPanel* m_ContentPanel;

		// Virtual event handlers, override them in your derived class
		virtual void OnCal_BackButton( wxCommandEvent& event ) { event.Skip(); }


	public:

		Cal_CorePanel_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 942,761 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~Cal_CorePanel_Base();

};

