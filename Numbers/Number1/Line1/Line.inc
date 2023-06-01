[IncludeLineStyles11]
@IncludeLineStyles11= @Resources/Styles.inc

[ShowSecondMeasure11]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond00"] 
Second2= [!UpdateMeasure "MeasureSecond05"] 
Second3= [!UpdateMeasure "MeasureSecond10"] 

[IncludeSeconds11]
@includeSeconds111= Seconds/Second1.inc
@includeSeconds112= Seconds/Second2.inc
@includeSeconds113= Seconds/Second3.inc