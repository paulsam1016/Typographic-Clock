[Second09]
Meter=String
MeterStyle= SecondStyle09 | SecondTextStyle
Text=09

[MeasureSecond09]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 09
IfCondition2   = [HourMeasure1] = 0
IfCondition3   = [HourMeasure1] = 1
IfCondition4   = [HourMeasure1] = 2
IfCondition5   = [HourMeasure1] = 3
IfCondition6   = [HourMeasure1] = 4
IfCondition7   = [HourMeasure1] = 5
IfCondition8   = [HourMeasure1] = 6
IfCondition9   = [HourMeasure1] = 7
IfCondition10   = [HourMeasure1] = 8
IfCondition11   = [HourMeasure1] = 9
IfCondition12   = [SecondMeasure] = 09
IfTrueAction   = [!SetOption Second09 FontColor #inactiveColor#][!SetOption Second09 FontWeight 300]
IfTrueAction2   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction3   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction4   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction5   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction6   = [!SetOption Second09 FontColor #inactiveColor#][!SetOption Second09 FontWeight 300]
IfTrueAction7   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction8   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction9   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction10   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction11   = [!SetOption Second09 FontColor #activeColor#][!SetOption Second09 FontWeight 500]
IfTrueAction12   = [!SetOption Second09 FontColor #currentColor#]