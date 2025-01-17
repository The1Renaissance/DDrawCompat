#pragma once

#include <Config/MappedSetting.h>

namespace Config
{
	namespace Settings
	{
		class DisplayFilter : public MappedSetting<UINT>
		{
		public:
			static const UINT POINT = 0;
			static const UINT BILINEAR = 1;

			DisplayFilter();

			virtual ParamInfo getParamInfo() const override;
		};
	}
}
