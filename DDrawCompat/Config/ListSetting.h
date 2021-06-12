#pragma once

#include <vector>

#include <Config/Setting.h>

namespace Config
{
	class ListSetting : public Setting
	{
	protected:
		ListSetting(const std::string& name, const std::string& default);

		void resetValue() override;
		void setValue(const std::string& value) override;
		virtual void setValues(const std::vector<std::string>& values) = 0;

	private:
		std::string m_default;
	};
}
