[toc]
### A Note For Vim
#### 0. What it this?
This is a note for vim, the original url is <a>https://coolshell.cn/articles/5426.html</a>. It is clear that the original content of this note is a Chinese translation(and i translate it back to English cuz Vim does not support Chinese well).

#### 1.0 Introduction
Here are some basic knowledge that makes you can survive in vim mode.
> * ```i``` insert Mode, insert before cursor. Press ```ESC``` to back to normal.
> * ```x``` delete single letter under the cursor.
> * ```:wq``` write and quit.
> * ```dd``` delete current line and save it to buffer.
> ```p``` paste from buffer.

**Some Suggestion for you**
> * ```hjkl``` move the cursor.
> * ```help``` help <command\> Show the defination and usage of command.

There is one thing you must know that: under normal mode, all keys are functional. When one command take you too much time, think if there is a better way.

#### 2.0 Feels Better.
Remembering more instructions seems to be difficult at first. However, all the instructions below are suggested cuz they'll greatly improve your typing speed.
1. Insertion Mode
   > * ```a``` Insert after the cursor
   > * ```o``` Insert after one line
   > * ```O``` Insert before one line
   > * ```cw``` Change a word
2. Primary Moving Skills
   > * ```0``` Move to the beginning of a line
   > * ```^``` Move to the beginning position that is not blank(refers to space/tab/'\r'/enter,etc) in one line.
   > * ```$``` Move to the end of a line
   > * ```g_``` Move to the end position which is not blank.
   > * ```/pattern``` Search for the string named 'pattern'. Press n to search for the next.
3. Copy/Paste
   > * ```yy``` Copy current line without deleting it(different from dd)
   > * ```p/P``` Paste from buffer. 
4. Undo/Redo
   > * ```u``` Undo
   > * ```C-r``` Redo
5. File Operation
   > * ```e``` Open a file. Whether it can be faster than mouse are remain testing.
   > * ```w``` Save.
   > * ```saveas <path/to/file>``` Save as a new file(Not work in VSCode).
   > * ```wq``` Write and Quit.
   > * ```q!``` Quit without saving.
   > * ```:bn/:bp/:n``` Change to next file. 
#### 3.0 Better, Stronger, Faster
##### 3.1 Better
Use the commands below to make vim repeat.
> * ```.``` Repeat the last command.
> * ```N <command>``` Repeat a certain command N times.

Here are some examples:
> * ```2dd``` Delete 2 line
> * ```3p``` Paste 3 times
> * ```100idesu [ESC]```desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu desu 
> * ```.``` repeat last command(for example,100 desu).
> * ```3.``` repeat last command 3 times.

##### 3.2 Stronger
This are things that can make your cursor move more efficient.
> * N ```G``` Move to line N, you may also use ```:N```.
> * ```gg``` Move to the first line.
> * ```G``` Move to the last line.
> * Move through words:
> * * ```w``` Move to the first letter of a word.
> * * ```e``` Move to the last letter of a word.
> * * You may also use ```W``` or ```E```, when you are trying to move further:
```
      c   e w        E W       
      |   | |        | |    
x = (name_1,vision_3); #this is a statement
```
Here are some operations that are really powerful:
> * ```%``` Match the bracket.
> * ```*``` and ```#``` move to the next/last word that the current cursot pointing to.

##### 3.3 Faster
The following commands can worked together with the move of the cursor, so you'd better remember how the cursor move.

> * \<start position\>\<command\>\<end position\>

For example, ```0y$``` means:
* ```0``` to the start of a line
* ```y``` copy from here
* ```$``` to the last character of this line

You can also type ```ye``` to copy to the last word of the current character.

Use ```y2/foo``` to copy words inside two ```foo```(```y``` actually means yank)

Paste is a command that paste things from buffer, so the thing that will be copied will not depend **only** on ```y```, but also ```d```/```v```/```gU```/```gu```,etc.

#### 4. Super power of vim.
#### 4.1 Move your cursor in current line:
> * ```0``` Move to the start of a line.
> * ```^``` Move to the start of a line and will ignore blank.
      Try this line to feel the difference.
> * ```$``` Move the the end of a line.
> * ```g_``` Move to the end of a line and will ignore blank.
> * ```fa``` to next character ```a```, and the letter ```a```  can be replaced.
> * ```ta``` to the character before next ```a```, and the letter ```a``` can be replaced.
> * ```3fa``` find the third ```a``` appear in this line.
> * ```F``` and ```T``` works like ```f``` and ```t```, while the finding direction is reverse.
> * ```dta``` delete until meet ```a```.

```
0     ^     #      fi    t)        4fi         g_   $
|     |     |      |     |         |           |    |
      x = (name_1,vision_3); #this is a comment;     
```

#### 4.2 Area selection ```<action>a<object>``` or ```<action>i<object>```
The following command is especially strong in visual mode, and the format is:
```<action>a<object>``` and ```<action>i<object>```
* action can be any commands like ```d```(delete), ```y```(yank/copy) or ```v``` (visual selection)
* object can be like ```w```(single word), ```W```(word splited by blank), ```s```(sentence), ```p```(paragraph). It is usually followed by the symbols below:```"```,```'```,```)```,```}```,```]```, which will select the content inside them.