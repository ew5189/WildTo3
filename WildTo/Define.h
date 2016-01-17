//
//  Define.h
//  WildTo
//
//  Created by 千锋 on 15/12/29.
//  Copyright (c) 2015年 LSP. All rights reserved.
//

#ifndef WildTo_Define_h
#define WildTo_Define_h

#import "UIView+Extension.h"

#define SPNavigationTitleFont [UIFont boldSystemFontOfSize:20]
#define SPRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]

#define ios7  ([[UIDevice currentDevice].systemVersion floatValue]>=7.0)
#define FourInch ([UIScreen mainScreen].bounds.size.height ==568.0)
#define ScreenW [UIScreen mainScreen].bounds.size.width
#define ScreenH [UIScreen mainScreen].bounds.size.height

//地图
#define KBundleKey  @"38ce1f988b5e6e2b0b40b4c65a54bb3d"

//最新赛事广告接口
#define KNewMatchAD_URL @"http://www.wildto.com/m/api/event?params=CNYl6Q2XrgGafgU9oTnacTYZC%3DEkIDRSXFYanu7JLN1nIxxiLt7B6xYXbWxWjbuOoYnhftIXogGW0dYStunanuYJCiIn0bYhtY1njr9BIQ6To2126TDNbgDB2Qe9otDnnbysIgYfITYyo212nVYZ6dTl6WEgnoXTCW2uBt6S6iIe6QCkCgbD6iaeCWmy6OCeBtrq"

//最新赛事tableView数据
#define KNewMatchTableView_URL  @"http://www.wildto.com/m/api/event?params=CNYl0QIz2F2uIWYDt2eL6tnz2tYwfb9DCx1ycTY91OYu6gGitueL1uYJ0iEBfgz7oVnl1DYNCQGX6T7SCtD2fbU9LNenrTYiLtDt689f2ibStdal0xMs0%3D2X6DaSXY12fbU9LF2u2heiLtYhftn%3DIg7f2WYSXgDL0Q2dLoCafu29oVnl0QIz2F2uIWYKXgDLCgI%3D0%3DIfbTuOvuYznoxkIh19oVnljgI%3DIWEutVD9oOYa6bY91OYftx9KXg7LCYYXLgGCbTuOLtTD6ta%3D1OY6rT9KCQDt1tIQBt9CtV9KtWR7jt2oLoXlLtTD6ta%3D1OY6rT9KCQDt1tIQBoEYtVaKLt95ftaZ2FnkrTYiLtDT0Q2XC%3DCW02x9oOYl1tINj%3DnafN19tYef0QaZbgCW6WY7CVnan89a0obGXu1hfbGdLWEYtVaKLt95fbDoLWul6WEgnoXTCW2uBt6S6iIe6QCkCgbD6iaeCWmy6OCeBtrq"

//历史赛事tatbleView数据
#define KHistoryTableView_URL @"http://www.wildto.com/m/api/event?params=CNYl0QIz2F2uIWYDt2eL6tnz2tYwfb9DCx1ycTY91OYu6gGitueL1uYJ0i2B2Q6SoVnl1DYNCQGX6T7SCtD2fbU9LNenrTYiLtDt689f2ibStdal0xMs0%3D2X6DaSXY12fbU9LF2u2heiLtYhftn%3DIg7f2WYSXgDL0Q2dLoCafu29oVnl0QIz2F2uIWYKXgDLCgI%3D0%3DIfbTuOvuYznoxkIh19oVnljgI%3DIWEutVD9oOYajuY91OYftx9KXg7LCYYXLgGCbTuOLtTD6ta%3D1OY6rT9KCQDt1tIQBt9CtV9KtWR7jt2oLoXlLtTD6ta%3D1OY6rT9KCQDt1tIQBoEYtVaKLt95ftaZ2FnkrTYiLtDT0Q2XC%3DCW02x9oOYl1tINj%3DnafN19tYef0QaZbgCW6WY7CVnan89a0obGXu1hfbGdLWEYtVaKLt95fbDoLWul6WEgnoXTCW2uBt6S6iIe6QCkCgbD6iaeCWmy6OCeBtrq"
//历史赛事广告接口



//发现接口
#define KDiscover_URL @"http://www.wildto.com/m/api/news?params=CNYl6Q2XrgGafgU9oTnacTYZC%3DEkIDRSXFYanuUbtN1nIQ1iLt7tjY9XLgCe2Dx9oOYlfD9V2NenjuVTttDLfxYAtgGCfgKSt2II1S9BIxVsttD26D9JfhYnfYVStgYlBrMs6QXDnWIgntr7XiminQVSCgagCobi6gxg6d8iCgV7Cmqq"

//详情界面
#define KMore_URL @"http://www.wildto.com/m/api/event?params=CNYl6Q2XrgGafgU9otYacTYZC%3DEkIDRSXFYanuUb2o2nIV2iLtDt6Y9NnoEX6gGpLt95fbUV2onafN19CxeB0QnKBNEfrTuOLtDLfS9B2V2AobIMf29%3DIg9B02C9oDILfV7VroEBIx99tYIu0bUbLNYBIxazLtySwrMs6QXDnWIgntr7XiminQVSCgagCobi6gxg6d8iCgV7Cmqq"

//详情页 用户回复数据
#define  KMore_User_URL @"http://www.wildto.com/m/api/event?params=CNYl6OxNjQzuIie9oO9p6uDVboI6rT9KCQDt1tIQBNEfrTuOLt9F6b77LNna0uaMtWatCg6s0dCfbTuOLt9x1TY91OYutV7KXOS7cm9frTuOLtDLfT7bIN9nIQe9tu1Qfu7z2gYw2xaMouIE6V7VtgYf2QIzoDIajb7VbgDafN19XT1Q0Y9tBNEk02aKCbnanuYJItY6rTMSvg2XrgGafgU9ounlBrMs6QXDnWIgntr7XiminQVSCgagCobi6gxg6d8iCgV7Cmqq"

//奖金查询
#define KMoneySearch_URL @"http://www.wildto.com/m/api/event?params=CNYl6Q2XrgGafgU9ouIEfbGdLWne2hepCVcyfbUJIoEBIQ1hoVnl0QIz2F2uIWYStunanuYJCixBjbM7vWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"
//组别列表
#define KGroupList_URL @"http://www.wildto.com/m/api/event?params=CNYl6Q2XrgGafgU9ouIEfbGdLWne2hepCVcyfbUJIoIB2QKGoVnl0QIz2F2uIWYStunanuYJCianbTM7vWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"

//骑行圈
#define KRideCircle @"http://www.wildto.com/m/api/event?params=CNYl6OxNjQzuIie9oO92nV7JCiI6rT9ht21u0x8ioFEY0229oOYajVDdLNna0YCAtYelCgxNbtYwfb9ptuI2jVDAroIC02aMtN9f0m9CfgKSt2II1T7VboaC02bitg9pjbDJboEffbYiLt7Lntn%3D2tYwfbY7oNYacTYZrgef6YCgX2cDfD9XCOYwfbYyLtySwrMs6QXDnWIgntr7XiminQVSCgagCobi6gxg6d8iCgV7Cmqq"
//资讯--赛事
#define KSPZiXun_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9W6T7Aoon6rT9Jt2eL0xMsBNYY2WYStunanuYDfoxzlD6OfNYacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"
//铁三
#define KSPTieSan_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9Wnb7AroE6rT9Jt2eL0xMsBNYY2WYStunanuYD02IFC26Tf2nacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"

//骑闻
#define KSPQiWen_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9C6TDALNna0b7MCV1t0gRiLW2X6gGpLt95foCec2ROtgbhLtYhftn%3DIg7f2WYAX2eS0VYJ0OYn2x29oVnl6r9W6YC7tdaKfTYJ0OYfIDVGo2In1TU%3DLgzC2TTstY1anb7%3DIoEnIxVSogDl0Vysto2nfuuSou1CfbGdLF1C2OIKtdaK129%3D2WIafgUyvuGdLWEYtVaKLt95fbDdLWul6WEgnoXTCW2uBt6S6iIe6QCkCgbD6iaeCWmy6OCeBtrq"

//业界
#define KSPYeJie_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9C6V7bXiI6rT9Jt2eL0xMsBNYY2WYStunanuYDbiIz1t2tfunacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"
//产品
#define KSPChanPin_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9p6VUVtox6rT9Jt2eL0xMsBNYY2WYStunanuYDbiCSlD1bCDnacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"
//旅行
#define KSPLvXing_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9a6u7bXia6rT9Jt2eL0xMsBNYY2WYStunanuYDX2eMCtYMfunacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"

//知识
#define KSPZhiShi_URL @"http://www.wildto.com/m/api/news?params=CNYl6OxNjQzuIie9oO9x6u7JtoI6rT9Jt2eL0xMsBNYY2WYStunanuYDCtCSCtYOfQYacTYZrgef6YCgXiaKnY9oLoCafubGLtYhfr9utV7KXOS7cx9dLoCa02apoYIxjuDVfQYfITCJogDtfbUbbgeBIVVSouIff29bCQDw2VY7ouIL0bY91OYWITCZtYX7cQazbgGYrTuOvuDo1OYuLQGhtYnanuYJrtYgboTUvWRSCWbOnQXDCdYW6d6TXoEgXgCYno6sXtXSBdngXoYu"
//活动专区
#define KSPHuoDong_URL @"http://www.wildto.com/m/api/event?params=CNYl6Q2XrgGafgU9ouIIfbGdLWne2hepCVcyfbUJfh1nIVTGoVnl6t6s2FYX6gGpLt95f29%3Dboxn2VDhoT1lfDYNooaf2TuDou1x6m9nIxVSogDl0Vysto2nfuuSou1CftCIwoTl6WEgnoXTCW2uBt6S6iIe6QCkCgbD6iaeCWmy6OCeBtrq"

//排行榜
#define KSPChart_URL @"http://www.wildto.com/m/api/event?params=CNYl6OxNjQzuIie9oO9Fjb7J2Ne6rT9ht21u0x8ioFEY0229oO9a1TGdLg7W0ouGXTX76Q2XrgGafgU7oVnlfYYXbgGf6WY7C2nan89nbh19XT1Q0Y9tBNEk02aKCbnanuDo1OYe6YXDCdR7j29dLoCafbYiLt7lfQaz1QCuLQGhtYnanuDo1OYutV7KXOS7cx9dLoCa02apvu7bIN9nIQe9tu1Qfu7z2gYw2xaMouIE6V7VtgYf2QIzoDIajb7VbgDafN19CV1K1x9tBNYC2i2ZtYnanuYJLN1n2xYOo2nacTYZbWblXT12fbU9LNYwbTYiLtDQfD9RLgGW6T7gXODQ12Ms2tYwfbY9CYVUwrMs6QXDnWIgntr7XiminQVSCgagCobi6gxg6d8iCgV7Cmqq"



#endif
