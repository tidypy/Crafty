# Crafty

A windows build of the popular 1987 Crafty Chess Engine version 25.2  compiled from source with MinGW G++.  
***This is dedicated to Dr. Robert Hyatt the brainchild, and Mr. Tracy Riegle who has maintained the source code page for so long.***

Crafty 25.2 is the current stable release.
FROM :  
https://craftychess.com/
Crafty is a free, open-source computer chess program developed by Dr. Robert M. (Bob) Hyatt.  Crafty has been retired for some time.

I may make an NN version similar to "Lc0-Maya and BorrisTrapsky" 
that takes advantage of the 'Swindle' feature, Learning Features, Book's' features, and some other centric features that make this engine so fun to play.

Example you can run games against Crafty or 'Crafty vs Crafty', configuring Crafty to play based on an opponent you may be prepairing for, and see how Crafty adapts to that Reperitior.

For now we have a working 64-bit version of the engine available for all to enjoy. 

#Opening book files:

"book.bin" is the main book file which can be re-created by using the file "book.pgn".  
You can also create a bookc.bin (for suggested opening lines when playing against a computer) book"c".bin for book against computer.  
book.bin (suggested opening lines when Crafty doesn't know (or doesn't think) it is playing against a computer.
Have not yet tested if this works under "Arena Chess GUI", or "Lucas Chess GUI" as of 2025.

After creating a book.bin, you need to create **books.bin** This is a small version of book.bin, which is intended to give you more control over the moves/openings Crafty will play. 
This is usually built from the file 'start.pgn' on the web site, but you can modify this file to suit your taste easily. 
**in *start.pgn*, you can append a "!" to any move you want, and when it is Crafty's turn to move for that color, it will play from the set of moves with "!" if there are any, ignoring the rest of the book moves. If you only want it to play 1. e4 as White, you would just enter the short game:
If on the other hand there is a move you don't want Crafty to play, then follow that move with a "?" and it will never play it. Moves in books.bin that are not flagged with ! or ? don't have any influence on Crafty's choice at all.**
The ! and ? flags should only appear in the small books.bin file, although there is no reason why they can not appear in the large file as well.

#Usage:

Crafty can also be run with a GUI interface that utilize the Winboard (Windows) protocol.  Typically SCIDvsPC, Lucas Chess GUI, Arena GUI, and more.  

Configuration:

Crafty can be configured for a stronger game by setting some optional parameters (examples below).  
***This version of Crafty was compiled to utilize POPCNT. instruction set.***

#PARAMETERS: 

*Most GUI's will allow you to set parameters within their Engine management sections.*
However; the original author states, parameters can be put into the crafty.rc file, or used as start-up parameters from the terminal.  
Created a JSON file in .vscode folder as well. 

The author has a more thorough explanation of Crafty's parameters that can be 
found here  https://craftychess.com/documentation/craftydoc.html

#Example Settings:

ponder on (Allows Crafty to think on your time)

hash=256m (Increases Crafty's position hash to 256MB)

hashp=64m (Increases Crafty's pawn hash to 64MB)

egtb (Tells Crafty to use syzygy Endgame Tables)

cache=32m (Increases Crafty's Endgame Table Cache to 32MB)

swindle on (Allows Crafty to try to win drawn games (according to Endgame Tables))

mt=4 (Increases Crafty's MaxThreads to 4 for a quad core computer)



This information was pharaphrased for the personal page managed by Mr. Tracy Riegle, Carlisle Pennsylvania, USA. https://craftychess.com/
#Older Version Downloads:

Many versions of Crafty can be downloaded [here](https://craftychess.com/downloads/book/).  These are source-only distributions.  
They come with a Makefile that will generally NOT work under windows and ONLY most Unix systems (Makefile) 
Heavy FORCEINLINE Macro and bsf assembler errors are fixed.
Heavy Lockfile.h edits were made. 
tbprobe.c Portable and Safe _lsb Implementations
The _lsb function now uses GCC inline assembly only on 64-bit x86_64 with GCC
and more... availble in the changelog.


