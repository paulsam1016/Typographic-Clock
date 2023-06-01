[Second07]
Meter=String
MeterStyle= SecondStyle07 | SecondTextStyle
Text=07

[MeasureSecond07]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 07
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
IfCondition12   = [SecondMeasure] = 07
IfTrueAction   = [!SetOption Second07 FontColor #inactiveColor#][!SetOption Second07 FontWeight 300]
IfTrueAction2   = [!SetOption Second07 FontColor #inactiveColor#][!SetOption Second07 FontWeight 300]
IfTrueAction3   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction4   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction5   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction6   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction7   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction8   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction9   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction10   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction11   = [!SetOption Second07 FontColor #activeColor#][!SetOption Second07 FontWeight 500]
IfTrueAction12   = [!SetOption Second07 FontColor #currentColor#]