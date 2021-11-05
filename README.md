# E-UAE PS3
Amiga emulator for PS3
E-UAE 0.8.29-WIP4
=================

E-UAE is an Amiga emulator, a program that allows you to run software
designed for Amiga computers on other platforms, such as Linux or Mac
OS. It is based on UAE, the original Ubiquitous Amiga Emulator, and
WinUAE, the Windows version of UAE. While it owes a huge debt to these
two great projects, E-UAE diverges from both, aiming to improve
performance and features on a variety of host platforms.

The name E-UAE stemmed from the fact that this project needed a name,
and, since it was an 'experimental' version of UAE, everybody was
calling it 'Experimental' UAE. While I have long since accepted that
moniker, I still don't intend the 'E' to mean anything it particular.
Although the project is currently 'experimental' - that is, it is a
long way from being anything close to finished - it should still be
robust enough to use.

E-UAE currently builds and runs - with varying degrees of supported
features - on Unix and Unix-like platforms (including Linux, Solaris
and Mac OS X), BeOS, AmigaOS and clones (including AmigaOS 3.x,
AmigaOS 4.0, MorphOS and AROS), and Windows (with Cygwin or MinGW32).

E-UAE is open-source software and is made available under the terms of
the GPL. See the COPYING file included with the E-UAE archive for
details.

E-UAE is based on the work of dozens of contributors including Bernd
Schmidt (the original author and maintainer of UAE), Bernie Meyer (the
author of the x86 JIT compiler), Toni Wilen (the current maintainer of
WinUAE), and many more.

Note that to make full use of E-UAE you will need access to an image
of some version of the Amiga Kickstart ROM (although E-UAE does include
a ROM emulation which may work with some old games). The Amiga
Kickstart ROMs are copyrighted material and may not be freely
distributed (so don't ask me for a copy). If you don't have an Amiga
from which you can legally make a ROM image, a selection of ROM images
are available for purchase online from Cloanto (publishers of the
Amiga Forever distribution). See http://www.amigaforever.com/

Features:
- 68000, 68010, 68020, 68040, 68060 processor cores
- OCS, ECS and AGA chipset 
- amiga hi-res (720x576) graphics resolution in 32bit depth
- joystick1, joystick2 (2nd joypad required) and mouse emulation
- options dialog (supports switching of the disk files and more)
- sound in 48000 kHz
- keyboard emulation
- support for usb keyboard and usb mouse
- support for loading zip and dms floppy images
- support hor harddisk files
- save-state saving and loading 
- reads either /dev_usb000/uae/uae.cfg or /dev_hdd0/game/EUAE00829/USRDIR/UAE.CFG
  configuration during startup!

Requires:
- ps3 ready to boot homebrew programs
- kickstart rom

Kickstart roms:</br>
the main kickstart rom files are:
|System|Version|Filename|Size|MD5|
|---|---|---|---|---|
|A500|KS v1.3 rev 34.005|**kick34005.A500**|262 144|82a21c1890cae844b3df741f2762d48d|
|A500+|KS v2.04 rev 37.175|**kick37175.A500**|524 288|dc10d7bdd1b6f450773dfb558477c230|
|A600|KS v3.1 rev 40.063|**kick40063.A600**|524 288|e40a5dfb3d017ba8779faba30cbd1c8e|
|A1200|KS v3.1 rev 40.068|**kick40068.A1200**|524 288|646773759326fbac3b2311fd8c8793ee|
|A4000|KS v3.1 rev 40.068|**kick40068.A4000**|524 288|9bdedde6a4f33555b4a270c8ca53297d|

You can also use legally purchased BIOS from Amiga Forever:</br>
|System|Version|Filename|Size|MD5|
|---|---|---|---|---|
|A500|amiga-os-130.rom|**kick34005.A500**|262 144|82a21c1890cae844b3df741f2762d48d|
|A500+|amiga-os-204.rom|**kick37175.A500**|524 288|dc10d7bdd1b6f450773dfb558477c230|
|A600|amiga-os-310-a600.rom|**kick40063.A600**|524 288|e40a5dfb3d017ba8779faba30cbd1c8e|
|A1200|amiga-os-310-a1200.rom|**kick40068.A1200**|524 288|646773759326fbac3b2311fd8c8793ee|
|A4000|amiga-os-310-a4000.rom|**kick40068.A4000**|524 288|9bdedde6a4f33555b4a270c8ca53297d|


Controls:
- CROSS    - joystick button 1
- SQUARE   - mouse button 1
- TRIANGLE - mouse button 2
- CIRCLE   - user defined keyboard key (default: SPACE)
- SELECT   - user defined keyboard key (default: ESC)
- L1       - user defined keyboard key (default: LSHIFT)
- R1       - user defined keyboard key (default: RETURN)
- L2       - user defined keyboard key (default: F1)
- L3       - user defined keyboard key (default: F2)
- R3       - user defined keyboard key (default: F3)
- press R2 to activate virtual keyboard (vkb), release R2 to hide it.
  If vkb is shown press left/right digital pad to select the current
  key. Press the 'up' digital pad button to actually simualte key press
  of the current key. L1, L2, R1, L3, R3, CIRCLE and SELECT buttons are user defined keys. 
  If vkb is shown press L1 to define L1 button, press L2 to define L2 button
  and press R1 to define R1 button, etc. Later on (when keyboard is hidden) 
  if you press L1, L2 etc. it will simulate assigned key press / release.
- joypad 1 (emulates joystick 1 and mouse 1)
- joypad 2 (emulates joystick 2) - if you want to enable 2-joystick mode, plug-in
  the second joy pad, restart uae and switch the port mode to "joy-1 & joy-2" in the
  options dialog.
- left analog pad emulates either mouse movement (by default) or joystick. 
  Press R3 (right hat) to switch between mouse and joystick control on left hat.
  Speed-up of the mouse cursor movement can be changed in the options dialog.
- press Start to enter application menu, you can load ADF files from there.
- press CIRCLE to exit the application menu 

Additional info:
- The program reads uae.cfg during startup. In this configuration file
  you should specify all required parameters (memory size, kick rom, initial 
  floppy disk files, cpu core, chipset etc.). 
- Files (kickrom, adf files) are accesible from either usb disk or internal disk.
- NTSC support: press and hold CIRCLE button during emulator startup to initialize
  480 lines /60 Hz video mode. If it doesn't work for you, you can press and hold
  TRIANGLE button during starup to use the current video mode set in dashboard.
  Make sure to change emulator options to actually emulate ntsc amiga machine by 
  setting ntsc=true in your configuration file or in options.
- Save states are stored in your harddisk directory 
  /dev_hdd0/game/EUAE00829/USRDIR/SAVE
- to use harddisk file: enter options and mount it the "Hard files" submenu.
  Alternatively you can specify the harddisk in your configuration file 
  by adding the  following line:
hardfile=read-write,32,1,2,512,/dev_usb000/uae/system.hdf
  or, if the previous one doesn't work for you:
hardfile=read-write,0,0,0,512,/dev_usb000/uae/system.hdf
  Normally you just need to change the path and filename of the hardfile. The 
  first four numbers are the default ones and should work even if your emulated 
  disk file has a different size. The first set of numbers is ok for hardfiles
  formated to OFS (old file system), the second set (zeros) is for harddisk files
  formated to RDB (fast file system). 

### R11
Added Caps Images support (.ips floppy disk images)
https://github.com/crystalct/capsimage </br>
Added SELECT, L3 and R3 as user defined keyboard keys </br>
Added defaults values for user defined keyboard keys

### IPF support
Most full-price commercial Amiga games had some form of custom disk format and/or copy protection on them. For this reason, most commercial Amiga games cannot be stored in ADF files unaltered, but there is an alternative called Interchangeable Preservation Format (IPF) which was specifically designed for this purpose.</br>
IPF support is done through CAPSIMG library.

### Create a HDF image for a game from a WHDload archive
- Download ADFOpus (http://adfopus.sourceforge.net/).</br>
- Extract files from the compressed WHDload file (.lha, .zip, .rar etc. etc.) to a directory</br>
- Pack the directory in a HDF file with ADFOpus (see [Allan Lindqvist's tutorial](http://lindqvist.synology.me/wordpress/?page_id=182) - Create WHDLoad.hdf section);

Note the size of the HDF specified by SIZE_OF_HDF must be greater than size of the directory to store the additional filesystem informations (f.ex a 1.25 ratio).


What's new since 0.8.29-WIP3
============================

A huge amount of work has gone into E-UAE since the last public
release. Not of all of this work will be readily apparent to users
since it took place under the surface. However, some user-visible
changes include:

* Emulation core from WinUAE 1.3.x merged.
* Much more stable on SMP hosts.
* Builds on Solaris x86 (with GCC).
* Integrated mouse-hack feature merged from WinUAE (this synchronizes
  the Amiga mouse pointer with the host pointer when E-UAE is running
  in a window on your desktop) merged from WinUAE. The old AmigaOS
  mousehack tool is no longer required.
* New, easier-to-use Linux SCSI back-end (Jochen Becher).
* Experimental GL renderer in SDL display back-end (originally from
  Jochen Becher but mostly re-written). On most platforms this is yet
  to offer much over the existing 2D renderer, but on Mac OS X it
  offers significantly better performance. Enabled with
  'sdl.use_gl=true'.
* Support for the 'uae-configuration' tool merged from WinUAE. This is
  an AmigaOS shell command which allows UAE settings to be queried and
  modified from within the emulation environment.
* Better, smoother performance when cpu_speed=real (A500 speed). E-UAE
  adapts better to changing system latencies.
* 'Sinc' audio interpolation added (Antti Lankila).
* Minor performance improvements in interpretive CPU emulator and JIT
  engine.
* Mac OS X icon added (from Daniel Pimley).
* Lots of bugs fixes, including:
  - Broken 'delayed' interrupt handling when JIT was disabled.
  - Inconsistent refreshing of P96 screens.
  - Filesystems being mounted twice.
  - Hardfiles broken following a reset.
  - Broken detection of XKB path in X11 driver (fix from Peter Volkov).


Still to do
===========

The following features of UAE and/or WinUAE are not yet supported yet
in E-UAE. These include:

* Serial and parallel port emulation.
* AHI soundcard emulation.
* Catweasel support.
* Graphics filters, scaling, etc.
* Floppy drive sounds.


Known problems
==============

Some significant misfeatures that I know about and am/will be working
to fix (eventually):

* Only platforms supporting the GTK+ toolkit have a useable
  configuration GUI (and the GTK+ GUI is still incomplete). However,
  Mac OS X users may like to try Daniel Pimley's graphical front-end,
  Hi Toro. See http://www.pimley.net/projects/.
* JIT direct memory access only works on Linux/x86 and, by default,
  you may only emulate up to 32MB of direct ZIII RAM; select more than
  that and the JIT will fall back on indirect memory access and hence
  will be slower. This is due to a system limit on the size of a POSIX
  shared memory segment. You can overcome this limit my modifying the
  value of the procfs setting, /proc/sys/kernel/shmmax.
* Virtual filesystem doesn't support platforms which use UTF-8 for
  filenames (e.g., OS X, Linux with a UTF-8 locale, etc.). Filenames
  with characters outside of the core ASCII range will be mangled.
* OpenGL renderer is experimental, unfinished and has no error
  recovery.
* Tear-free graphical output (with the gfx_vsync=true option) doesn't
  work on most platforms yet (the exceptions being Mac OS X with the
  SDL/GL renderer and AmigaOS4.0 with SDL).
* The Mac OS X version is currently for PowerPC hardware only (I don't
  have an Intel Mac). Users with Macintel hardware may wish to try
  Jens Weichert's Intel builds. See http://e-uae.de.vu/.
* The build scripts are a horrible, unmaintainable mess.
* Full documentation is lacking.


Using E-UAE
===========

Documentation is a work-in-progress. See the docs directory.


Compiling E-UAE yourself
========================

See the docs/compiling.txt file for more information about building
E-UAE.


CVS
===

Details about how to access the CVS repository containing the current
development version of E-UAE can be found at:

http://sourceforge.net/cvs/?group_id=109723


Contact
=======

See http://www.freelists.org/list/uae for details of a mailing list
discussing problems with and development of E-UAE.

Send bug reports, comments, patches, etc. to the above list or to:
Richard Drummond <uae@rcdrummond.net>

Credits and thanks:
=======
- UAE team and porters.
- RCDRUMMOND for E-UAE
- psl1ght sdk team
- PS3 homebrew scene
- Croage for ICON1.PAM and to Scratch for SND0.AT3
