[Second27]
Meter=String
MeterStyle= SecondStyle27 | SecondTextStyle
Text=27

[MeasureSecond27]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 27
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
IfCondition12   = [SecondMeasure] = 27
IfTrueAction   = [!SetOption Second27 FontColor #inactiveColor#][!SetOption Second27 FontWeight 300]
IfTrueAction2   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction3   = [!SetOption Second27 FontColor #inactiveColor#][!SetOption Second27 FontWeight 300]
IfTrueAction4   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction5   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction6   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction7   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction8   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction9   = [!SetOption Second27 FontColor #inactiveColor#][!SetOption Second27 FontWeight 300]
IfTrueAction10   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction11   = [!SetOption Second27 FontColor #activeColor#][!SetOption Second27 FontWeight 500]
IfTrueAction12   = [!SetOption Second27 FontColor #currentColor#]