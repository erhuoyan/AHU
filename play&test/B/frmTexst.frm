VERSION 5.00
Begin VB.Form frmTexst 
   Caption         =   "打字测试软件"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   4560
   StartUpPosition =   3  '窗口缺省
   Begin VB.TextBox txtSpeed 
      Height          =   615
      Left            =   9120
      TabIndex        =   5
      Top             =   4200
      Width           =   975
   End
   Begin VB.CommandButton cmdEnd 
      Caption         =   "结束"
      Height          =   1095
      Left            =   3960
      TabIndex        =   2
      Top             =   3960
      Width           =   2415
   End
   Begin VB.CommandButton cmdStart 
      Caption         =   "开始"
      Height          =   1095
      Left            =   1080
      TabIndex        =   1
      Top             =   3960
      Width           =   2295
   End
   Begin VB.TextBox txtInput 
      Height          =   3375
      Left            =   720
      MultiLine       =   -1  'True
      TabIndex        =   0
      Top             =   360
      Width           =   11295
   End
   Begin VB.Label lbld 
      Caption         =   "字/分钟"
      Height          =   255
      Left            =   10320
      TabIndex        =   4
      Top             =   4440
      Width           =   1215
   End
   Begin VB.Label lbls 
      Caption         =   "速度："
      Height          =   255
      Left            =   8280
      TabIndex        =   3
      Top             =   4440
      Width           =   735
   End
End
Attribute VB_Name = "frmTexst"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim dtmBegintime As Date, dtmEndtime As Date

Private Sub cmdEnd_Click()
Dim intTimecost As Integer, intWordcount As Integer
dtmEndtime = Time()
intTimecost = DateDiff("s", dtmBegintime, dtmEndtime)
intWordcount = Len(txtInput.Text)
txtSpeed.Text = intWordcount / (intTimecost / 60)

End Sub

Private Sub cmdStart_Click()
    dtmBegintime = Time()
End Sub

