'FunnyBones Departement

Rem Init Code

$ExeIcon:'./pngkit.ico'
Const bio$ = "FunnyBones"
_Title bio$

Const initial = "1996 10 12"
Const revision = "2024 1 21"

Rem Main Part, contains main code

Cls
Print bio$
Print "Undertale Jokes, that's all. Except for some Game Dev.."
Print

Dim t As String, c As String
Dim i As Integer

Do
    Print "> ";

    Line Input t
    i = InStr(t, " ")
    If i Then c = Left$(t, i - 1) Else c = t
    Select Case LCase$(c)
        Case "games":
            Print "BLACKJACK"
            Print "POKER"
            Print "QTREK"
        Case "blackjack": Shell './games/blackj.exe'
        Case "poker": Shell './games/poker1.exe'
        Case "qtrek": Shell './games/qtrek.bas/qtrek.exe'
        Case "fuck": Print "Pap': Kids are watching !"
        Case "bastards": Print "Pap': Kids are watching !"
        Case "dickhead": Print "Pap': Kids are watching !"
        Case "bastard": Print "Pap': Kids are watching !"
        Case "jerk": Print "Like you and Chara"
        Case "trash": Print "Like you, and Alphys"
        Case "Asshole": Print "Like you"
        Case "bitch": Print "Stop."
        Case "Gaster": Exit Do
        Case "Woshua": Print "Clean Name"
        Case "echo": Print Mid$(t, i + 1)
        Case "hnd": Shell "Software Enhaced Help.hnd"
        Case "exit": Exit Do
        Case "cls": Cls
        Case "issue": Print "Go to github.com/EvrestRGB/FBD/issues"
        Case "puns": Shell "./readers/puns.c"
        Case "sans": Shell "./readers/sans.c"
        Case "ver": Print "revision: "; revision: Print ""
        Case "conduct": Shell "CODE_OF_CONDUCT.md"
        Case "links": Shell "./readers/links.c"
        Case "time": Print Time$
        Case "duck":
            Print "I see.."
            Shell "updated_dack.exe"
        Case "help":
            Print "EXIT - exit the shell"
            Print "CLS - clears the screen"
            Print "ECHO - display written message in Console"
            Print "FTP - opens FTP mode"
            Print "PUNS - display puns"
            Print "SANS - display sans and toriel jokes"
            Print "LINKS - display some links"
            Print "GAMES - display commands for Games"
            Print "VER - display version"
            Print "HELP - display this help"
            Print "HND - advanced software help"
            Print "ISSUE - display issue methods"
            Print "CONDUCT - Displays code of conduct"
            Print
        Case Else
            Print "Bad command. Running files not implemented yet.": Print
    End Select
Loop
End
