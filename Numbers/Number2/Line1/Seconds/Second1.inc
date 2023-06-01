[Second15]
Meter=String
MeterStyle= SecondStyle15 | SecondTextStyle
Text=15

[MeasureSecond15]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 15
IfCondition2   = [HourMeasure2] = 0
IfCondition3   = [HourMeasure2] = 1
IfCondition4   = [HourMeasure2] = 2
IfCondition5   = [HourMeasure2] = 3
IfCondition6   = [HourMeasure2] = 4
IfCondition7   = [HourMeasure2] = 5
IfCondition8   = [HourMeasure2] = 6
IfCondition9   = [HourMeasure2] = 7
IfCondition10   = [HourMeasure2] = 8
IfCondition11   = [HourMeasure2] = 9
IfCondition12   = [SecondMeasure] = 15
IfTrueAction   = [!SetOption Second15 FontColor #inactiveColor#][!SetOption Second15 FontWeight 300]
IfTrueAction2   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction3   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction4   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction5   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction6   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction7   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction8   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction9   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction10   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction11   = [!SetOption Second15 FontColor #activeColor#][!SetOption Second15 FontWeight 500]
IfTrueAction12   = [!SetOption Second15 FontColor #currentColor#]