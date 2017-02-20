/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _formattedTemperature;
    int  _heatingCoolingMode;
    int  _targetHeatingCoolingMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedTemperature;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int heatingCoolingMode;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int targetHeatingCoolingMode;

- (void).cxx_destruct;
- (id)formattedTemperature;
- (unsigned int)hash;
- (int)heatingCoolingMode;
- (id)identifier;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(int)arg2 targetHeatingCoolingMode:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)targetHeatingCoolingMode;

@end