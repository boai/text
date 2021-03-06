/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 博爱1616【137361770】
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客园  : http://www.cnblogs.com/boai/
 * 博客    : http://boai.github.io
 
 *********************************************************************************
 
 */

#import "BABaseNetManager.h"

typedef void (^successBlock)(id response);
typedef void (^failureBlocks)(NSError *error);

@interface BANewsNetManager : BABaseNetManager

+ (id)postStatusWithURL:(NSString *)urlStr  withPostText:(NSDictionary *)postText success:(successBlock)success failure:(failureBlocks)failure;

+ (id)getStatusWithURL:(NSString *)urlStr  withPostText:(NSDictionary *)postText success:(successBlock)success failure:(failureBlocks)failure;

@end
