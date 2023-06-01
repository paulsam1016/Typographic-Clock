[Second52]
Meter=String
MeterStyle= SecondStyle52 | SecondTextStyle
Text=52

[MeasureSecond52]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 52
IfCondition2   = [MinuteMeasure2] = 0
IfCondition3   = [MinuteMeasure2] = 1
IfCondition4   = [MinuteMeasure2] = 2
IfCondition5   = [MinuteMeasure2] = 3
IfCondition6   = [MinuteMeasure2] = 4
IfCondition7   = [MinuteMeasure2] = 5
IfCondition8   = [MinuteMeasure2] = 6
IfCondition9   = [MinuteMeasure2] = 7
IfCondition10   = [MinuteMeasure2] = 8
IfCondition11   = [MinuteMeasure2] = 9
IfCondition12   = [SecondMeasure] = 52
IfTrueAction   = [!SetOption Second52 FontColor #inactiveColor#][!SetOption Second52 FontWeight 300]
IfTrueAction2   = [!SetOption Second52 FontColor #inactiveColor#][!SetOption Second52 FontWeight 300]
IfTrueAction3   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction4   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction5   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction6   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction7   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction8   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction9   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction10   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction11   = [!SetOption Second52 FontColor #activeColor#][!SetOption Second52 FontWeight 500]
IfTrueAction12   = [!SetOption Second52 FontColor #currentColor#]