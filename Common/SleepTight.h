//
//  SleepTight.h
//
//	Shared definitions
//
//	Copyright © 2003 Alex Harper
//
// 	This file is part of SleepTight.
// 
// 	SleepTight is free software; you can redistribute it and/or modify
// 	it under the terms of the GNU General Public License as published by
// 	the Free Software Foundation; either version 2 of the License, or
// 	(at your option) any later version.
// 
// 	SleepTight is distributed in the hope that it will be useful,
// 	but WITHOUT ANY WARRANTY; without even the implied warranty of
// 	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// 	GNU General Public License for more details.
// 
// 	You should have received a copy of the GNU General Public License
// 	along with SleepTight; if not, write to the Free Software
// 	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
// 

// Main bundle ID, pref ID
#define SLEEPTIGHTID					@"com.github.thatha.LockTight"

// Hotkey registration signature
#define SLEEPTIGHTHOTKEYSIGNATURE		'STak'

// Path to the screen saver engine
#define SAVERBUNDLEPATH 				@"/System/Library/Frameworks/ScreenSaver.framework/Versions/A/Resources/ScreenSaverEngine.app"

// Screen saver defaults domain
#define SAVERDEFAULTSDOMAIN				"com.apple.screensaver"
#define SAVERPASSWORDPREFKEY			"askForPassword"
#define SAVERPATHPREFKEY				"modulePath"

// Login items defaults domain
#define LOGINITEMDEFAULTSDOMAIN			@"loginwindow"
#define LOGINITEMLISTKEY				@"AutoLaunchedApplicationDictionary"
#define LOGINITEMPATHKEY				@"Path"
#define LOGINITEMHIDEKEY				@"Hide"

// Preferences info
#define STENABLEPREFKEY					@"SleepTightEnabled"
#define STHOTKEYENABLEPREFKEY			@"HotKeyEnabled"
#define STHOTKEYSLEEPPREFKEY			@"HotKeySleep"
#define STHOTKEYMODIFIERPREFKEY			@"HotKeyModifier"
#define STHOTKEYCODEPREFKEY				@"HotKeyCode"

// Pref defaults
#define STENABLEDDEFAULT				NO
#define STHOTKEYENABLEDDEFAULT			YES
#define STHOTKEYSLEEPDEFAULT			NO
#define STMODIFIERDEFAULT				controlKey | optionKey | cmdKey
// Default keycode is "L" on English keyboard
#define STKEYCODE						37

