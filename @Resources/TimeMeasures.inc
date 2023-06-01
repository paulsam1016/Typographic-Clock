[HourMeasure]
Measure= Time
Format= %H

[HourMeasure1]
Measure= Calc
Formula= Trunc([HourMeasure] / 10)
DynamicVariables= 1;

[HourMeasure2]
Measure= Calc
Formula= Frac([HourMeasure] / 10) * 10
DynamicVariables= 1

[MinuteMeasure]
Measure= Time
Format= %M

[MinuteMeasure1]
Measure= Calc
Formula= Trunc([MinuteMeasure] / 10)
DynamicVariables= 1

[MinuteMeasure2]
Measure= Calc
Formula= Frac([MinuteMeasure] / 10) * 10
DynamicVariables= 1

[SecondMeasure]
Measure= Time
Format= %S