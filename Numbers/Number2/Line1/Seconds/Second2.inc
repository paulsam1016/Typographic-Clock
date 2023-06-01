[Second20]
Meter=String
MeterStyle= SecondStyle20 | SecondTextStyle
Text=20


[MeasureSecond20]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 20
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
IfCondition12   = [SecondMeasure] = 20
IfTrueAction   = [!SetOption Second20 FontColor #inactiveColor#][!SetOption Second20 FontWeight 300]
IfTrueAction2   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction3   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction4   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction5   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction6   = [!SetOption Second20 FontColor #inactiveColor#][!SetOption Second20 FontWeight 300]
IfTrueAction7   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction8   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction9   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction10   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction11   = [!SetOption Second20 FontColor #activeColor#][!SetOption Second20 FontWeight 500]
IfTrueAction12   = [!SetOption Second20 FontColor #currentColor#]