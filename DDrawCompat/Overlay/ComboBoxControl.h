#pragma once

#include <string>
#include <vector>

#include <Overlay/ComboBoxDropDown.h>
#include <Overlay/Control.h>

namespace Overlay
{
	class ComboBoxControl : public Control
	{
	public:
		ComboBoxControl(Control& parent, const RECT& rect, const std::vector<std::string>& values);

		std::string getValue() const { return m_value; }
		void setValue(const std::string& value);

	private:
		virtual void draw(HDC dc) override;
		virtual void onLButtonDown(POINT pos) override;

		std::string m_value;
		ComboBoxDropDown m_dropDown;
	};
}
