[IncludeLineStyles32]
@IncludeLineStyles32= @Resources/Styles.inc

[ShowSecondMeasure32]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond31"] 
Second2= [!UpdateMeasure "MeasureSecond36"] 
Second3= [!UpdateMeasure "MeasureSecond41"] 

[IncludeSeconds32]
@includeSeconds321= Seconds/Second1.inc
@includeSeconds322= Seconds/Second2.inc
@includeSeconds323= Seconds/Second3.inc