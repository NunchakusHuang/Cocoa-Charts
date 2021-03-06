//
//  CCSBOLLMASlipCandleStickChart.h
//  CocoaChartsSample
//
//  Created by limc on 12/3/13.
//  Copyright (c) 2013 limc. All rights reserved.
//

#import "CCSMASlipCandleStickChart.h"



typedef enum {
    CCSBollingerBandStyleBand = 0,
    CCSBollingerBandStyleLane = 1,
    CCSBollingerBandStyleNoBorder = 2,
    CCSBollingerBandStyleNone = 9,
} CCSBollingerBandStyle;


@interface CCSBOLLMASlipCandleStickChart : CCSMASlipCandleStickChart {
    NSArray *_bollingerBandData;
    UIColor *_bollingerBandColor;
    CCFloat _bollingerBandAlpha;
    CCUInt _bollingerBandStyle;
}

@property(strong, nonatomic) NSArray *bollingerBandData;
@property(strong, nonatomic) UIColor *bollingerBandColor;
@property(assign, nonatomic) CCFloat bollingerBandAlpha;
@property(assign, nonatomic) CCUInt bollingerBandStyle;

@end
