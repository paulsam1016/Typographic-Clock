[Second45]
Meter=String
MeterStyle= SecondStyle45 | SecondTextStyle
Text=45

[MeasureSecond45]
Measure=Plugin
Plugin=ActionTimer
UpdateDivider= -1
IfConditionMode= 1
DynamicVariables= 1
IfCondition   = [SecondMeasure] <> 45
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
IfCondition12   = [SecondMeasure] = 45
IfTrueAction   = [!SetOption Second45 FontColor #inactiveColor#][!SetOption Second45 FontWeight 450]
IfTrueAction2   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction3   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction4   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction5   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction6   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction7   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction8   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction9   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction10   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction11   = [!SetOption Second45 FontColor #activeColor#][!SetOption Second45 FontWeight 500]
IfTrueAction12   = [!SetOption Second45 FontColor #currentColor#]