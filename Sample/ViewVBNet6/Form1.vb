﻿Public Class Form1

    Private Sub RunCount(ByVal message As String)
        Dim result As Integer
        Dim objWrapper As Wrapper.SampleWrapper = New Wrapper.SampleWrapper

        objWrapper.setMessage(message)
        result = objWrapper.countAlphabet()
        MsgBox("入力した文字列中のアルファベットの個数は " & result, MsgBoxStyle.OkOnly)
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        RunCount(TextBox1.Text)
    End Sub

    Private Sub DataGridView1_CellContentClick(sender As Object, e As DataGridViewCellEventArgs) Handles DataGridView1.CellContentClick

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub ExitToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem.Click

    End Sub

    Private Sub CountToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles CountToolStripMenuItem.Click
        RunCount(TextBox1.Text)
    End Sub
End Class
