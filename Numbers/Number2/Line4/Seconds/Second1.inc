[Second18]
Meter=String
MeterStyle= SecondStyle18 | SecondTextStyle
Text=18

[MeasureSecond18]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 18
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
IfCondition12   = [SecondMeasure] = 18
IfTrueAction   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction2   = [!SetOption Second18 FontColor #activeColor#][!SetOption Second18 FontWeight 500]
IfTrueAction3   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction4   = [!SetOption Second18 FontColor #activeColor#][!SetOption Second18 FontWeight 500]
IfTrueAction5   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction6   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction7   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction8   = [!SetOption Second18 FontColor #activeColor#][!SetOption Second18 FontWeight 500]
IfTrueAction9   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction10   = [!SetOption Second18 FontColor #activeColor#][!SetOption Second18 FontWeight 500]
IfTrueAction11   = [!SetOption Second18 FontColor #inactiveColor#][!SetOption Second18 FontWeight 300]
IfTrueAction12   = [!SetOption Second18 FontColor #currentColor#]