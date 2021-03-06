/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

#include "settings/settings_common.h"

namespace Settings {

bool HasConnectionType();
void SetupConnectionType(not_null<Ui::VerticalLayout*> container);
bool HasUpdate();
void SetupUpdate(not_null<Ui::VerticalLayout*> container);
bool HasTray();
void SetupTray(not_null<Ui::VerticalLayout*> container);
void SetupAnimations(not_null<Ui::VerticalLayout*> container);

class Advanced : public Section {
public:
	explicit Advanced(QWidget *parent, UserData *self = nullptr);

	rpl::producer<Type> sectionShowOther() override;

private:
	void setupContent();

	rpl::event_stream<Type> _showOther;

};

} // namespace Settings
