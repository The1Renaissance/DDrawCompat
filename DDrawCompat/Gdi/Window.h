#pragma once

#include <ddraw.h>

#include <Common/CompatWeakPtr.h>
#include <Common/CompatRef.h>
#include <Gdi/Region.h>

namespace Gdi
{
	namespace Window
	{
		struct LayeredWindow
		{
			HWND hwnd;
			RECT rect;
			Gdi::Region region;
		};

		HWND getPresentationWindow(HWND hwnd);
		std::vector<LayeredWindow> getVisibleLayeredWindows();
		bool hasFullscreenWindow();
		bool isTopLevelWindow(HWND hwnd);
		void onStyleChanged(HWND hwnd, WPARAM wParam);
		void onSyncPaint(HWND hwnd);
		void present(CompatRef<IDirectDrawSurface7> dst, CompatRef<IDirectDrawSurface7> src,
			CompatRef<IDirectDrawClipper> clipper);
		void present(Gdi::Region excludeRegion);
		void updateAll();
		void updatePresentationWindowPos(HWND presentationWindow, HWND owner);
	}
}
