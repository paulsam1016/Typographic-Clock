[Second24]
Meter=String
MeterStyle= SecondStyle24 | SecondTextStyle
Text=24

[MeasureSecond24]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 24
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
IfCondition12   = [SecondMeasure] = 24
IfTrueAction   = [!SetOption Second24 FontColor #inactiveColor#][!SetOption Second24 FontWeight 300]
IfTrueAction2   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction3   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction4   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction5   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction6   = [!SetOption Second24 FontColor #inactiveColor#][!SetOption Second24 FontWeight 300]
IfTrueAction7   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction8   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction9   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction10   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction11   = [!SetOption Second24 FontColor #activeColor#][!SetOption Second24 FontWeight 500]
IfTrueAction12   = [!SetOption Second24 FontColor #currentColor#]