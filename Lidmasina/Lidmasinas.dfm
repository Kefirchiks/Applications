object Forma: TForma
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'DB Lidma'#353#299'nas'
  ClientHeight = 496
  ClientWidth = 764
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = Menu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 24
    Width = 681
    Height = 449
    ActivePage = TabSheet1
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Lidma'#353#299'na'
      ExplicitLeft = 0
      ExplicitTop = 32
      object DBGrid1: TDBGrid
        Left = 3
        Top = 3
        Width = 489
        Height = 290
        BiDiMode = bdLeftToRight
        DataSource = DataModule2.LidmasinaDS
        ParentBiDiMode = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'ID'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'LidmasinasNr'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Tips'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'VietuSkaits'
            Visible = True
          end>
      end
      object DBNavigator1: TDBNavigator
        Left = 3
        Top = 299
        Width = 216
        Height = 25
        DataSource = DataModule2.LidmasinaDS
        VisibleButtons = [nbPrior, nbNext, nbInsert, nbDelete, nbEdit, nbPost, nbCancel, nbRefresh]
        TabOrder = 1
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Lidojumu re'#291'istrs'
      ImageIndex = 1
      ExplicitWidth = 537
      ExplicitHeight = 277
    end
    object TabSheet3: TTabSheet
      Caption = 'Pasa'#382'ieris'
      ImageIndex = 2
      ExplicitLeft = -12
      ExplicitTop = 80
      ExplicitWidth = 537
      ExplicitHeight = 277
    end
  end
  object Menu: TMainMenu
    Left = 568
    Top = 400
    object File1: TMenuItem
      Caption = 'Fails'
      object Exit1: TMenuItem
        Caption = 'Iziet'
        OnClick = Exit1Click
      end
    end
  end
end
