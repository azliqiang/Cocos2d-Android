#import "cocos2d.h"

//CLASS INTERFACE
@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow	*window;
}
@end

@interface ParallaxDemo: CCLayer
{
    CCTextureAtlas *atlas;
}
-(NSString*) title;
@end

@interface Parallax1 : ParallaxDemo
{
}
@end

@interface Parallax2 : ParallaxDemo
{
}
@end
