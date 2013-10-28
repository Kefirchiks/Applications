object DataModule2: TDataModule2
  OldCreateOrder = False
  Height = 238
  Width = 375
  object LidmasinaDS: TDataSource
    DataSet = Lidmasina
    Left = 40
    Top = 136
  end
  object Lidmasina: TTable
    Active = True
    AutoCalcFields = False
    DatabaseName = 'Lidmasina'
    TableName = 'Lidmasina.db'
    Left = 16
    Top = 184
    object LidmasinaID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object LidmasinaLidmasinasNr: TStringField
      FieldName = 'LidmasinasNr'
    end
    object LidmasinaTips: TStringField
      FieldName = 'Tips'
      Size = 30
    end
    object LidmasinaVietuSkaits: TFloatField
      FieldName = 'VietuSkaits'
    end
  end
  object LidojumuRegistrs: TTable
    Active = True
    AutoCalcFields = False
    DatabaseName = 'Lidmasina'
    TableName = 'LidojumuRegistrs.db'
    Left = 88
    Top = 184
  end
  object Pasazieris: TTable
    Active = True
    AutoCalcFields = False
    DatabaseName = 'Lidmasina'
    TableName = 'Pasazieris.db'
    Left = 168
    Top = 184
  end
  object LidojumuRegistrsDS: TDataSource
    DataSet = LidojumuRegistrs
    Left = 128
    Top = 136
  end
  object PasazierisDS: TDataSource
    DataSet = Pasazieris
    Left = 208
    Top = 136
  end
end
