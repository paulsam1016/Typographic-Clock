[IncludeLineStyles45]
@IncludeLineStyles45= @Resources/Styles.inc

[ShowSecondMeasure45]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond49"] 
Second2= [!UpdateMeasure "MeasureSecond54"] 
Second3= [!UpdateMeasure "MeasureSecond59"] 

[IncludeSeconds45]
@includeSeconds451= Seconds/Second1.inc
@includeSeconds452= Seconds/Second2.inc
@includeSeconds453= Seconds/Second3.inc