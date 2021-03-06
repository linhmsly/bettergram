/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

namespace Core {

class EventFilter : public QObject {
public:
	EventFilter(
		not_null<QObject*> parent,
		Fn<bool(not_null<QEvent*>)> filter);

protected:
	bool eventFilter(QObject *watched, QEvent *event);

private:
	Fn<bool(not_null<QEvent*>)> _filter;

};

not_null<QObject*> InstallEventFilter(
	not_null<QObject*> object,
	Fn<bool(not_null<QEvent*>)> filter);

} // namespace Core
