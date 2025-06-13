# Crafty

A windows build of the popular 1987 Crafty Chess Engine version 25.2  compiled from source with MinGW G++.  
This is dedicated to Dr. Robert Hyatt the brainchild, and Mr. Tracy Riegle who has maintained the source code page for so long.

Crafty 25.2 is the current stable release.

FROM :  
https://craftychess.com/
Crafty is a free, open-source computer chess program developed by Dr. Robert M. (Bob) Hyatt.  Crafty has been retired for some time.
I may make an NN version similar to "Lc0-Maya and BorrisTrapsky" that takes advantage of the 'Swindle' feature and some other centric features that make this engine so fun to play.

For now we have a working 64-bit version of the engine available for all to enjoy. 


Older Version Downloads:

Many versions of Crafty can be downloaded [here](https://craftychess.com/downloads/book/).  These are source-only distributions.  
They come with a Makefile that will generally NOT work under windows and ONLY most Unix systems (Makefile) 
Heavy FORCEINLINE Macro and bsf assembler errors are fixed.
Heavy Lockfile.h edits were made. 
tbprobe.c Portable and Safe _lsb Implementations
The _lsb function now uses GCC inline assembly only on 64-bit x86_64 with GCC
and more... availble in the changelog.


Opening book files:

"book.bin" is the main book file which can be re-created by using the file "book.pgn".  
You can also create a bookc.bin (for suggested opening lines when playing against a computer) book"c".bin for book against computer.  
book.bin (suggested opening lines when Crafty doesn't know (or doesn't think) it is playing against a computer.
Have not yet tested if this works under "Arena Chess GUI", or "Lucas Chess GUI" as of 2025.

Usage:

Crafty can also be run with a GUI interface that utilize the Winboard (Windows) protocol.  Typically SCIDvsPC, Lucas Chess GUI, Arena GUI, and more.  

Configuration:

Crafty can be configured for a stronger game by setting some optional parameters (examples below).  
***This version of Crafty was compiled to utilize POPCNT. instruction set.***


These parameters can be put into the crafty.rc file, or used as start-up parameters from the terminal.  
There is a JSON file in .vscode
And most GUI's will allow you to set parameters withing their Engine management sections.

The author has a more thorough explanation of Crafty's parameters that can be 
found here  https://craftychess.com/documentation/craftydoc.html

Example Settings:

ponder on (Allows Crafty to think on your time)
hash=256m (Increases Crafty's position hash to 256MB)
hashp=64m (Increases Crafty's pawn hash to 64MB)
egtb (Tells Crafty to use syzygy Endgame Tables)
cache=32m (Increases Crafty's Endgame Table Cache to 32MB)
swindle on (Allows Crafty to try to win drawn games (according to Endgame Tables))
mt=4 (Increases Crafty's MaxThreads to 4 for a quad core computer)


This information was pharaphrased for the personal page managed by Mr. Tracy Riegle, Carlisle Pennsylvania, USA. https://craftychess.com/

