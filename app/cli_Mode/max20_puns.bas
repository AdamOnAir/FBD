'20 lines and more

_Title "FBD Broadcast Reader"

Open "./puns.txt" For Input As #1
10
For x% = 1 To 20
    Line Input #1, line$ ' A way to loop threw until the 1st 20 lines area read in
    Print line$
Next x%

Input "Read more or Quit"; responce$
If responce$ = "Go On" Then
    Cls
    GoTo 10 'starts over and gets the next 20
Else
    Close #1
    System
End If
