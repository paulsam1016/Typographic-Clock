[IncludeLineStyles44]
@IncludeLineStyles44= @Resources/Styles.inc

[ShowSecondMeasure44]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond48"] 
Second2= [!UpdateMeasure "MeasureSecond53"] 
Second3= [!UpdateMeasure "MeasureSecond58"] 

[IncludeSeconds44]
@includeSeconds441= Seconds/Second1.inc
@includeSeconds442= Seconds/Second2.inc
@includeSeconds443= Seconds/Second3.inc