[IncludeLineStyles35]
@IncludeLineStyles35= @Resources/Styles.inc

[ShowSecondMeasure35]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond34"] 
Second2= [!UpdateMeasure "MeasureSecond39"] 
Second3= [!UpdateMeasure "MeasureSecond44"] 

[IncludeSeconds35]
@includeSeconds351= Seconds/Second1.inc
@includeSeconds352= Seconds/Second2.inc
@includeSeconds353= Seconds/Second3.inc