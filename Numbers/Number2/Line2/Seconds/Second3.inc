[Second26]
Meter=String
MeterStyle= SecondStyle26 | SecondTextStyle
Text=26

[MeasureSecond26]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 26
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
IfCondition12   = [SecondMeasure] = 26
IfTrueAction   = [!SetOption Second26 FontColor #inactiveColor#][!SetOption Second26 FontWeight 300]
IfTrueAction2   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction3   = [!SetOption Second26 FontColor #inactiveColor#][!SetOption Second26 FontWeight 300]
IfTrueAction4   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction5   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction6   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction7   = [!SetOption Second26 FontColor #inactiveColor#][!SetOption Second26 FontWeight 300]
IfTrueAction8   = [!SetOption Second26 FontColor #inactiveColor#][!SetOption Second26 FontWeight 300]
IfTrueAction9   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction10   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction11   = [!SetOption Second26 FontColor #activeColor#][!SetOption Second26 FontWeight 500]
IfTrueAction12   = [!SetOption Second26 FontColor #currentColor#]