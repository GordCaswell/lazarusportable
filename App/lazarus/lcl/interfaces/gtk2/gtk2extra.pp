{
 ---------------------------------------------------------------------------
 gtk2extra.pp  -  GTK(2) widgetset - additional gdk/gtk functions
 ---------------------------------------------------------------------------

 This unit contains missing gdk/gtk functions and defines for certain 
 versions of gtk or fpc.

 ---------------------------------------------------------------------------

 @created(Sun Jan 28th WET 2006)
 @lastmod($Date: 2014-06-22 09:57:16 +0100 (Sun, 22 Jun 2014) $)
 @author(Marc Weustink <marc@@dommelstein.nl>)

 *****************************************************************************
  This file is part of the Lazarus Component Library (LCL)

  See the file COPYING.modifiedLGPL.txt, included in this distribution,
  for details about the license.
 *****************************************************************************
 }

unit Gtk2Extra;

{$mode objfpc}{$H+}

interface

{$I gtk2defines.inc}

//todo: remove $I for gtk2extrah.inc and gtk2extra.inc

{$I gtk2extrah.inc}

implementation

{$I gtk2extra.inc}

end.
