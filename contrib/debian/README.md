
Debian
====================
This directory contains files used to package clarityd/clarity-qt
for Debian-based Linux systems. If you compile clarityd/clarity-qt yourself, there are some useful files here.

## clarity: URI support ##


clarity-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install clarity-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your clarity-qt binary to `/usr/bin`
and the `../../share/pixmaps/clarity128.png` to `/usr/share/pixmaps`

clarity-qt.protocol (KDE)

