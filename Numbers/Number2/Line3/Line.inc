[IncludeLineStyles23]
@IncludeLineStyles23= @Resources/Styles.inc

[ShowSecondMeasure23]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond17"] 
Second2= [!UpdateMeasure "MeasureSecond22"] 
Second3= [!UpdateMeasure "MeasureSecond27"] 

[IncludeSeconds23]
@includeSeconds231= Seconds/Second1.inc
@includeSeconds232= Seconds/Second2.inc
@includeSeconds233= Seconds/Second3.inc