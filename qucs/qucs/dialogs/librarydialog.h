/***************************************************************************
                             librarydialog.h
                            -----------------
    begin                : Sun Jun 04 2006
    copyright            : (C) 2006 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef LIBRARYDIALOG_H
#define LIBRARYDIALOG_H

#include <qdialog.h>
#include <qregexp.h>
#include <qptrlist.h>

class QucsApp;
class QLineEdit;
class QTextEdit;
class QCheckBox;
class QPushButton;
class QVBoxLayout;
class QListViewItem;
class QVButtonGroup;
class QRegExpValidator;


class LibraryDialog : public QDialog {
   Q_OBJECT
public:
  LibraryDialog(QucsApp*, QListViewItem*);
 ~LibraryDialog();

private slots:
  void slotCreate();

private:
  QVBoxLayout *all;   // the mother of all widgets
  QLineEdit *NameEdit;
  QTextEdit *ErrText;
  QVButtonGroup *Group;
  QPushButton *ButtCreate, *ButtCancel;
  QPtrList<QCheckBox> BoxList;

  QucsApp *App;
  QRegExp Expr;
  QRegExpValidator *Validator;
};

#endif
