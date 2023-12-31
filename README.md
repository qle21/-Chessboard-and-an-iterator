# 1 Containers and iterators in C++
Write a C++ program with a 8x8 (i.e. 2 dimensional matrix) chessboard and an iterator
over that chessboard.
The pieces on the chess board have a color, piece, and position. The color is either Black
or White. The piece is one of the following:
• Rook
• Knight
• Bishop
• Queen
• King
• Pawn
The position is given by an x,y coordinate, each coordinate on the board is in the range of
0...7. White’s pieces in the beginning of a game are in rows 0 and 1, while Black’s pieces are
in rows 6 and 7.
1
# 1.1 The container
The container chessboard should have the methods
• int place(int x, int y, color c, piece p): to place the piece on the chessboard. It should
return
– 1 if successful,
– -1 if illegal x coordinate
– -2 if illegal y coordinate
– -3 if square is already occupied
– -4 if illegal color
– -5 if illegal piece
• int get(int x, int y, color &c, piece &p): to get the value of the piece on the chessboard.
– 1 if successful,
– -1 if illegal x coordinate
– -2 if illegal y coordinate
– -3 if square is not occupied
• int move(int fromX, int fromY, int toX, int toY): to move piece fromX, fromY to toX, toY
– 1 if successful,
– -1 if illegal fromX coordinate
– -2 if illegal fromY coordinate
– -3 if illegal toX coordinate
– -4 if illegal toY coordinate
– -5 if fromX,fromY is not occupied
– -6 if toX, toY is occupied with a piece of the same color as the one being moved
– -7 if illegal move
• print() Print the 8x8 board using the iterator.
# 1.2 Iterator
The iterator should go through the chessboard in the order
[0, 0], [1, 0], . . . , [7, 0], [0, 1], [1, 1], . . .
There should be a method which translates the iterator into x,y coordinates for the
chessboard.
• it.xy(int &x, int &y)

# Electronic Submission
Before submission, make sure your name appears somewhere on your assignment. When you
are ready to submit, login to Blackboard, find Assessments in the left hand side, then follow
the link to Gradescope (or navigate to Gradescope directly), and then submit your image
to “Project 1”. You may submit as many times as you want, but we grade only the last
submission.
# Policy
All work is to be done individually — group work is not allowed. While we encourage you to
talk to your peers and learn from them, this interaction must be superficial with regards to
all work submitted for grading. This means you *cannot* work in teams, you cannot work
side-by-side, you cannot submit someone else’s work (partial or complete) as your own. The
University’s policy is available here:
https://dos.uic.edu/conductforstudents.shtml .
In particular, note that you are guilty of academic dishonesty if you extend or receive any
kind of unauthorized assistance. Absolutely no transfer of program code between students
is permitted (paper or electronic), and you may not solicit code from family, friends, or
online forums. Other examples of academic dishonesty include emailing your program to
another student, copying-pasting code from the internet, working in a group on a homework
assignment, and allowing a tutor, TA, or another individual to write an answer for you. It
is also considered academic dishonesty if you click someone else’s iClicker with the intent
of answering for that student, whether for a quiz, exam, or class participation. Academic
dishonesty is unacceptable, and penalties range from failure to expulsion from the university;
cases are handled via the official student conduct process described at https://dos.uic.
edu/conductforstudents.shtml .
